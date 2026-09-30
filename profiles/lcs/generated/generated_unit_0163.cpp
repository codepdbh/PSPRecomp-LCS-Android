#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0163[4083] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 4, 0, 0, 0, 5, 0, 0, 0, 6, 0, 0,
    0, 0, 7, 0, 0, 8, 0, 9, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 17, 0, 18, 0, 19, 0,
    20, 0, 21, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 32, 0,
    33, 0, 0, 0, 0, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 38, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0, 41, 0,
    0, 0, 0, 0, 42, 0, 43, 0, 0, 44, 0, 45, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0, 0,
    0, 50, 0, 51, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0, 0, 56, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 59, 0, 0, 0, 60,
    0, 61, 0, 0, 0, 62, 0, 63, 0, 0, 64, 0, 65, 0, 66, 0, 67, 0, 68, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 0, 73, 0,
    74, 0, 0, 0, 75, 0, 0, 0, 76, 0, 0, 0, 77, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 83, 0, 84, 0, 0, 0, 85, 0,
    86, 0, 0, 0, 87, 88, 0, 0, 0, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0,
    0, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 98, 0, 0, 99, 0, 100, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 104, 0,
    0, 105, 0, 106, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 110, 0, 111, 0, 0, 0, 112, 0, 113, 0,
    114, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 118, 119, 0, 0, 0, 0, 0, 0, 120, 0, 121, 0, 0, 122, 0, 123, 0, 0, 124, 0,
    0, 125, 0, 0, 126, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 0, 134, 0, 0, 0, 0, 0, 135,
    136, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 141, 0, 142, 0, 0, 0, 0, 143, 0, 0, 144, 0, 145, 0,
    0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 0, 148, 0, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 151, 0,
    0, 152, 0, 0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 0, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 0, 0, 0, 159, 160, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 164, 165, 0, 0, 166, 0, 0, 0, 167, 168, 0, 169, 0, 0, 170, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 0, 172, 173, 0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 0, 0, 0, 0, 177, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 0, 181, 0, 0, 182, 0, 0, 183, 0, 0, 0, 184, 0, 185, 0, 0, 186,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0, 0, 0, 194,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0,
    198, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 204, 0, 205, 0, 206, 0, 0, 207, 0,
    0, 208, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 0, 0, 0,
    213, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 216, 0, 217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    219, 0, 220, 0, 0, 221, 0, 0, 222, 0, 0, 0, 0, 0, 0, 223, 0, 224, 0, 225, 0, 226, 0, 0, 0, 0, 0, 0, 0, 227, 0, 0,
    0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    230, 0, 231, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 232, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 239, 0,
    0, 240, 0, 241, 0, 242, 0, 243, 0, 0, 244, 0, 245, 0, 0, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    247, 0, 248, 0, 0, 0, 0, 0, 249, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 250, 0, 251, 0, 0, 0, 252, 0, 253,
    0, 0, 254, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 257, 258, 0, 0, 0, 259, 260, 0, 0, 261, 0, 0, 0, 0, 0, 262, 0, 263,
    0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 267, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0,
    272, 0, 0, 0, 273, 0, 274, 0, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 278, 0, 0, 279, 0, 0, 0, 0, 280, 0, 281, 0, 282, 0,
    0, 0, 283, 0, 284, 0, 285, 0, 0, 286, 0, 0, 287, 0, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 0, 291, 0, 0,
    292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 294, 0, 0, 295, 0, 0, 296, 0, 297, 0, 0, 298, 0, 299, 0, 0, 300, 0, 0, 301, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 304, 0, 305, 0, 0, 306, 0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 309, 0, 310, 0, 311, 0, 0, 0, 312, 0, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 315, 0,
    0, 0, 316, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 321, 0,
    0, 0, 0, 322, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 325, 0, 326, 0, 0,
    327, 0, 0, 328, 0, 0, 329, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 333,
    0, 334, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 337, 0, 338, 0, 0, 0, 339,
    0, 0, 340, 0, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 350,
    0, 351, 0, 352, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 354, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 356, 0,
    0, 357, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 358, 0, 359, 0, 0, 0, 360, 0, 0, 0,
    361, 0, 0, 362, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 365, 0, 0, 366, 0, 367, 0, 0, 368,
    0, 0, 369, 0, 0, 370, 0, 0, 0, 371, 0, 372, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0,
    375, 0, 0, 376, 0, 0, 0, 377, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 381, 0, 382, 0, 383, 0, 0, 384, 0, 0, 385, 0, 386, 0,
    387, 0, 0, 0, 388, 0, 0, 0, 0, 0, 389, 0, 0, 0, 390, 0, 0, 0, 391, 0, 392, 0, 0, 393, 0, 394, 0, 395, 0, 0, 396, 0,
    397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 400, 0, 0, 401, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 406, 0, 407,
    0, 0, 0, 408, 0, 0, 0, 409, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 0, 414,
    0, 415, 0, 416, 0, 417, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 422, 423,
    0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 428, 0, 0, 0, 429, 0, 430, 0, 431, 0, 432, 0, 433, 0, 0, 0,
    0, 434, 0, 0, 0, 435, 0, 0, 0, 436, 0, 0, 437, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 441, 0, 0, 442, 0, 0, 0, 443, 0, 0, 0, 444, 0, 0, 0, 0, 0, 445, 0, 0, 0,
    0, 446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 450,
    0, 451, 0, 0, 452, 0, 453, 0, 0, 0, 454, 0, 0, 0, 455, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458,
    0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 460, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 0,
    0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 470, 0, 0, 0, 471, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 0, 0, 0, 0, 476, 0, 0, 0, 477, 0, 478, 0, 479, 480, 0, 0, 481, 0, 0, 0, 0,
    482, 0, 483, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0, 486, 0, 487, 0, 488, 489, 0, 0, 490, 0, 0, 0,
    0, 491, 0, 492, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0,
    500, 0, 0, 501, 0, 0, 0, 502, 0, 0, 503, 0, 504, 0, 0, 505, 506, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 509, 0, 0, 510, 0,
    0, 0, 0, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0, 513, 0, 0, 514, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 517, 0,
    0, 0, 0, 518, 0, 0, 519, 0, 0, 520, 0, 521, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 524, 0, 0, 525, 526, 0, 527, 0, 0, 528, 0, 0, 529, 0, 0, 0, 530, 0, 531, 0, 532, 0, 533, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0,
    538, 0, 539, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 541, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 543, 0, 544, 0, 545, 0, 546, 0, 0, 547, 0, 548, 0, 549, 0, 550, 0, 551, 0, 552, 0, 0, 0, 553, 0, 0, 0,
    554, 0, 555, 0, 556, 0, 0, 557, 0, 0, 558, 0, 0, 559, 0, 0, 0, 560, 0, 0, 0, 561, 0, 562, 0, 0, 0, 0, 563, 0, 0, 564,
    0, 0, 565, 0, 566, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 569, 0, 0, 0,
    0, 570, 0, 0, 571, 0, 0, 572, 573, 0, 574, 0, 575, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 580, 0, 581, 0, 582, 0, 583, 0, 584, 0, 585, 0, 586,
    0, 587, 0, 588, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593, 0, 594, 0, 595, 596, 0, 597, 0, 0, 598, 0, 599, 0, 600, 0, 0, 601, 0,
    0, 0, 602, 0, 0, 0, 0, 0, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 606, 0, 607, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 611, 0, 612, 0, 613, 0, 0, 614, 0, 0, 615, 0, 0, 616,
    617, 0, 0, 618, 0, 619, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 622, 0, 623, 0, 624, 0, 0, 0, 0, 0, 625, 0, 0, 626, 0, 627,
    0, 0, 628, 0, 0, 629, 0, 630, 0, 631, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    636, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 639, 640, 0, 641, 0, 0,
    0, 0, 0, 642, 0, 0, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 645, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    647, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 651, 0, 0, 652, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 0, 654, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 656, 0, 0, 0,
    0, 0, 0, 0, 0, 657, 0, 0, 0, 0, 658, 0, 659, 0, 660, 0, 0, 0, 0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 663, 0, 664,
    0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0,
    0, 669, 0, 0, 0, 0, 0, 670, 0, 671, 0, 672, 0, 0, 0, 673, 674, 0, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 676, 677, 0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 680, 0,
    0, 0, 681, 0, 0, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 685, 0, 0, 686, 0, 0,
    0, 0, 0, 0, 0, 687, 0, 0, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 689, 690, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0,
    0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 696, 0, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 698, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 702, 0, 0, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 705, 0, 0, 0, 706, 0, 707, 708, 0, 0, 0, 709, 0, 0, 710, 0, 0, 711, 0, 0, 0, 712,
    0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    716, 717, 0, 718, 0, 0, 0, 719, 0, 0, 0, 720, 0, 721, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 724, 0, 0, 725, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 727, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 730, 0, 0, 0, 731, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 0,
    733, 0, 0, 0, 734, 0, 0, 0, 0, 0, 735, 0, 736, 737, 0, 738, 0, 0, 0, 0, 0, 0, 739, 0, 0, 0, 0, 740, 0, 741, 0, 0,
    0, 0, 0, 0, 0, 0, 742, 0, 0, 743, 0, 0, 744, 0, 745, 746, 0, 747, 0, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 750, 0, 0,
    751, 0, 0, 752, 0, 0, 753, 0, 0, 754, 0, 0, 755, 0, 0, 756, 0, 0, 757, 0, 0, 758, 0, 759, 0, 760, 0, 0, 0, 0, 761, 0,
    762, 0, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 767, 0, 768, 0, 0, 0, 0, 769, 0, 770, 0, 0, 0,
    0, 771, 0, 772, 0, 0, 0, 0, 773, 0, 774, 0, 0, 0, 0, 775, 0, 776, 0, 0, 0, 0, 777, 0, 778, 0, 779, 0, 780, 0, 781, 0,
    782, 0, 783, 0, 784, 0, 785, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0,
    789, 0, 0, 790, 0, 791, 792, 0, 793, 0, 0, 794, 0, 0, 0, 0, 0, 795, 0, 0, 796, 0, 0, 797, 0, 0, 798, 0, 0, 799, 0, 0,
    800, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 0, 804, 0, 805, 0, 806, 0, 0, 0, 0, 807, 0, 808, 0, 0, 0, 0, 809, 0, 810, 0,
    0, 0, 0, 811, 0, 812, 0, 0, 0, 0, 813, 0, 814, 0, 0, 0, 0, 815, 0, 816, 0, 0, 0, 0, 817, 0, 818, 0, 0, 0, 0, 819,
    0, 820, 0, 0, 0, 0, 821, 0, 822, 0, 823, 0, 824, 0, 825, 0, 826, 0, 827, 0, 828, 0, 829, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 830, 0, 0, 0, 0, 0, 0, 0, 0, 831, 0, 0, 832, 0, 0, 833, 0, 834, 835, 0, 836, 0, 0, 837, 0, 0, 0, 0, 0, 838,
    0, 0, 839, 0, 0, 840, 0, 0, 841, 0, 0, 842, 0, 0, 843, 0, 0, 844, 0, 0, 845, 0, 0, 846, 0, 0, 847, 0, 848, 0, 849, 0,
    0, 0, 0, 850, 0, 851, 0, 0, 0, 0, 852, 0, 853, 0, 0, 0, 0, 854, 0, 855, 0, 0, 0, 0, 856, 0, 857, 0, 0, 0, 0, 858,
    0, 859, 0, 0, 0, 0, 860, 0, 861, 0, 0, 0, 0, 862, 0, 863, 0, 0, 0, 0, 864, 0, 865, 0, 866, 0, 867, 0, 868, 0, 869, 0,
    870, 0, 871, 0, 872, 0, 873, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 874,
};
void recomp_unit_0163_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A90000u;
        entry_id = (entry_delta < 16332u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0163[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A90000;
    case 2u: goto L_08A90008;
    case 3u: goto L_08A90048;
    case 4u: goto L_08A90054;
    case 5u: goto L_08A90064;
    case 6u: goto L_08A90074;
    case 7u: goto L_08A90088;
    case 8u: goto L_08A90094;
    case 9u: goto L_08A9009C;
    case 10u: goto L_08A900A4;
    case 11u: goto L_08A900B4;
    case 12u: goto L_08A900C0;
    case 13u: goto L_08A900C8;
    case 14u: goto L_08A900D0;
    case 15u: goto L_08A900D8;
    case 16u: goto L_08A900E0;
    case 17u: goto L_08A900E8;
    case 18u: goto L_08A900F0;
    case 19u: goto L_08A900F8;
    case 20u: goto L_08A90100;
    case 21u: goto L_08A90108;
    case 22u: goto L_08A90110;
    case 23u: goto L_08A90118;
    case 24u: goto L_08A90120;
    case 25u: goto L_08A90128;
    case 26u: goto L_08A90130;
    case 27u: goto L_08A90138;
    case 28u: goto L_08A90144;
    case 29u: goto L_08A90150;
    case 30u: goto L_08A90160;
    case 31u: goto L_08A90170;
    case 32u: goto L_08A90178;
    case 33u: goto L_08A90180;
    case 34u: goto L_08A90194;
    case 35u: goto L_08A9019C;
    case 36u: goto L_08A901BC;
    case 37u: goto L_08A901C4;
    case 38u: goto L_08A901CC;
    case 39u: goto L_08A901DC;
    case 40u: goto L_08A901E4;
    case 41u: goto L_08A901F8;
    case 42u: goto L_08A90210;
    case 43u: goto L_08A90218;
    case 44u: goto L_08A90224;
    case 45u: goto L_08A9022C;
    case 46u: goto L_08A90234;
    case 47u: goto L_08A90250;
    case 48u: goto L_08A90258;
    case 49u: goto L_08A90268;
    case 50u: goto L_08A90284;
    case 51u: goto L_08A9028C;
    case 52u: goto L_08A90294;
    case 53u: goto L_08A9029C;
    case 54u: goto L_08A902A8;
    case 55u: goto L_08A902B0;
    case 56u: goto L_08A902BC;
    case 57u: goto L_08A902C4;
    case 58u: goto L_08A902E4;
    case 59u: goto L_08A902EC;
    case 60u: goto L_08A902FC;
    case 61u: goto L_08A90304;
    case 62u: goto L_08A90314;
    case 63u: goto L_08A9031C;
    case 64u: goto L_08A90328;
    case 65u: goto L_08A90330;
    case 66u: goto L_08A90338;
    case 67u: goto L_08A90340;
    case 68u: goto L_08A90348;
    case 69u: goto L_08A90350;
    case 70u: goto L_08A90358;
    case 71u: goto L_08A90364;
    case 72u: goto L_08A9036C;
    case 73u: goto L_08A90378;
    case 74u: goto L_08A90380;
    case 75u: goto L_08A90390;
    case 76u: goto L_08A903A0;
    case 77u: goto L_08A903B0;
    case 78u: goto L_08A903B8;
    case 79u: goto L_08A903C0;
    case 80u: goto L_08A903C8;
    case 81u: goto L_08A903D0;
    case 82u: goto L_08A903D8;
    case 83u: goto L_08A903E0;
    case 84u: goto L_08A903E8;
    case 85u: goto L_08A903F8;
    case 86u: goto L_08A90400;
    case 87u: goto L_08A90410;
    case 88u: goto L_08A90414;
    case 89u: goto L_08A90438;
    case 90u: goto L_08A90440;
    case 91u: goto L_08A90464;
    case 92u: goto L_08A90488;
    case 93u: goto L_08A90490;
    case 94u: goto L_08A90498;
    case 95u: goto L_08A904A0;
    case 96u: goto L_08A904A8;
    case 97u: goto L_08A904B0;
    case 98u: goto L_08A904B8;
    case 99u: goto L_08A904C4;
    case 100u: goto L_08A904CC;
    case 101u: goto L_08A904DC;
    case 102u: goto L_08A904E4;
    case 103u: goto L_08A904F0;
    case 104u: goto L_08A904F8;
    case 105u: goto L_08A90504;
    case 106u: goto L_08A9050C;
    case 107u: goto L_08A90514;
    case 108u: goto L_08A90544;
    case 109u: goto L_08A90550;
    case 110u: goto L_08A90558;
    case 111u: goto L_08A90560;
    case 112u: goto L_08A90570;
    case 113u: goto L_08A90578;
    case 114u: goto L_08A90580;
    case 115u: goto L_08A90588;
    case 116u: goto L_08A90598;
    case 117u: goto L_08A905A0;
    case 118u: goto L_08A905B0;
    case 119u: goto L_08A905B4;
    case 120u: goto L_08A905D0;
    case 121u: goto L_08A905D8;
    case 122u: goto L_08A905E4;
    case 123u: goto L_08A905EC;
    case 124u: goto L_08A905F8;
    case 125u: goto L_08A90604;
    case 126u: goto L_08A90610;
    case 127u: goto L_08A9061C;
    case 128u: goto L_08A90624;
    case 129u: goto L_08A9063C;
    case 130u: goto L_08A90644;
    case 131u: goto L_08A90664;
    case 132u: goto L_08A90674;
    case 133u: goto L_08A906D8;
    case 134u: goto L_08A906E4;
    case 135u: goto L_08A906FC;
    case 136u: goto L_08A90700;
    case 137u: goto L_08A90708;
    case 138u: goto L_08A90738;
    case 139u: goto L_08A90748;
    case 140u: goto L_08A90758;
    case 141u: goto L_08A907C8;
    case 142u: goto L_08A907D0;
    case 143u: goto L_08A907E4;
    case 144u: goto L_08A907F0;
    case 145u: goto L_08A907F8;
    case 146u: goto L_08A90810;
    case 147u: goto L_08A90834;
    case 148u: goto L_08A90848;
    case 149u: goto L_08A90868;
    case 150u: goto L_08A90870;
    case 151u: goto L_08A90878;
    case 152u: goto L_08A90884;
    case 153u: goto L_08A90890;
    case 154u: goto L_08A90898;
    case 155u: goto L_08A908A8;
    case 156u: goto L_08A908B4;
    case 157u: goto L_08A908C4;
    case 158u: goto L_08A908CC;
    case 159u: goto L_08A908F4;
    case 160u: goto L_08A908F8;
    case 161u: goto L_08A90928;
    case 162u: goto L_08A90974;
    case 163u: goto L_08A909B8;
    case 164u: goto L_08A909C0;
    case 165u: goto L_08A909C4;
    case 166u: goto L_08A909D0;
    case 167u: goto L_08A909E0;
    case 168u: goto L_08A909E4;
    case 169u: goto L_08A909EC;
    case 170u: goto L_08A909F8;
    case 171u: goto L_08A90A18;
    case 172u: goto L_08A90A24;
    case 173u: goto L_08A90A28;
    case 174u: goto L_08A90A38;
    case 175u: goto L_08A90A40;
    case 176u: goto L_08A90A48;
    case 177u: goto L_08A90A64;
    case 178u: goto L_08A90A68;
    case 179u: goto L_08A90AB0;
    case 180u: goto L_08A90AB8;
    case 181u: goto L_08A90AC0;
    case 182u: goto L_08A90ACC;
    case 183u: goto L_08A90AD8;
    case 184u: goto L_08A90AE8;
    case 185u: goto L_08A90AF0;
    case 186u: goto L_08A90AFC;
    case 187u: goto L_08A90B44;
    case 188u: goto L_08A90B5C;
    case 189u: goto L_08A90B64;
    case 190u: goto L_08A90B70;
    case 191u: goto L_08A90BBC;
    case 192u: goto L_08A90BDC;
    case 193u: goto L_08A90BE4;
    case 194u: goto L_08A90BFC;
    case 195u: goto L_08A90C68;
    case 196u: goto L_08A90C70;
    case 197u: goto L_08A90C78;
    case 198u: goto L_08A90C80;
    case 199u: goto L_08A90C9C;
    case 200u: goto L_08A90CAC;
    case 201u: goto L_08A90CBC;
    case 202u: goto L_08A90CCC;
    case 203u: goto L_08A90CD4;
    case 204u: goto L_08A90CDC;
    case 205u: goto L_08A90CE4;
    case 206u: goto L_08A90CEC;
    case 207u: goto L_08A90CF8;
    case 208u: goto L_08A90D04;
    case 209u: goto L_08A90D14;
    case 210u: goto L_08A90D5C;
    case 211u: goto L_08A90D64;
    case 212u: goto L_08A90D6C;
    case 213u: goto L_08A90D80;
    case 214u: goto L_08A90D9C;
    case 215u: goto L_08A90DA4;
    case 216u: goto L_08A90DB0;
    case 217u: goto L_08A90DB8;
    case 218u: goto L_08A90DC0;
    case 219u: goto L_08A90E00;
    case 220u: goto L_08A90E08;
    case 221u: goto L_08A90E14;
    case 222u: goto L_08A90E20;
    case 223u: goto L_08A90E3C;
    case 224u: goto L_08A90E44;
    case 225u: goto L_08A90E4C;
    case 226u: goto L_08A90E54;
    case 227u: goto L_08A90E74;
    case 228u: goto L_08A90E8C;
    case 229u: goto L_08A90E94;
    case 230u: goto L_08A90F00;
    case 231u: goto L_08A90F08;
    case 232u: goto L_08A90F90;
    case 233u: goto L_08A90F98;
    case 234u: goto L_08A90FCC;
    case 235u: goto L_08A90FF0;
    case 236u: goto L_08A90FF8;
    case 237u: goto L_08A9102C;
    case 238u: goto L_08A91064;
    case 239u: goto L_08A91078;
    case 240u: goto L_08A91084;
    case 241u: goto L_08A9108C;
    case 242u: goto L_08A91094;
    case 243u: goto L_08A9109C;
    case 244u: goto L_08A910A8;
    case 245u: goto L_08A910B0;
    case 246u: goto L_08A910D0;
    case 247u: goto L_08A91100;
    case 248u: goto L_08A91108;
    case 249u: goto L_08A91120;
    case 250u: goto L_08A9115C;
    case 251u: goto L_08A91164;
    case 252u: goto L_08A91174;
    case 253u: goto L_08A9117C;
    case 254u: goto L_08A91188;
    case 255u: goto L_08A9119C;
    case 256u: goto L_08A911B0;
    case 257u: goto L_08A911B8;
    case 258u: goto L_08A911BC;
    case 259u: goto L_08A911CC;
    case 260u: goto L_08A911D0;
    case 261u: goto L_08A911DC;
    case 262u: goto L_08A911F4;
    case 263u: goto L_08A911FC;
    case 264u: goto L_08A9120C;
    case 265u: goto L_08A91218;
    case 266u: goto L_08A9122C;
    case 267u: goto L_08A91238;
    case 268u: goto L_08A91240;
    case 269u: goto L_08A9125C;
    case 270u: goto L_08A91264;
    case 271u: goto L_08A91278;
    case 272u: goto L_08A91280;
    case 273u: goto L_08A91290;
    case 274u: goto L_08A91298;
    case 275u: goto L_08A912A4;
    case 276u: goto L_08A912AC;
    case 277u: goto L_08A912B4;
    case 278u: goto L_08A912C8;
    case 279u: goto L_08A912D4;
    case 280u: goto L_08A912E8;
    case 281u: goto L_08A912F0;
    case 282u: goto L_08A912F8;
    case 283u: goto L_08A91308;
    case 284u: goto L_08A91310;
    case 285u: goto L_08A91318;
    case 286u: goto L_08A91324;
    case 287u: goto L_08A91330;
    case 288u: goto L_08A9133C;
    case 289u: goto L_08A91360;
    case 290u: goto L_08A9136C;
    case 291u: goto L_08A91374;
    case 292u: goto L_08A91380;
    case 293u: goto L_08A913A4;
    case 294u: goto L_08A913AC;
    case 295u: goto L_08A913B8;
    case 296u: goto L_08A913C4;
    case 297u: goto L_08A913CC;
    case 298u: goto L_08A913D8;
    case 299u: goto L_08A913E0;
    case 300u: goto L_08A913EC;
    case 301u: goto L_08A913F8;
    case 302u: goto L_08A91420;
    case 303u: goto L_08A9142C;
    case 304u: goto L_08A91434;
    case 305u: goto L_08A9143C;
    case 306u: goto L_08A91448;
    case 307u: goto L_08A91458;
    case 308u: goto L_08A91460;
    case 309u: goto L_08A91494;
    case 310u: goto L_08A9149C;
    case 311u: goto L_08A914A4;
    case 312u: goto L_08A914B4;
    case 313u: goto L_08A914D4;
    case 314u: goto L_08A914F0;
    case 315u: goto L_08A914F8;
    case 316u: goto L_08A91508;
    case 317u: goto L_08A91518;
    case 318u: goto L_08A91534;
    case 319u: goto L_08A9154C;
    case 320u: goto L_08A91560;
    case 321u: goto L_08A91578;
    case 322u: goto L_08A9158C;
    case 323u: goto L_08A91598;
    case 324u: goto L_08A915B0;
    case 325u: goto L_08A915EC;
    case 326u: goto L_08A915F4;
    case 327u: goto L_08A91600;
    case 328u: goto L_08A9160C;
    case 329u: goto L_08A91618;
    case 330u: goto L_08A91624;
    case 331u: goto L_08A9162C;
    case 332u: goto L_08A9164C;
    case 333u: goto L_08A9167C;
    case 334u: goto L_08A91684;
    case 335u: goto L_08A9169C;
    case 336u: goto L_08A916D8;
    case 337u: goto L_08A916E4;
    case 338u: goto L_08A916EC;
    case 339u: goto L_08A916FC;
    case 340u: goto L_08A91708;
    case 341u: goto L_08A91714;
    case 342u: goto L_08A9174C;
    case 343u: goto L_08A9175C;
    case 344u: goto L_08A91768;
    case 345u: goto L_08A91790;
    case 346u: goto L_08A917C0;
    case 347u: goto L_08A917C8;
    case 348u: goto L_08A917D8;
    case 349u: goto L_08A917E0;
    case 350u: goto L_08A917FC;
    case 351u: goto L_08A91804;
    case 352u: goto L_08A9180C;
    case 353u: goto L_08A91814;
    case 354u: goto L_08A91844;
    case 355u: goto L_08A91848;
    case 356u: goto L_08A91878;
    case 357u: goto L_08A91884;
    case 358u: goto L_08A918D8;
    case 359u: goto L_08A918E0;
    case 360u: goto L_08A918F0;
    case 361u: goto L_08A91900;
    case 362u: goto L_08A9190C;
    case 363u: goto L_08A91910;
    case 364u: goto L_08A91954;
    case 365u: goto L_08A9195C;
    case 366u: goto L_08A91968;
    case 367u: goto L_08A91970;
    case 368u: goto L_08A9197C;
    case 369u: goto L_08A91988;
    case 370u: goto L_08A91994;
    case 371u: goto L_08A919A4;
    case 372u: goto L_08A919AC;
    case 373u: goto L_08A919B0;
    case 374u: goto L_08A919F4;
    case 375u: goto L_08A91A00;
    case 376u: goto L_08A91A0C;
    case 377u: goto L_08A91A1C;
    case 378u: goto L_08A91A24;
    case 379u: goto L_08A91A34;
    case 380u: goto L_08A91A40;
    case 381u: goto L_08A91A48;
    case 382u: goto L_08A91A50;
    case 383u: goto L_08A91A58;
    case 384u: goto L_08A91A64;
    case 385u: goto L_08A91A70;
    case 386u: goto L_08A91A78;
    case 387u: goto L_08A91A80;
    case 388u: goto L_08A91A90;
    case 389u: goto L_08A91AA8;
    case 390u: goto L_08A91AB8;
    case 391u: goto L_08A91AC8;
    case 392u: goto L_08A91AD0;
    case 393u: goto L_08A91ADC;
    case 394u: goto L_08A91AE4;
    case 395u: goto L_08A91AEC;
    case 396u: goto L_08A91AF8;
    case 397u: goto L_08A91B00;
    case 398u: goto L_08A91B10;
    case 399u: goto L_08A91B20;
    case 400u: goto L_08A91B28;
    case 401u: goto L_08A91B34;
    case 402u: goto L_08A91B3C;
    case 403u: goto L_08A91B48;
    case 404u: goto L_08A91B60;
    case 405u: goto L_08A91B68;
    case 406u: goto L_08A91B74;
    case 407u: goto L_08A91B7C;
    case 408u: goto L_08A91B8C;
    case 409u: goto L_08A91B9C;
    case 410u: goto L_08A91BAC;
    case 411u: goto L_08A91BC0;
    case 412u: goto L_08A91BD8;
    case 413u: goto L_08A91BE8;
    case 414u: goto L_08A91BFC;
    case 415u: goto L_08A91C04;
    case 416u: goto L_08A91C0C;
    case 417u: goto L_08A91C14;
    case 418u: goto L_08A91C1C;
    case 419u: goto L_08A91C30;
    case 420u: goto L_08A91C40;
    case 421u: goto L_08A91C64;
    case 422u: goto L_08A91C78;
    case 423u: goto L_08A91C7C;
    case 424u: goto L_08A91C84;
    case 425u: goto L_08A91C94;
    case 426u: goto L_08A91CA4;
    case 427u: goto L_08A91CB8;
    case 428u: goto L_08A91CC0;
    case 429u: goto L_08A91CD0;
    case 430u: goto L_08A91CD8;
    case 431u: goto L_08A91CE0;
    case 432u: goto L_08A91CE8;
    case 433u: goto L_08A91CF0;
    case 434u: goto L_08A91D04;
    case 435u: goto L_08A91D14;
    case 436u: goto L_08A91D24;
    case 437u: goto L_08A91D30;
    case 438u: goto L_08A91D44;
    case 439u: goto L_08A91D78;
    case 440u: goto L_08A91DA4;
    case 441u: goto L_08A91DAC;
    case 442u: goto L_08A91DB8;
    case 443u: goto L_08A91DC8;
    case 444u: goto L_08A91DD8;
    case 445u: goto L_08A91DF0;
    case 446u: goto L_08A91E04;
    case 447u: goto L_08A91E38;
    case 448u: goto L_08A91E6C;
    case 449u: goto L_08A91E74;
    case 450u: goto L_08A91E7C;
    case 451u: goto L_08A91E84;
    case 452u: goto L_08A91E90;
    case 453u: goto L_08A91E98;
    case 454u: goto L_08A91EA8;
    case 455u: goto L_08A91EB8;
    case 456u: goto L_08A91EC0;
    case 457u: goto L_08A91EC8;
    case 458u: goto L_08A91EFC;
    case 459u: goto L_08A91F04;
    case 460u: goto L_08A91F70;
    case 461u: goto L_08A91FE4;
    case 462u: goto L_08A9200C;
    case 463u: goto L_08A92034;
    case 464u: goto L_08A9203C;
    case 465u: goto L_08A92070;
    case 466u: goto L_08A92094;
    case 467u: goto L_08A9209C;
    case 468u: goto L_08A920D0;
    case 469u: goto L_08A92108;
    case 470u: goto L_08A9213C;
    case 471u: goto L_08A9214C;
    case 472u: goto L_08A92158;
    case 473u: goto L_08A921C8;
    case 474u: goto L_08A921D8;
    case 475u: goto L_08A92218;
    case 476u: goto L_08A9223C;
    case 477u: goto L_08A9224C;
    case 478u: goto L_08A92254;
    case 479u: goto L_08A9225C;
    case 480u: goto L_08A92260;
    case 481u: goto L_08A9226C;
    case 482u: goto L_08A92280;
    case 483u: goto L_08A92288;
    case 484u: goto L_08A9229C;
    case 485u: goto L_08A922C0;
    case 486u: goto L_08A922D0;
    case 487u: goto L_08A922D8;
    case 488u: goto L_08A922E0;
    case 489u: goto L_08A922E4;
    case 490u: goto L_08A922F0;
    case 491u: goto L_08A92304;
    case 492u: goto L_08A9230C;
    case 493u: goto L_08A92314;
    case 494u: goto L_08A92338;
    case 495u: goto L_08A923CC;
    case 496u: goto L_08A923EC;
    case 497u: goto L_08A92414;
    case 498u: goto L_08A92444;
    case 499u: goto L_08A9245C;
    case 500u: goto L_08A92480;
    case 501u: goto L_08A9248C;
    case 502u: goto L_08A9249C;
    case 503u: goto L_08A924A8;
    case 504u: goto L_08A924B0;
    case 505u: goto L_08A924BC;
    case 506u: goto L_08A924C0;
    case 507u: goto L_08A924D0;
    case 508u: goto L_08A924D8;
    case 509u: goto L_08A924EC;
    case 510u: goto L_08A924F8;
    case 511u: goto L_08A92510;
    case 512u: goto L_08A92528;
    case 513u: goto L_08A92540;
    case 514u: goto L_08A9254C;
    case 515u: goto L_08A9255C;
    case 516u: goto L_08A92564;
    case 517u: goto L_08A92578;
    case 518u: goto L_08A9258C;
    case 519u: goto L_08A92598;
    case 520u: goto L_08A925A4;
    case 521u: goto L_08A925AC;
    case 522u: goto L_08A925BC;
    case 523u: goto L_08A925C4;
    case 524u: goto L_08A9260C;
    case 525u: goto L_08A92618;
    case 526u: goto L_08A9261C;
    case 527u: goto L_08A92624;
    case 528u: goto L_08A92630;
    case 529u: goto L_08A9263C;
    case 530u: goto L_08A9264C;
    case 531u: goto L_08A92654;
    case 532u: goto L_08A9265C;
    case 533u: goto L_08A92664;
    case 534u: goto L_08A92698;
    case 535u: goto L_08A926A4;
    case 536u: goto L_08A926E0;
    case 537u: goto L_08A926EC;
    case 538u: goto L_08A92700;
    case 539u: goto L_08A92708;
    case 540u: goto L_08A92730;
    case 541u: goto L_08A92738;
    case 542u: goto L_08A92740;
    case 543u: goto L_08A92794;
    case 544u: goto L_08A9279C;
    case 545u: goto L_08A927A4;
    case 546u: goto L_08A927AC;
    case 547u: goto L_08A927B8;
    case 548u: goto L_08A927C0;
    case 549u: goto L_08A927C8;
    case 550u: goto L_08A927D0;
    case 551u: goto L_08A927D8;
    case 552u: goto L_08A927E0;
    case 553u: goto L_08A927F0;
    case 554u: goto L_08A92800;
    case 555u: goto L_08A92808;
    case 556u: goto L_08A92810;
    case 557u: goto L_08A9281C;
    case 558u: goto L_08A92828;
    case 559u: goto L_08A92834;
    case 560u: goto L_08A92844;
    case 561u: goto L_08A92854;
    case 562u: goto L_08A9285C;
    case 563u: goto L_08A92870;
    case 564u: goto L_08A9287C;
    case 565u: goto L_08A92888;
    case 566u: goto L_08A92890;
    case 567u: goto L_08A928A0;
    case 568u: goto L_08A928A8;
    case 569u: goto L_08A928F0;
    case 570u: goto L_08A92904;
    case 571u: goto L_08A92910;
    case 572u: goto L_08A9291C;
    case 573u: goto L_08A92920;
    case 574u: goto L_08A92928;
    case 575u: goto L_08A92930;
    case 576u: goto L_08A9293C;
    case 577u: goto L_08A9294C;
    case 578u: goto L_08A92978;
    case 579u: goto L_08A929B4;
    case 580u: goto L_08A929CC;
    case 581u: goto L_08A929D4;
    case 582u: goto L_08A929DC;
    case 583u: goto L_08A929E4;
    case 584u: goto L_08A929EC;
    case 585u: goto L_08A929F4;
    case 586u: goto L_08A929FC;
    case 587u: goto L_08A92A04;
    case 588u: goto L_08A92A0C;
    case 589u: goto L_08A92A14;
    case 590u: goto L_08A92A1C;
    case 591u: goto L_08A92A24;
    case 592u: goto L_08A92A2C;
    case 593u: goto L_08A92A34;
    case 594u: goto L_08A92A3C;
    case 595u: goto L_08A92A44;
    case 596u: goto L_08A92A48;
    case 597u: goto L_08A92A50;
    case 598u: goto L_08A92A5C;
    case 599u: goto L_08A92A64;
    case 600u: goto L_08A92A6C;
    case 601u: goto L_08A92A78;
    case 602u: goto L_08A92A88;
    case 603u: goto L_08A92AA8;
    case 604u: goto L_08A92AB8;
    case 605u: goto L_08A92AD0;
    case 606u: goto L_08A92B04;
    case 607u: goto L_08A92B0C;
    case 608u: goto L_08A92B14;
    case 609u: goto L_08A92B1C;
    case 610u: goto L_08A92B38;
    case 611u: goto L_08A92B48;
    case 612u: goto L_08A92B50;
    case 613u: goto L_08A92B58;
    case 614u: goto L_08A92B64;
    case 615u: goto L_08A92B70;
    case 616u: goto L_08A92B7C;
    case 617u: goto L_08A92B80;
    case 618u: goto L_08A92B8C;
    case 619u: goto L_08A92B94;
    case 620u: goto L_08A92BAC;
    case 621u: goto L_08A92BB4;
    case 622u: goto L_08A92BC0;
    case 623u: goto L_08A92BC8;
    case 624u: goto L_08A92BD0;
    case 625u: goto L_08A92BE8;
    case 626u: goto L_08A92BF4;
    case 627u: goto L_08A92BFC;
    case 628u: goto L_08A92C08;
    case 629u: goto L_08A92C14;
    case 630u: goto L_08A92C1C;
    case 631u: goto L_08A92C24;
    case 632u: goto L_08A92C30;
    case 633u: goto L_08A92C54;
    case 634u: goto L_08A92CCC;
    case 635u: goto L_08A92D44;
    case 636u: goto L_08A92D80;
    case 637u: goto L_08A92D84;
    case 638u: goto L_08A92DBC;
    case 639u: goto L_08A92DE8;
    case 640u: goto L_08A92DEC;
    case 641u: goto L_08A92DF4;
    case 642u: goto L_08A92E0C;
    case 643u: goto L_08A92E18;
    case 644u: goto L_08A92E2C;
    case 645u: goto L_08A92E90;
    case 646u: goto L_08A92EB4;
    case 647u: goto L_08A92F00;
    case 648u: goto L_08A92F14;
    case 649u: goto L_08A92F34;
    case 650u: goto L_08A92F60;
    case 651u: goto L_08A92F6C;
    case 652u: goto L_08A92F78;
    case 653u: goto L_08A92FB8;
    case 654u: goto L_08A92FC4;
    case 655u: goto L_08A92FD8;
    case 656u: goto L_08A92FF0;
    case 657u: goto L_08A93014;
    case 658u: goto L_08A93028;
    case 659u: goto L_08A93030;
    case 660u: goto L_08A93038;
    case 661u: goto L_08A93050;
    case 662u: goto L_08A9305C;
    case 663u: goto L_08A93074;
    case 664u: goto L_08A9307C;
    case 665u: goto L_08A93084;
    case 666u: goto L_08A930A0;
    case 667u: goto L_08A930C4;
    case 668u: goto L_08A930EC;
    case 669u: goto L_08A93104;
    case 670u: goto L_08A9311C;
    case 671u: goto L_08A93124;
    case 672u: goto L_08A9312C;
    case 673u: goto L_08A9313C;
    case 674u: goto L_08A93140;
    case 675u: goto L_08A93154;
    case 676u: goto L_08A93194;
    case 677u: goto L_08A93198;
    case 678u: goto L_08A931A8;
    case 679u: goto L_08A931F4;
    case 680u: goto L_08A931F8;
    case 681u: goto L_08A93208;
    case 682u: goto L_08A9322C;
    case 683u: goto L_08A9323C;
    case 684u: goto L_08A9324C;
    case 685u: goto L_08A93268;
    case 686u: goto L_08A93274;
    case 687u: goto L_08A93294;
    case 688u: goto L_08A932A8;
    case 689u: goto L_08A9330C;
    case 690u: goto L_08A93310;
    case 691u: goto L_08A93320;
    case 692u: goto L_08A93360;
    case 693u: goto L_08A93374;
    case 694u: goto L_08A93390;
    case 695u: goto L_08A933A8;
    case 696u: goto L_08A933BC;
    case 697u: goto L_08A933D0;
    case 698u: goto L_08A93418;
    case 699u: goto L_08A93460;
    case 700u: goto L_08A93494;
    case 701u: goto L_08A934B4;
    case 702u: goto L_08A935BC;
    case 703u: goto L_08A935C8;
    case 704u: goto L_08A93614;
    case 705u: goto L_08A93628;
    case 706u: goto L_08A93638;
    case 707u: goto L_08A93640;
    case 708u: goto L_08A93644;
    case 709u: goto L_08A93654;
    case 710u: goto L_08A93660;
    case 711u: goto L_08A9366C;
    case 712u: goto L_08A9367C;
    case 713u: goto L_08A93684;
    case 714u: goto L_08A936A0;
    case 715u: goto L_08A936B0;
    case 716u: goto L_08A93700;
    case 717u: goto L_08A93704;
    case 718u: goto L_08A9370C;
    case 719u: goto L_08A9371C;
    case 720u: goto L_08A9372C;
    case 721u: goto L_08A93734;
    case 722u: goto L_08A93740;
    case 723u: goto L_08A9375C;
    case 724u: goto L_08A93760;
    case 725u: goto L_08A9376C;
    case 726u: goto L_08A937B0;
    case 727u: goto L_08A937BC;
    case 728u: goto L_08A937E8;
    case 729u: goto L_08A93824;
    case 730u: goto L_08A9382C;
    case 731u: goto L_08A9383C;
    case 732u: goto L_08A93868;
    case 733u: goto L_08A93880;
    case 734u: goto L_08A93890;
    case 735u: goto L_08A938A8;
    case 736u: goto L_08A938B0;
    case 737u: goto L_08A938B4;
    case 738u: goto L_08A938BC;
    case 739u: goto L_08A938D8;
    case 740u: goto L_08A938EC;
    case 741u: goto L_08A938F4;
    case 742u: goto L_08A93918;
    case 743u: goto L_08A93924;
    case 744u: goto L_08A93930;
    case 745u: goto L_08A93938;
    case 746u: goto L_08A9393C;
    case 747u: goto L_08A93944;
    case 748u: goto L_08A93950;
    case 749u: goto L_08A93968;
    case 750u: goto L_08A93974;
    case 751u: goto L_08A93980;
    case 752u: goto L_08A9398C;
    case 753u: goto L_08A93998;
    case 754u: goto L_08A939A4;
    case 755u: goto L_08A939B0;
    case 756u: goto L_08A939BC;
    case 757u: goto L_08A939C8;
    case 758u: goto L_08A939D4;
    case 759u: goto L_08A939DC;
    case 760u: goto L_08A939E4;
    case 761u: goto L_08A939F8;
    case 762u: goto L_08A93A00;
    case 763u: goto L_08A93A14;
    case 764u: goto L_08A93A1C;
    case 765u: goto L_08A93A30;
    case 766u: goto L_08A93A38;
    case 767u: goto L_08A93A4C;
    case 768u: goto L_08A93A54;
    case 769u: goto L_08A93A68;
    case 770u: goto L_08A93A70;
    case 771u: goto L_08A93A84;
    case 772u: goto L_08A93A8C;
    case 773u: goto L_08A93AA0;
    case 774u: goto L_08A93AA8;
    case 775u: goto L_08A93ABC;
    case 776u: goto L_08A93AC4;
    case 777u: goto L_08A93AD8;
    case 778u: goto L_08A93AE0;
    case 779u: goto L_08A93AE8;
    case 780u: goto L_08A93AF0;
    case 781u: goto L_08A93AF8;
    case 782u: goto L_08A93B00;
    case 783u: goto L_08A93B08;
    case 784u: goto L_08A93B10;
    case 785u: goto L_08A93B18;
    case 786u: goto L_08A93B20;
    case 787u: goto L_08A93B50;
    case 788u: goto L_08A93B74;
    case 789u: goto L_08A93B80;
    case 790u: goto L_08A93B8C;
    case 791u: goto L_08A93B94;
    case 792u: goto L_08A93B98;
    case 793u: goto L_08A93BA0;
    case 794u: goto L_08A93BAC;
    case 795u: goto L_08A93BC4;
    case 796u: goto L_08A93BD0;
    case 797u: goto L_08A93BDC;
    case 798u: goto L_08A93BE8;
    case 799u: goto L_08A93BF4;
    case 800u: goto L_08A93C00;
    case 801u: goto L_08A93C0C;
    case 802u: goto L_08A93C18;
    case 803u: goto L_08A93C24;
    case 804u: goto L_08A93C30;
    case 805u: goto L_08A93C38;
    case 806u: goto L_08A93C40;
    case 807u: goto L_08A93C54;
    case 808u: goto L_08A93C5C;
    case 809u: goto L_08A93C70;
    case 810u: goto L_08A93C78;
    case 811u: goto L_08A93C8C;
    case 812u: goto L_08A93C94;
    case 813u: goto L_08A93CA8;
    case 814u: goto L_08A93CB0;
    case 815u: goto L_08A93CC4;
    case 816u: goto L_08A93CCC;
    case 817u: goto L_08A93CE0;
    case 818u: goto L_08A93CE8;
    case 819u: goto L_08A93CFC;
    case 820u: goto L_08A93D04;
    case 821u: goto L_08A93D18;
    case 822u: goto L_08A93D20;
    case 823u: goto L_08A93D28;
    case 824u: goto L_08A93D30;
    case 825u: goto L_08A93D38;
    case 826u: goto L_08A93D40;
    case 827u: goto L_08A93D48;
    case 828u: goto L_08A93D50;
    case 829u: goto L_08A93D58;
    case 830u: goto L_08A93D88;
    case 831u: goto L_08A93DAC;
    case 832u: goto L_08A93DB8;
    case 833u: goto L_08A93DC4;
    case 834u: goto L_08A93DCC;
    case 835u: goto L_08A93DD0;
    case 836u: goto L_08A93DD8;
    case 837u: goto L_08A93DE4;
    case 838u: goto L_08A93DFC;
    case 839u: goto L_08A93E08;
    case 840u: goto L_08A93E14;
    case 841u: goto L_08A93E20;
    case 842u: goto L_08A93E2C;
    case 843u: goto L_08A93E38;
    case 844u: goto L_08A93E44;
    case 845u: goto L_08A93E50;
    case 846u: goto L_08A93E5C;
    case 847u: goto L_08A93E68;
    case 848u: goto L_08A93E70;
    case 849u: goto L_08A93E78;
    case 850u: goto L_08A93E8C;
    case 851u: goto L_08A93E94;
    case 852u: goto L_08A93EA8;
    case 853u: goto L_08A93EB0;
    case 854u: goto L_08A93EC4;
    case 855u: goto L_08A93ECC;
    case 856u: goto L_08A93EE0;
    case 857u: goto L_08A93EE8;
    case 858u: goto L_08A93EFC;
    case 859u: goto L_08A93F04;
    case 860u: goto L_08A93F18;
    case 861u: goto L_08A93F20;
    case 862u: goto L_08A93F34;
    case 863u: goto L_08A93F3C;
    case 864u: goto L_08A93F50;
    case 865u: goto L_08A93F58;
    case 866u: goto L_08A93F60;
    case 867u: goto L_08A93F68;
    case 868u: goto L_08A93F70;
    case 869u: goto L_08A93F78;
    case 870u: goto L_08A93F80;
    case 871u: goto L_08A93F88;
    case 872u: goto L_08A93F90;
    case 873u: goto L_08A93F98;
    case 874u: goto L_08A93FC8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A90000:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90094;
      }
      goto L_08A90008;
    }
L_08A90008:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (17352u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A90094;
      }
      goto L_08A90048;
    }
L_08A90048:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A90054u);
    ctx.gpr[5] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90054u) goto L_08A90054;
    return;
L_08A90054:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90094;
      }
      goto L_08A90064;
    }
L_08A90064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90094;
      }
      goto L_08A90074;
    }
L_08A90074:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A90088u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x08A90088u) goto L_08A90088;
    return;
L_08A90088:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A90094u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A90094u) goto L_08A90094;
    return;
L_08A90094:
    ctx.gpr[31] = (0x08A9009Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A9009Cu) goto L_08A9009C;
    return;
L_08A9009C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90138;
      }
      goto L_08A900A4;
    }
L_08A900A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2084)));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90130;
      }
      goto L_08A900B4;
    }
L_08A900B4:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08A90100;
      }
      goto L_08A900C0;
    }
L_08A900C0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08A900F0;
      }
      goto L_08A900C8;
    }
L_08A900C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A90130;
      }
      goto L_08A900D0;
    }
L_08A900D0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_08A90110;
      }
      goto L_08A900D8;
    }
L_08A900D8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_08A90120;
      }
      goto L_08A900E0;
    }
L_08A900E0:
    ctx.gpr[31] = (0x08A900E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A90BFC;
L_08A900E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A901BC;
      }
      goto L_08A900F0;
    }
L_08A900F0:
    ctx.gpr[31] = (0x08A900F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A90BFC;
L_08A900F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A901BC;
      }
      goto L_08A90100;
    }
L_08A90100:
    ctx.gpr[31] = (0x08A90108u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A90BFC;
L_08A90108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A901BC;
      }
      goto L_08A90110;
    }
L_08A90110:
    ctx.gpr[31] = (0x08A90118u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A90BFC;
L_08A90118:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A901BC;
      }
      goto L_08A90120;
    }
L_08A90120:
    ctx.gpr[31] = (0x08A90128u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A90BFC;
L_08A90128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A901BC;
      }
      goto L_08A90130;
    }
L_08A90130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A901BC;
      }
      goto L_08A90138;
    }
L_08A90138:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A901BC;
      }
      goto L_08A90144;
    }
L_08A90144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A901BC;
      }
      goto L_08A90150;
    }
L_08A90150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A901BC;
      }
      goto L_08A90160;
    }
L_08A90160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(398))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A901BC;
      }
      goto L_08A90170;
    }
L_08A90170:
    ctx.gpr[31] = (0x08A90178u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 80u, 0x089A4618u>(ctx, &aot_mem) && ctx.pc == 0x08A90178u) goto L_08A90178;
    return;
L_08A90178:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A901BC;
      }
      goto L_08A90180;
    }
L_08A90180:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(596)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A901BC;
      }
      goto L_08A90194;
    }
L_08A90194:
    ctx.gpr[31] = (0x08A9019Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 206u, 0x089ED510u>(ctx, &aot_mem) && ctx.pc == 0x08A9019Cu) goto L_08A9019C;
    return;
L_08A9019C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 17u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(397), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A901BC;
L_08A901BC:
    ctx.gpr[31] = (0x08A901C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A901C4u) goto L_08A901C4;
    return;
L_08A901C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A901DC;
      }
      goto L_08A901CC;
    }
L_08A901CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A901E4;
      }
      goto L_08A901DC;
    }
L_08A901DC:
    ctx.gpr[31] = (0x08A901E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 592u, 0x08A8EE20u>(ctx, &aot_mem) && ctx.pc == 0x08A901E4u) goto L_08A901E4;
    return;
L_08A901E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(50) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A905EC;
      }
      goto L_08A901F8;
    }
L_08A901F8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20760)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90210:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A905EC;
      }
      goto L_08A90218;
    }
L_08A90218:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90234;
      }
      goto L_08A90224;
    }
L_08A90224:
    ctx.gpr[31] = (0x08A9022Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9022Cu) goto L_08A9022C;
    return;
L_08A9022C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90348;
      }
      goto L_08A90234;
    }
L_08A90234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1328)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A90250u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 508u, 0x089AA458u>(ctx, &aot_mem) && ctx.pc == 0x08A90250u) goto L_08A90250;
    return;
L_08A90250:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90348;
      }
      goto L_08A90258;
    }
L_08A90258:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90340;
      }
      goto L_08A90268;
    }
L_08A90268:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A90340;
      }
      goto L_08A90284;
    }
L_08A90284:
    ctx.gpr[31] = (0x08A9028Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9028Cu) goto L_08A9028C;
    return;
L_08A9028C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90340;
      }
      goto L_08A90294;
    }
L_08A90294:
    ctx.gpr[31] = (0x08A9029Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9029Cu) goto L_08A9029C;
    return;
L_08A9029C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A902C4;
      }
      goto L_08A902A8;
    }
L_08A902A8:
    ctx.gpr[31] = (0x08A902B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A902B0u) goto L_08A902B0;
    return;
L_08A902B0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A902BCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 617u, 0x08A8EFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A902BCu) goto L_08A902BC;
    return;
L_08A902BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90348;
      }
      goto L_08A902C4;
    }
L_08A902C4:
    ctx.gpr[4] = (16294u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A90330;
      }
      goto L_08A902E4;
    }
L_08A902E4:
    ctx.gpr[31] = (0x08A902ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A902ECu) goto L_08A902EC;
    return;
L_08A902EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90314;
      }
      goto L_08A902FC;
    }
L_08A902FC:
    ctx.gpr[31] = (0x08A90304u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A90304u) goto L_08A90304;
    return;
L_08A90304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90330;
      }
      goto L_08A90314;
    }
L_08A90314:
    ctx.gpr[31] = (0x08A9031Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9031Cu) goto L_08A9031C;
    return;
L_08A9031C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90328u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 617u, 0x08A8EFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A90328u) goto L_08A90328;
    return;
L_08A90328:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90348;
      }
      goto L_08A90330;
    }
L_08A90330:
    ctx.gpr[31] = (0x08A90338u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90338u) goto L_08A90338;
    return;
L_08A90338:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90348;
      }
      goto L_08A90340;
    }
L_08A90340:
    ctx.gpr[31] = (0x08A90348u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90348u) goto L_08A90348;
    return;
L_08A90348:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A905EC;
      }
      goto L_08A90350;
    }
L_08A90350:
    ctx.gpr[31] = (0x08A90358u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A90358u) goto L_08A90358;
    return;
L_08A90358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A9050C;
      }
      goto L_08A90364;
    }
L_08A90364:
    ctx.gpr[31] = (0x08A9036Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A9036Cu) goto L_08A9036C;
    return;
L_08A9036C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A903A0;
      }
      goto L_08A90378;
    }
L_08A90378:
    ctx.gpr[31] = (0x08A90380u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A90380u) goto L_08A90380;
    return;
L_08A90380:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(541)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A903A0;
      }
      goto L_08A90390;
    }
L_08A90390:
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A903A0;
L_08A903A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90558;
      }
      goto L_08A903B0;
    }
L_08A903B0:
    ctx.gpr[31] = (0x08A903B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 508u, 0x089AA458u>(ctx, &aot_mem) && ctx.pc == 0x08A903B8u) goto L_08A903B8;
    return;
L_08A903B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90558;
      }
      goto L_08A903C0;
    }
L_08A903C0:
    ctx.gpr[31] = (0x08A903C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A903C8u) goto L_08A903C8;
    return;
L_08A903C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90440;
      }
      goto L_08A903D0;
    }
L_08A903D0:
    ctx.gpr[31] = (0x08A903D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A903D8u) goto L_08A903D8;
    return;
L_08A903D8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90440;
      }
      goto L_08A903E0;
    }
L_08A903E0:
    ctx.gpr[31] = (0x08A903E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A903E8u) goto L_08A903E8;
    return;
L_08A903E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
        goto L_08A90414;
    }
    goto L_08A903F8;
L_08A903F8:
    ctx.gpr[31] = (0x08A90400u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A90400u) goto L_08A90400;
    return;
L_08A90400:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90440;
      }
      goto L_08A90410;
    }
L_08A90410:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    goto L_08A90414;
L_08A90414:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A90438u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 617u, 0x08A8EFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A90438u) goto L_08A90438;
    return;
L_08A90438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90558;
      }
      goto L_08A90440;
    }
L_08A90440:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16025u << 16u);
      if (branch_taken) {
          goto L_08A904F8;
      }
      goto L_08A90464;
    }
L_08A90464:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A904F8;
      }
      goto L_08A90488;
    }
L_08A90488:
    ctx.gpr[31] = (0x08A90490u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A90490u) goto L_08A90490;
    return;
L_08A90490:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90558;
      }
      goto L_08A90498;
    }
L_08A90498:
    ctx.gpr[31] = (0x08A904A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A904A0u) goto L_08A904A0;
    return;
L_08A904A0:
    ctx.gpr[31] = (0x08A904A8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 889u, 0x0889FFE0u>(ctx, &aot_mem) && ctx.pc == 0x08A904A8u) goto L_08A904A8;
    return;
L_08A904A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90558;
      }
      goto L_08A904B0;
    }
L_08A904B0:
    ctx.gpr[31] = (0x08A904B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A904B8u) goto L_08A904B8;
    return;
L_08A904B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(541)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90558;
      }
      goto L_08A904C4;
    }
L_08A904C4:
    ctx.gpr[31] = (0x08A904CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A904CCu) goto L_08A904CC;
    return;
L_08A904CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90558;
      }
      goto L_08A904DC;
    }
L_08A904DC:
    ctx.gpr[31] = (0x08A904E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A904E4u) goto L_08A904E4;
    return;
L_08A904E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A904F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 127u, 0x08888C94u>(ctx, &aot_mem) && ctx.pc == 0x08A904F0u) goto L_08A904F0;
    return;
L_08A904F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90558;
      }
      goto L_08A904F8;
    }
L_08A904F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90504u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90504u) goto L_08A90504;
    return;
L_08A90504:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90558;
      }
      goto L_08A9050C;
    }
L_08A9050C:
    ctx.gpr[31] = (0x08A90514u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08A90514u) goto L_08A90514;
    return;
L_08A90514:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90544u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x08A90544u) goto L_08A90544;
    return;
L_08A90544:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90550u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x08A90550u) goto L_08A90550;
    return;
L_08A90550:
    ctx.gpr[31] = (0x08A90558u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x08A90558u) goto L_08A90558;
    return;
L_08A90558:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A905EC;
      }
      goto L_08A90560;
    }
L_08A90560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A905E4;
      }
      goto L_08A90570;
    }
L_08A90570:
    ctx.gpr[31] = (0x08A90578u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A90578u) goto L_08A90578;
    return;
L_08A90578:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A905E4;
      }
      goto L_08A90580;
    }
L_08A90580:
    ctx.gpr[31] = (0x08A90588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A90588u) goto L_08A90588;
    return;
L_08A90588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (16294u << 16u);
      if (branch_taken) {
          goto L_08A905B4;
      }
      goto L_08A90598;
    }
L_08A90598:
    ctx.gpr[31] = (0x08A905A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A905A0u) goto L_08A905A0;
    return;
L_08A905A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 56u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A905E4;
      }
      goto L_08A905B0;
    }
L_08A905B0:
    ctx.gpr[4] = (16294u << 16u);
    goto L_08A905B4;
L_08A905B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A905E4;
      }
      goto L_08A905D0;
    }
L_08A905D0:
    ctx.gpr[31] = (0x08A905D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A905D8u) goto L_08A905D8;
    return;
L_08A905D8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A905E4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 617u, 0x08A8EFD4u>(ctx, &aot_mem) && ctx.pc == 0x08A905E4u) goto L_08A905E4;
    return;
L_08A905E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A905EC;
      }
      goto L_08A905EC;
    }
L_08A905EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90604;
      }
      goto L_08A905F8;
    }
L_08A905F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90604u);
    ctx.gpr[5] = (0u | 129u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90604u) goto L_08A90604;
    return;
L_08A90604:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2076)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90738;
      }
      goto L_08A90610;
    }
L_08A90610:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A9061Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9061Cu) goto L_08A9061C;
    return;
L_08A9061C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90644;
      }
      goto L_08A90624;
    }
L_08A90624:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A9063Cu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A9063Cu) goto L_08A9063C;
    return;
L_08A9063C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A90700;
      }
      goto L_08A90644;
    }
L_08A90644:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[6] = (0u | 17u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 31u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A90700;
      }
      goto L_08A90664;
    }
L_08A90664:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08A90674u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 555u, 0x088EF598u>(ctx, &aot_mem) && ctx.pc == 0x08A90674u) goto L_08A90674;
    return;
L_08A90674:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A906D8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x08A906D8u) goto L_08A906D8;
    return;
L_08A906D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90700;
      }
      goto L_08A906E4;
    }
L_08A906E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(152));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A906FCu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A906FCu) goto L_08A906FC;
    return;
L_08A906FC:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A90700;
L_08A90700:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90738;
      }
      goto L_08A90708;
    }
L_08A90708:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A90738u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 224u, 0x088D915Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90738u) goto L_08A90738;
    return;
L_08A90738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2112)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A908CC;
      }
      goto L_08A90748;
    }
L_08A90748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A908CC;
      }
      goto L_08A90758;
    }
L_08A90758:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16166u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A907C8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x08A907C8u) goto L_08A907C8;
    return;
L_08A907C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90848;
      }
      goto L_08A907D0;
    }
L_08A907D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2112), 0u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A907E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A90928;
L_08A907E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A907F0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08A907F0u) goto L_08A907F0;
    return;
L_08A907F0:
    ctx.gpr[31] = (0x08A907F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A907F8u) goto L_08A907F8;
    return;
L_08A907F8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25468)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25464)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A90810u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A90810u) goto L_08A90810;
    return;
L_08A90810:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08A90834u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08A90834u) goto L_08A90834;
    return;
L_08A90834:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2104), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A908C4;
      }
      goto L_08A90848;
    }
L_08A90848:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2112), 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A90868u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90868u) goto L_08A90868;
    return;
L_08A90868:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A908C4;
      }
      goto L_08A90870;
    }
L_08A90870:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    goto L_08A90878;
L_08A90878:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90898;
      }
      goto L_08A90884;
    }
L_08A90884:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A90890u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 585u, 0x0899F1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A90890u) goto L_08A90890;
    return;
L_08A90890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A908A8;
      }
      goto L_08A90898;
    }
L_08A90898:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08A90878;
      }
      goto L_08A908A8;
    }
L_08A908A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A908B4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08A908B4u) goto L_08A908B4;
    return;
L_08A908B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08A908C4;
L_08A908C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A908F8;
      }
      goto L_08A908CC;
    }
L_08A908CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(292)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A908F8;
      }
      goto L_08A908F4;
    }
L_08A908F4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2112), 0u);
    goto L_08A908F8;
L_08A908F8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90928:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7828)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 7u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90BE4;
      }
      goto L_08A90974;
    }
L_08A90974:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(2064));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[7]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A909C0;
      }
      goto L_08A909B8;
    }
L_08A909B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(25)));
      if (branch_taken) {
          goto L_08A909C4;
      }
      goto L_08A909C0;
    }
L_08A909C0:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    goto L_08A909C4;
L_08A909C4:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A90BE4;
      }
      goto L_08A909D0;
    }
L_08A909D0:
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2072), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A90A38;
      }
      goto L_08A909E0;
    }
L_08A909E0:
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    goto L_08A909E4;
L_08A909E4:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90A18;
      }
      goto L_08A909EC;
    }
L_08A909EC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[10] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A90A18;
      }
      goto L_08A909F8;
    }
L_08A909F8:
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(816), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A90A28;
      }
      goto L_08A90A18;
    }
L_08A90A18:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[10] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90A28;
      }
      goto L_08A90A24;
    }
L_08A90A24:
    ctx.gpr[5] = (ctx.gpr[8] & 255u);
    goto L_08A90A28;
L_08A90A28:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[8]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A909E4;
      }
      goto L_08A90A38;
    }
L_08A90A38:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
      if (branch_taken) {
          goto L_08A90A64;
      }
      goto L_08A90A40;
    }
L_08A90A40:
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
        goto L_08A90A68;
    }
    goto L_08A90A48;
L_08A90A48:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(816)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(816), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(816), 0u);
    goto L_08A90A64;
L_08A90A64:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    goto L_08A90A68;
L_08A90A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2077), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2078), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A90AB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x08A90AB0u) goto L_08A90AB0;
    return;
L_08A90AB0:
    ctx.gpr[31] = (0x08A90AB8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A90AB8u) goto L_08A90AB8;
    return;
L_08A90AB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90BE4;
      }
      goto L_08A90AC0;
    }
L_08A90AC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90AF0;
      }
      goto L_08A90ACC;
    }
L_08A90ACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90AF0;
      }
      goto L_08A90AD8;
    }
L_08A90AD8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90AE8u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A90AE8u) goto L_08A90AE8;
    return;
L_08A90AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90BE4;
      }
      goto L_08A90AF0;
    }
L_08A90AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90B64;
      }
      goto L_08A90AFC;
    }
L_08A90AFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A90B64;
      }
      goto L_08A90B44;
    }
L_08A90B44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (16416u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A90B5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 328u, 0x089A1774u>(ctx, &aot_mem) && ctx.pc == 0x08A90B5Cu) goto L_08A90B5C;
    return;
L_08A90B5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90BDC;
      }
      goto L_08A90B64;
    }
L_08A90B64:
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[31] = (0x08A90B70u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A90B70u) goto L_08A90B70;
    return;
L_08A90B70:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90BBCu);
    ctx.gpr[6] = (0u | 10000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 353u, 0x089A18ACu>(ctx, &aot_mem) && ctx.pc == 0x08A90BBCu) goto L_08A90BBC;
    return;
L_08A90BBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A90BDCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90BDCu) goto L_08A90BDC;
    return;
L_08A90BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90BE4;
      }
      goto L_08A90BE4;
    }
L_08A90BE4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A90BFC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-368));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[17]);
    ctx.gpr[17] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), ctx.gpr[18]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(2064));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A90C68u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A90C68u) goto L_08A90C68;
    return;
L_08A90C68:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-7828)));
        goto L_08A90C80;
    }
    goto L_08A90C70;
L_08A90C70:
    ctx.gpr[31] = (0x08A90C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A90C78u) goto L_08A90C78;
    return;
L_08A90C78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A90C9C;
      }
      goto L_08A90C80;
    }
L_08A90C80:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A90C9C;
L_08A90C9C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90CBC;
      }
      goto L_08A90CAC;
    }
L_08A90CAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(30))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90CDC;
      }
      goto L_08A90CBC;
    }
L_08A90CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 49u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A90CD4;
      }
      goto L_08A90CCC;
    }
L_08A90CCC:
    ctx.gpr[31] = (0x08A90CD4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A90928;
L_08A90CD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A90CDC;
    }
L_08A90CDC:
    ctx.gpr[31] = (0x08A90CE4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 409u, 0x08ACA85Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90CE4u) goto L_08A90CE4;
    return;
L_08A90CE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90DA4;
      }
      goto L_08A90CEC;
    }
L_08A90CEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90DA4;
      }
      goto L_08A90CF8;
    }
L_08A90CF8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2073)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90DA4;
      }
      goto L_08A90D04;
    }
L_08A90D04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90E00;
      }
      goto L_08A90D14;
    }
L_08A90D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2078), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-8193));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A90D5Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 748u, 0x0899FCA0u>(ctx, &aot_mem) && ctx.pc == 0x08A90D5Cu) goto L_08A90D5C;
    return;
L_08A90D5C:
    ctx.gpr[31] = (0x08A90D64u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x08A90D64u) goto L_08A90D64;
    return;
L_08A90D64:
    ctx.gpr[31] = (0x08A90D6Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A90928;
L_08A90D6C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(596), 0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A90D80u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 239u, 0x089A10F0u>(ctx, &aot_mem) && ctx.pc == 0x08A90D80u) goto L_08A90D80;
    return;
L_08A90D80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A90E00;
      }
      goto L_08A90D9C;
    }
L_08A90D9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A90E00;
      }
      goto L_08A90DA4;
    }
L_08A90DA4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2078)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A90E00;
      }
      goto L_08A90DB0;
    }
L_08A90DB0:
    ctx.gpr[31] = (0x08A90DB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 409u, 0x08ACA85Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90DB8u) goto L_08A90DB8;
    return;
L_08A90DB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A90E00;
      }
      goto L_08A90DC0;
    }
L_08A90DC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2078), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2076), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A90E00u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A90928;
L_08A90E00:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A91970;
      }
      goto L_08A90E08;
    }
L_08A90E08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2073)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A914A4;
      }
      goto L_08A90E14;
    }
L_08A90E14:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9117C;
      }
      goto L_08A90E20;
    }
L_08A90E20:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[31] = (0x08A90E3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90E3Cu) goto L_08A90E3C;
    return;
L_08A90E3C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9117C;
      }
      goto L_08A90E44;
    }
L_08A90E44:
    ctx.gpr[31] = (0x08A90E4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A90E4Cu) goto L_08A90E4C;
    return;
L_08A90E4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9117C;
      }
      goto L_08A90E54;
    }
L_08A90E54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08A90E74u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08A90E74u) goto L_08A90E74;
    return;
L_08A90E74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9117C;
      }
      goto L_08A90E8C;
    }
L_08A90E8C:
    ctx.gpr[31] = (0x08A90E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A90E94u) goto L_08A90E94;
    return;
L_08A90E94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9117C;
      }
      goto L_08A90F00;
    }
L_08A90F00:
    ctx.gpr[31] = (0x08A90F08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A90F08u) goto L_08A90F08;
    return;
L_08A90F08:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A90F98;
      }
      goto L_08A90F90;
    }
L_08A90F90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A90FCC;
      }
      goto L_08A90F98;
    }
L_08A90F98:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A90FCC;
L_08A90FCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A90FF8;
      }
      goto L_08A90FF0;
    }
L_08A90FF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A9102C;
      }
      goto L_08A90FF8;
    }
L_08A90FF8:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A9102C;
L_08A9102C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16204u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91164;
      }
      goto L_08A91064;
    }
L_08A91064:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A91078u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x08A91078u) goto L_08A91078;
    return;
L_08A91078:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91084u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91084u) goto L_08A91084;
    return;
L_08A91084:
    ctx.gpr[31] = (0x08A9108Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x08A9108Cu) goto L_08A9108C;
    return;
L_08A9108C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9117C;
      }
      goto L_08A91094;
    }
L_08A91094:
    ctx.gpr[31] = (0x08A9109Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A9109Cu) goto L_08A9109C;
    return;
L_08A9109C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A910A8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 224u, 0x088D915Cu>(ctx, &aot_mem) && ctx.pc == 0x08A910A8u) goto L_08A910A8;
    return;
L_08A910A8:
    ctx.gpr[31] = (0x08A910B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A910B0u) goto L_08A910B0;
    return;
L_08A910B0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25476)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25472)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A910D0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A910D0u) goto L_08A910D0;
    return;
L_08A910D0:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A91100u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 254u, 0x089A1230u>(ctx, &aot_mem) && ctx.pc == 0x08A91100u) goto L_08A91100;
    return;
L_08A91100:
    ctx.gpr[31] = (0x08A91108u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A91108u) goto L_08A91108;
    return;
L_08A91108:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25484)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25480)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A91120u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A91120u) goto L_08A91120;
    return;
L_08A91120:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25492)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25488)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A9115Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 239u, 0x089A10F0u>(ctx, &aot_mem) && ctx.pc == 0x08A9115Cu) goto L_08A9115C;
    return;
L_08A9115C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9117C;
      }
      goto L_08A91164;
    }
L_08A91164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9117C;
      }
      goto L_08A91174;
    }
L_08A91174:
    ctx.gpr[31] = (0x08A9117Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9117Cu) goto L_08A9117C;
    return;
L_08A9117C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9119C;
      }
      goto L_08A91188;
    }
L_08A91188:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91318;
      }
      goto L_08A9119C;
    }
L_08A9119C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A911B8;
      }
      goto L_08A911B0;
    }
L_08A911B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
      if (branch_taken) {
          goto L_08A911BC;
      }
      goto L_08A911B8;
    }
L_08A911B8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    goto L_08A911BC;
L_08A911BC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
      if (branch_taken) {
          goto L_08A9120C;
      }
      goto L_08A911CC;
    }
L_08A911CC:
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08A911D0;
L_08A911D0:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(816)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A911FC;
      }
      goto L_08A911DC;
    }
L_08A911DC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(816)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(2068)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A911FC;
      }
      goto L_08A911F4;
    }
L_08A911F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(816)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2068)));
    goto L_08A911FC;
L_08A911FC:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A911D0;
      }
      goto L_08A9120C;
    }
L_08A9120C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A912AC;
      }
      goto L_08A91218;
    }
L_08A91218:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91240;
      }
      goto L_08A9122C;
    }
L_08A9122C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91238u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 572u, 0x08A8EC94u>(ctx, &aot_mem) && ctx.pc == 0x08A91238u) goto L_08A91238;
    return;
L_08A91238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91310;
      }
      goto L_08A91240;
    }
L_08A91240:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[5] = (16672u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91278;
      }
      goto L_08A9125C;
    }
L_08A9125C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91310;
      }
      goto L_08A91264;
    }
L_08A91264:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91310;
      }
      goto L_08A91278;
    }
L_08A91278:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91298;
      }
      goto L_08A91280;
    }
L_08A91280:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91298;
      }
      goto L_08A91290;
    }
L_08A91290:
    ctx.gpr[31] = (0x08A91298u);
    // nop
    goto L_08A90928;
L_08A91298:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A912A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 572u, 0x08A8EC94u>(ctx, &aot_mem) && ctx.pc == 0x08A912A4u) goto L_08A912A4;
    return;
L_08A912A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91310;
      }
      goto L_08A912AC;
    }
L_08A912AC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91310;
      }
      goto L_08A912B4;
    }
L_08A912B4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(25)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91310;
      }
      goto L_08A912C8;
    }
L_08A912C8:
    ctx.gpr[5] = (16672u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A912F8;
      }
      goto L_08A912D4;
    }
L_08A912D4:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A912F8;
      }
      goto L_08A912E8;
    }
L_08A912E8:
    ctx.gpr[31] = (0x08A912F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A90928;
L_08A912F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91310;
      }
      goto L_08A912F8;
    }
L_08A912F8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91310;
      }
      goto L_08A91308;
    }
L_08A91308:
    ctx.gpr[31] = (0x08A91310u);
    // nop
    goto L_08A90928;
L_08A91310:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91324;
      }
      goto L_08A91318;
    }
L_08A91318:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91324u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 572u, 0x08A8EC94u>(ctx, &aot_mem) && ctx.pc == 0x08A91324u) goto L_08A91324;
    return;
L_08A91324:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91330;
    }
L_08A91330:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91374;
      }
      goto L_08A9133C;
    }
L_08A9133C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91374;
      }
      goto L_08A91360;
    }
L_08A91360:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9136Cu);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A9136Cu) goto L_08A9136C;
    return;
L_08A9136C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A913EC;
      }
      goto L_08A91374;
    }
L_08A91374:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A913EC;
      }
      goto L_08A91380;
    }
L_08A91380:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A913EC;
      }
      goto L_08A913A4;
    }
L_08A913A4:
    ctx.gpr[31] = (0x08A913ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A913ACu) goto L_08A913AC;
    return;
L_08A913AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A913EC;
      }
      goto L_08A913B8;
    }
L_08A913B8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A913C4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x08A913C4u) goto L_08A913C4;
    return;
L_08A913C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A913E0;
      }
      goto L_08A913CC;
    }
L_08A913CC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A913D8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A913D8u) goto L_08A913D8;
    return;
L_08A913D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A913EC;
      }
      goto L_08A913E0;
    }
L_08A913E0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A913ECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A913ECu) goto L_08A913EC;
    return;
L_08A913EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2075)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9142C;
      }
      goto L_08A913F8;
    }
L_08A913F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9142C;
      }
      goto L_08A91420;
    }
L_08A91420:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9142Cu);
    ctx.gpr[5] = (0u | 113u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9142Cu) goto L_08A9142C;
    return;
L_08A9142C:
    ctx.gpr[31] = (0x08A91434u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A91434u) goto L_08A91434;
    return;
L_08A91434:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A9143C;
    }
L_08A9143C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2075)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91458;
      }
      goto L_08A91448;
    }
L_08A91448:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2075), static_cast<std::uint8_t>(0u));
    goto L_08A91458;
L_08A91458:
    ctx.gpr[31] = (0x08A91460u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 171u, 0x089D575Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91460u) goto L_08A91460;
    return;
L_08A91460:
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91494;
    }
L_08A91494:
    ctx.gpr[31] = (0x08A9149Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A90928;
L_08A9149C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A914A4;
    }
L_08A914A4:
    ctx.gpr[17] = (0u | 17u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A914B4u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x08A914B4u) goto L_08A914B4;
    return;
L_08A914B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08A914D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08A914D4u) goto L_08A914D4;
    return;
L_08A914D4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A914F0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x08A914F0u) goto L_08A914F0;
    return;
L_08A914F0:
    ctx.gpr[31] = (0x08A914F8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x08A914F8u) goto L_08A914F8;
    return;
L_08A914F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91534;
      }
      goto L_08A91508;
    }
L_08A91508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91968;
      }
      goto L_08A91518;
    }
L_08A91518:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91968;
      }
      goto L_08A91534;
    }
L_08A91534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A916EC;
      }
      goto L_08A9154C;
    }
L_08A9154C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A916D8;
      }
      goto L_08A91560;
    }
L_08A91560:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A91578u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 244u, 0x08A4D04Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91578u) goto L_08A91578;
    return;
L_08A91578:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(692)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A9158Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 174u, 0x0890CF70u>(ctx, &aot_mem) && ctx.pc == 0x08A9158Cu) goto L_08A9158C;
    return;
L_08A9158C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A91598u);
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 173u, 0x0890CF68u>(ctx, &aot_mem) && ctx.pc == 0x08A91598u) goto L_08A91598;
    return;
L_08A91598:
    ctx.gpr[7] = (ctx.gpr[18] << 6u);
    ctx.gpr[7] = (ctx.gpr[2] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A915B0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 643u, 0x088B7F1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A915B0u) goto L_08A915B0;
    return;
L_08A915B0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A915ECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 478u, 0x088C68F4u>(ctx, &aot_mem) && ctx.pc == 0x08A915ECu) goto L_08A915EC;
    return;
L_08A915EC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9160C;
      }
      goto L_08A915F4;
    }
L_08A915F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9167C;
      }
      goto L_08A91600;
    }
L_08A91600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A9167C;
      }
      goto L_08A9160C;
    }
L_08A9160C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91618u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 505u, 0x0899ED08u>(ctx, &aot_mem) && ctx.pc == 0x08A91618u) goto L_08A91618;
    return;
L_08A91618:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91624u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 224u, 0x088D915Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91624u) goto L_08A91624;
    return;
L_08A91624:
    ctx.gpr[31] = (0x08A9162Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A9162Cu) goto L_08A9162C;
    return;
L_08A9162C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25476)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25472)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A9164Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A9164Cu) goto L_08A9164C;
    return;
L_08A9164C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[16] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A9167Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 254u, 0x089A1230u>(ctx, &aot_mem) && ctx.pc == 0x08A9167Cu) goto L_08A9167C;
    return;
L_08A9167C:
    ctx.gpr[31] = (0x08A91684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A91684u) goto L_08A91684;
    return;
L_08A91684:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25484)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25480)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A9169Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A9169Cu) goto L_08A9169C;
    return;
L_08A9169C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25492)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25488)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A916D8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 239u, 0x089A10F0u>(ctx, &aot_mem) && ctx.pc == 0x08A916D8u) goto L_08A916D8;
    return;
L_08A916D8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A916E4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08A916E4u) goto L_08A916E4;
    return;
L_08A916E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91968;
      }
      goto L_08A916EC;
    }
L_08A916EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91968;
      }
      goto L_08A916FC;
    }
L_08A916FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A91968;
      }
      goto L_08A91708;
    }
L_08A91708:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2078)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91968;
      }
      goto L_08A91714;
    }
L_08A91714:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A917E0;
      }
      goto L_08A9174C;
    }
L_08A9174C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A91768;
      }
      goto L_08A9175C;
    }
L_08A9175C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91768u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 683u, 0x088877D0u>(ctx, &aot_mem) && ctx.pc == 0x08A91768u) goto L_08A91768;
    return;
L_08A91768:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91968;
      }
      goto L_08A91790;
    }
L_08A91790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A917C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 572u, 0x08A8EC94u>(ctx, &aot_mem) && ctx.pc == 0x08A917C0u) goto L_08A917C0;
    return;
L_08A917C0:
    ctx.gpr[31] = (0x08A917C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A917C8u) goto L_08A917C8;
    return;
L_08A917C8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08A917D8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A917D8u) goto L_08A917D8;
    return;
L_08A917D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91968;
      }
      goto L_08A917E0;
    }
L_08A917E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2068)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91878;
      }
      goto L_08A917FC;
    }
L_08A917FC:
    ctx.gpr[31] = (0x08A91804u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A91804u) goto L_08A91804;
    return;
L_08A91804:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
        goto L_08A91848;
    }
    goto L_08A9180C;
L_08A9180C:
    ctx.gpr[31] = (0x08A91814u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A91814u) goto L_08A91814;
    return;
L_08A91814:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (14289u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46871u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91878;
      }
      goto L_08A91844;
    }
L_08A91844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    goto L_08A91848;
L_08A91848:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A91968;
      }
      goto L_08A91878;
    }
L_08A91878:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2064)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08A918D8;
      }
      goto L_08A91884;
    }
L_08A91884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2064)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[14];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = ctx.fpr[17] - ctx.fpr[18];
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[19];
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
      if (branch_taken) {
          goto L_08A918E0;
      }
      goto L_08A918D8;
    }
L_08A918D8:
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A918E0;
L_08A918E0:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9195C;
      }
      goto L_08A918F0;
    }
L_08A918F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
        goto L_08A91910;
    }
    goto L_08A91900;
L_08A91900:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A9190Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 683u, 0x088877D0u>(ctx, &aot_mem) && ctx.pc == 0x08A9190Cu) goto L_08A9190C;
    return;
L_08A9190C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    goto L_08A91910;
L_08A91910:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91954u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 572u, 0x08A8EC94u>(ctx, &aot_mem) && ctx.pc == 0x08A91954u) goto L_08A91954;
    return;
L_08A91954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91968;
      }
      goto L_08A9195C;
    }
L_08A9195C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08A91968;
L_08A91968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91970;
    }
L_08A91970:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2073)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91A24;
      }
      goto L_08A9197C;
    }
L_08A9197C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2078)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91A24;
      }
      goto L_08A91988;
    }
L_08A91988:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
        goto L_08A919B0;
    }
    goto L_08A91994;
L_08A91994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
        goto L_08A919B0;
    }
    goto L_08A919A4;
L_08A919A4:
    ctx.gpr[31] = (0x08A919ACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A90928;
L_08A919AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    goto L_08A919B0;
L_08A919B0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2073), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (65535u << 16u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91A00;
      }
      goto L_08A919F4;
    }
L_08A919F4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91A00u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 683u, 0x088877D0u>(ctx, &aot_mem) && ctx.pc == 0x08A91A00u) goto L_08A91A00;
    return;
L_08A91A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91A0C;
    }
L_08A91A0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91A1Cu);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A91A1Cu) goto L_08A91A1C;
    return;
L_08A91A1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91A24;
    }
L_08A91A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91A34;
    }
L_08A91A34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(2072)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91A48;
      }
      goto L_08A91A40;
    }
L_08A91A40:
    ctx.gpr[31] = (0x08A91A48u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    goto L_08A90928;
L_08A91A48:
    ctx.gpr[31] = (0x08A91A50u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A91A50u) goto L_08A91A50;
    return;
L_08A91A50:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91A58;
    }
L_08A91A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91B7C;
      }
      goto L_08A91A64;
    }
L_08A91A64:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91B7C;
      }
      goto L_08A91A70;
    }
L_08A91A70:
    ctx.gpr[31] = (0x08A91A78u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 99u, 0x088A078Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91A78u) goto L_08A91A78;
    return;
L_08A91A78:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91B28;
      }
      goto L_08A91A80;
    }
L_08A91A80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91B00;
      }
      goto L_08A91A90;
    }
L_08A91A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91AD0;
      }
      goto L_08A91AA8;
    }
L_08A91AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91AB8;
    }
L_08A91AB8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91AC8u);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A91AC8u) goto L_08A91AC8;
    return;
L_08A91AC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91AD0;
    }
L_08A91AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x08A91ADCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08A91ADCu) goto L_08A91ADC;
    return;
L_08A91ADC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91AE4;
    }
L_08A91AE4:
    ctx.gpr[31] = (0x08A91AECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A91AECu) goto L_08A91AEC;
    return;
L_08A91AEC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A91AF8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 206u, 0x08944E10u>(ctx, &aot_mem) && ctx.pc == 0x08A91AF8u) goto L_08A91AF8;
    return;
L_08A91AF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91B00;
    }
L_08A91B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91B10;
    }
L_08A91B10:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91B20u);
    ctx.gpr[5] = (0u | 18u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A91B20u) goto L_08A91B20;
    return;
L_08A91B20:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91B28;
    }
L_08A91B28:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1332), 0u);
    ctx.gpr[31] = (0x08A91B34u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x08A91B34u) goto L_08A91B34;
    return;
L_08A91B34:
    ctx.gpr[31] = (0x08A91B3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A91B3Cu) goto L_08A91B3C;
    return;
L_08A91B3C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
        goto L_08A91B60;
    }
    goto L_08A91B48;
L_08A91B48:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
      if (branch_taken) {
          goto L_08A91B68;
      }
      goto L_08A91B60;
    }
L_08A91B60:
    ctx.gpr[4] = (ctx.gpr[4] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    goto L_08A91B68;
L_08A91B68:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A91B74u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08A91B74u) goto L_08A91B74;
    return;
L_08A91B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91B7C;
    }
L_08A91B7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91B8C;
    }
L_08A91B8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91B9C;
    }
L_08A91B9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.gpr[30] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91BAC;
    }
L_08A91BAC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16840u << 16u);
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91BC0;
    }
L_08A91BC0:
    ctx.gpr[22] = (0u | 6u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    ctx.gpr[20] = (2230u << 16u);
    goto L_08A91BD8;
L_08A91BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A91DF0;
      }
      goto L_08A91BE8;
    }
L_08A91BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91C0C;
      }
      goto L_08A91BFC;
    }
L_08A91BFC:
    ctx.gpr[31] = (0x08A91C04u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 837u, 0x089A380Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91C04u) goto L_08A91C04;
    return;
L_08A91C04:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91CC0;
      }
      goto L_08A91C0C;
    }
L_08A91C0C:
    ctx.gpr[31] = (0x08A91C14u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A91C14u) goto L_08A91C14;
    return;
L_08A91C14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91CC0;
      }
      goto L_08A91C1C;
    }
L_08A91C1C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A91C7C;
      }
      goto L_08A91C30;
    }
L_08A91C30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1392)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91C7C;
      }
      goto L_08A91C40;
    }
L_08A91C40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91C7C;
      }
      goto L_08A91C64;
    }
L_08A91C64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1392)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A91C7C;
      }
      goto L_08A91C78;
    }
L_08A91C78:
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    goto L_08A91C7C;
L_08A91C7C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91CB8;
      }
      goto L_08A91C84;
    }
L_08A91C84:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91C94u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A91C94u) goto L_08A91C94;
    return;
L_08A91C94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x08A91CA4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A91CA4u) goto L_08A91CA4;
    return;
L_08A91CA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91CB8;
    }
L_08A91CB8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91DF0;
      }
      goto L_08A91CC0;
    }
L_08A91CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A91DF0;
      }
      goto L_08A91CD0;
    }
L_08A91CD0:
    ctx.gpr[31] = (0x08A91CD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08A91CD8u) goto L_08A91CD8;
    return;
L_08A91CD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91DF0;
      }
      goto L_08A91CE0;
    }
L_08A91CE0:
    ctx.gpr[31] = (0x08A91CE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A91CE8u) goto L_08A91CE8;
    return;
L_08A91CE8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91DF0;
      }
      goto L_08A91CF0;
    }
L_08A91CF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(2100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91DF0;
      }
      goto L_08A91D04;
    }
L_08A91D04:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1828)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91DF0;
      }
      goto L_08A91D14;
    }
L_08A91D14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A91DF0;
      }
      goto L_08A91D24;
    }
L_08A91D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1760)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91DF0;
      }
      goto L_08A91D30;
    }
L_08A91D30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1780)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91DF0;
      }
      goto L_08A91D44;
    }
L_08A91D44:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A91DF0;
      }
      goto L_08A91D78;
    }
L_08A91D78:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A91DA4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x08A91DA4u) goto L_08A91DA4;
    return;
L_08A91DA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91DF0;
      }
      goto L_08A91DAC;
    }
L_08A91DAC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A91DB8u);
    ctx.gpr[5] = (0u | 134u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A91DB8u) goto L_08A91DB8;
    return;
L_08A91DB8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x08A91DC8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A91DC8u) goto L_08A91DC8;
    return;
L_08A91DC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A91DD8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08A91DD8u) goto L_08A91DD8;
    return;
L_08A91DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(2100), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A91E04;
      }
      goto L_08A91DF0;
    }
L_08A91DF0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08A91BD8;
      }
      goto L_08A91E04;
    }
L_08A91E04:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A91E38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-304));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2108)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EA8;
      }
      goto L_08A91E6C;
    }
L_08A91E6C:
    ctx.gpr[31] = (0x08A91E74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A91E74u) goto L_08A91E74;
    return;
L_08A91E74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9230C;
      }
      goto L_08A91E7C;
    }
L_08A91E7C:
    ctx.gpr[31] = (0x08A91E84u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A91E84u) goto L_08A91E84;
    return;
L_08A91E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A91EA8;
      }
      goto L_08A91E90;
    }
L_08A91E90:
    ctx.gpr[31] = (0x08A91E98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A91E98u) goto L_08A91E98;
    return;
L_08A91E98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A9230C;
      }
      goto L_08A91EA8;
    }
L_08A91EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A91EC8;
      }
      goto L_08A91EB8;
    }
L_08A91EB8:
    ctx.gpr[31] = (0x08A91EC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 243u, 0x08841C34u>(ctx, &aot_mem) && ctx.pc == 0x08A91EC0u) goto L_08A91EC0;
    return;
L_08A91EC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92314;
      }
      goto L_08A91EC8;
    }
L_08A91EC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A92314;
      }
      goto L_08A91EFC;
    }
L_08A91EFC:
    ctx.gpr[31] = (0x08A91F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A91F04u) goto L_08A91F04;
    return;
L_08A91F04:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A91F70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A91F70u) goto L_08A91F70;
    return;
L_08A91F70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(116)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A92304;
      }
      goto L_08A91FE4;
    }
L_08A91FE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A92304;
      }
      goto L_08A9200C;
    }
L_08A9200C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9203C;
      }
      goto L_08A92034;
    }
L_08A92034:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A92070;
      }
      goto L_08A9203C;
    }
L_08A9203C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A92070;
L_08A92070:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9209C;
      }
      goto L_08A92094;
    }
L_08A92094:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_08A920D0;
      }
      goto L_08A9209C;
    }
L_08A9209C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / std::sqrt(vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A920D0;
L_08A920D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16204u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A92304;
      }
      goto L_08A92108;
    }
L_08A92108:
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26612)));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[31] = (0x08A9213Cu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 369u, 0x0897572Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9213Cu) goto L_08A9213C;
    return;
L_08A9213C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A92304;
      }
      goto L_08A9214C;
    }
L_08A9214C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92304;
      }
      goto L_08A92158;
    }
L_08A92158:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1176)));
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.execute_vfpu_vx2i(1u, 0u, 1u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 2u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<2u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 2u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 2u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<2u>());
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<34u>());
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A92304;
      }
      goto L_08A921C8;
    }
L_08A921C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[31] = (0x08A921D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 704u, 0x089777A8u>(ctx, &aot_mem) && ctx.pc == 0x08A921D8u) goto L_08A921D8;
    return;
L_08A921D8:
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A92288;
      }
      goto L_08A92218;
    }
L_08A92218:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A92254;
      }
      goto L_08A9223C;
    }
L_08A9223C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A92254;
      }
      goto L_08A9224C;
    }
L_08A9224C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_08A92260;
      }
      goto L_08A92254;
    }
L_08A92254:
    ctx.gpr[31] = (0x08A9225Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08A9225Cu) goto L_08A9225C;
    return;
L_08A9225C:
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[22];
    goto L_08A92260;
L_08A92260:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9226Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08A9226Cu) goto L_08A9226C;
    return;
L_08A9226C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A92280u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 225u, 0x08841B48u>(ctx, &aot_mem) && ctx.pc == 0x08A92280u) goto L_08A92280;
    return;
L_08A92280:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92304;
      }
      goto L_08A92288;
    }
L_08A92288:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A92304;
      }
      goto L_08A9229C;
    }
L_08A9229C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (16329u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A922D8;
      }
      goto L_08A922C0;
    }
L_08A922C0:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A922D8;
      }
      goto L_08A922D0;
    }
L_08A922D0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[22];
      if (branch_taken) {
          goto L_08A922E4;
      }
      goto L_08A922D8;
    }
L_08A922D8:
    ctx.gpr[31] = (0x08A922E0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08A922E0u) goto L_08A922E0;
    return;
L_08A922E0:
    ctx.fpr[20] = ctx.fpr[0] - ctx.fpr[22];
    goto L_08A922E4;
L_08A922E4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A922F0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08A922F0u) goto L_08A922F0;
    return;
L_08A922F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2108)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A92304u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 225u, 0x08841B48u>(ctx, &aot_mem) && ctx.pc == 0x08A92304u) goto L_08A92304;
    return;
L_08A92304:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92314;
      }
      goto L_08A9230C;
    }
L_08A9230C:
    ctx.gpr[31] = (0x08A92314u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A90928;
L_08A92314:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92338:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25428)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25424)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(25452)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(25432), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(25440), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(25436), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(25444), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(25448), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(25456), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A923CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(17168));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A923ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20560));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A923ECu) goto L_08A923EC;
    return;
L_08A923EC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (ctx.gpr[7] + ctx.gpr[16]);
    goto L_08A92414;
L_08A92414:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), 0u);
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
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A92414;
      }
      goto L_08A92444;
    }
L_08A92444:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5832), 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9245C:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(17168));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5832), 0u);
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7868)));
    goto L_08A92480;
L_08A92480:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A924C0;
      }
      goto L_08A9248C;
    }
L_08A9248C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (ctx.gpr[9] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A924A8;
      }
      goto L_08A9249C;
    }
L_08A9249C:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A924B0;
      }
      goto L_08A924A8;
    }
L_08A924A8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), 0u);
    goto L_08A924B0;
L_08A924B0:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A924C0;
      }
      goto L_08A924BC;
    }
L_08A924BC:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08A924C0;
L_08A924C0:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A92480;
      }
      goto L_08A924D0;
    }
L_08A924D0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A924D8:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17168));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[10] = (ctx.gpr[5] | 0u);
    goto L_08A924EC;
L_08A924EC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9254C;
      }
      goto L_08A924F8;
    }
L_08A924F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9254C;
      }
      goto L_08A92510;
    }
L_08A92510:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(20)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9254C;
      }
      goto L_08A92528;
    }
L_08A92528:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A9254C;
      }
      goto L_08A92540;
    }
L_08A92540:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92564;
      }
      goto L_08A9254C;
    }
L_08A9254C:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[8]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A924EC;
      }
      goto L_08A9255C;
    }
L_08A9255C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92578;
      }
      goto L_08A92564;
    }
L_08A92564:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9261C;
      }
      goto L_08A92578;
    }
L_08A92578:
    ctx.gpr[9] = (2230u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(-5832)));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[10] = (ctx.gpr[8] << 4u);
      if (branch_taken) {
          goto L_08A925BC;
      }
      goto L_08A9258C;
    }
L_08A9258C:
    ctx.gpr[2] = (ctx.gpr[10] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[5]);
    goto L_08A92598;
L_08A92598:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A925AC;
      }
      goto L_08A925A4;
    }
L_08A925A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-5832), ctx.gpr[8]);
      if (branch_taken) {
          goto L_08A925BC;
      }
      goto L_08A925AC;
    }
L_08A925AC:
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[8]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A92598;
      }
      goto L_08A925BC;
    }
L_08A925BC:
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9261C;
      }
      goto L_08A925C4;
    }
L_08A925C4:
    ctx.gpr[8] = (ctx.gpr[8] << 4u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[10] = (2230u << 16u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[10] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[9] + ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A92618;
      }
      goto L_08A9260C;
    }
L_08A9260C:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A9261C;
      }
      goto L_08A92618;
    }
L_08A92618:
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(36), 0u);
    goto L_08A9261C;
L_08A9261C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92624:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(17168));
    goto L_08A92630;
L_08A92630:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A92654;
      }
      goto L_08A9263C;
    }
L_08A9263C:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[7]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A92630;
      }
      goto L_08A9264C;
    }
L_08A9264C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A9265C;
      }
      goto L_08A92654;
    }
L_08A92654:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[2] = (0u | 1u);
    goto L_08A9265C;
L_08A9265C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92664:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[9] = (2269u << 16u);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(17168));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[3] = (ctx.gpr[9] + static_cast<std::uint32_t>(16));
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[3]);
    ctx.gpr[11] = (ctx.gpr[5] | 0u);
    ctx.gpr[3] = (17008u << 16u);
    ctx.gpr[2] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    goto L_08A92698;
L_08A92698:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A926EC;
      }
      goto L_08A926A4;
    }
L_08A926A4:
    { const std::uint32_t vfpu_address = ctx.gpr[11] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[3] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A926EC;
      }
      goto L_08A926E0;
    }
L_08A926E0:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[10]);
    goto L_08A926EC;
L_08A926EC:
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[10]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A92698;
      }
      goto L_08A92700;
    }
L_08A92700:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92708:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(17168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A92738;
      }
      goto L_08A92730;
    }
L_08A92730:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08A92738;
L_08A92738:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92740:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[22] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(17168));
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[23] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A927AC;
      }
      goto L_08A92794;
    }
L_08A92794:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A927E0;
      }
      goto L_08A9279C;
    }
L_08A9279C:
    ctx.gpr[31] = (0x08A927A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 569u, 0x08A06CA0u>(ctx, &aot_mem) && ctx.pc == 0x08A927A4u) goto L_08A927A4;
    return;
L_08A927A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A927F0;
      }
      goto L_08A927AC;
    }
L_08A927AC:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A927D0;
      }
      goto L_08A927B8;
    }
L_08A927B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A927E0;
      }
      goto L_08A927C0;
    }
L_08A927C0:
    ctx.gpr[31] = (0x08A927C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 577u, 0x08A06D30u>(ctx, &aot_mem) && ctx.pc == 0x08A927C8u) goto L_08A927C8;
    return;
L_08A927C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A927F0;
      }
      goto L_08A927D0;
    }
L_08A927D0:
    ctx.gpr[31] = (0x08A927D8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 573u, 0x08A06CE8u>(ctx, &aot_mem) && ctx.pc == 0x08A927D8u) goto L_08A927D8;
    return;
L_08A927D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A927F0;
      }
      goto L_08A927E0;
    }
L_08A927E0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08A927F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20512));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 534u, 0x08AFA558u>(ctx, &aot_mem) && ctx.pc == 0x08A927F0u) goto L_08A927F0;
    return;
L_08A927F0:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08A92800;
L_08A92800:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92854;
      }
      goto L_08A92808;
    }
L_08A92808:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92854;
      }
      goto L_08A92810;
    }
L_08A92810:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08A92844;
      }
      goto L_08A9281C;
    }
L_08A9281C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08A92844;
      }
      goto L_08A92828;
    }
L_08A92828:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A92844;
      }
      goto L_08A92834;
    }
L_08A92834:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(32), ctx.gpr[6]);
    goto L_08A92844;
L_08A92844:
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 64 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A92800;
      }
      goto L_08A92854;
    }
L_08A92854:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9294C;
      }
      goto L_08A9285C;
    }
L_08A9285C:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-5832)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
      if (branch_taken) {
          goto L_08A928A0;
      }
      goto L_08A92870;
    }
L_08A92870:
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[22]);
    goto L_08A9287C;
L_08A9287C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92890;
      }
      goto L_08A92888;
    }
L_08A92888:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-5832), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A928A0;
      }
      goto L_08A92890;
    }
L_08A92890:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 64 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08A9287C;
      }
      goto L_08A928A0;
    }
L_08A928A0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A92920;
      }
      goto L_08A928A8;
    }
L_08A928A8:
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(12), ctx.gpr[19]);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92904;
      }
      goto L_08A928F0;
    }
L_08A928F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(12));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08A92904u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08A92904u) goto L_08A92904;
    return;
L_08A92904:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A9291C;
      }
      goto L_08A92910;
    }
L_08A92910:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A92920;
      }
      goto L_08A9291C;
    }
L_08A9291C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), 0u);
    goto L_08A92920;
L_08A92920:
    ctx.gpr[31] = (0x08A92928u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A92928u) goto L_08A92928;
    return;
L_08A92928:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A9294C;
      }
      goto L_08A92930;
    }
L_08A92930:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A9294C;
      }
      goto L_08A9293C;
    }
L_08A9293C:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A9294Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08A92978;
L_08A9294C:
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
L_08A92978:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(18) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_08A92A44;
      }
      goto L_08A929B4;
    }
L_08A929B4:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-20448)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A929CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 7u);
      if (branch_taken) {
          goto L_08A92A48;
      }
      goto L_08A929D4;
    }
L_08A929D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 4u);
      if (branch_taken) {
          goto L_08A92A48;
      }
      goto L_08A929DC;
    }
L_08A929DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 5u);
      if (branch_taken) {
          goto L_08A92A48;
      }
      goto L_08A929E4;
    }
L_08A929E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 6u);
      if (branch_taken) {
          goto L_08A92A48;
      }
      goto L_08A929EC;
    }
L_08A929EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A92A48;
      }
      goto L_08A929F4;
    }
L_08A929F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 3u);
      if (branch_taken) {
          goto L_08A92A48;
      }
      goto L_08A929FC;
    }
L_08A929FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A92A48;
      }
      goto L_08A92A04;
    }
L_08A92A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 10u);
      if (branch_taken) {
          goto L_08A92A48;
      }
      goto L_08A92A0C;
    }
L_08A92A0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 11u);
      if (branch_taken) {
          goto L_08A92A48;
      }
      goto L_08A92A14;
    }
L_08A92A14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 13u);
      if (branch_taken) {
          goto L_08A92A48;
      }
      goto L_08A92A1C;
    }
L_08A92A1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 14u);
      if (branch_taken) {
          goto L_08A92A48;
      }
      goto L_08A92A24;
    }
L_08A92A24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 15u);
      if (branch_taken) {
          goto L_08A92A48;
      }
      goto L_08A92A2C;
    }
L_08A92A2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 17u);
      if (branch_taken) {
          goto L_08A92A48;
      }
      goto L_08A92A34;
    }
L_08A92A34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 18u);
      if (branch_taken) {
          goto L_08A92A48;
      }
      goto L_08A92A3C;
    }
L_08A92A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 19u);
      if (branch_taken) {
          goto L_08A92A48;
      }
      goto L_08A92A44;
    }
L_08A92A44:
    ctx.gpr[19] = (0u | 0u);
    goto L_08A92A48;
L_08A92A48:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A92B0C;
      }
      goto L_08A92A50;
    }
L_08A92A50:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A92A5Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 142u, 0x0899D2FCu>(ctx, &aot_mem) && ctx.pc == 0x08A92A5Cu) goto L_08A92A5C;
    return;
L_08A92A5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92B0C;
      }
      goto L_08A92A64;
    }
L_08A92A64:
    ctx.gpr[31] = (0x08A92A6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A92A6Cu) goto L_08A92A6C;
    return;
L_08A92A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A92B0C;
      }
      goto L_08A92A78;
    }
L_08A92A78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92B0C;
      }
      goto L_08A92A88;
    }
L_08A92A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A92B04;
      }
      goto L_08A92AA8;
    }
L_08A92AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A92B04;
      }
      goto L_08A92AB8;
    }
L_08A92AB8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 4000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A92AD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-20460));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x08A92AD0u) goto L_08A92AD0;
    return;
L_08A92AD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(50));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    goto L_08A92B04;
L_08A92B04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92C30;
      }
      goto L_08A92B0C;
    }
L_08A92B0C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92C30;
      }
      goto L_08A92B14;
    }
L_08A92B14:
    ctx.gpr[31] = (0x08A92B1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A92B1Cu) goto L_08A92B1C;
    return;
L_08A92B1C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A92B38u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A92B38u) goto L_08A92B38;
    return;
L_08A92B38:
    ctx.gpr[4] = (16736u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A92B48u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 429u, 0x08ACDABCu>(ctx, &aot_mem) && ctx.pc == 0x08A92B48u) goto L_08A92B48;
    return;
L_08A92B48:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 4u);
      if (branch_taken) {
          goto L_08A92B8C;
      }
      goto L_08A92B50;
    }
L_08A92B50:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A92B80;
      }
      goto L_08A92B58;
    }
L_08A92B58:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A92B80;
      }
      goto L_08A92B64;
    }
L_08A92B64:
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A92B80;
      }
      goto L_08A92B70;
    }
L_08A92B70:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A92BC8;
      }
      goto L_08A92B7C;
    }
L_08A92B7C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08A92B80;
L_08A92B80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29194)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92BC8;
      }
      goto L_08A92B8C;
    }
L_08A92B8C:
    ctx.gpr[31] = (0x08A92B94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A92B94u) goto L_08A92B94;
    return;
L_08A92B94:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A92BACu);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 293u, 0x08ACD308u>(ctx, &aot_mem) && ctx.pc == 0x08A92BACu) goto L_08A92BAC;
    return;
L_08A92BAC:
    ctx.gpr[31] = (0x08A92BB4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A92BB4u) goto L_08A92BB4;
    return;
L_08A92BB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A92BC0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 206u, 0x08944E10u>(ctx, &aot_mem) && ctx.pc == 0x08A92BC0u) goto L_08A92BC0;
    return;
L_08A92BC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92BE8;
      }
      goto L_08A92BC8;
    }
L_08A92BC8:
    ctx.gpr[31] = (0x08A92BD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A92BD0u) goto L_08A92BD0;
    return;
L_08A92BD0:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(2064));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A92BE8u);
    ctx.gpr[8] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 289u, 0x08ACD2A4u>(ctx, &aot_mem) && ctx.pc == 0x08A92BE8u) goto L_08A92BE8;
    return;
L_08A92BE8:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A92C08;
      }
      goto L_08A92BF4;
    }
L_08A92BF4:
    ctx.gpr[31] = (0x08A92BFCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A92BFCu) goto L_08A92BFC;
    return;
L_08A92BFC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A92C08u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 206u, 0x08944E10u>(ctx, &aot_mem) && ctx.pc == 0x08A92C08u) goto L_08A92C08;
    return;
L_08A92C08:
    ctx.gpr[4] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 18u);
      if (branch_taken) {
          goto L_08A92C1C;
      }
      goto L_08A92C14;
    }
L_08A92C14:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A92C30;
      }
      goto L_08A92C1C;
    }
L_08A92C1C:
    ctx.gpr[31] = (0x08A92C24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A92C24u) goto L_08A92C24;
    return;
L_08A92C24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A92C30u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 206u, 0x08944E10u>(ctx, &aot_mem) && ctx.pc == 0x08A92C30u) goto L_08A92C30;
    return;
L_08A92C30:
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
L_08A92C54:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25500)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25496)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(25504), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(25512), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(25508), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(25516), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(25520), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92CCC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25532)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(25528)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.gpr[8] = (2229u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(25536), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(25544), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(25540), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(25548), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(25552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92D44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[31]);
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
    ctx.execute_vfpu_vdot_ct<4u, 0u, 1u, 4u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<4u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A92D84;
      }
      goto L_08A92D80;
    }
L_08A92D80:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A92D84;
L_08A92D84:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A92DE8;
      }
      goto L_08A92DBC;
    }
L_08A92DBC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
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
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A92DEC;
      }
      goto L_08A92DE8;
    }
L_08A92DE8:
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A92DEC;
L_08A92DEC:
    ctx.gpr[31] = (0x08A92DF4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x08A92DF4u) goto L_08A92DF4;
    return;
L_08A92DF4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25564)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(25560)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A92E0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x08A92E0Cu) goto L_08A92E0C;
    return;
L_08A92E0C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x08A92E18u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x08A92E18u) goto L_08A92E18;
    return;
L_08A92E18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92E2C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    ctx.execute_vfpu_vf2h(64u, 0u, 2u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<64u>());
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[5]));
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92E90:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]));
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[6]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92EB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A92F00u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_08A92F78;
L_08A92F00:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92F14:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92F34:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26512)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A92F6C;
      }
      goto L_08A92F60;
    }
L_08A92F60:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08A92F6Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08A92F6Cu) goto L_08A92F6C;
    return;
L_08A92F6C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A92F78:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26512)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(20));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A92FC4;
      }
      goto L_08A92FB8;
    }
L_08A92FB8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A92FC4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 131u, 0x089C8AF4u>(ctx, &aot_mem) && ctx.pc == 0x08A92FC4u) goto L_08A92FC4;
    return;
L_08A92FC4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A92FD8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08A92FD8u) goto L_08A92FD8;
    return;
L_08A92FD8:
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
L_08A92FF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A93030;
      }
      goto L_08A93014;
    }
L_08A93014:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[8];
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A9305C;
      }
      goto L_08A93028;
    }
L_08A93028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93038;
      }
      goto L_08A93030;
    }
L_08A93030:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A93198;
      }
      goto L_08A93038;
    }
L_08A93038:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 2u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9307C;
      }
      goto L_08A93050;
    }
L_08A93050:
    ctx.gpr[7] = (0u | 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A93084;
      }
      goto L_08A9305C;
    }
L_08A9305C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A93074u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A93494;
L_08A93074:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A93198;
      }
      goto L_08A9307C;
    }
L_08A9307C:
    ctx.gpr[7] = (0u | 10u);
    ctx.gpr[9] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    goto L_08A93084;
L_08A93084:
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2))))));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[8])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[8] = (ctx.lo);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    goto L_08A930A0;
L_08A930A0:
    ctx.gpr[2] = (ctx.gpr[10] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[2]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[2] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A93154;
      }
      goto L_08A930C4;
    }
L_08A930C4:
    ctx.gpr[6] = (ctx.gpr[10] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A93140;
      }
      goto L_08A930EC;
    }
L_08A930EC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93124;
      }
      goto L_08A93104;
    }
L_08A93104:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 2u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A9313C;
      }
      goto L_08A9311C;
    }
L_08A9311C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A93140;
      }
      goto L_08A93124;
    }
L_08A93124:
    ctx.gpr[31] = (0x08A9312Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A93494;
L_08A9312C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A93198;
      }
      goto L_08A9313C;
    }
L_08A9313C:
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    goto L_08A93140;
L_08A93140:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
      if (branch_taken) {
          goto L_08A930A0;
      }
      goto L_08A93154;
    }
L_08A93154:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[9] - ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A93194u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A93494;
L_08A93194:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A93198;
L_08A93198:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A931A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A931F8;
      }
      goto L_08A931F4;
    }
L_08A931F4:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_08A931F8;
L_08A931F8:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A93294;
      }
      goto L_08A93208;
    }
L_08A93208:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[8] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (0u < ctx.gpr[8] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[5] << 3u);
      if (branch_taken) {
          goto L_08A9323C;
      }
      goto L_08A9322C;
    }
L_08A9322C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A9324C;
      }
      goto L_08A9323C;
    }
L_08A9323C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08A9324C;
L_08A9324C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93294;
      }
      goto L_08A93268;
    }
L_08A93268:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A93274u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    goto L_08A92E90;
L_08A93274:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A93294;
L_08A93294:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A932A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 16u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A93310;
      }
      goto L_08A9330C;
    }
L_08A9330C:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    goto L_08A93310;
L_08A93310:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A93460;
      }
      goto L_08A93320;
    }
L_08A93320:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A93374;
      }
      goto L_08A93360;
    }
L_08A93360:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93374;
      }
      goto L_08A93374;
    }
L_08A93374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A93460;
      }
      goto L_08A93390;
    }
L_08A93390:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(10));
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(10));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A933A8u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    goto L_08A92E2C;
L_08A933A8:
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(98));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(12));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(12));
    ctx.gpr[31] = (0x08A933BCu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    goto L_08A92E2C;
L_08A933BC:
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(100));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(14));
    ctx.gpr[6] = (ctx.gpr[18] + static_cast<std::uint32_t>(14));
    ctx.gpr[31] = (0x08A933D0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    goto L_08A92E2C;
L_08A933D0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[19] = (rt.memory().aot_load_word_right(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[19]));
    ctx.gpr[19] = (rt.memory().aot_load_word_left(ctx.gpr[4] + static_cast<std::uint32_t>(3), ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[19]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A93418u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08A92E90;
L_08A93418:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
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
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A93460;
L_08A93460:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A93494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A935BC;
      }
      goto L_08A934B4;
    }
L_08A934B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[7]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(2)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[7]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[7]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(6)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(2)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(6)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.execute_vfpu_vh2f(0u, 0u, 1u);
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A935BCu);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    goto L_08A92D44;
L_08A935BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A935C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.set_vfpu_scalar_bits_ct<24u>(ctx.gpr[16]);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(0));
    { float vfpu_value[4]{};
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<28u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<28u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[15] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[24] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[24] + static_cast<std::uint32_t>(4)));
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[13]);
    ctx.gpr[15] = (ctx.gpr[15] + ctx.gpr[13]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(8)));
    ctx.gpr[25] = (aot_mem.aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[3] & 1u);
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08A9371C;
      }
      goto L_08A93614;
    }
L_08A93614:
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(12)));
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<0u, 28u, 1u, 7u>();
    if (((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u) {
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<0u>());
        goto L_08A9371C;
    }
    goto L_08A93628;
L_08A93628:
    ctx.gpr[14] = (aot_mem.aot_load16(ctx.gpr[24] + static_cast<std::uint32_t>(2)));
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[14]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[8] = (ctx.gpr[25] & 2u);
      if (branch_taken) {
          goto L_08A9371C;
      }
      goto L_08A93638;
    }
L_08A93638:
    if (ctx.gpr[8] == 0u) {
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(10));
        goto L_08A93644;
    }
    goto L_08A93640;
L_08A93640:
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(16));
    goto L_08A93644;
L_08A93644:
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[14])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[14] = (ctx.lo);
    ctx.gpr[14] = (ctx.gpr[14] + ctx.gpr[13]);
    ctx.gpr[15] = (ctx.gpr[12] | 0u);
    goto L_08A93654;
L_08A93654:
    ctx.gpr[12] = (ctx.gpr[12] + ctx.gpr[16]);
    if (ctx.gpr[12] != ctx.gpr[14]) {
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
        goto L_08A93684;
    }
    goto L_08A93660;
L_08A93660:
    ctx.gpr[9] = (ctx.gpr[3] & 2u);
    if (ctx.gpr[9] != 0u) {
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[13] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
        goto L_08A9367C;
    }
    goto L_08A9366C;
L_08A9366C:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<28u>());
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[12] = (ctx.gpr[12] - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A9370C;
      }
      goto L_08A9367C;
    }
L_08A9367C:
    ctx.gpr[12] = (ctx.gpr[13] | 0u);
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(1));
    goto L_08A93684;
L_08A93684:
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(11), ctx.gpr[8]));
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f(1u, 32u, 1u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vcmp_ct<0u, 28u, 1u, 2u>();
    if (((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u) {
    ctx.gpr[15] = (ctx.gpr[12] | 0u);
        goto L_08A93654;
    }
    goto L_08A936A0;
L_08A936A0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.vfpu_scalar_bits_ct<0u>());
    ctx.gpr[8] = (ctx.gpr[25] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
      if (branch_taken) {
          goto L_08A9370C;
      }
      goto L_08A936B0;
    }
L_08A936B0:
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<16u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<48u>(ctx.gpr[9]);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<80u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<112u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f(1u, 16u, 2u);
    ctx.execute_vfpu_vh2f(2u, 80u, 2u);
    ctx.execute_vfpu_vdot_ct<16u, 1u, 2u, 4u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<16u, 1u>(vfpu_d); }
    ctx.execute_vfpu_vocp(16u, 16u, 1u);
    ctx.execute_vfpu_vcmp_ct<16u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_d); }
      if (branch_taken) {
          goto L_08A93704;
      }
      goto L_08A93700;
    }
L_08A93700:
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<48u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<48u, 1u>(vfpu_d); }
    goto L_08A93704;
L_08A93704:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.vfpu_scalar_bits_ct<16u>());
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.vfpu_scalar_bits_ct<48u>());
    goto L_08A9370C;
L_08A9370C:
    ctx.gpr[8] = (ctx.gpr[12] - ctx.gpr[13]);
    ctx.gpr[9] = (ctx.gpr[15] - ctx.gpr[13]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[9]);
    goto L_08A9371C;
L_08A9371C:
    ctx.set_vfpu_scalar_bits_ct<12u>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (ctx.gpr[3] & 16u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A93734;
      }
      goto L_08A9372C;
    }
L_08A9372C:
    ctx.set_vfpu_scalar_bits_ct<44u>(ctx.gpr[8]);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<12u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<44u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<12u, 1u>(vfpu_d); }
    goto L_08A93734;
L_08A93734:
    ctx.execute_vfpu_vcmp_ct<12u, 28u, 1u, 7u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93760;
      }
      goto L_08A93740;
    }
L_08A93740:
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(8), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(11), ctx.gpr[8]));
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
    ctx.execute_vfpu_vh2f(20u, 32u, 1u);
    ctx.execute_vfpu_vcmp_ct<20u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<52u, 1u>(vfpu_d); }
      if (branch_taken) {
          goto L_08A93760;
      }
      goto L_08A9375C;
    }
L_08A9375C:
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<52u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] / vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<20u, 1u>(vfpu_d); }
    goto L_08A93760;
L_08A93760:
    ctx.gpr[8] = (ctx.gpr[25] & 2u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A937B0;
      }
      goto L_08A9376C;
    }
L_08A9376C:
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(10), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(13), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[15] + static_cast<std::uint32_t>(14)));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[9]);
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(10), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(13), ctx.gpr[8]));
    ctx.gpr[9] = (aot_mem.aot_load16(ctx.gpr[12] + static_cast<std::uint32_t>(14)));
    ctx.set_vfpu_scalar_bits_ct<64u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<96u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
    ctx.execute_vfpu_vh2f(2u, 64u, 2u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<2u, 2u, 20u, 3u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 3u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<1u, 1u, 12u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A937B0;
L_08A937B0:
    ctx.gpr[8] = (ctx.gpr[25] & 1u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9382C;
      }
      goto L_08A937BC;
    }
L_08A937BC:
    ctx.set_vfpu_scalar_bits_ct<16u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_vfpu_scalar_bits_ct<48u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[15] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[15] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[9]);
    ctx.execute_vfpu_vcmp_ct<16u, 28u, 1u, 1u>();
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 0u) & 1u) != 0u;
    ctx.execute_vfpu_vh2f(1u, 0u, 2u);
      if (branch_taken) {
          goto L_08A93824;
      }
      goto L_08A937E8;
    }
L_08A937E8:
    ctx.gpr[8] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(0), ctx.gpr[8]));
    ctx.gpr[8] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(3), ctx.gpr[8]));
    ctx.gpr[9] = (rt.memory().aot_load_word_right(ctx.gpr[12] + static_cast<std::uint32_t>(4), ctx.gpr[9]));
    ctx.gpr[9] = (rt.memory().aot_load_word_left(ctx.gpr[12] + static_cast<std::uint32_t>(7), ctx.gpr[9]));
    ctx.set_vfpu_scalar_bits_ct<64u>(ctx.gpr[8]);
    ctx.set_vfpu_scalar_bits_ct<96u>(ctx.gpr[9]);
    ctx.execute_vfpu_vh2f(2u, 64u, 2u);
    ctx.execute_vfpu_vocp(52u, 20u, 1u);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<20u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<4u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<16u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<52u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<36u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<4u, 2u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 2u; ++i) vfpu_d[i] = std::sin(vfpu_s[i] * 1.57079632679489661923f);
      ctx.write_vfpu_vector_with_destination_prefix_ct<8u, 2u>(vfpu_d); }
    ctx.execute_vfpu_vscl_ct<4u, 8u, 48u, 2u>();
    ctx.execute_vfpu_vscl_ct<2u, 2u, 4u, 4u>();
    ctx.execute_vfpu_vscl_ct<1u, 1u, 36u, 4u>();
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 4u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<2u, 4u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 4u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 4u>(vfpu_d); }
    goto L_08A93824;
L_08A93824:
    ctx.execute_vfpu_vscl_ct<1u, 1u, 12u, 4u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<1u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_08A9382C;
L_08A9382C:
    ctx.gpr[16] = (ctx.vfpu_scalar_bits_ct<24u>());
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A9383C:
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
L_08A93868:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08A938EC;
      }
      goto L_08A93880;
    }
L_08A93880:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[7])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (ctx.lo);
    goto L_08A93890;
L_08A93890:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
        goto L_08A938B0;
    }
    goto L_08A938A8;
L_08A938A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08A938B4;
      }
      goto L_08A938B0;
    }
L_08A938B0:
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    goto L_08A938B4;
L_08A938B4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A938D8;
      }
      goto L_08A938BC;
    }
L_08A938BC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11468)));
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[11] + ctx.gpr[10]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(636), ctx.gpr[10]);
    goto L_08A938D8;
L_08A938D8:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3248));
      if (branch_taken) {
          goto L_08A93890;
      }
      goto L_08A938EC;
    }
L_08A938EC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A938F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A93944;
      }
      goto L_08A93918;
    }
L_08A93918:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A93924u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93924u) goto L_08A93924;
    return;
L_08A93924:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A9393C;
      }
      goto L_08A93930;
    }
L_08A93930:
    ctx.gpr[31] = (0x08A93938u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A93938u) goto L_08A93938;
    return;
L_08A93938:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A9393C;
L_08A9393C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A93944;
L_08A93944:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A93950u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20376));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A93950u) goto L_08A93950;
    return;
L_08A93950:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A93968u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A93968u) goto L_08A93968;
    return;
L_08A93968:
    ctx.gpr[4] = (0u | 259u);
    ctx.gpr[31] = (0x08A93974u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93974u) goto L_08A93974;
    return;
L_08A93974:
    ctx.gpr[4] = (0u | 263u);
    ctx.gpr[31] = (0x08A93980u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93980u) goto L_08A93980;
    return;
L_08A93980:
    ctx.gpr[4] = (0u | 272u);
    ctx.gpr[31] = (0x08A9398Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A9398Cu) goto L_08A9398C;
    return;
L_08A9398C:
    ctx.gpr[4] = (0u | 274u);
    ctx.gpr[31] = (0x08A93998u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93998u) goto L_08A93998;
    return;
L_08A93998:
    ctx.gpr[4] = (0u | 277u);
    ctx.gpr[31] = (0x08A939A4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A939A4u) goto L_08A939A4;
    return;
L_08A939A4:
    ctx.gpr[4] = (0u | 281u);
    ctx.gpr[31] = (0x08A939B0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A939B0u) goto L_08A939B0;
    return;
L_08A939B0:
    ctx.gpr[4] = (0u | 276u);
    ctx.gpr[31] = (0x08A939BCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A939BCu) goto L_08A939BC;
    return;
L_08A939BC:
    ctx.gpr[4] = (0u | 285u);
    ctx.gpr[31] = (0x08A939C8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A939C8u) goto L_08A939C8;
    return;
L_08A939C8:
    ctx.gpr[4] = (0u | 288u);
    ctx.gpr[31] = (0x08A939D4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A939D4u) goto L_08A939D4;
    return;
L_08A939D4:
    ctx.gpr[31] = (0x08A939DCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08A939DCu) goto L_08A939DC;
    return;
L_08A939DC:
    ctx.gpr[31] = (0x08A939E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A939E4u) goto L_08A939E4;
    return;
L_08A939E4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A939F8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A939F8u) goto L_08A939F8;
    return;
L_08A939F8:
    ctx.gpr[31] = (0x08A93A00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93A00u) goto L_08A93A00;
    return;
L_08A93A00:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08A93A14u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93A14u) goto L_08A93A14;
    return;
L_08A93A14:
    ctx.gpr[31] = (0x08A93A1Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93A1Cu) goto L_08A93A1C;
    return;
L_08A93A1C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08A93A30u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93A30u) goto L_08A93A30;
    return;
L_08A93A30:
    ctx.gpr[31] = (0x08A93A38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93A38u) goto L_08A93A38;
    return;
L_08A93A38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08A93A4Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93A4Cu) goto L_08A93A4C;
    return;
L_08A93A4C:
    ctx.gpr[31] = (0x08A93A54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93A54u) goto L_08A93A54;
    return;
L_08A93A54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 19u);
    ctx.gpr[6] = (0u | 50u);
    ctx.gpr[31] = (0x08A93A68u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93A68u) goto L_08A93A68;
    return;
L_08A93A68:
    ctx.gpr[31] = (0x08A93A70u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93A70u) goto L_08A93A70;
    return;
L_08A93A70:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[31] = (0x08A93A84u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93A84u) goto L_08A93A84;
    return;
L_08A93A84:
    ctx.gpr[31] = (0x08A93A8Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93A8Cu) goto L_08A93A8C;
    return;
L_08A93A8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 27u);
    ctx.gpr[6] = (0u | 120u);
    ctx.gpr[31] = (0x08A93AA0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93AA0u) goto L_08A93AA0;
    return;
L_08A93AA0:
    ctx.gpr[31] = (0x08A93AA8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93AA8u) goto L_08A93AA8;
    return;
L_08A93AA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (0u | 25u);
    ctx.gpr[31] = (0x08A93ABCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93ABCu) goto L_08A93ABC;
    return;
L_08A93ABC:
    ctx.gpr[31] = (0x08A93AC4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93AC4u) goto L_08A93AC4;
    return;
L_08A93AC4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 31u);
    ctx.gpr[6] = (0u | 250u);
    ctx.gpr[31] = (0x08A93AD8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93AD8u) goto L_08A93AD8;
    return;
L_08A93AD8:
    ctx.gpr[31] = (0x08A93AE0u);
    ctx.gpr[4] = (0u | 259u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93AE0u) goto L_08A93AE0;
    return;
L_08A93AE0:
    ctx.gpr[31] = (0x08A93AE8u);
    ctx.gpr[4] = (0u | 274u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93AE8u) goto L_08A93AE8;
    return;
L_08A93AE8:
    ctx.gpr[31] = (0x08A93AF0u);
    ctx.gpr[4] = (0u | 281u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93AF0u) goto L_08A93AF0;
    return;
L_08A93AF0:
    ctx.gpr[31] = (0x08A93AF8u);
    ctx.gpr[4] = (0u | 263u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93AF8u) goto L_08A93AF8;
    return;
L_08A93AF8:
    ctx.gpr[31] = (0x08A93B00u);
    ctx.gpr[4] = (0u | 272u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93B00u) goto L_08A93B00;
    return;
L_08A93B00:
    ctx.gpr[31] = (0x08A93B08u);
    ctx.gpr[4] = (0u | 277u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93B08u) goto L_08A93B08;
    return;
L_08A93B08:
    ctx.gpr[31] = (0x08A93B10u);
    ctx.gpr[4] = (0u | 276u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93B10u) goto L_08A93B10;
    return;
L_08A93B10:
    ctx.gpr[31] = (0x08A93B18u);
    ctx.gpr[4] = (0u | 285u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93B18u) goto L_08A93B18;
    return;
L_08A93B18:
    ctx.gpr[31] = (0x08A93B20u);
    ctx.gpr[4] = (0u | 288u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93B20u) goto L_08A93B20;
    return;
L_08A93B20:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A93B50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A93BA0;
      }
      goto L_08A93B74;
    }
L_08A93B74:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A93B80u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93B80u) goto L_08A93B80;
    return;
L_08A93B80:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93B98;
      }
      goto L_08A93B8C;
    }
L_08A93B8C:
    ctx.gpr[31] = (0x08A93B94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A93B94u) goto L_08A93B94;
    return;
L_08A93B94:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A93B98;
L_08A93B98:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A93BA0;
L_08A93BA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A93BACu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20376));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A93BACu) goto L_08A93BAC;
    return;
L_08A93BAC:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A93BC4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A93BC4u) goto L_08A93BC4;
    return;
L_08A93BC4:
    ctx.gpr[4] = (0u | 268u);
    ctx.gpr[31] = (0x08A93BD0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93BD0u) goto L_08A93BD0;
    return;
L_08A93BD0:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[31] = (0x08A93BDCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93BDCu) goto L_08A93BDC;
    return;
L_08A93BDC:
    ctx.gpr[4] = (0u | 291u);
    ctx.gpr[31] = (0x08A93BE8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93BE8u) goto L_08A93BE8;
    return;
L_08A93BE8:
    ctx.gpr[4] = (0u | 275u);
    ctx.gpr[31] = (0x08A93BF4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93BF4u) goto L_08A93BF4;
    return;
L_08A93BF4:
    ctx.gpr[4] = (0u | 279u);
    ctx.gpr[31] = (0x08A93C00u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93C00u) goto L_08A93C00;
    return;
L_08A93C00:
    ctx.gpr[4] = (0u | 283u);
    ctx.gpr[31] = (0x08A93C0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93C0Cu) goto L_08A93C0C;
    return;
L_08A93C0C:
    ctx.gpr[4] = (0u | 280u);
    ctx.gpr[31] = (0x08A93C18u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93C18u) goto L_08A93C18;
    return;
L_08A93C18:
    ctx.gpr[4] = (0u | 286u);
    ctx.gpr[31] = (0x08A93C24u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93C24u) goto L_08A93C24;
    return;
L_08A93C24:
    ctx.gpr[4] = (0u | 287u);
    ctx.gpr[31] = (0x08A93C30u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93C30u) goto L_08A93C30;
    return;
L_08A93C30:
    ctx.gpr[31] = (0x08A93C38u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08A93C38u) goto L_08A93C38;
    return;
L_08A93C38:
    ctx.gpr[31] = (0x08A93C40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93C40u) goto L_08A93C40;
    return;
L_08A93C40:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A93C54u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93C54u) goto L_08A93C54;
    return;
L_08A93C54:
    ctx.gpr[31] = (0x08A93C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93C5Cu) goto L_08A93C5C;
    return;
L_08A93C5C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 13u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08A93C70u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93C70u) goto L_08A93C70;
    return;
L_08A93C70:
    ctx.gpr[31] = (0x08A93C78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93C78u) goto L_08A93C78;
    return;
L_08A93C78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x08A93C8Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93C8Cu) goto L_08A93C8C;
    return;
L_08A93C8C:
    ctx.gpr[31] = (0x08A93C94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93C94u) goto L_08A93C94;
    return;
L_08A93C94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[6] = (0u | 25u);
    ctx.gpr[31] = (0x08A93CA8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93CA8u) goto L_08A93CA8;
    return;
L_08A93CA8:
    ctx.gpr[31] = (0x08A93CB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93CB0u) goto L_08A93CB0;
    return;
L_08A93CB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08A93CC4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93CC4u) goto L_08A93CC4;
    return;
L_08A93CC4:
    ctx.gpr[31] = (0x08A93CCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93CCCu) goto L_08A93CCC;
    return;
L_08A93CCC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 26u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[31] = (0x08A93CE0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93CE0u) goto L_08A93CE0;
    return;
L_08A93CE0:
    ctx.gpr[31] = (0x08A93CE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93CE8u) goto L_08A93CE8;
    return;
L_08A93CE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[6] = (0u | 21u);
    ctx.gpr[31] = (0x08A93CFCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93CFCu) goto L_08A93CFC;
    return;
L_08A93CFC:
    ctx.gpr[31] = (0x08A93D04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93D04u) goto L_08A93D04;
    return;
L_08A93D04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 30u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08A93D18u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93D18u) goto L_08A93D18;
    return;
L_08A93D18:
    ctx.gpr[31] = (0x08A93D20u);
    ctx.gpr[4] = (0u | 268u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93D20u) goto L_08A93D20;
    return;
L_08A93D20:
    ctx.gpr[31] = (0x08A93D28u);
    ctx.gpr[4] = (0u | 270u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93D28u) goto L_08A93D28;
    return;
L_08A93D28:
    ctx.gpr[31] = (0x08A93D30u);
    ctx.gpr[4] = (0u | 291u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93D30u) goto L_08A93D30;
    return;
L_08A93D30:
    ctx.gpr[31] = (0x08A93D38u);
    ctx.gpr[4] = (0u | 275u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93D38u) goto L_08A93D38;
    return;
L_08A93D38:
    ctx.gpr[31] = (0x08A93D40u);
    ctx.gpr[4] = (0u | 279u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93D40u) goto L_08A93D40;
    return;
L_08A93D40:
    ctx.gpr[31] = (0x08A93D48u);
    ctx.gpr[4] = (0u | 283u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93D48u) goto L_08A93D48;
    return;
L_08A93D48:
    ctx.gpr[31] = (0x08A93D50u);
    ctx.gpr[4] = (0u | 280u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93D50u) goto L_08A93D50;
    return;
L_08A93D50:
    ctx.gpr[31] = (0x08A93D58u);
    ctx.gpr[4] = (0u | 286u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93D58u) goto L_08A93D58;
    return;
L_08A93D58:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A93D88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A93DD8;
      }
      goto L_08A93DAC;
    }
L_08A93DAC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A93DB8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93DB8u) goto L_08A93DB8;
    return;
L_08A93DB8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A93DD0;
      }
      goto L_08A93DC4;
    }
L_08A93DC4:
    ctx.gpr[31] = (0x08A93DCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A93DCCu) goto L_08A93DCC;
    return;
L_08A93DCC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A93DD0;
L_08A93DD0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A93DD8;
L_08A93DD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A93DE4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-20376));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A93DE4u) goto L_08A93DE4;
    return;
L_08A93DE4:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A93DFCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A93DFCu) goto L_08A93DFC;
    return;
L_08A93DFC:
    ctx.gpr[4] = (0u | 269u);
    ctx.gpr[31] = (0x08A93E08u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93E08u) goto L_08A93E08;
    return;
L_08A93E08:
    ctx.gpr[4] = (0u | 270u);
    ctx.gpr[31] = (0x08A93E14u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93E14u) goto L_08A93E14;
    return;
L_08A93E14:
    ctx.gpr[4] = (0u | 275u);
    ctx.gpr[31] = (0x08A93E20u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93E20u) goto L_08A93E20;
    return;
L_08A93E20:
    ctx.gpr[4] = (0u | 278u);
    ctx.gpr[31] = (0x08A93E2Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93E2Cu) goto L_08A93E2C;
    return;
L_08A93E2C:
    ctx.gpr[4] = (0u | 284u);
    ctx.gpr[31] = (0x08A93E38u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93E38u) goto L_08A93E38;
    return;
L_08A93E38:
    ctx.gpr[4] = (0u | 280u);
    ctx.gpr[31] = (0x08A93E44u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93E44u) goto L_08A93E44;
    return;
L_08A93E44:
    ctx.gpr[4] = (0u | 286u);
    ctx.gpr[31] = (0x08A93E50u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93E50u) goto L_08A93E50;
    return;
L_08A93E50:
    ctx.gpr[4] = (0u | 290u);
    ctx.gpr[31] = (0x08A93E5Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93E5Cu) goto L_08A93E5C;
    return;
L_08A93E5C:
    ctx.gpr[4] = (0u | 294u);
    ctx.gpr[31] = (0x08A93E68u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 659u, 0x089CAC28u>(ctx, &aot_mem) && ctx.pc == 0x08A93E68u) goto L_08A93E68;
    return;
L_08A93E68:
    ctx.gpr[31] = (0x08A93E70u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x08A93E70u) goto L_08A93E70;
    return;
L_08A93E70:
    ctx.gpr[31] = (0x08A93E78u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93E78u) goto L_08A93E78;
    return;
L_08A93E78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A93E8Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93E8Cu) goto L_08A93E8C;
    return;
L_08A93E8C:
    ctx.gpr[31] = (0x08A93E94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93E94u) goto L_08A93E94;
    return;
L_08A93E94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08A93EA8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93EA8u) goto L_08A93EA8;
    return;
L_08A93EA8:
    ctx.gpr[31] = (0x08A93EB0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93EB0u) goto L_08A93EB0;
    return;
L_08A93EB0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[6] = (0u | 40u);
    ctx.gpr[31] = (0x08A93EC4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93EC4u) goto L_08A93EC4;
    return;
L_08A93EC4:
    ctx.gpr[31] = (0x08A93ECCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93ECCu) goto L_08A93ECC;
    return;
L_08A93ECC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 20u);
    ctx.gpr[6] = (0u | 30u);
    ctx.gpr[31] = (0x08A93EE0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93EE0u) goto L_08A93EE0;
    return;
L_08A93EE0:
    ctx.gpr[31] = (0x08A93EE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93EE8u) goto L_08A93EE8;
    return;
L_08A93EE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[31] = (0x08A93EFCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93EFCu) goto L_08A93EFC;
    return;
L_08A93EFC:
    ctx.gpr[31] = (0x08A93F04u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93F04u) goto L_08A93F04;
    return;
L_08A93F04:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 26u);
    ctx.gpr[6] = (0u | 150u);
    ctx.gpr[31] = (0x08A93F18u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93F18u) goto L_08A93F18;
    return;
L_08A93F18:
    ctx.gpr[31] = (0x08A93F20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93F20u) goto L_08A93F20;
    return;
L_08A93F20:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 29u);
    ctx.gpr[6] = (0u | 21u);
    ctx.gpr[31] = (0x08A93F34u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93F34u) goto L_08A93F34;
    return;
L_08A93F34:
    ctx.gpr[31] = (0x08A93F3Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A93F3Cu) goto L_08A93F3C;
    return;
L_08A93F3C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 33u);
    ctx.gpr[6] = (0u | 500u);
    ctx.gpr[31] = (0x08A93F50u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A93F50u) goto L_08A93F50;
    return;
L_08A93F50:
    ctx.gpr[31] = (0x08A93F58u);
    ctx.gpr[4] = (0u | 269u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93F58u) goto L_08A93F58;
    return;
L_08A93F58:
    ctx.gpr[31] = (0x08A93F60u);
    ctx.gpr[4] = (0u | 270u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93F60u) goto L_08A93F60;
    return;
L_08A93F60:
    ctx.gpr[31] = (0x08A93F68u);
    ctx.gpr[4] = (0u | 275u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93F68u) goto L_08A93F68;
    return;
L_08A93F68:
    ctx.gpr[31] = (0x08A93F70u);
    ctx.gpr[4] = (0u | 278u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93F70u) goto L_08A93F70;
    return;
L_08A93F70:
    ctx.gpr[31] = (0x08A93F78u);
    ctx.gpr[4] = (0u | 284u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93F78u) goto L_08A93F78;
    return;
L_08A93F78:
    ctx.gpr[31] = (0x08A93F80u);
    ctx.gpr[4] = (0u | 280u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93F80u) goto L_08A93F80;
    return;
L_08A93F80:
    ctx.gpr[31] = (0x08A93F88u);
    ctx.gpr[4] = (0u | 286u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93F88u) goto L_08A93F88;
    return;
L_08A93F88:
    ctx.gpr[31] = (0x08A93F90u);
    ctx.gpr[4] = (0u | 290u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93F90u) goto L_08A93F90;
    return;
L_08A93F90:
    ctx.gpr[31] = (0x08A93F98u);
    ctx.gpr[4] = (0u | 294u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 607u, 0x089C68E0u>(ctx, &aot_mem) && ctx.pc == 0x08A93F98u) goto L_08A93F98;
    return;
L_08A93F98:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(25650), static_cast<std::uint8_t>(ctx.gpr[16]));
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7284), ctx.gpr[4]);
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
L_08A93FC8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[5] = (16128u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 6u, 0x08A94028u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1u, 0x08A94000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0163(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0163_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_163(Runtime &runtime) {
    runtime.register_generated_unit(163u, 0x08A90000u, 16384u, &recomp_unit_0163, &recomp_unit_0163_entry);
    runtime.register_function(0x08A90000u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90008u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90048u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90054u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90064u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90074u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90088u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90094u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9009Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A900F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90100u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90108u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90110u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90118u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90120u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90128u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90130u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90138u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90144u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90150u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90160u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90170u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90178u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90180u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90194u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9019Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A901F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90210u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90218u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90224u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9022Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90234u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90250u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90258u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90268u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90284u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9028Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90294u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9029Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A902FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90304u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90314u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9031Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90328u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90330u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90338u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90340u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90348u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90350u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90358u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90364u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9036Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90378u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90380u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90390u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A903F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90400u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90410u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90414u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90438u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90440u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90464u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90488u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90490u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90498u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A904F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90504u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9050Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90514u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90544u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90550u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90558u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90560u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90570u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90578u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90580u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90588u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90598u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A905F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90604u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90610u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9061Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90624u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9063Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90644u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90664u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90674u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A906FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90700u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90708u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90738u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90748u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90758u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A907F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90810u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90834u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90848u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90868u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90870u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90878u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90884u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90890u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90898u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A908F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90928u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90974u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A909F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A40u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90A68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90ACCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90AFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90B70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BBCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BDCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90BFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90C9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CBCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CD4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CDCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90CF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90D9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90DC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90E94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90F98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90FCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90FF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A90FF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9102Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91064u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91078u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91084u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9108Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91094u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9109Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A910A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A910B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A910D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91100u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91108u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91120u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9115Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91164u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91174u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9117Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91188u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9119Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A911FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9120Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91218u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9122Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91238u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91240u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9125Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91264u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91278u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91280u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91290u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91298u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A912F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91308u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91310u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91318u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91324u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91330u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9133Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91360u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9136Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91374u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91380u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A913F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91420u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9142Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91434u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9143Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91448u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91458u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91460u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91494u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9149Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A914F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91508u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91518u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91534u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9154Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91560u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91578u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9158Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91598u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A915F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91600u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9160Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91618u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91624u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9162Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9164Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9167Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91684u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9169Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A916FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91708u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91714u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9174Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9175Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91768u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91790u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A917FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91804u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9180Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91814u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91844u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91848u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91878u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91884u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A918F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91900u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9190Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91910u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91954u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9195Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91968u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91970u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9197Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91988u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91994u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A919A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A919ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A919B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A919F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A40u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A58u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91A90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91ADCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91AF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B10u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91B9Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91BFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C40u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91C94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91CF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91D78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DA4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91DF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91E98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91EFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91F70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A91FE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9200Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92034u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9203Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92070u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92094u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9209Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A920D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92108u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9213Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9214Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92158u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A921D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92218u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9223Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9224Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92254u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9225Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92260u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9226Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92280u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92288u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9229Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A922F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92304u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9230Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92314u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92338u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A923ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92414u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92444u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9245Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92480u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9248Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9249Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A924F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92510u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92528u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92540u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9254Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9255Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92564u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92578u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9258Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92598u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A925C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9260Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92618u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9261Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92624u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92630u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9263Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9264Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92654u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9265Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92664u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92698u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A926ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92700u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92708u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92730u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92738u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92740u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92794u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9279Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927ACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927B8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927C0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927E0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A927F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92800u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92808u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92810u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9281Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92828u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92834u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92844u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92854u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9285Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92870u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9287Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92888u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92890u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A928F0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92904u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92910u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9291Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92920u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92928u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92930u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9293Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9294Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92978u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929CCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A929FCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92A88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92AA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92AB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92AD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B58u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B64u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B7Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92B94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BC0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BC8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BF4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92BFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92C54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92CCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92D84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DBCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92DF4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92E90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92EB4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F6Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92F78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A92FF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93014u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93028u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93030u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93038u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93050u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9305Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93074u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9307Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93084u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930C4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A930ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93104u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9311Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93124u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9312Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9313Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93140u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93154u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93194u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93198u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A931F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93208u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9322Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9323Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9324Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93268u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93274u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93294u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A932A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9330Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93310u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93320u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93360u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93374u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93390u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A933A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A933BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A933D0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93418u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93460u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93494u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A934B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A935BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A935C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93614u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93628u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93638u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93640u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93644u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93654u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93660u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9366Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9367Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93684u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936A0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A936B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93700u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93704u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9370Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9371Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9372Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93734u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93740u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9375Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93760u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9376Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A937E8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93824u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9382Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9383Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93868u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93880u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93890u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938A8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938B4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938D8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938ECu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A938F4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93918u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93924u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93930u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93938u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9393Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93944u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93950u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93968u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93974u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93980u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A9398Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93998u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939A4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939B0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939BCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939C8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939D4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939DCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939E4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A939F8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A1Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A4Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A84u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93A8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93ABCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AF0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93AF8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B10u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B74u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93B98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BA0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BDCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93BF4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C00u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C0Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C24u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C40u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C54u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93C94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93CFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D28u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D30u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D40u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D48u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D58u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93D88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DACu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DB8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DCCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DD0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DD8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DE4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93DFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E08u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E14u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E2Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E38u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E44u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E5Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E8Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93E94u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93EA8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93EB0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93EC4u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93ECCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93EE0u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93EE8u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93EFCu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F04u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F18u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F20u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F34u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F3Cu, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F50u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F58u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F60u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F68u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F70u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F78u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F80u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F88u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F90u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93F98u, &recomp_unit_0163, "recomp_unit_0163");
    runtime.register_function(0x08A93FC8u, &recomp_unit_0163, "recomp_unit_0163");
}
} // namespace psprecomp
