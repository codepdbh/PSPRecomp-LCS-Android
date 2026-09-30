#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0155[4082] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 5, 6, 0, 0, 7, 0, 0, 8, 0, 9, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 10, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 14, 0, 15, 0,
    0, 16, 0, 0, 17, 0, 0, 18, 19, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 22, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 34, 35, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 40, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 0, 0, 43,
    0, 0, 44, 0, 45, 0, 0, 46, 0, 47, 0, 0, 0, 48, 0, 0, 0, 49, 0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 0, 61,
    0, 0, 62, 0, 63, 0, 64, 0, 0, 65, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 72,
    0, 0, 0, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 0, 0, 0, 0, 0, 75, 0, 76, 0, 77, 0, 0, 0, 0, 78, 0, 0, 0, 79,
    0, 0, 0, 0, 0, 80, 0, 81, 0, 82, 0, 83, 0, 0, 0, 84, 0, 85, 0, 86, 0, 87, 0, 0, 0, 0, 88, 0, 89, 0, 0, 0,
    0, 90, 0, 91, 0, 0, 0, 92, 0, 0, 93, 0, 0, 0, 94, 0, 95, 0, 0, 0, 0, 96, 0, 97, 0, 0, 0, 0, 98, 0, 99, 0,
    0, 0, 100, 0, 0, 101, 0, 0, 0, 102, 0, 103, 0, 0, 0, 104, 0, 0, 0, 105, 0, 0, 0, 0, 106, 107, 0, 0, 0, 0, 108, 0,
    109, 0, 0, 0, 110, 0, 0, 0, 0, 111, 112, 0, 0, 0, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 0, 0, 116, 0,
    117, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0,
    0, 0, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 126, 0,
    127, 0, 128, 0, 0, 0, 0, 0, 129, 0, 0, 130, 0, 131, 0, 132, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0,
    0, 0, 136, 0, 0, 0, 0, 137, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 139, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142,
    0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 0, 0, 146, 0, 147, 0, 148, 0, 149, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0,
    155, 0, 156, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 157, 0, 0, 0, 158, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 159, 0, 0, 0, 160, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 0, 0, 167, 0, 0, 168, 0, 0, 0, 169, 0, 170,
    0, 171, 0, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 180, 0, 181, 182, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 183, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 184, 0, 185, 186, 0, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 189, 0,
    190, 0, 0, 0, 191, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 194, 0, 0, 0, 0, 0, 0, 0, 195, 0, 0, 196, 0, 197, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 0, 203, 0, 204, 205, 0,
    206, 207, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0, 212, 0,
    213, 0, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 215, 0, 0, 0, 216, 0,
    217, 0, 218, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 0, 0,
    0, 0, 0, 0, 221, 0, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 225, 0, 226, 0, 0,
    0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 0, 228, 0, 0, 229, 0, 0, 0, 230, 231, 0, 0, 232, 233, 0, 234, 235, 0, 0, 0, 236, 0,
    0, 0, 237, 0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 244, 0, 0, 245, 0, 246, 0,
    247, 0, 0, 0, 248, 249, 0, 0, 0, 250, 0, 0, 0, 0, 251, 0, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 254, 0, 0, 0,
    0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 260, 0,
    0, 261, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0,
    0, 0, 0, 267, 0, 0, 268, 0, 0, 269, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 272, 273, 0, 0, 0, 0, 0, 0, 0, 0, 274,
    0, 275, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 278, 0, 279, 280, 0, 0, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 283, 0, 284, 0,
    285, 0, 0, 0, 0, 0, 0, 0, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 291,
    292, 0, 293, 0, 294, 0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 299, 0, 300, 301, 0, 0, 0, 302, 0, 0,
    303, 0, 0, 304, 0, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 307, 0, 308, 309, 0, 0, 0, 0, 0, 0, 310, 0,
    0, 0, 311, 0, 0, 0, 0, 312, 313, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 315, 0, 0, 0, 316, 0, 0, 0, 0, 0, 317,
    0, 0, 0, 0, 0, 0, 0, 318, 0, 319, 320, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324, 0, 325, 0,
    0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 0, 330, 0, 0,
    0, 331, 0, 332, 0, 0, 0, 333, 334, 0, 335, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0, 0, 340,
    341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 348, 0, 0, 349, 0, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0,
    0, 354, 0, 0, 355, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 358, 0, 359, 0, 0, 360, 0, 361, 0, 0, 0, 0, 0, 0, 362, 0,
    0, 0, 363, 364, 0, 365, 0, 0, 0, 366, 0, 0, 0, 0, 367, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 370, 0, 0,
    0, 0, 0, 371, 0, 0, 372, 0, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0, 376, 0, 0, 0,
    377, 0, 378, 0, 0, 0, 0, 379, 0, 0, 0, 380, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 381, 0, 0, 0, 382, 0,
    0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 384, 0, 385, 0, 386, 387, 0, 0, 0, 0, 0, 0, 388, 389, 0, 0, 0,
    0, 0, 0, 0, 0, 390, 0, 0, 0, 391, 0, 0, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 394, 0, 395, 0, 396,
    0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 399, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 404, 0,
    405, 0, 0, 0, 406, 0, 407, 0, 408, 0, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0,
    414, 0, 415, 0, 0, 0, 0, 416, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 0,
    0, 0, 0, 423, 0, 424, 0, 425, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428,
    0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 431, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 435, 0, 436, 437, 0, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 442, 0, 0, 0, 443, 0, 444, 0, 0, 445, 0, 0,
    0, 0, 446, 0, 447, 0, 0, 0, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 450, 0, 0, 0, 0, 0, 451, 0, 452, 0, 0, 0, 453, 0,
    454, 0, 455, 0, 456, 0, 0, 457, 0, 458, 0, 0, 0, 0, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 461, 462, 0, 463, 0, 0, 464, 0,
    465, 0, 0, 0, 0, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 468, 469, 0, 470, 0, 0, 0, 0, 0, 0, 471, 472, 0, 0, 0, 473, 474,
    0, 0, 0, 0, 0, 475, 0, 0, 0, 476, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 477, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0,
    0, 0, 479, 0, 0, 0, 0, 0, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 483, 0, 0,
    0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 487, 0, 0,
    488, 0, 0, 0, 0, 489, 0, 490, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 493, 0, 0, 0,
    0, 494, 0, 0, 0, 0, 495, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 498, 499, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 503, 0, 0, 504, 0, 0,
    0, 0, 0, 0, 0, 505, 0, 0, 506, 0, 507, 0, 508, 0, 509, 0, 0, 510, 0, 0, 511, 0, 0, 0, 0, 512, 513, 514, 0, 515, 0, 0,
    0, 516, 0, 0, 517, 0, 0, 0, 0, 518, 519, 520, 0, 521, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 0, 0, 0, 524, 0, 525, 0, 0,
    0, 526, 0, 0, 0, 0, 0, 0, 527, 528, 0, 0, 0, 0, 529, 0, 0, 0, 530, 0, 0, 0, 0, 531, 0, 532, 0, 0, 0, 0, 0, 0,
    533, 0, 0, 0, 0, 0, 534, 535, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 538, 0, 0, 539, 0,
    0, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 542, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0,
    0, 552, 0, 0, 553, 0, 554, 0, 555, 556, 0, 557, 0, 558, 0, 559, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 563, 0, 0, 564, 0, 0,
    0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 566, 0, 0, 567, 0, 568, 0, 569, 0, 0, 570, 0,
    571, 0, 572, 0, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 576,
    0, 0, 0, 0, 577, 0, 578, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 581,
    0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 0, 585, 0, 0, 0, 0,
    586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0,
    0, 0, 0, 0, 589, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 593, 0, 0, 594, 0, 595, 0, 596, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 0, 602, 603, 0, 0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 607, 0, 0, 608, 0, 0, 609, 0, 610,
    0, 611, 0, 0, 612, 0, 613, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 616, 0, 0, 0, 617, 618, 0,
    0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 622, 0, 0, 0, 0, 623, 0, 624, 625, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0,
    0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 0, 0, 0, 0, 631, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 0, 0, 0, 0, 0, 633, 0, 0, 0, 0, 634, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 0, 637, 0,
    638, 0, 0, 0, 0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0,
    0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642, 0, 0, 0, 0, 0,
    643, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 645,
    0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 653,
    0, 0, 0, 0, 0, 0, 0, 0, 654, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 657, 0, 658, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 659, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 660, 0, 661, 0, 0, 0, 662, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 664, 0, 0, 665, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 666, 0, 0, 667, 0, 0, 0, 668, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0, 0, 0, 0,
    0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0, 679, 0, 680, 681, 0, 682, 0, 0, 683, 0, 684,
    685, 0, 686, 0, 0, 0, 0, 687, 0, 688, 0, 689, 0, 690, 0, 691, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 694, 0, 0, 695, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 697, 0, 0, 0, 698, 0, 0, 0, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 700, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 703, 0, 0, 0, 0, 704,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 712, 0, 0, 713, 0, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 716, 0, 717, 0, 0, 0, 0, 0, 0, 0, 718, 0, 719, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720,
    0, 0, 0, 721, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0,
    0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 0, 728, 0, 0, 0, 729, 0, 730, 0, 0, 731, 0, 0, 732, 0, 733, 0, 0, 0, 0, 0, 0,
    0, 0, 734, 0, 0, 0, 735, 0, 0, 736, 737, 0, 0, 0, 738, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 740, 0, 0,
    741, 0, 0, 0, 0, 742, 743, 0, 0, 0, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 748, 0, 749, 0,
    750, 0, 751, 0, 752, 0, 0, 0, 0, 0, 753, 0, 754, 0, 0, 755, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 758,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0, 0, 0, 0, 0, 0, 761, 0,
    0, 762, 0, 0, 763, 0, 0, 0, 764, 0, 0, 765, 0, 0, 0, 0, 0, 766,
};
void recomp_unit_0155_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A70000u;
        entry_id = (entry_delta < 16328u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0155[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A70000;
    case 2u: goto L_08A70028;
    case 3u: goto L_08A70030;
    case 4u: goto L_08A70038;
    case 5u: goto L_08A70048;
    case 6u: goto L_08A7004C;
    case 7u: goto L_08A70058;
    case 8u: goto L_08A70064;
    case 9u: goto L_08A7006C;
    case 10u: goto L_08A70098;
    case 11u: goto L_08A700A0;
    case 12u: goto L_08A700A8;
    case 13u: goto L_08A700E4;
    case 14u: goto L_08A700F0;
    case 15u: goto L_08A700F8;
    case 16u: goto L_08A70104;
    case 17u: goto L_08A70110;
    case 18u: goto L_08A7011C;
    case 19u: goto L_08A70120;
    case 20u: goto L_08A7012C;
    case 21u: goto L_08A70134;
    case 22u: goto L_08A70150;
    case 23u: goto L_08A70160;
    case 24u: goto L_08A70198;
    case 25u: goto L_08A701CC;
    case 26u: goto L_08A701DC;
    case 27u: goto L_08A70214;
    case 28u: goto L_08A7022C;
    case 29u: goto L_08A70238;
    case 30u: goto L_08A7024C;
    case 31u: goto L_08A7025C;
    case 32u: goto L_08A70270;
    case 33u: goto L_08A702A8;
    case 34u: goto L_08A702B0;
    case 35u: goto L_08A702B4;
    case 36u: goto L_08A702D4;
    case 37u: goto L_08A7032C;
    case 38u: goto L_08A70334;
    case 39u: goto L_08A70340;
    case 40u: goto L_08A70348;
    case 41u: goto L_08A70354;
    case 42u: goto L_08A7036C;
    case 43u: goto L_08A7037C;
    case 44u: goto L_08A70388;
    case 45u: goto L_08A70390;
    case 46u: goto L_08A7039C;
    case 47u: goto L_08A703A4;
    case 48u: goto L_08A703B4;
    case 49u: goto L_08A703C4;
    case 50u: goto L_08A703CC;
    case 51u: goto L_08A703DC;
    case 52u: goto L_08A703EC;
    case 53u: goto L_08A70418;
    case 54u: goto L_08A70424;
    case 55u: goto L_08A70434;
    case 56u: goto L_08A7043C;
    case 57u: goto L_08A70448;
    case 58u: goto L_08A70458;
    case 59u: goto L_08A70464;
    case 60u: goto L_08A70470;
    case 61u: goto L_08A7047C;
    case 62u: goto L_08A70488;
    case 63u: goto L_08A70490;
    case 64u: goto L_08A70498;
    case 65u: goto L_08A704A4;
    case 66u: goto L_08A704A8;
    case 67u: goto L_08A704B0;
    case 68u: goto L_08A704B8;
    case 69u: goto L_08A704DC;
    case 70u: goto L_08A704EC;
    case 71u: goto L_08A704F4;
    case 72u: goto L_08A704FC;
    case 73u: goto L_08A7051C;
    case 74u: goto L_08A70524;
    case 75u: goto L_08A70548;
    case 76u: goto L_08A70550;
    case 77u: goto L_08A70558;
    case 78u: goto L_08A7056C;
    case 79u: goto L_08A7057C;
    case 80u: goto L_08A70594;
    case 81u: goto L_08A7059C;
    case 82u: goto L_08A705A4;
    case 83u: goto L_08A705AC;
    case 84u: goto L_08A705BC;
    case 85u: goto L_08A705C4;
    case 86u: goto L_08A705CC;
    case 87u: goto L_08A705D4;
    case 88u: goto L_08A705E8;
    case 89u: goto L_08A705F0;
    case 90u: goto L_08A70604;
    case 91u: goto L_08A7060C;
    case 92u: goto L_08A7061C;
    case 93u: goto L_08A70628;
    case 94u: goto L_08A70638;
    case 95u: goto L_08A70640;
    case 96u: goto L_08A70654;
    case 97u: goto L_08A7065C;
    case 98u: goto L_08A70670;
    case 99u: goto L_08A70678;
    case 100u: goto L_08A70688;
    case 101u: goto L_08A70694;
    case 102u: goto L_08A706A4;
    case 103u: goto L_08A706AC;
    case 104u: goto L_08A706BC;
    case 105u: goto L_08A706CC;
    case 106u: goto L_08A706E0;
    case 107u: goto L_08A706E4;
    case 108u: goto L_08A706F8;
    case 109u: goto L_08A70700;
    case 110u: goto L_08A70710;
    case 111u: goto L_08A70724;
    case 112u: goto L_08A70728;
    case 113u: goto L_08A7073C;
    case 114u: goto L_08A7074C;
    case 115u: goto L_08A70760;
    case 116u: goto L_08A70778;
    case 117u: goto L_08A70780;
    case 118u: goto L_08A70788;
    case 119u: goto L_08A707C8;
    case 120u: goto L_08A707D8;
    case 121u: goto L_08A707F0;
    case 122u: goto L_08A70808;
    case 123u: goto L_08A70818;
    case 124u: goto L_08A70838;
    case 125u: goto L_08A70870;
    case 126u: goto L_08A70878;
    case 127u: goto L_08A70880;
    case 128u: goto L_08A70888;
    case 129u: goto L_08A708A0;
    case 130u: goto L_08A708AC;
    case 131u: goto L_08A708B4;
    case 132u: goto L_08A708BC;
    case 133u: goto L_08A708CC;
    case 134u: goto L_08A708D4;
    case 135u: goto L_08A708F8;
    case 136u: goto L_08A70908;
    case 137u: goto L_08A7091C;
    case 138u: goto L_08A70924;
    case 139u: goto L_08A70948;
    case 140u: goto L_08A70958;
    case 141u: goto L_08A7096C;
    case 142u: goto L_08A7097C;
    case 143u: goto L_08A7098C;
    case 144u: goto L_08A709B8;
    case 145u: goto L_08A709C0;
    case 146u: goto L_08A709D8;
    case 147u: goto L_08A709E0;
    case 148u: goto L_08A709E8;
    case 149u: goto L_08A709F0;
    case 150u: goto L_08A70A2C;
    case 151u: goto L_08A70A3C;
    case 152u: goto L_08A70A54;
    case 153u: goto L_08A70A5C;
    case 154u: goto L_08A70A70;
    case 155u: goto L_08A70A80;
    case 156u: goto L_08A70A88;
    case 157u: goto L_08A70AD0;
    case 158u: goto L_08A70AE0;
    case 159u: goto L_08A70B1C;
    case 160u: goto L_08A70B2C;
    case 161u: goto L_08A70B44;
    case 162u: goto L_08A70B50;
    case 163u: goto L_08A70B64;
    case 164u: goto L_08A70B78;
    case 165u: goto L_08A70BB0;
    case 166u: goto L_08A70BC0;
    case 167u: goto L_08A70BD8;
    case 168u: goto L_08A70BE4;
    case 169u: goto L_08A70BF4;
    case 170u: goto L_08A70BFC;
    case 171u: goto L_08A70C04;
    case 172u: goto L_08A70C10;
    case 173u: goto L_08A70C28;
    case 174u: goto L_08A70C38;
    case 175u: goto L_08A70C5C;
    case 176u: goto L_08A70C88;
    case 177u: goto L_08A70CA0;
    case 178u: goto L_08A70CA8;
    case 179u: goto L_08A70CB4;
    case 180u: goto L_08A70CE8;
    case 181u: goto L_08A70CF0;
    case 182u: goto L_08A70CF4;
    case 183u: goto L_08A70D20;
    case 184u: goto L_08A70D9C;
    case 185u: goto L_08A70DA4;
    case 186u: goto L_08A70DA8;
    case 187u: goto L_08A70DB4;
    case 188u: goto L_08A70DEC;
    case 189u: goto L_08A70DF8;
    case 190u: goto L_08A70E00;
    case 191u: goto L_08A70E10;
    case 192u: goto L_08A70E1C;
    case 193u: goto L_08A70E28;
    case 194u: goto L_08A70E3C;
    case 195u: goto L_08A70E5C;
    case 196u: goto L_08A70E68;
    case 197u: goto L_08A70E70;
    case 198u: goto L_08A70E80;
    case 199u: goto L_08A70EB4;
    case 200u: goto L_08A70EC4;
    case 201u: goto L_08A70ED4;
    case 202u: goto L_08A70EE0;
    case 203u: goto L_08A70EEC;
    case 204u: goto L_08A70EF4;
    case 205u: goto L_08A70EF8;
    case 206u: goto L_08A70F00;
    case 207u: goto L_08A70F04;
    case 208u: goto L_08A70F30;
    case 209u: goto L_08A70F54;
    case 210u: goto L_08A70F60;
    case 211u: goto L_08A70F6C;
    case 212u: goto L_08A70F78;
    case 213u: goto L_08A70F80;
    case 214u: goto L_08A70F88;
    case 215u: goto L_08A70FE8;
    case 216u: goto L_08A70FF8;
    case 217u: goto L_08A71000;
    case 218u: goto L_08A71008;
    case 219u: goto L_08A71060;
    case 220u: goto L_08A71070;
    case 221u: goto L_08A71090;
    case 222u: goto L_08A710B0;
    case 223u: goto L_08A710C8;
    case 224u: goto L_08A710D8;
    case 225u: goto L_08A710EC;
    case 226u: goto L_08A710F4;
    case 227u: goto L_08A71114;
    case 228u: goto L_08A7112C;
    case 229u: goto L_08A71138;
    case 230u: goto L_08A71148;
    case 231u: goto L_08A7114C;
    case 232u: goto L_08A71158;
    case 233u: goto L_08A7115C;
    case 234u: goto L_08A71164;
    case 235u: goto L_08A71168;
    case 236u: goto L_08A71178;
    case 237u: goto L_08A71188;
    case 238u: goto L_08A71190;
    case 239u: goto L_08A71198;
    case 240u: goto L_08A711A0;
    case 241u: goto L_08A711B8;
    case 242u: goto L_08A711C4;
    case 243u: goto L_08A711D4;
    case 244u: goto L_08A711E4;
    case 245u: goto L_08A711F0;
    case 246u: goto L_08A711F8;
    case 247u: goto L_08A71200;
    case 248u: goto L_08A71210;
    case 249u: goto L_08A71214;
    case 250u: goto L_08A71224;
    case 251u: goto L_08A71238;
    case 252u: goto L_08A71254;
    case 253u: goto L_08A71260;
    case 254u: goto L_08A71270;
    case 255u: goto L_08A71294;
    case 256u: goto L_08A712B8;
    case 257u: goto L_08A712C8;
    case 258u: goto L_08A712E0;
    case 259u: goto L_08A712F0;
    case 260u: goto L_08A712F8;
    case 261u: goto L_08A71304;
    case 262u: goto L_08A71320;
    case 263u: goto L_08A7132C;
    case 264u: goto L_08A71348;
    case 265u: goto L_08A71350;
    case 266u: goto L_08A71368;
    case 267u: goto L_08A7138C;
    case 268u: goto L_08A71398;
    case 269u: goto L_08A713A4;
    case 270u: goto L_08A713B0;
    case 271u: goto L_08A713B8;
    case 272u: goto L_08A713D4;
    case 273u: goto L_08A713D8;
    case 274u: goto L_08A713FC;
    case 275u: goto L_08A71404;
    case 276u: goto L_08A71414;
    case 277u: goto L_08A71428;
    case 278u: goto L_08A71430;
    case 279u: goto L_08A71438;
    case 280u: goto L_08A7143C;
    case 281u: goto L_08A7144C;
    case 282u: goto L_08A71454;
    case 283u: goto L_08A71470;
    case 284u: goto L_08A71478;
    case 285u: goto L_08A71480;
    case 286u: goto L_08A714A4;
    case 287u: goto L_08A714B0;
    case 288u: goto L_08A714D0;
    case 289u: goto L_08A714EC;
    case 290u: goto L_08A714F4;
    case 291u: goto L_08A714FC;
    case 292u: goto L_08A71500;
    case 293u: goto L_08A71508;
    case 294u: goto L_08A71510;
    case 295u: goto L_08A7151C;
    case 296u: goto L_08A71538;
    case 297u: goto L_08A71544;
    case 298u: goto L_08A7154C;
    case 299u: goto L_08A71558;
    case 300u: goto L_08A71560;
    case 301u: goto L_08A71564;
    case 302u: goto L_08A71574;
    case 303u: goto L_08A71580;
    case 304u: goto L_08A7158C;
    case 305u: goto L_08A715AC;
    case 306u: goto L_08A715BC;
    case 307u: goto L_08A715D0;
    case 308u: goto L_08A715D8;
    case 309u: goto L_08A715DC;
    case 310u: goto L_08A715F8;
    case 311u: goto L_08A71608;
    case 312u: goto L_08A7161C;
    case 313u: goto L_08A71620;
    case 314u: goto L_08A71638;
    case 315u: goto L_08A71654;
    case 316u: goto L_08A71664;
    case 317u: goto L_08A7167C;
    case 318u: goto L_08A7169C;
    case 319u: goto L_08A716A4;
    case 320u: goto L_08A716A8;
    case 321u: goto L_08A716B4;
    case 322u: goto L_08A716C8;
    case 323u: goto L_08A716DC;
    case 324u: goto L_08A716F0;
    case 325u: goto L_08A716F8;
    case 326u: goto L_08A7171C;
    case 327u: goto L_08A71724;
    case 328u: goto L_08A7173C;
    case 329u: goto L_08A71754;
    case 330u: goto L_08A71774;
    case 331u: goto L_08A71784;
    case 332u: goto L_08A7178C;
    case 333u: goto L_08A7179C;
    case 334u: goto L_08A717A0;
    case 335u: goto L_08A717A8;
    case 336u: goto L_08A717B4;
    case 337u: goto L_08A717BC;
    case 338u: goto L_08A717D8;
    case 339u: goto L_08A717E4;
    case 340u: goto L_08A717FC;
    case 341u: goto L_08A71800;
    case 342u: goto L_08A7182C;
    case 343u: goto L_08A71840;
    case 344u: goto L_08A71858;
    case 345u: goto L_08A71868;
    case 346u: goto L_08A71894;
    case 347u: goto L_08A7189C;
    case 348u: goto L_08A718AC;
    case 349u: goto L_08A718B8;
    case 350u: goto L_08A718C4;
    case 351u: goto L_08A718CC;
    case 352u: goto L_08A718EC;
    case 353u: goto L_08A718F8;
    case 354u: goto L_08A71904;
    case 355u: goto L_08A71910;
    case 356u: goto L_08A71918;
    case 357u: goto L_08A71934;
    case 358u: goto L_08A71940;
    case 359u: goto L_08A71948;
    case 360u: goto L_08A71954;
    case 361u: goto L_08A7195C;
    case 362u: goto L_08A71978;
    case 363u: goto L_08A71988;
    case 364u: goto L_08A7198C;
    case 365u: goto L_08A71994;
    case 366u: goto L_08A719A4;
    case 367u: goto L_08A719B8;
    case 368u: goto L_08A719C8;
    case 369u: goto L_08A719E4;
    case 370u: goto L_08A719F4;
    case 371u: goto L_08A71A0C;
    case 372u: goto L_08A71A18;
    case 373u: goto L_08A71A34;
    case 374u: goto L_08A71A50;
    case 375u: goto L_08A71A60;
    case 376u: goto L_08A71A70;
    case 377u: goto L_08A71A80;
    case 378u: goto L_08A71A88;
    case 379u: goto L_08A71A9C;
    case 380u: goto L_08A71AAC;
    case 381u: goto L_08A71AE8;
    case 382u: goto L_08A71AF8;
    case 383u: goto L_08A71B10;
    case 384u: goto L_08A71B3C;
    case 385u: goto L_08A71B44;
    case 386u: goto L_08A71B4C;
    case 387u: goto L_08A71B50;
    case 388u: goto L_08A71B6C;
    case 389u: goto L_08A71B70;
    case 390u: goto L_08A71B94;
    case 391u: goto L_08A71BA4;
    case 392u: goto L_08A71BBC;
    case 393u: goto L_08A71BE8;
    case 394u: goto L_08A71BEC;
    case 395u: goto L_08A71BF4;
    case 396u: goto L_08A71BFC;
    case 397u: goto L_08A71C1C;
    case 398u: goto L_08A71C30;
    case 399u: goto L_08A71C38;
    case 400u: goto L_08A71C3C;
    case 401u: goto L_08A71C68;
    case 402u: goto L_08A71CB0;
    case 403u: goto L_08A71CEC;
    case 404u: goto L_08A71CF8;
    case 405u: goto L_08A71D00;
    case 406u: goto L_08A71D10;
    case 407u: goto L_08A71D18;
    case 408u: goto L_08A71D20;
    case 409u: goto L_08A71D30;
    case 410u: goto L_08A71D38;
    case 411u: goto L_08A71D40;
    case 412u: goto L_08A71D50;
    case 413u: goto L_08A71D5C;
    case 414u: goto L_08A71D80;
    case 415u: goto L_08A71D88;
    case 416u: goto L_08A71D9C;
    case 417u: goto L_08A71DA4;
    case 418u: goto L_08A71DAC;
    case 419u: goto L_08A71DB4;
    case 420u: goto L_08A71DCC;
    case 421u: goto L_08A71DF0;
    case 422u: goto L_08A71DF8;
    case 423u: goto L_08A71E0C;
    case 424u: goto L_08A71E14;
    case 425u: goto L_08A71E1C;
    case 426u: goto L_08A71E24;
    case 427u: goto L_08A71E60;
    case 428u: goto L_08A71E7C;
    case 429u: goto L_08A71E8C;
    case 430u: goto L_08A71EB8;
    case 431u: goto L_08A71EC8;
    case 432u: goto L_08A71F0C;
    case 433u: goto L_08A71F28;
    case 434u: goto L_08A71F50;
    case 435u: goto L_08A71F94;
    case 436u: goto L_08A71F9C;
    case 437u: goto L_08A71FA0;
    case 438u: goto L_08A71FC0;
    case 439u: goto L_08A72024;
    case 440u: goto L_08A72030;
    case 441u: goto L_08A72038;
    case 442u: goto L_08A72050;
    case 443u: goto L_08A72060;
    case 444u: goto L_08A72068;
    case 445u: goto L_08A72074;
    case 446u: goto L_08A72088;
    case 447u: goto L_08A72090;
    case 448u: goto L_08A720A4;
    case 449u: goto L_08A720B4;
    case 450u: goto L_08A720C8;
    case 451u: goto L_08A720E0;
    case 452u: goto L_08A720E8;
    case 453u: goto L_08A720F8;
    case 454u: goto L_08A72100;
    case 455u: goto L_08A72108;
    case 456u: goto L_08A72110;
    case 457u: goto L_08A7211C;
    case 458u: goto L_08A72124;
    case 459u: goto L_08A72140;
    case 460u: goto L_08A72148;
    case 461u: goto L_08A72160;
    case 462u: goto L_08A72164;
    case 463u: goto L_08A7216C;
    case 464u: goto L_08A72178;
    case 465u: goto L_08A72180;
    case 466u: goto L_08A7219C;
    case 467u: goto L_08A721A4;
    case 468u: goto L_08A721BC;
    case 469u: goto L_08A721C0;
    case 470u: goto L_08A721C8;
    case 471u: goto L_08A721E4;
    case 472u: goto L_08A721E8;
    case 473u: goto L_08A721F8;
    case 474u: goto L_08A721FC;
    case 475u: goto L_08A72214;
    case 476u: goto L_08A72224;
    case 477u: goto L_08A72254;
    case 478u: goto L_08A72264;
    case 479u: goto L_08A72288;
    case 480u: goto L_08A722A0;
    case 481u: goto L_08A722D4;
    case 482u: goto L_08A722E0;
    case 483u: goto L_08A722F4;
    case 484u: goto L_08A7230C;
    case 485u: goto L_08A72324;
    case 486u: goto L_08A7232C;
    case 487u: goto L_08A72374;
    case 488u: goto L_08A72380;
    case 489u: goto L_08A72394;
    case 490u: goto L_08A7239C;
    case 491u: goto L_08A723A0;
    case 492u: goto L_08A723E4;
    case 493u: goto L_08A723F0;
    case 494u: goto L_08A72404;
    case 495u: goto L_08A72418;
    case 496u: goto L_08A72424;
    case 497u: goto L_08A72454;
    case 498u: goto L_08A7245C;
    case 499u: goto L_08A72460;
    case 500u: goto L_08A724A0;
    case 501u: goto L_08A724D4;
    case 502u: goto L_08A724E0;
    case 503u: goto L_08A724E8;
    case 504u: goto L_08A724F4;
    case 505u: goto L_08A72514;
    case 506u: goto L_08A72520;
    case 507u: goto L_08A72528;
    case 508u: goto L_08A72530;
    case 509u: goto L_08A72538;
    case 510u: goto L_08A72544;
    case 511u: goto L_08A72550;
    case 512u: goto L_08A72564;
    case 513u: goto L_08A72568;
    case 514u: goto L_08A7256C;
    case 515u: goto L_08A72574;
    case 516u: goto L_08A72584;
    case 517u: goto L_08A72590;
    case 518u: goto L_08A725A4;
    case 519u: goto L_08A725A8;
    case 520u: goto L_08A725AC;
    case 521u: goto L_08A725B4;
    case 522u: goto L_08A725CC;
    case 523u: goto L_08A725D8;
    case 524u: goto L_08A725EC;
    case 525u: goto L_08A725F4;
    case 526u: goto L_08A72604;
    case 527u: goto L_08A72620;
    case 528u: goto L_08A72624;
    case 529u: goto L_08A72638;
    case 530u: goto L_08A72648;
    case 531u: goto L_08A7265C;
    case 532u: goto L_08A72664;
    case 533u: goto L_08A72680;
    case 534u: goto L_08A72698;
    case 535u: goto L_08A7269C;
    case 536u: goto L_08A726D8;
    case 537u: goto L_08A726E0;
    case 538u: goto L_08A726EC;
    case 539u: goto L_08A726F8;
    case 540u: goto L_08A72710;
    case 541u: goto L_08A7271C;
    case 542u: goto L_08A7272C;
    case 543u: goto L_08A72730;
    case 544u: goto L_08A7273C;
    case 545u: goto L_08A72784;
    case 546u: goto L_08A727B4;
    case 547u: goto L_08A727B8;
    case 548u: goto L_08A727E0;
    case 549u: goto L_08A72844;
    case 550u: goto L_08A72848;
    case 551u: goto L_08A72878;
    case 552u: goto L_08A72884;
    case 553u: goto L_08A72890;
    case 554u: goto L_08A72898;
    case 555u: goto L_08A728A0;
    case 556u: goto L_08A728A4;
    case 557u: goto L_08A728AC;
    case 558u: goto L_08A728B4;
    case 559u: goto L_08A728BC;
    case 560u: goto L_08A728C4;
    case 561u: goto L_08A7290C;
    case 562u: goto L_08A72920;
    case 563u: goto L_08A72968;
    case 564u: goto L_08A72974;
    case 565u: goto L_08A72998;
    case 566u: goto L_08A729D0;
    case 567u: goto L_08A729DC;
    case 568u: goto L_08A729E4;
    case 569u: goto L_08A729EC;
    case 570u: goto L_08A729F8;
    case 571u: goto L_08A72A00;
    case 572u: goto L_08A72A08;
    case 573u: goto L_08A72A28;
    case 574u: goto L_08A72A30;
    case 575u: goto L_08A72A48;
    case 576u: goto L_08A72A7C;
    case 577u: goto L_08A72A90;
    case 578u: goto L_08A72A98;
    case 579u: goto L_08A72A9C;
    case 580u: goto L_08A72AF0;
    case 581u: goto L_08A72AFC;
    case 582u: goto L_08A72B0C;
    case 583u: goto L_08A72B30;
    case 584u: goto L_08A72B48;
    case 585u: goto L_08A72B6C;
    case 586u: goto L_08A72B80;
    case 587u: goto L_08A72BA8;
    case 588u: goto L_08A72BEC;
    case 589u: goto L_08A72C10;
    case 590u: goto L_08A72C58;
    case 591u: goto L_08A72CA4;
    case 592u: goto L_08A72CAC;
    case 593u: goto L_08A72CB8;
    case 594u: goto L_08A72CC4;
    case 595u: goto L_08A72CCC;
    case 596u: goto L_08A72CD4;
    case 597u: goto L_08A72CE0;
    case 598u: goto L_08A72CE8;
    case 599u: goto L_08A72D1C;
    case 600u: goto L_08A72D28;
    case 601u: goto L_08A72D34;
    case 602u: goto L_08A72D44;
    case 603u: goto L_08A72D48;
    case 604u: goto L_08A72D58;
    case 605u: goto L_08A72D88;
    case 606u: goto L_08A72DD4;
    case 607u: goto L_08A72DDC;
    case 608u: goto L_08A72DE8;
    case 609u: goto L_08A72DF4;
    case 610u: goto L_08A72DFC;
    case 611u: goto L_08A72E04;
    case 612u: goto L_08A72E10;
    case 613u: goto L_08A72E18;
    case 614u: goto L_08A72E4C;
    case 615u: goto L_08A72E58;
    case 616u: goto L_08A72E64;
    case 617u: goto L_08A72E74;
    case 618u: goto L_08A72E78;
    case 619u: goto L_08A72E88;
    case 620u: goto L_08A72EB8;
    case 621u: goto L_08A72EC0;
    case 622u: goto L_08A72ECC;
    case 623u: goto L_08A72EE0;
    case 624u: goto L_08A72EE8;
    case 625u: goto L_08A72EEC;
    case 626u: goto L_08A72F18;
    case 627u: goto L_08A72F44;
    case 628u: goto L_08A72F68;
    case 629u: goto L_08A72F8C;
    case 630u: goto L_08A72FD0;
    case 631u: goto L_08A72FF4;
    case 632u: goto L_08A7303C;
    case 633u: goto L_08A73060;
    case 634u: goto L_08A73074;
    case 635u: goto L_08A730C0;
    case 636u: goto L_08A730EC;
    case 637u: goto L_08A730F8;
    case 638u: goto L_08A73100;
    case 639u: goto L_08A73124;
    case 640u: goto L_08A73170;
    case 641u: goto L_08A73194;
    case 642u: goto L_08A731E8;
    case 643u: goto L_08A73200;
    case 644u: goto L_08A73230;
    case 645u: goto L_08A7327C;
    case 646u: goto L_08A73284;
    case 647u: goto L_08A732A8;
    case 648u: goto L_08A732E0;
    case 649u: goto L_08A73318;
    case 650u: goto L_08A73350;
    case 651u: goto L_08A7337C;
    case 652u: goto L_08A733EC;
    case 653u: goto L_08A733FC;
    case 654u: goto L_08A73420;
    case 655u: goto L_08A7343C;
    case 656u: goto L_08A73464;
    case 657u: goto L_08A734B0;
    case 658u: goto L_08A734B8;
    case 659u: goto L_08A734F0;
    case 660u: goto L_08A73558;
    case 661u: goto L_08A73560;
    case 662u: goto L_08A73570;
    case 663u: goto L_08A735D4;
    case 664u: goto L_08A735DC;
    case 665u: goto L_08A735E8;
    case 666u: goto L_08A73610;
    case 667u: goto L_08A7361C;
    case 668u: goto L_08A7362C;
    case 669u: goto L_08A73640;
    case 670u: goto L_08A73658;
    case 671u: goto L_08A73664;
    case 672u: goto L_08A73688;
    case 673u: goto L_08A736B8;
    case 674u: goto L_08A736C4;
    case 675u: goto L_08A736D4;
    case 676u: goto L_08A736E8;
    case 677u: goto L_08A73734;
    case 678u: goto L_08A73748;
    case 679u: goto L_08A73754;
    case 680u: goto L_08A7375C;
    case 681u: goto L_08A73760;
    case 682u: goto L_08A73768;
    case 683u: goto L_08A73774;
    case 684u: goto L_08A7377C;
    case 685u: goto L_08A73780;
    case 686u: goto L_08A73788;
    case 687u: goto L_08A7379C;
    case 688u: goto L_08A737A4;
    case 689u: goto L_08A737AC;
    case 690u: goto L_08A737B4;
    case 691u: goto L_08A737BC;
    case 692u: goto L_08A737C8;
    case 693u: goto L_08A737D8;
    case 694u: goto L_08A737E8;
    case 695u: goto L_08A737F4;
    case 696u: goto L_08A73820;
    case 697u: goto L_08A7382C;
    case 698u: goto L_08A7383C;
    case 699u: goto L_08A73850;
    case 700u: goto L_08A73884;
    case 701u: goto L_08A738CC;
    case 702u: goto L_08A738D8;
    case 703u: goto L_08A738E8;
    case 704u: goto L_08A738FC;
    case 705u: goto L_08A73928;
    case 706u: goto L_08A73930;
    case 707u: goto L_08A7394C;
    case 708u: goto L_08A7399C;
    case 709u: goto L_08A739C0;
    case 710u: goto L_08A73A24;
    case 711u: goto L_08A73A60;
    case 712u: goto L_08A73AA0;
    case 713u: goto L_08A73AAC;
    case 714u: goto L_08A73ACC;
    case 715u: goto L_08A73AE0;
    case 716u: goto L_08A73B10;
    case 717u: goto L_08A73B18;
    case 718u: goto L_08A73B38;
    case 719u: goto L_08A73B40;
    case 720u: goto L_08A73B7C;
    case 721u: goto L_08A73B8C;
    case 722u: goto L_08A73BD4;
    case 723u: goto L_08A73BF0;
    case 724u: goto L_08A73C18;
    case 725u: goto L_08A73C74;
    case 726u: goto L_08A73C88;
    case 727u: goto L_08A73C98;
    case 728u: goto L_08A73CAC;
    case 729u: goto L_08A73CBC;
    case 730u: goto L_08A73CC4;
    case 731u: goto L_08A73CD0;
    case 732u: goto L_08A73CDC;
    case 733u: goto L_08A73CE4;
    case 734u: goto L_08A73D08;
    case 735u: goto L_08A73D18;
    case 736u: goto L_08A73D24;
    case 737u: goto L_08A73D28;
    case 738u: goto L_08A73D38;
    case 739u: goto L_08A73D40;
    case 740u: goto L_08A73D74;
    case 741u: goto L_08A73D80;
    case 742u: goto L_08A73D94;
    case 743u: goto L_08A73D98;
    case 744u: goto L_08A73DC0;
    case 745u: goto L_08A73DEC;
    case 746u: goto L_08A73E44;
    case 747u: goto L_08A73E60;
    case 748u: goto L_08A73E70;
    case 749u: goto L_08A73E78;
    case 750u: goto L_08A73E80;
    case 751u: goto L_08A73E88;
    case 752u: goto L_08A73E90;
    case 753u: goto L_08A73EA8;
    case 754u: goto L_08A73EB0;
    case 755u: goto L_08A73EBC;
    case 756u: goto L_08A73EEC;
    case 757u: goto L_08A73EF4;
    case 758u: goto L_08A73EFC;
    case 759u: goto L_08A73F28;
    case 760u: goto L_08A73F50;
    case 761u: goto L_08A73F78;
    case 762u: goto L_08A73F84;
    case 763u: goto L_08A73F90;
    case 764u: goto L_08A73FA0;
    case 765u: goto L_08A73FAC;
    case 766u: goto L_08A73FC4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A70000:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A70028u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A70028u) goto L_08A70028;
    return;
L_08A70028:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70048;
      }
      goto L_08A70030;
    }
L_08A70030:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70048;
      }
      goto L_08A70038;
    }
L_08A70038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(692), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(688), ctx.gpr[21]);
    goto L_08A70048;
L_08A70048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_08A7004C;
L_08A7004C:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7006C;
      }
      goto L_08A70058;
    }
L_08A70058:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7006C;
      }
      goto L_08A70064;
    }
L_08A70064:
    ctx.gpr[31] = (0x08A7006Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A7006Cu) goto L_08A7006C;
    return;
L_08A7006C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A70098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A700A0;
      }
      goto L_08A700A0;
    }
L_08A700A0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A700A8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[6] = (17436u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A702B0;
      }
      goto L_08A700E4;
    }
L_08A700E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A70104;
      }
      goto L_08A700F0;
    }
L_08A700F0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A7011C;
      }
      goto L_08A700F8;
    }
L_08A700F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1728)));
      if (branch_taken) {
          goto L_08A70120;
      }
      goto L_08A70104;
    }
L_08A70104:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7011C;
      }
      goto L_08A70110;
    }
L_08A70110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1445)));
      if (branch_taken) {
          goto L_08A70120;
      }
      goto L_08A7011C;
    }
L_08A7011C:
    ctx.gpr[4] = (0u | 4u);
    goto L_08A70120;
L_08A70120:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A702A8;
      }
      goto L_08A7012C;
    }
L_08A7012C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A702A8;
      }
      goto L_08A70134;
    }
L_08A70134:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A702A8;
      }
      goto L_08A70150;
    }
L_08A70150:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A70160u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A70160u) goto L_08A70160;
    return;
L_08A70160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[22] / ctx.fpr[13];
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[5] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A70198;
    }
    goto L_08A70198;
L_08A70198:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7816)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A701CCu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A701CCu) goto L_08A701CC;
    return;
L_08A701CC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A702A8;
      }
      goto L_08A701DC;
    }
L_08A701DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 264u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 264u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[31] = (0x08A70214u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A70214u) goto L_08A70214;
    return;
L_08A70214:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A70238;
      }
      goto L_08A7022C;
    }
L_08A7022C:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    goto L_08A70238;
L_08A70238:
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[13];
        goto L_08A7025C;
    }
    goto L_08A7024C;
L_08A7024C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A70270;
      }
      goto L_08A7025C;
    }
L_08A7025C:
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    goto L_08A70270;
L_08A70270:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A702A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A702A8u) goto L_08A702A8;
    return;
L_08A702A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A702B4;
      }
      goto L_08A702B0;
    }
L_08A702B0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A702B4;
L_08A702B4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
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
L_08A702D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (17579u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[18] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A70340;
      }
      goto L_08A7032C;
    }
L_08A7032C:
    ctx.gpr[31] = (0x08A70334u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x08A70334u) goto L_08A70334;
    return;
L_08A70334:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A70CF0;
      }
      goto L_08A70340;
    }
L_08A70340:
    ctx.gpr[31] = (0x08A70348u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A70348u) goto L_08A70348;
    return;
L_08A70348:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_08A703A4;
      }
      goto L_08A70354;
    }
L_08A70354:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A703A4;
      }
      goto L_08A7036C;
    }
L_08A7036C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.gpr[16] = (2233u << 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25200));
      if (branch_taken) {
          goto L_08A70390;
      }
      goto L_08A7037C;
    }
L_08A7037C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A70388u);
    ctx.gpr[5] = (0u | 21u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A70388u) goto L_08A70388;
    return;
L_08A70388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7039C;
      }
      goto L_08A70390;
    }
L_08A70390:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7039Cu);
    ctx.gpr[5] = (0u | 23u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A7039Cu) goto L_08A7039C;
    return;
L_08A7039C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A70CF4;
      }
      goto L_08A703A4;
    }
L_08A703A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70CE8;
      }
      goto L_08A703B4;
    }
L_08A703B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A703C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A703C4u) goto L_08A703C4;
    return;
L_08A703C4:
    ctx.gpr[31] = (0x08A703CCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A703CCu) goto L_08A703CC;
    return;
L_08A703CC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A7043C;
      }
      goto L_08A703DC;
    }
L_08A703DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-999));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7043C;
      }
      goto L_08A703EC;
    }
L_08A703EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8292));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A70418u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 302u, 0x088B5D4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A70418u) goto L_08A70418;
    return;
L_08A70418:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A70CE8;
      }
      goto L_08A70424;
    }
L_08A70424:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A70434u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A70D20;
L_08A70434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70CE8;
      }
      goto L_08A7043C;
    }
L_08A7043C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A709C0;
      }
      goto L_08A70448;
    }
L_08A70448:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 203 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A70470;
      }
      goto L_08A70458;
    }
L_08A70458:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-999));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A704A4;
      }
      goto L_08A70464;
    }
L_08A70464:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(74)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A704A8;
      }
      goto L_08A70470;
    }
L_08A70470:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 206 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 207 ? 1u : 0u);
        goto L_08A70490;
    }
    goto L_08A7047C;
L_08A7047C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 205 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A70498;
      }
      goto L_08A70488;
    }
L_08A70488:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A704A4;
      }
      goto L_08A70490;
    }
L_08A70490:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A704A4;
      }
      goto L_08A70498;
    }
L_08A70498:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(74)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 1u);
      if (branch_taken) {
          goto L_08A704A8;
      }
      goto L_08A704A4;
    }
L_08A704A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(624)));
    goto L_08A704A8;
L_08A704A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) > 0;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08A704F4;
      }
      goto L_08A704B0;
    }
L_08A704B0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[7]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A704DC;
      }
      goto L_08A704B8;
    }
L_08A704B8:
    ctx.gpr[11] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1729)));
    ctx.gpr[11] = (16916u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1730)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[2] + static_cast<std::uint32_t>(1732));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[10] = (ctx.gpr[2] + static_cast<std::uint32_t>(1736));
      if (branch_taken) {
          goto L_08A7051C;
      }
      goto L_08A704DC;
    }
L_08A704DC:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A704ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23640));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A704ECu) goto L_08A704EC;
    return;
L_08A704EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A70CF4;
      }
      goto L_08A704F4;
    }
L_08A704F4:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A704DC;
      }
      goto L_08A704FC;
    }
L_08A704FC:
    ctx.gpr[11] = (16192u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1446)));
    ctx.gpr[11] = (16916u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1447)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[11]);
    ctx.gpr[9] = (ctx.gpr[2] + static_cast<std::uint32_t>(1448));
    ctx.gpr[10] = (ctx.gpr[2] + static_cast<std::uint32_t>(1452));
    goto L_08A7051C;
L_08A7051C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A70880;
      }
      goto L_08A70524;
    }
L_08A70524:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[5] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (ctx.gpr[11] & 1u);
    { const bool branch_taken = ctx.gpr[3] == 0u;
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
      if (branch_taken) {
          goto L_08A7057C;
      }
      goto L_08A70548;
    }
L_08A70548:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70558;
      }
      goto L_08A70550;
    }
L_08A70550:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7057C;
      }
      goto L_08A70558;
    }
L_08A70558:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7073C;
      }
      goto L_08A7056C;
    }
L_08A7056C:
    ctx.gpr[7] = (16230u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 26214u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A7073C;
      }
      goto L_08A7057C;
    }
L_08A7057C:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[3] = (0u | 2u);
    ctx.gpr[11] = (ctx.gpr[11] & 496u);
    ctx.gpr[11] = (ctx.gpr[11] >> 4u);
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A705A4;
      }
      goto L_08A70594;
    }
L_08A70594:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A705A4;
      }
      goto L_08A7059C;
    }
L_08A7059C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A705AC;
      }
      goto L_08A705A4;
    }
L_08A705A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7073C;
      }
      goto L_08A705AC;
    }
L_08A705AC:
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(72))))));
    ctx.gpr[3] = (0u | 82u);
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[3];
    ctx.gpr[3] = (0u | 70u);
      if (branch_taken) {
          goto L_08A705D4;
      }
      goto L_08A705BC;
    }
L_08A705BC:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[3];
    ctx.gpr[3] = (0u | 52u);
      if (branch_taken) {
          goto L_08A70640;
      }
      goto L_08A705C4;
    }
L_08A705C4:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[3];
    // nop
      if (branch_taken) {
          goto L_08A706AC;
      }
      goto L_08A705CC;
    }
L_08A705CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7073C;
      }
      goto L_08A705D4;
    }
L_08A705D4:
    ctx.gpr[3] = (ctx.gpr[7] | 0u);
    ctx.gpr[12] = (0u | 5u);
    ctx.gpr[11] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[12];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08A70604;
      }
      goto L_08A705E8;
    }
L_08A705E8:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A70638;
      }
      goto L_08A705F0;
    }
L_08A705F0:
    ctx.gpr[7] = (15948u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_08A70638;
      }
      goto L_08A70604;
    }
L_08A70604:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A7061C;
      }
      goto L_08A7060C;
    }
L_08A7060C:
    ctx.gpr[7] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
    goto L_08A7061C;
L_08A7061C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A70638;
      }
      goto L_08A70628;
    }
L_08A70628:
    ctx.gpr[7] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08A70638;
L_08A70638:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7073C;
      }
      goto L_08A70640;
    }
L_08A70640:
    ctx.gpr[3] = (ctx.gpr[7] | 0u);
    ctx.gpr[12] = (0u | 5u);
    ctx.gpr[11] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[12];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A70670;
      }
      goto L_08A70654;
    }
L_08A70654:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A706A4;
      }
      goto L_08A7065C;
    }
L_08A7065C:
    ctx.gpr[7] = (15948u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_08A706A4;
      }
      goto L_08A70670;
    }
L_08A70670:
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A70688;
      }
      goto L_08A70678;
    }
L_08A70678:
    ctx.gpr[7] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
    goto L_08A70688;
L_08A70688:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[11];
    // nop
      if (branch_taken) {
          goto L_08A706A4;
      }
      goto L_08A70694;
    }
L_08A70694:
    ctx.gpr[7] = (15820u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08A706A4;
L_08A706A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7073C;
      }
      goto L_08A706AC;
    }
L_08A706AC:
    ctx.gpr[11] = (ctx.gpr[7] | 0u);
    ctx.gpr[3] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[11] != ctx.gpr[3];
    ctx.gpr[7] = (0u | 1u);
      if (branch_taken) {
          goto L_08A70700;
      }
      goto L_08A706BC;
    }
L_08A706BC:
    ctx.gpr[3] = (15820u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 52429u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08A706CC;
L_08A706CC:
    ctx.gpr[3] = (ctx.gpr[11] << 2u);
    ctx.gpr[3] = (ctx.gpr[10] + ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A706E4;
      }
      goto L_08A706E0;
    }
L_08A706E0:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08A706E4;
L_08A706E4:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[11]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A706CC;
      }
      goto L_08A706F8;
    }
L_08A706F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7073C;
      }
      goto L_08A70700;
    }
L_08A70700:
    ctx.gpr[3] = (15692u << 16u);
    ctx.gpr[3] = (ctx.gpr[3] | 52429u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[3]);
    goto L_08A70710;
L_08A70710:
    ctx.gpr[3] = (ctx.gpr[11] << 2u);
    ctx.gpr[3] = (ctx.gpr[10] + ctx.gpr[3]);
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[3] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A70728;
      }
      goto L_08A70724;
    }
L_08A70724:
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08A70728;
L_08A70728:
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(1));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[3] = (static_cast<std::int32_t>(ctx.gpr[11]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A70710;
      }
      goto L_08A7073C;
    }
L_08A7073C:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A70878;
      }
      goto L_08A7074C;
    }
L_08A7074C:
    ctx.gpr[10] = (16256u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] | ctx.gpr[18]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[10]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A70780;
      }
      goto L_08A70760;
    }
L_08A70760:
    ctx.fpr[20] = ctx.fpr[17] / ctx.fpr[13];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A70778;
    }
    goto L_08A70778;
L_08A70778:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A708AC;
      }
      goto L_08A70780;
    }
L_08A70780:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[7] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A70838;
      }
      goto L_08A70788;
    }
L_08A70788:
    ctx.gpr[7] = (ctx.gpr[4] & 255u);
    ctx.gpr[10] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[10]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = ctx.fpr[17] - ctx.fpr[16];
    ctx.fpr[13] = ctx.fpr[16] / ctx.fpr[13];
    ctx.gpr[7] = (16416u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A707C8;
    }
    goto L_08A707C8;
L_08A707C8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[20])) && ctx.fpr[22] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
        goto L_08A70818;
    }
    goto L_08A707D8;
L_08A707D8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[7] & 496u);
    ctx.gpr[7] = (ctx.gpr[7] >> 4u);
    if (ctx.gpr[7] == ctx.gpr[9]) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
        goto L_08A70818;
    }
    goto L_08A707F0;
L_08A707F0:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[18]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
        goto L_08A70818;
    }
    goto L_08A70808;
L_08A70808:
    ctx.gpr[6] = (16179u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
    goto L_08A70818;
L_08A70818:
    ctx.gpr[6] = (16243u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[16];
      if (branch_taken) {
          goto L_08A708AC;
      }
      goto L_08A70838;
    }
L_08A70838:
    ctx.gpr[9] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[9]);
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(92)));
    ctx.fpr[13] = ctx.fpr[17] - ctx.fpr[13];
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[16];
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A70870;
    }
    goto L_08A70870;
L_08A70870:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A708AC;
      }
      goto L_08A70878;
    }
L_08A70878:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A708AC;
      }
      goto L_08A70880;
    }
L_08A70880:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A708A0;
      }
      goto L_08A70888;
    }
L_08A70888:
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08A708A0;
L_08A708A0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(603))))));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    goto L_08A708AC;
L_08A708AC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (18060u << 16u);
      if (branch_taken) {
          goto L_08A70924;
      }
      goto L_08A708B4;
    }
L_08A708B4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) <= 0;
    ctx.gpr[6] = (18060u << 16u);
      if (branch_taken) {
          goto L_08A70924;
      }
      goto L_08A708BC;
    }
L_08A708BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[4] = (17995u << 16u);
      if (branch_taken) {
          goto L_08A708D4;
      }
      goto L_08A708CC;
    }
L_08A708CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 22050u);
      if (branch_taken) {
          goto L_08A7097C;
      }
      goto L_08A708D4;
    }
L_08A708D4:
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_08A70908;
    }
    goto L_08A708F8;
L_08A708F8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_08A7091C;
      }
      goto L_08A70908;
    }
L_08A70908:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
    goto L_08A7091C;
L_08A7091C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7097C;
      }
      goto L_08A70924;
    }
L_08A70924:
    ctx.gpr[6] = (ctx.gpr[6] | 40960u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
        goto L_08A70958;
    }
    goto L_08A70948;
L_08A70948:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_08A7096C;
      }
      goto L_08A70958;
    }
L_08A70958:
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
    goto L_08A7096C;
L_08A7096C:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(1200));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[6])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08A7097C;
L_08A7097C:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A709B8;
      }
      goto L_08A7098C;
    }
L_08A7098C:
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[14];
    ctx.gpr[4] = (16752u << 16u);
    ctx.gpr[6] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A709D8;
      }
      goto L_08A709B8;
    }
L_08A709B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 105u);
      if (branch_taken) {
          goto L_08A709D8;
      }
      goto L_08A709C0;
    }
L_08A709C0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[6] = (16916u << 16u);
    ctx.gpr[4] = (0u | 90u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    goto L_08A709D8;
L_08A709D8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A709E8;
      }
      goto L_08A709E0;
    }
L_08A709E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A709E8;
L_08A709E8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70A5C;
      }
      goto L_08A709F0;
    }
L_08A709F0:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17669u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A70A3C;
      }
      goto L_08A70A2C;
    }
L_08A70A2C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4270));
      if (branch_taken) {
          goto L_08A70A54;
      }
      goto L_08A70A3C;
    }
L_08A70A3C:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4270));
    goto L_08A70A54;
L_08A70A54:
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08A70A5C;
L_08A70A5C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A70A70u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A70A70u) goto L_08A70A70;
    return;
L_08A70A70:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A70CE8;
      }
      goto L_08A70A80;
    }
L_08A70A80:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A70BF4;
      }
      goto L_08A70A88;
    }
L_08A70A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8292));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[9] = (15523u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] & 496u);
    ctx.gpr[9] = (ctx.gpr[9] | 55050u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-4));
    ctx.gpr[7] = (ctx.gpr[7] >> 4u);
    ctx.gpr[8] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
      if (branch_taken) {
          goto L_08A70B64;
      }
      goto L_08A70AD0;
    }
L_08A70AD0:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A70B50;
      }
      goto L_08A70AE0;
    }
L_08A70AE0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (17948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A70B2C;
      }
      goto L_08A70B1C;
    }
L_08A70B1C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_08A70B44;
      }
      goto L_08A70B2C;
    }
L_08A70B2C:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
    goto L_08A70B44;
L_08A70B44:
    ctx.gpr[4] = (0u | 52u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A70BF4;
      }
      goto L_08A70B50;
    }
L_08A70B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A70BF4;
      }
      goto L_08A70B64;
    }
L_08A70B64:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(588)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[6] << 3u);
      if (branch_taken) {
          goto L_08A70BE4;
      }
      goto L_08A70B78;
    }
L_08A70B78:
    ctx.gpr[6] = (17948u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (2229u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10728));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A70BC0;
      }
      goto L_08A70BB0;
    }
L_08A70BB0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_08A70BD8;
      }
      goto L_08A70BC0;
    }
L_08A70BC0:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
    goto L_08A70BD8;
L_08A70BD8:
    ctx.gpr[4] = (0u | 52u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A70BF4;
      }
      goto L_08A70BE4;
    }
L_08A70BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    goto L_08A70BF4;
L_08A70BF4:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A70C5C;
    }
    goto L_08A70BFC;
L_08A70BFC:
    ctx.gpr[31] = (0x08A70C04u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x08A70C04u) goto L_08A70C04;
    return;
L_08A70C04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A70C28;
      }
      goto L_08A70C10;
    }
L_08A70C10:
    ctx.gpr[4] = (0u | 5557u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5557u);
      if (branch_taken) {
          goto L_08A70C38;
      }
      goto L_08A70C28;
    }
L_08A70C28:
    ctx.gpr[4] = (0u | 78u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 78u);
    goto L_08A70C38;
L_08A70C38:
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[6] = (ctx.gpr[17] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (0u | 100u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A70C88;
      }
      goto L_08A70C5C;
    }
L_08A70C5C:
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[6]);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A70C88;
L_08A70C88:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 64u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 89u);
      if (branch_taken) {
          goto L_08A70CA8;
      }
      goto L_08A70CA0;
    }
L_08A70CA0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A70CB4;
      }
      goto L_08A70CA8;
    }
L_08A70CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A70CB4;
L_08A70CB4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16576u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 8u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A70CE8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A70CE8u) goto L_08A70CE8;
    return;
L_08A70CE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A70CF4;
      }
      goto L_08A70CF0;
    }
L_08A70CF0:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A70CF4;
L_08A70CF4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A70D20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-336));
    ctx.gpr[6] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(264), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1)));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[16]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[4]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-25200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A70DA4;
      }
      goto L_08A70D9C;
    }
L_08A70D9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 21u);
      if (branch_taken) {
          goto L_08A70DA8;
      }
      goto L_08A70DA4;
    }
L_08A70DA4:
    ctx.gpr[30] = (0u | 23u);
    goto L_08A70DA8;
L_08A70DA8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(10920)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70DEC;
      }
      goto L_08A70DB4;
    }
L_08A70DB4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(10920), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(11396), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11425), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11424), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11428), 0u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11432), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A70DEC;
L_08A70DEC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A70DF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2824));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 639u, 0x088BB0F0u>(ctx, &aot_mem) && ctx.pc == 0x08A70DF8u) goto L_08A70DF8;
    return;
L_08A70DF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70E28;
      }
      goto L_08A70E00;
    }
L_08A70E00:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25184));
    ctx.gpr[31] = (0x08A70E10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08A70E10u) goto L_08A70E10;
    return;
L_08A70E10:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(262), static_cast<std::uint16_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x08A70E1Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A70E1Cu) goto L_08A70E1C;
    return;
L_08A70E1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[2]));
      if (branch_taken) {
          goto L_08A70E3C;
      }
      goto L_08A70E28;
    }
L_08A70E28:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(262), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_08A70E3C;
L_08A70E3C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (47747u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A70E68;
      }
      goto L_08A70E5C;
    }
L_08A70E5C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A70E70;
      }
      goto L_08A70E68;
    }
L_08A70E68:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(240), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A70E70;
L_08A70E70:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A70E80u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 360u, 0x088B60A0u>(ctx, &aot_mem) && ctx.pc == 0x08A70E80u) goto L_08A70E80;
    return;
L_08A70E80:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.fpr[24] = ctx.fpr[24] / ctx.fpr[14];
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A70EB4;
    }
    goto L_08A70EB4;
L_08A70EB4:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A70EC4;
    }
    goto L_08A70EC4;
L_08A70EC4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[9] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 203 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_08A70F6C;
      }
      goto L_08A70ED4;
    }
L_08A70ED4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 206 ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 207 ? 1u : 0u);
        goto L_08A70EF8;
    }
    goto L_08A70EE0;
L_08A70EE0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 205 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(74)));
        goto L_08A70F04;
    }
    goto L_08A70EEC;
L_08A70EEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70F6C;
      }
      goto L_08A70EF4;
    }
L_08A70EF4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 207 ? 1u : 0u);
    goto L_08A70EF8;
L_08A70EF8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A70F6C;
      }
      goto L_08A70F00;
    }
L_08A70F00:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(74)));
    goto L_08A70F04;
L_08A70F04:
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11398), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11398)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A70F54;
      }
      goto L_08A70F30;
    }
L_08A70F30:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11428), 0u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(11396), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(262), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(250), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A70F60;
      }
      goto L_08A70F54;
    }
L_08A70F54:
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11428), ctx.gpr[5]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    goto L_08A70F60;
L_08A70F60:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(265), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A70F78;
      }
      goto L_08A70F6C;
    }
L_08A70F6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[9] + static_cast<std::uint32_t>(624)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(48), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A70F78;
L_08A70F78:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) > 0;
    ctx.gpr[18] = (0u | 5u);
      if (branch_taken) {
          goto L_08A71000;
      }
      goto L_08A70F80;
    }
L_08A70F80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[9]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A70FE8;
      }
      goto L_08A70F88;
    }
L_08A70F88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (20224u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1729)));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1730)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1580)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(261), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11440)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[10] = (2226u << 16u);
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(1732));
    ctx.gpr[18] = (0u | 5u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11436)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(8292));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(23716));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10360));
      if (branch_taken) {
          goto L_08A71060;
      }
      goto L_08A70FE8;
    }
L_08A70FE8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[9] | 0u);
    ctx.gpr[31] = (0x08A70FF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23640));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A70FF8u) goto L_08A70FF8;
    return;
L_08A70FF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71C68;
      }
      goto L_08A71000;
    }
L_08A71000:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A70FE8;
      }
      goto L_08A71008;
    }
L_08A71008:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (20224u << 16u);
    ctx.gpr[23] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1446)));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1447)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1352)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(261), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11440)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[11] = (2229u << 16u);
    ctx.fpr[18] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[18])));
    ctx.gpr[10] = (2226u << 16u);
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(1448));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11436)));
    ctx.gpr[11] = (ctx.gpr[11] + static_cast<std::uint32_t>(8292));
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(23716));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10360));
    goto L_08A71060;
L_08A71060:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A71164;
      }
      goto L_08A71070;
    }
L_08A71070:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A710F4;
      }
      goto L_08A71090;
    }
L_08A71090:
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A710B0;
    }
    goto L_08A710B0;
L_08A710B0:
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[30];
        goto L_08A710D8;
    }
    goto L_08A710C8;
L_08A710C8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A710EC;
      }
      goto L_08A710D8;
    }
L_08A710D8:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    goto L_08A710EC;
L_08A710EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A7114C;
      }
      goto L_08A710F4;
    }
L_08A710F4:
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A71114;
    }
    goto L_08A71114;
L_08A71114:
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[30];
        goto L_08A71138;
    }
    goto L_08A7112C;
L_08A7112C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[15]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A71148;
      }
      goto L_08A71138;
    }
L_08A71138:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    goto L_08A71148;
L_08A71148:
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    goto L_08A7114C;
L_08A7114C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7115C;
      }
      goto L_08A71158;
    }
L_08A71158:
    ctx.gpr[19] = (0u - ctx.gpr[19]);
    goto L_08A7115C;
L_08A7115C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71168;
      }
      goto L_08A71164;
    }
L_08A71164:
    ctx.gpr[19] = (0u | 0u);
    goto L_08A71168;
L_08A71168:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A71178;
      }
      goto L_08A71178;
    }
L_08A71178:
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[17]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
        goto L_08A71190;
    }
    goto L_08A71188;
L_08A71188:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
      if (branch_taken) {
          goto L_08A71190;
      }
      goto L_08A71190;
    }
L_08A71190:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[8]) >= 0;
    ctx.gpr[4] = (20352u << 16u);
      if (branch_taken) {
          goto L_08A711A0;
      }
      goto L_08A71198;
    }
L_08A71198:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[18] = ctx.fpr[18] + ctx.fpr[13];
    goto L_08A711A0;
L_08A711A0:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[17];
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
        goto L_08A711C4;
    }
    goto L_08A711B8;
L_08A711B8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A711D4;
      }
      goto L_08A711C4;
    }
L_08A711C4:
    ctx.gpr[22] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[22] = (ctx.gpr[4] + ctx.gpr[22]);
    goto L_08A711D4;
L_08A711D4:
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[17]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[22]);
      if (branch_taken) {
          goto L_08A711F0;
      }
      goto L_08A711E4;
    }
L_08A711E4:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(248), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A711F8;
      }
      goto L_08A711F0;
    }
L_08A711F0:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(248), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A711F8;
L_08A711F8:
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08A71270;
      }
      goto L_08A71200;
    }
L_08A71200:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71214;
      }
      goto L_08A71210;
    }
L_08A71210:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1400));
    goto L_08A71214;
L_08A71214:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[11]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1308)));
    ctx.gpr[31] = (0x08A71224u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[10]);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 376u, 0x08AF99E4u>(ctx, &aot_mem) && ctx.pc == 0x08A71224u) goto L_08A71224;
    return;
L_08A71224:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08A71238;
    }
    goto L_08A71238;
L_08A71238:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(11444)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A71260;
      }
      goto L_08A71254;
    }
L_08A71254:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A71260;
L_08A71260:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08A71270;
L_08A71270:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[6] << 5u);
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[11]);
    ctx.gpr[21] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A71294u);
    ctx.gpr[5] = (ctx.gpr[10] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A71294u) goto L_08A71294;
    return;
L_08A71294:
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[20]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(262))))));
    ctx.gpr[5] = (ctx.gpr[21] + static_cast<std::uint32_t>(-4));
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
      if (branch_taken) {
          goto L_08A718CC;
      }
      goto L_08A712B8;
    }
L_08A712B8:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11428)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71404;
      }
      goto L_08A712C8;
    }
L_08A712C8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11432), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(265)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71350;
      }
      goto L_08A712E0;
    }
L_08A712E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(262))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 150 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71348;
      }
      goto L_08A712F0;
    }
L_08A712F0:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71348;
      }
      goto L_08A712F8;
    }
L_08A712F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(250))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08A71348;
      }
      goto L_08A71304;
    }
L_08A71304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71348;
      }
      goto L_08A71320;
    }
L_08A71320:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71348;
      }
      goto L_08A7132C;
    }
L_08A7132C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(74)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71350;
      }
      goto L_08A71348;
    }
L_08A71348:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(11428), 0u);
      if (branch_taken) {
          goto L_08A71C38;
      }
      goto L_08A71350;
    }
L_08A71350:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(262))))));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(11428)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 220 ? 1u : 0u);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[22]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 8u);
      if (branch_taken) {
          goto L_08A7138C;
      }
      goto L_08A71368;
    }
L_08A71368:
    ctx.gpr[6] = (14979u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[6] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A713A4;
      }
      goto L_08A7138C;
    }
L_08A7138C:
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(4) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A713B8;
      }
      goto L_08A71398;
    }
L_08A71398:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(11428), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A713B8;
      }
      goto L_08A713A4;
    }
L_08A713A4:
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(800) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A713B8;
      }
      goto L_08A713B0;
    }
L_08A713B0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(11428), ctx.gpr[4]);
    goto L_08A713B8;
L_08A713B8:
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A713D8;
      }
      goto L_08A713D4;
    }
L_08A713D4:
    ctx.gpr[4] = (ctx.gpr[4] >> 1u);
    goto L_08A713D8;
L_08A713D8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[7] = (ctx.gpr[2] + static_cast<std::uint32_t>(5524));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 64u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A713FCu);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 482u, 0x08A5E9ACu>(ctx, &aot_mem) && ctx.pc == 0x08A713FCu) goto L_08A713FC;
    return;
L_08A713FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(262))))));
      if (branch_taken) {
          goto L_08A71C3C;
      }
      goto L_08A71404;
    }
L_08A71404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
      if (branch_taken) {
          goto L_08A71438;
      }
      goto L_08A71414;
    }
L_08A71414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1510))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71430;
      }
      goto L_08A71428;
    }
L_08A71428:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A7143C;
      }
      goto L_08A71430;
    }
L_08A71430:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7143C;
      }
      goto L_08A71438;
    }
L_08A71438:
    ctx.gpr[4] = (0u | 0u);
    goto L_08A7143C;
L_08A7143C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(262))))));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 150 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A714B0;
      }
      goto L_08A7144C;
    }
L_08A7144C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A714B0;
      }
      goto L_08A71454;
    }
L_08A71454:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[6] = (ctx.gpr[6] & 32u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A714B0;
      }
      goto L_08A71470;
    }
L_08A71470:
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[9]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A714B0;
      }
      goto L_08A71478;
    }
L_08A71478:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A714A4;
      }
      goto L_08A71480;
    }
L_08A71480:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (15395u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[28];
    ctx.gpr[6] = (ctx.gpr[6] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A714B0;
      }
      goto L_08A714A4;
    }
L_08A714A4:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(250))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A71724;
      }
      goto L_08A714B0;
    }
L_08A714B0:
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(10728));
    ctx.gpr[9] = (16840u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A714F4;
      }
      goto L_08A714D0;
    }
L_08A714D0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[7] = (ctx.gpr[7] & 32u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A714F4;
      }
      goto L_08A714EC;
    }
L_08A714EC:
    if (ctx.gpr[10] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(250))))));
        goto L_08A71500;
    }
    goto L_08A714F4;
L_08A714F4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71508;
      }
      goto L_08A714FC;
    }
L_08A714FC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(250))))));
    goto L_08A71500;
L_08A71500:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A71638;
      }
      goto L_08A71508;
    }
L_08A71508:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A7151C;
      }
      goto L_08A71510;
    }
L_08A71510:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(261)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08A71564;
      }
      goto L_08A7151C;
    }
L_08A7151C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A71544;
      }
      goto L_08A71538;
    }
L_08A71538:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11425)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71558;
      }
      goto L_08A71544;
    }
L_08A71544:
    { const bool branch_taken = ctx.gpr[10] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A71574;
      }
      goto L_08A7154C;
    }
L_08A7154C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11424)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71574;
      }
      goto L_08A71558;
    }
L_08A71558:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71574;
      }
      goto L_08A71560;
    }
L_08A71560:
    ctx.gpr[4] = (16153u << 16u);
    goto L_08A71564;
L_08A71564:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A71574;
L_08A71574:
    ctx.gpr[4] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[21] == ctx.gpr[4];
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08A7158C;
      }
      goto L_08A71580;
    }
L_08A71580:
    ctx.gpr[4] = (0u | 23u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[4];
    ctx.gpr[4] = (18115u << 16u);
      if (branch_taken) {
          goto L_08A715DC;
      }
      goto L_08A7158C;
    }
L_08A7158C:
    ctx.gpr[4] = (18026u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 24576u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[30];
        goto L_08A715BC;
    }
    goto L_08A715AC;
L_08A715AC:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_08A715D0;
      }
      goto L_08A715BC;
    }
L_08A715BC:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[19] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
    goto L_08A715D0;
L_08A715D0:
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A71620;
      }
      goto L_08A715D8;
    }
L_08A715D8:
    ctx.gpr[4] = (18115u << 16u);
    goto L_08A715DC;
L_08A715DC:
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[30]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[30];
        goto L_08A71608;
    }
    goto L_08A715F8;
L_08A715F8:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[19] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
      if (branch_taken) {
          goto L_08A7161C;
      }
      goto L_08A71608;
    }
L_08A71608:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[19] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(14000));
    goto L_08A7161C;
L_08A7161C:
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A71620;
L_08A71620:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A7169C;
      }
      goto L_08A71638;
    }
L_08A71638:
    ctx.gpr[4] = (17914u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
      if (branch_taken) {
          goto L_08A71664;
      }
      goto L_08A71654;
    }
L_08A71654:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_08A7167C;
      }
      goto L_08A71664;
    }
L_08A71664:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[30];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    goto L_08A7167C;
L_08A7167C:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A7169C;
L_08A7169C:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[6];
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[7]);
      if (branch_taken) {
          goto L_08A716A8;
      }
      goto L_08A716A4;
    }
L_08A716A4:
    ctx.gpr[19] = (ctx.gpr[19] >> 1u);
    goto L_08A716A8;
L_08A716A8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A716DC;
      }
      goto L_08A716B4;
    }
L_08A716B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(266), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08A716C8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A716C8u) goto L_08A716C8;
    return;
L_08A716C8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11432), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(266)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    goto L_08A716DC;
L_08A716DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A716F8;
      }
      goto L_08A716F0;
    }
L_08A716F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A716F8;
L_08A716F8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 2u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A7171Cu);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 482u, 0x08A5E9ACu>(ctx, &aot_mem) && ctx.pc == 0x08A7171Cu) goto L_08A7171C;
    return;
L_08A7171C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A718C4;
      }
      goto L_08A71724;
    }
L_08A71724:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7173Cu);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 931u, 0x08A9B6B8u>(ctx, &aot_mem) && ctx.pc == 0x08A7173Cu) goto L_08A7173C;
    return;
L_08A7173C:
    ctx.gpr[5] = (16916u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A71754u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 916u, 0x08A9B564u>(ctx, &aot_mem) && ctx.pc == 0x08A71754u) goto L_08A71754;
    return;
L_08A71754:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11432)));
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[9] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A717A8;
      }
      goto L_08A71774;
    }
L_08A71774:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11398)));
    ctx.gpr[6] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_08A7178C;
      }
      goto L_08A71784;
    }
L_08A71784:
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A717A0;
      }
      goto L_08A7178C;
    }
L_08A7178C:
    ctx.gpr[5] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 1 ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08A7179C;
    }
    goto L_08A7179C;
L_08A7179C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11398), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A717A0;
L_08A717A0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11432), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 1u);
    goto L_08A717A8;
L_08A717A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7182C;
      }
      goto L_08A717B4;
    }
L_08A717B4:
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
        goto L_08A71800;
    }
    goto L_08A717BC;
L_08A717BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11398)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(74)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08A717E4;
    }
    goto L_08A717D8;
L_08A717D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(11398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A717FC;
      }
      goto L_08A717E4;
    }
L_08A717E4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(11428), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[5] = (ctx.gpr[5] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A712C8;
      }
      goto L_08A717FC;
    }
L_08A717FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08A71800;
L_08A71800:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(602))))));
    ctx.gpr[6] = (ctx.gpr[2] + static_cast<std::uint32_t>(5523));
    ctx.gpr[7] = (ctx.gpr[7] | 128u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(602), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A7182Cu);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 295u, 0x088B5CD4u>(ctx, &aot_mem) && ctx.pc == 0x08A7182Cu) goto L_08A7182C;
    return;
L_08A7182C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[31] = (0x08A71840u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A71840u) goto L_08A71840;
    return;
L_08A71840:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A71858u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 337u, 0x088B5F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A71858u) goto L_08A71858;
    return;
L_08A71858:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A71868u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 354u, 0x088B6044u>(ctx, &aot_mem) && ctx.pc == 0x08A71868u) goto L_08A71868;
    return;
L_08A71868:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(11398)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(11400));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[19] + ctx.gpr[22]);
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[7];
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_08A7189C;
      }
      goto L_08A71894;
    }
L_08A71894:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 1u));
      if (branch_taken) {
          goto L_08A7189C;
      }
      goto L_08A7189C;
    }
L_08A7189C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x08A718ACu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 357u, 0x088B6074u>(ctx, &aot_mem) && ctx.pc == 0x08A718ACu) goto L_08A718AC;
    return;
L_08A718AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A718C4;
      }
      goto L_08A718B8;
    }
L_08A718B8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A718C4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 362u, 0x088B60D4u>(ctx, &aot_mem) && ctx.pc == 0x08A718C4u) goto L_08A718C4;
    return;
L_08A718C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(262))))));
      if (branch_taken) {
          goto L_08A71C3C;
      }
      goto L_08A718CC;
    }
L_08A718CC:
    ctx.gpr[20] = (ctx.gpr[5] << 3u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10728));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[19] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A71994;
      }
      goto L_08A718EC;
    }
L_08A718EC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71910;
      }
      goto L_08A718F8;
    }
L_08A718F8:
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08A71904u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A71904u) goto L_08A71904;
    return;
L_08A71904:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11432), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A71910;
L_08A71910:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71940;
      }
      goto L_08A71918;
    }
L_08A71918:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71940;
      }
      goto L_08A71934;
    }
L_08A71934:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71948;
      }
      goto L_08A71940;
    }
L_08A71940:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A71978;
      }
      goto L_08A71948;
    }
L_08A71948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] != ctx.gpr[18]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
        goto L_08A7195C;
    }
    goto L_08A71954;
L_08A71954:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A71978;
      }
      goto L_08A7195C;
    }
L_08A7195C:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.fpr[26] = ctx.fpr[26] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A71978;
    }
    goto L_08A71978;
L_08A71978:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A7198C;
      }
      goto L_08A71988;
    }
L_08A71988:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A7198C;
L_08A7198C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A71B6C;
      }
      goto L_08A71994;
    }
L_08A71994:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(11396))))));
    if (static_cast<std::int32_t>(ctx.gpr[5]) <= 0) {
    ctx.gpr[4] = (17948u << 16u);
        goto L_08A71B70;
    }
    goto L_08A719A4;
L_08A719A4:
    ctx.gpr[5] = (15692u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A719E4;
      }
      goto L_08A719B8;
    }
L_08A719B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[31] = (0x08A719C8u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 366u, 0x088B6130u>(ctx, &aot_mem) && ctx.pc == 0x08A719C8u) goto L_08A719C8;
    return;
L_08A719C8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11432), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (15692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A719E4;
L_08A719E4:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(11428), 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_08A71A50;
      }
      goto L_08A719F4;
    }
L_08A719F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (ctx.gpr[5] & 32u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71A50;
      }
      goto L_08A71A0C;
    }
L_08A71A0C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (15395u << 16u);
      if (branch_taken) {
          goto L_08A71A50;
      }
      goto L_08A71A18;
    }
L_08A71A18:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (15948u << 16u);
      if (branch_taken) {
          goto L_08A71A9C;
      }
      goto L_08A71A34;
    }
L_08A71A34:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A71A9C;
      }
      goto L_08A71A50;
    }
L_08A71A50:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 206u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A71A80;
      }
      goto L_08A71A60;
    }
L_08A71A60:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 203u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A71A80;
      }
      goto L_08A71A70;
    }
L_08A71A70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 204u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16153u << 16u);
      if (branch_taken) {
          goto L_08A71A88;
      }
      goto L_08A71A80;
    }
L_08A71A80:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A71A9C;
      }
      goto L_08A71A88;
    }
L_08A71A88:
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A71A9C;
L_08A71A9C:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (17948u << 16u);
      if (branch_taken) {
          goto L_08A71B70;
      }
      goto L_08A71AAC;
    }
L_08A71AAC:
    ctx.gpr[4] = (16243u << 16u);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(603))))));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
      if (branch_taken) {
          goto L_08A71AF8;
      }
      goto L_08A71AE8;
    }
L_08A71AE8:
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19000));
      if (branch_taken) {
          goto L_08A71B10;
      }
      goto L_08A71AF8;
    }
L_08A71AF8:
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[30];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19000));
    goto L_08A71B10;
L_08A71B10:
    ctx.gpr[6] = (16840u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(40));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A71B44;
      }
      goto L_08A71B3C;
    }
L_08A71B3C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A71B44;
L_08A71B44:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A71B50;
      }
      goto L_08A71B4C;
    }
L_08A71B4C:
    ctx.gpr[6] = (ctx.gpr[4] >> 1u);
    goto L_08A71B50;
L_08A71B50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[7] = (ctx.gpr[2] + static_cast<std::uint32_t>(5525));
    ctx.gpr[8] = (ctx.gpr[21] | 0u);
    ctx.gpr[9] = (0u | 63u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A71B6Cu);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 482u, 0x08A5E9ACu>(ctx, &aot_mem) && ctx.pc == 0x08A71B6Cu) goto L_08A71B6C;
    return;
L_08A71B6C:
    ctx.gpr[4] = (17948u << 16u);
    goto L_08A71B70;
L_08A71B70:
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(603))))));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[6] = (ctx.gpr[6] & 1u);
      if (branch_taken) {
          goto L_08A71BA4;
      }
      goto L_08A71B94;
    }
L_08A71B94:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_08A71BBC;
      }
      goto L_08A71BA4;
    }
L_08A71BA4:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(22050));
    goto L_08A71BBC;
L_08A71BBC:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[8]);
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[19];
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A71BEC;
      }
      goto L_08A71BE8;
    }
L_08A71BE8:
    ctx.gpr[4] = (ctx.gpr[7] >> 1u);
    goto L_08A71BEC;
L_08A71BEC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71BFC;
      }
      goto L_08A71BF4;
    }
L_08A71BF4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A71BFC;
L_08A71BFC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 52u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A71C1Cu);
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 482u, 0x08A5E9ACu>(ctx, &aot_mem) && ctx.pc == 0x08A71C1Cu) goto L_08A71C1C;
    return;
L_08A71C1C:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 1 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
        goto L_08A71C30;
    }
    goto L_08A71C30;
L_08A71C30:
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A71C38;
L_08A71C38:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(262))))));
    goto L_08A71C3C;
L_08A71C3C:
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(11396), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(11425), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11424), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A71C68;
L_08A71C68:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71CB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17505u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A71F9C;
      }
      goto L_08A71CEC;
    }
L_08A71CEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_08A71D18;
      }
      goto L_08A71CF8;
    }
L_08A71CF8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A71D38;
      }
      goto L_08A71D00;
    }
L_08A71D00:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71D40;
      }
      goto L_08A71D10;
    }
L_08A71D10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71D9C;
      }
      goto L_08A71D18;
    }
L_08A71D18:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A71D38;
      }
      goto L_08A71D20;
    }
L_08A71D20:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71DB4;
      }
      goto L_08A71D30;
    }
L_08A71D30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71E0C;
      }
      goto L_08A71D38;
    }
L_08A71D38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A71FA0;
      }
      goto L_08A71D40;
    }
L_08A71D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A71D50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(848));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 209u, 0x08A29280u>(ctx, &aot_mem) && ctx.pc == 0x08A71D50u) goto L_08A71D50;
    return;
L_08A71D50:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A71D88;
      }
      goto L_08A71D5C;
    }
L_08A71D5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1408)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A71D88;
      }
      goto L_08A71D80;
    }
L_08A71D80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A71D9C;
      }
      goto L_08A71D88;
    }
L_08A71D88:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71D40;
      }
      goto L_08A71D9C;
    }
L_08A71D9C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71DAC;
      }
      goto L_08A71DA4;
    }
L_08A71DA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71E24;
      }
      goto L_08A71DAC;
    }
L_08A71DAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A71FA0;
      }
      goto L_08A71DB4;
    }
L_08A71DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1016)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A71DF8;
      }
      goto L_08A71DCC;
    }
L_08A71DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A71DF8;
      }
      goto L_08A71DF0;
    }
L_08A71DF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A71E0C;
      }
      goto L_08A71DF8;
    }
L_08A71DF8:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A71DB4;
      }
      goto L_08A71E0C;
    }
L_08A71E0C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71E1C;
      }
      goto L_08A71E14;
    }
L_08A71E14:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A71E24;
      }
      goto L_08A71E1C;
    }
L_08A71E1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A71FA0;
      }
      goto L_08A71E24;
    }
L_08A71E24:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A71E60;
    }
    goto L_08A71E60;
L_08A71E60:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A71F94;
      }
      goto L_08A71E7C;
    }
L_08A71E7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A71E8Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A71E8Cu) goto L_08A71E8C;
    return;
L_08A71E8C:
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A71EB8u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A71EB8u) goto L_08A71EB8;
    return;
L_08A71EB8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[4] = (0u | 95u);
      if (branch_taken) {
          goto L_08A71F94;
      }
      goto L_08A71EC8;
    }
L_08A71EC8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (17835u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (ctx.gpr[5] | 57344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 303u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17835u << 16u);
      if (branch_taken) {
          goto L_08A71F28;
      }
      goto L_08A71F0C;
    }
L_08A71F0C:
    ctx.gpr[4] = (17835u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 57344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A71F50;
      }
      goto L_08A71F28;
    }
L_08A71F28:
    ctx.gpr[4] = (ctx.gpr[4] | 57344u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A71F50;
L_08A71F50:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16880u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A71F94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A71F94u) goto L_08A71F94;
    return;
L_08A71F94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A71FA0;
      }
      goto L_08A71F9C;
    }
L_08A71F9C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A71FA0;
L_08A71FA0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A71FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (17608u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A7245C;
      }
      goto L_08A72024;
    }
L_08A72024:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08A72068;
      }
      goto L_08A72030;
    }
L_08A72030:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A72050;
      }
      goto L_08A72038;
    }
L_08A72038:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (0u | 4u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1728)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1732)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1736));
      if (branch_taken) {
          goto L_08A72088;
      }
      goto L_08A72050;
    }
L_08A72050:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A72060u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23736));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A72060u) goto L_08A72060;
    return;
L_08A72060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A72460;
      }
      goto L_08A72068;
    }
L_08A72068:
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A72050;
      }
      goto L_08A72074;
    }
L_08A72074:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[19] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1445)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1448)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1452));
    goto L_08A72088;
L_08A72088:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A72454;
      }
      goto L_08A72090;
    }
L_08A72090:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A720A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A720A4u) goto L_08A720A4;
    return;
L_08A720A4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (0u | 82u);
      if (branch_taken) {
          goto L_08A72214;
      }
      goto L_08A720B4;
    }
L_08A720B4:
    ctx.gpr[23] = (0u | 70u);
    ctx.gpr[22] = (0u | 52u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[20] = (0u | 3u);
    ctx.gpr[19] = (0u | 2u);
    goto L_08A720C8;
L_08A720C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A720E8;
      }
      goto L_08A720E0;
    }
L_08A720E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A721FC;
      }
      goto L_08A720E8;
    }
L_08A720E8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(72))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A72110;
      }
      goto L_08A720F8;
    }
L_08A720F8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08A7216C;
      }
      goto L_08A72100;
    }
L_08A72100:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08A721C8;
      }
      goto L_08A72108;
    }
L_08A72108:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A721E8;
      }
      goto L_08A72110;
    }
L_08A72110:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[21];
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A72124;
      }
      goto L_08A7211C;
    }
L_08A7211C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08A72148;
      }
      goto L_08A72124;
    }
L_08A72124:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A72140u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 583u, 0x08A5F318u>(ctx, &aot_mem) && ctx.pc == 0x08A72140u) goto L_08A72140;
    return;
L_08A72140:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A72164;
      }
      goto L_08A72148;
    }
L_08A72148:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A72160u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 603u, 0x08A5F4B8u>(ctx, &aot_mem) && ctx.pc == 0x08A72160u) goto L_08A72160;
    return;
L_08A72160:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A72164;
L_08A72164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A721E8;
      }
      goto L_08A7216C;
    }
L_08A7216C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08A72180;
      }
      goto L_08A72178;
    }
L_08A72178:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08A721A4;
      }
      goto L_08A72180;
    }
L_08A72180:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A7219Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 583u, 0x08A5F318u>(ctx, &aot_mem) && ctx.pc == 0x08A7219Cu) goto L_08A7219C;
    return;
L_08A7219C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A721C0;
      }
      goto L_08A721A4;
    }
L_08A721A4:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A721BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 603u, 0x08A5F4B8u>(ctx, &aot_mem) && ctx.pc == 0x08A721BCu) goto L_08A721BC;
    return;
L_08A721BC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A721C0;
L_08A721C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A721E8;
      }
      goto L_08A721C8;
    }
L_08A721C8:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A721E4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 583u, 0x08A5F318u>(ctx, &aot_mem) && ctx.pc == 0x08A721E4u) goto L_08A721E4;
    return;
L_08A721E4:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A721E8;
L_08A721E8:
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A721FC;
      }
      goto L_08A721F8;
    }
L_08A721F8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A721FC;
L_08A721FC:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A720C8;
      }
      goto L_08A72214;
    }
L_08A72214:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_08A72454;
      }
      goto L_08A72224;
    }
L_08A72224:
    ctx.gpr[4] = (16988u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16928u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A72254u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A72254u) goto L_08A72254;
    return;
L_08A72254:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_08A72454;
      }
      goto L_08A72264;
    }
L_08A72264:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (20224u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(325)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2));
    ctx.gpr[7] = (ctx.gpr[6] < static_cast<std::uint32_t>(32) ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[5] = (17820u << 16u);
        goto L_08A723A0;
    }
    goto L_08A72288;
L_08A72288:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-27032)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A722A0:
    ctx.gpr[6] = (17995u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (18184u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[7] = (ctx.gpr[7] | 47104u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (0u | 258u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08A722E0;
      }
      goto L_08A722D4;
    }
L_08A722D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A722F4;
      }
      goto L_08A722E0;
    }
L_08A722E0:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    goto L_08A722F4;
L_08A722F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72324;
      }
      goto L_08A7230C;
    }
L_08A7230C:
    ctx.gpr[5] = (16448u << 16u);
    ctx.gpr[7] = (2233u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 8u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_08A72424;
      }
      goto L_08A72324;
    }
L_08A72324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A72460;
      }
      goto L_08A7232C;
    }
L_08A7232C:
    ctx.gpr[5] = (17723u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (17820u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 196u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_08A72380;
      }
      goto L_08A72374;
    }
L_08A72374:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A72394;
      }
      goto L_08A72380;
    }
L_08A72380:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_08A72394;
L_08A72394:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A72424;
      }
      goto L_08A7239C;
    }
L_08A7239C:
    ctx.gpr[5] = (17820u << 16u);
    goto L_08A723A0;
L_08A723A0:
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (17963u << 16u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 57344u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (0u | 280u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[14];
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[6] = (0u | 8u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_08A723F0;
      }
      goto L_08A723E4;
    }
L_08A723E4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[24]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A72404;
      }
      goto L_08A723F0;
    }
L_08A723F0:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    goto L_08A72404;
L_08A72404:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08A72424;
      }
      goto L_08A72418;
    }
L_08A72418:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), ctx.gpr[5]);
    goto L_08A72424;
L_08A72424:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08A72454u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A72454u) goto L_08A72454;
    return;
L_08A72454:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08A72460;
      }
      goto L_08A7245C;
    }
L_08A7245C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A72460;
L_08A72460:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A724A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A724D4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 151u, 0x088C4BE0u>(ctx, &aot_mem) && ctx.pc == 0x08A724D4u) goto L_08A724D4;
    return;
L_08A724D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A724F4;
      }
      goto L_08A724E0;
    }
L_08A724E0:
    ctx.gpr[31] = (0x08A724E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A724E8u) goto L_08A724E8;
    return;
L_08A724E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A72530;
      }
      goto L_08A724F4;
    }
L_08A724F4:
    ctx.gpr[5] = (17981u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 4096u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A72528;
      }
      goto L_08A72514;
    }
L_08A72514:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(685)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A72574;
      }
      goto L_08A72520;
    }
L_08A72520:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A72538;
      }
      goto L_08A72528;
    }
L_08A72528:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A727B8;
      }
      goto L_08A72530;
    }
L_08A72530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A727B8;
      }
      goto L_08A72538;
    }
L_08A72538:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A72568;
      }
      goto L_08A72544;
    }
L_08A72544:
    ctx.gpr[8] = (0u | 65535u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
        goto L_08A7256C;
    }
    goto L_08A72550;
L_08A72550:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u | 80u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A7256C;
      }
      goto L_08A72564;
    }
L_08A72564:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A72568;
L_08A72568:
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    goto L_08A7256C;
L_08A7256C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A727B4;
      }
      goto L_08A72574;
    }
L_08A72574:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(500)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A725A8;
      }
      goto L_08A72584;
    }
L_08A72584:
    ctx.gpr[8] = (0u | 65535u);
    if (ctx.gpr[7] == ctx.gpr[8]) {
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
        goto L_08A725AC;
    }
    goto L_08A72590;
L_08A72590:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (0u | 80u);
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[7];
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A725AC;
      }
      goto L_08A725A4;
    }
L_08A725A4:
    ctx.gpr[6] = (0u | 1u);
    goto L_08A725A8;
L_08A725A8:
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    goto L_08A725AC;
L_08A725AC:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A725F4;
      }
      goto L_08A725B4;
    }
L_08A725B4:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A725D8;
      }
      goto L_08A725CC;
    }
L_08A725CC:
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(750));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(680), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    goto L_08A725D8;
L_08A725D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(680)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(375));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A725F4;
      }
      goto L_08A725EC;
    }
L_08A725EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A727B8;
      }
      goto L_08A725F4;
    }
L_08A725F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A72604u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A72604u) goto L_08A72604;
    return;
L_08A72604:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (17116u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(603))))));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 80u);
      if (branch_taken) {
          goto L_08A72624;
      }
      goto L_08A72620;
    }
L_08A72620:
    ctx.gpr[4] = (0u | 20u);
    goto L_08A72624;
L_08A72624:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (0x08A72638u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A72638u) goto L_08A72638;
    return;
L_08A72638:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A727B4;
      }
      goto L_08A72648;
    }
L_08A72648:
    ctx.gpr[19] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7265Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 613u, 0x08A5F578u>(ctx, &aot_mem) && ctx.pc == 0x08A7265Cu) goto L_08A7265C;
    return;
L_08A7265C:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
        goto L_08A7273C;
    }
    goto L_08A72664;
L_08A72664:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[5] = (ctx.gpr[5] >> 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A726D8;
      }
      goto L_08A72680;
    }
L_08A72680:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(680)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10640));
      if (branch_taken) {
          goto L_08A726E0;
      }
      goto L_08A72698;
    }
L_08A72698:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    goto L_08A7269C;
L_08A7269C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8292));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72784;
      }
      goto L_08A726D8;
    }
L_08A726D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A727B8;
      }
      goto L_08A726E0;
    }
L_08A726E0:
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08A7269C;
      }
      goto L_08A726EC;
    }
L_08A726EC:
    ctx.gpr[5] = (0u | 24u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
      if (branch_taken) {
          goto L_08A7269C;
      }
      goto L_08A726F8;
    }
L_08A726F8:
    ctx.gpr[4] = (0u | 277u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A7271C;
      }
      goto L_08A72710;
    }
L_08A72710:
    ctx.gpr[4] = (0u | 12668u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72730;
      }
      goto L_08A7271C;
    }
L_08A7271C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 277u);
    ctx.gpr[31] = (0x08A7272Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7272Cu) goto L_08A7272C;
    return;
L_08A7272C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08A72730;
L_08A72730:
    ctx.gpr[4] = (0u | 60u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72784;
      }
      goto L_08A7273C;
    }
L_08A7273C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8292));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(10640));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A72784;
L_08A72784:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A727B4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A727B4u) goto L_08A727B4;
    return;
L_08A727B4:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A727B8;
L_08A727B8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A727E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (ctx.gpr[6] << 3u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(5988)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A73DC0;
      }
      goto L_08A72844;
    }
L_08A72844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A72848;
L_08A72848:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 114 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A729D0;
      }
      goto L_08A72878;
    }
L_08A72878:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 56 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 90 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A728B4;
      }
      goto L_08A72884;
    }
L_08A72884:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 55 ? 1u : 0u);
        goto L_08A728A4;
    }
    goto L_08A72890;
L_08A72890:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A72A30;
      }
      goto L_08A72898;
    }
L_08A72898:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73D98;
      }
      goto L_08A728A0;
    }
L_08A728A0:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 55 ? 1u : 0u);
    goto L_08A728A4;
L_08A728A4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A72898;
      }
      goto L_08A728AC;
    }
L_08A728AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A73734;
      }
      goto L_08A728B4;
    }
L_08A728B4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 62u);
      if (branch_taken) {
          goto L_08A72968;
      }
      goto L_08A728BC;
    }
L_08A728BC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A72898;
      }
      goto L_08A728C4;
    }
L_08A728C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (0u | 5u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 34u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (0u | 6u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[16] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[6]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23));
    ctx.gpr[31] = (0x08A7290Cu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7290Cu) goto L_08A7290C;
    return;
L_08A7290C:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[21] >> 5u);
    ctx.gpr[31] = (0x08A72920u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A72920u) goto L_08A72920;
    return;
L_08A72920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21936)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(90));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A72968;
    }
L_08A72968:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 94 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72898;
      }
      goto L_08A72974;
    }
L_08A72974:
    ctx.gpr[4] = (0u | 9u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 36u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08A72998u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A72998u) goto L_08A72998;
    return;
L_08A72998:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 50u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17692u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A729D0;
    }
L_08A729D0:
    ctx.gpr[5] = (0u | 203u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 166u);
      if (branch_taken) {
          goto L_08A72C10;
      }
      goto L_08A729DC;
    }
L_08A729DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 165u);
      if (branch_taken) {
          goto L_08A73A24;
      }
      goto L_08A729E4;
    }
L_08A729E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[21] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A7399C;
      }
      goto L_08A729EC;
    }
L_08A729EC:
    ctx.gpr[5] = (0u | 164u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 115u);
      if (branch_taken) {
          goto L_08A731E8;
      }
      goto L_08A729F8;
    }
L_08A729F8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 114u);
      if (branch_taken) {
          goto L_08A73B18;
      }
      goto L_08A72A00;
    }
L_08A72A00:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A72898;
      }
      goto L_08A72A08;
    }
L_08A72A08:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A72A28u);
    ctx.gpr[6] = (0u | 114u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 2u, 0x08A78040u>(ctx, &aot_mem) && ctx.pc == 0x08A72A28u) goto L_08A72A28;
    return;
L_08A72A28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73D98;
      }
      goto L_08A72A30;
    }
L_08A72A30:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26904)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A72A48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (15969u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1496)));
    ctx.gpr[4] = (ctx.gpr[5] | 18350u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A72A90;
      }
      goto L_08A72A7C;
    }
L_08A72A7C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A72A9C;
      }
      goto L_08A72A90;
    }
L_08A72A90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73D98;
      }
      goto L_08A72A98;
    }
L_08A72A98:
    ctx.gpr[4] = (16256u << 16u);
    goto L_08A72A9C;
L_08A72A9C:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (0u | 41u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11456)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(89));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11456)));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A72AFC;
      }
      goto L_08A72AF0;
    }
L_08A72AF0:
    ctx.gpr[4] = (2229u << 16u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11456), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A72B0C;
      }
      goto L_08A72AFC;
    }
L_08A72AFC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11456)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11456), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A72B0C;
L_08A72B0C:
    ctx.gpr[4] = (17914u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17914u << 16u);
      if (branch_taken) {
          goto L_08A72B48;
      }
      goto L_08A72B30;
    }
L_08A72B30:
    ctx.gpr[4] = (17914u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A72B6C;
      }
      goto L_08A72B48;
    }
L_08A72B48:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08A72B6C;
L_08A72B6C:
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[22] >> 5u);
    ctx.gpr[31] = (0x08A72B80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A72B80u) goto L_08A72B80;
    return;
L_08A72B80:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A72BA8;
    }
L_08A72BA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (0u | 30u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 186u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 68u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (17608u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 186u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[6] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A72BECu);
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A72BECu) goto L_08A72BEC;
    return;
L_08A72BEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A72C10;
    }
L_08A72C10:
    ctx.gpr[4] = (0u | 50u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 72u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 18000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 120u);
    ctx.gpr[4] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A72C58;
    }
L_08A72C58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8292));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (17692u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[6] + static_cast<std::uint32_t>(117));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A72CB8;
      }
      goto L_08A72CA4;
    }
L_08A72CA4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A72CE0;
      }
      goto L_08A72CAC;
    }
L_08A72CAC:
    ctx.gpr[4] = (0u | 231u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72CE8;
      }
      goto L_08A72CB8;
    }
L_08A72CB8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A72CD4;
      }
      goto L_08A72CC4;
    }
L_08A72CC4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72CE0;
      }
      goto L_08A72CCC;
    }
L_08A72CCC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_08A72CE8;
      }
      goto L_08A72CD4;
    }
L_08A72CD4:
    ctx.gpr[4] = (0u | 299u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72CE8;
      }
      goto L_08A72CE0;
    }
L_08A72CE0:
    ctx.gpr[4] = (0u | 228u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A72CE8;
L_08A72CE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A72D1Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x08A72D1Cu) goto L_08A72D1C;
    return;
L_08A72D1C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A72D34;
      }
      goto L_08A72D28;
    }
L_08A72D28:
    ctx.gpr[4] = (0u | 23459u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72D48;
      }
      goto L_08A72D34;
    }
L_08A72D34:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A72D44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A72D44u) goto L_08A72D44;
    return;
L_08A72D44:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08A72D48;
L_08A72D48:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A72D58u);
    ctx.gpr[5] = (ctx.gpr[22] >> 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A72D58u) goto L_08A72D58;
    return;
L_08A72D58:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A72D88;
    }
L_08A72D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
    ctx.gpr[5] = (0u | 5u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8292));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (17692u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    ctx.gpr[6] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[6] + static_cast<std::uint32_t>(122));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A72DE8;
      }
      goto L_08A72DD4;
    }
L_08A72DD4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A72E10;
      }
      goto L_08A72DDC;
    }
L_08A72DDC:
    ctx.gpr[4] = (0u | 230u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72E18;
      }
      goto L_08A72DE8;
    }
L_08A72DE8:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A72E04;
      }
      goto L_08A72DF4;
    }
L_08A72DF4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A72E10;
      }
      goto L_08A72DFC;
    }
L_08A72DFC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
      if (branch_taken) {
          goto L_08A72E18;
      }
      goto L_08A72E04;
    }
L_08A72E04:
    ctx.gpr[4] = (0u | 298u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72E18;
      }
      goto L_08A72E10;
    }
L_08A72E10:
    ctx.gpr[4] = (0u | 227u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    goto L_08A72E18;
L_08A72E18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A72E4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x08A72E4Cu) goto L_08A72E4C;
    return;
L_08A72E4C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A72E64;
      }
      goto L_08A72E58;
    }
L_08A72E58:
    ctx.gpr[4] = (0u | 28062u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A72E78;
      }
      goto L_08A72E64;
    }
L_08A72E64:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A72E74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A72E74u) goto L_08A72E74;
    return;
L_08A72E74:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    goto L_08A72E78;
L_08A72E78:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A72E88u);
    ctx.gpr[5] = (ctx.gpr[22] >> 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A72E88u) goto L_08A72E88;
    return;
L_08A72E88:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A72EB8;
    }
L_08A72EB8:
    ctx.gpr[31] = (0x08A72EC0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x08A72EC0u) goto L_08A72EC0;
    return;
L_08A72EC0:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A72EE0;
      }
      goto L_08A72ECC;
    }
L_08A72ECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-999));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 95u);
      if (branch_taken) {
          goto L_08A72EEC;
      }
      goto L_08A72EE0;
    }
L_08A72EE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73D98;
      }
      goto L_08A72EE8;
    }
L_08A72EE8:
    ctx.gpr[4] = (0u | 95u);
    goto L_08A72EEC;
L_08A72EEC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 33u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 60u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 95u);
    ctx.gpr[31] = (0x08A72F18u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A72F18u) goto L_08A72F18;
    return;
L_08A72F18:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16880u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A72F44;
    }
L_08A72F44:
    ctx.gpr[4] = (0u | 187u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 37u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 187u);
    ctx.gpr[31] = (0x08A72F68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A72F68u) goto L_08A72F68;
    return;
L_08A72F68:
    ctx.gpr[4] = (ctx.gpr[2] << 3u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[4]);
    ctx.gpr[21] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[22] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[22]);
    ctx.gpr[31] = (0x08A72F8Cu);
    ctx.gpr[5] = (ctx.gpr[22] >> 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A72F8Cu) goto L_08A72F8C;
    return;
L_08A72F8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[21]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17505u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(30));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A72FD0;
    }
L_08A72FD0:
    ctx.gpr[4] = (0u | 209u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 81u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 209u);
    ctx.gpr[31] = (0x08A72FF4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A72FF4u) goto L_08A72FF4;
    return;
L_08A72FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (0u | 25u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18173u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(75));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A7303C;
    }
L_08A7303C:
    ctx.gpr[4] = (0u | 274u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 87u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 274u);
    ctx.gpr[31] = (0x08A73060u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A73060u) goto L_08A73060;
    return;
L_08A73060:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[21] >> 3u);
    ctx.gpr[31] = (0x08A73074u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73074u) goto L_08A73074;
    return;
L_08A73074:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A730C0;
    }
L_08A730C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.gpr[5] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A730F8;
      }
      goto L_08A730EC;
    }
L_08A730EC:
    ctx.gpr[4] = (0u | 15600u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A73100;
      }
      goto L_08A730F8;
    }
L_08A730F8:
    ctx.gpr[4] = (0u | 13118u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A73100;
L_08A73100:
    ctx.gpr[4] = (0u | 288u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 51u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[21] >> 3u);
    ctx.gpr[31] = (0x08A73124u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73124u) goto L_08A73124;
    return;
L_08A73124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A73170;
    }
L_08A73170:
    ctx.gpr[4] = (0u | 289u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 86u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 288u);
    ctx.gpr[31] = (0x08A73194u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A73194u) goto L_08A73194;
    return;
L_08A73194:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 7u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A731E8;
    }
L_08A731E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(11452)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A7327C;
      }
      goto L_08A73200;
    }
L_08A73200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21948)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(11452), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 287u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 15u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A73230u);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73230u) goto L_08A73230;
    return;
L_08A73230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (17608u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(90));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A7327C;
    }
L_08A7327C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73D98;
      }
      goto L_08A73284;
    }
L_08A73284:
    ctx.gpr[4] = (0u | 21u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 80u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 21u);
    ctx.gpr[31] = (0x08A732A8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A732A8u) goto L_08A732A8;
    return;
L_08A732A8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u | 60u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17505u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A732E0;
    }
L_08A732E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A734B0;
      }
      goto L_08A73318;
    }
L_08A73318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (17480u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A7337C;
    }
    goto L_08A73350;
L_08A73350:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (17480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(5972), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A7337C;
L_08A7337C:
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21924)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (ctx.gpr[5] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(15));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (17442u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.gpr[5] = (17174u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11448)));
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[14];
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11448), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11448)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 47 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (17882u << 16u);
      if (branch_taken) {
          goto L_08A733FC;
      }
      goto L_08A733EC;
    }
L_08A733EC:
    ctx.gpr[4] = (0u | 41u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11448), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (17882u << 16u);
    goto L_08A733FC;
L_08A733FC:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17882u << 16u);
      if (branch_taken) {
          goto L_08A7343C;
      }
      goto L_08A73420;
    }
L_08A73420:
    ctx.gpr[4] = (17882u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A73464;
      }
      goto L_08A7343C;
    }
L_08A7343C:
    ctx.gpr[4] = (ctx.gpr[4] | 49152u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[4] + ctx.gpr[21]);
    goto L_08A73464;
L_08A73464:
    ctx.gpr[5] = (16908u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(6000));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17008u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17761u << 16u);
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A734B0;
    }
L_08A734B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73D98;
      }
      goto L_08A734B8;
    }
L_08A734B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (17436u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 16384u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(5962)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 14u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A73570;
    }
    goto L_08A734F0;
L_08A734F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (17008u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 302u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A73560;
      }
      goto L_08A73558;
    }
L_08A73558:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_08A73560;
L_08A73560:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A735E8;
      }
      goto L_08A73570;
    }
L_08A73570:
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (17096u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (0u | 300u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A735DC;
      }
      goto L_08A735D4;
    }
L_08A735D4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_08A735DC;
L_08A735DC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[21] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    goto L_08A735E8;
L_08A735E8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11457)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11457), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11457)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 86 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A7361C;
      }
      goto L_08A73610;
    }
L_08A73610:
    ctx.gpr[4] = (0u | 82u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11457), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A7361C;
L_08A7361C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 300u);
    ctx.gpr[31] = (0x08A7362Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7362Cu) goto L_08A7362C;
    return;
L_08A7362C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[22] >> 4u);
    ctx.gpr[31] = (0x08A73640u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73640u) goto L_08A73640;
    return;
L_08A73640:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A73664;
      }
      goto L_08A73658;
    }
L_08A73658:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    goto L_08A73664;
L_08A73664:
    ctx.gpr[4] = (0u | 6u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16840u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A73688;
    }
L_08A73688:
    ctx.gpr[4] = (0u | 301u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11458)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11458), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11458)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 95 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A736C4;
      }
      goto L_08A736B8;
    }
L_08A736B8:
    ctx.gpr[4] = (0u | 91u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11458), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A736C4;
L_08A736C4:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 301u);
    ctx.gpr[31] = (0x08A736D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A736D4u) goto L_08A736D4;
    return;
L_08A736D4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A736E8u);
    ctx.gpr[5] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A736E8u) goto L_08A736E8;
    return;
L_08A736E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (0u | 10u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17661u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(117));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A73734;
    }
L_08A73734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 213 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 216 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A73760;
      }
      goto L_08A73748;
    }
L_08A73748:
    ctx.gpr[5] = (0u | 199u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A73788;
      }
      goto L_08A73754;
    }
L_08A73754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
      if (branch_taken) {
          goto L_08A73884;
      }
      goto L_08A7375C;
    }
L_08A7375C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 216 ? 1u : 0u);
    goto L_08A73760;
L_08A73760:
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 217 ? 1u : 0u);
        goto L_08A73780;
    }
    goto L_08A73768;
L_08A73768:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 215 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A73788;
      }
      goto L_08A73774;
    }
L_08A73774:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
      if (branch_taken) {
          goto L_08A73884;
      }
      goto L_08A7377C;
    }
L_08A7377C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 217 ? 1u : 0u);
    goto L_08A73780;
L_08A73780:
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21932)));
        goto L_08A73884;
    }
    goto L_08A73788;
L_08A73788:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 213u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A737E8;
      }
      goto L_08A7379C;
    }
L_08A7379C:
    ctx.gpr[31] = (0x08A737A4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A737A4u) goto L_08A737A4;
    return;
L_08A737A4:
    ctx.gpr[31] = (0x08A737ACu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1064u, 0x08A97E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A737ACu) goto L_08A737AC;
    return;
L_08A737AC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A737C8;
      }
      goto L_08A737B4;
    }
L_08A737B4:
    ctx.gpr[31] = (0x08A737BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 337u, 0x08A5E008u>(ctx, &aot_mem) && ctx.pc == 0x08A737BCu) goto L_08A737BC;
    return;
L_08A737BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A737D8;
      }
      goto L_08A737C8;
    }
L_08A737C8:
    ctx.gpr[4] = (0u | 216u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A737F4;
      }
      goto L_08A737D8;
    }
L_08A737D8:
    ctx.gpr[4] = (0u | 266u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A737F4;
      }
      goto L_08A737E8;
    }
L_08A737E8:
    ctx.gpr[4] = (0u | 216u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    goto L_08A737F4;
L_08A737F4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11449)));
    ctx.gpr[21] = (0u | 127u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11449), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11449)));
    ctx.gpr[5] = (18017u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A7382C;
      }
      goto L_08A73820;
    }
L_08A73820:
    ctx.gpr[4] = (0u | 53u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11449), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A7382C;
L_08A7382C:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 216u);
    ctx.gpr[31] = (0x08A7383Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A7383Cu) goto L_08A7383C;
    return;
L_08A7383C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[19] >> 4u);
    ctx.gpr[31] = (0x08A73850u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73850u) goto L_08A73850;
    return;
L_08A73850:
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A73928;
      }
      goto L_08A73884;
    }
L_08A73884:
    ctx.gpr[5] = (0u | 15u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (0u | 305u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11449)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11449), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[5] = (18017u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11449)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    ctx.gpr[5] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(65));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A738D8;
      }
      goto L_08A738CC;
    }
L_08A738CC:
    ctx.gpr[4] = (0u | 53u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11449), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A738D8;
L_08A738D8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 305u);
    ctx.gpr[31] = (0x08A738E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A738E8u) goto L_08A738E8;
    return;
L_08A738E8:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[22] >> 4u);
    ctx.gpr[31] = (0x08A738FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A738FCu) goto L_08A738FC;
    return;
L_08A738FC:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A73928;
L_08A73928:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A73930;
    }
L_08A73930:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 59u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A7394Cu);
    ctx.gpr[5] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A7394Cu) goto L_08A7394C;
    return;
L_08A7394C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21928)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(11025));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16908u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(70));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A7399C;
    }
L_08A7399C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11459)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(237));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A739C0u);
    ctx.gpr[5] = (0u | 6000u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A739C0u) goto L_08A739C0;
    return;
L_08A739C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(21940)));
    ctx.gpr[5] = (0u | 20u);
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[5]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11459)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11459), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(11459)));
    ctx.gpr[6] = (17608u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(11459), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(55));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A73A24;
    }
L_08A73A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5972));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
        goto L_08A73A60;
    }
    goto L_08A73A60;
L_08A73A60:
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[5] = (17150u << 16u);
    ctx.gpr[4] = (0u | 127u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[21] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[21]) >> 1u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[21]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
        goto L_08A73AA0;
    }
    goto L_08A73AA0;
L_08A73AA0:
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A73B10;
      }
      goto L_08A73AAC;
    }
L_08A73AAC:
    ctx.gpr[5] = (0u | 169u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 50u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08A73ACCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A73ACCu) goto L_08A73ACC;
    return;
L_08A73ACC:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[22] >> 4u);
    ctx.gpr[31] = (0x08A73AE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 855u, 0x08A9AF1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73AE0u) goto L_08A73AE0;
    return;
L_08A73AE0:
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17608u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A73C74;
      }
      goto L_08A73B10;
    }
L_08A73B10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73D98;
      }
      goto L_08A73B18;
    }
L_08A73B18:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A73B38u);
    ctx.gpr[6] = (0u | 115u);
    if (rt.invoke_chained_direct<&recomp_unit_0157_entry, 157u, 2u, 0x08A78040u>(ctx, &aot_mem) && ctx.pc == 0x08A73B38u) goto L_08A73B38;
    return;
L_08A73B38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A73D98;
      }
      goto L_08A73B40;
    }
L_08A73B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[18] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(5972)));
    ctx.gpr[4] = (15645u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15645u << 16u);
      if (branch_taken) {
          goto L_08A73B8C;
      }
      goto L_08A73B7C;
    }
L_08A73B7C:
    ctx.gpr[4] = (15645u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15645u << 16u);
    goto L_08A73B8C;
L_08A73B8C:
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] / ctx.fpr[12];
    ctx.gpr[5] = (17723u << 16u);
    ctx.gpr[4] = (0u | 290u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 79u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (17723u << 16u);
      if (branch_taken) {
          goto L_08A73BF0;
      }
      goto L_08A73BD4;
    }
L_08A73BD4:
    ctx.gpr[4] = (17723u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A73C18;
      }
      goto L_08A73BF0;
    }
L_08A73BF0:
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (32768u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[20]);
    goto L_08A73C18;
L_08A73C18:
    ctx.gpr[5] = (16916u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(9000));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (0u | 1u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (17608u << 16u);
    ctx.gpr[21] = (ctx.gpr[5] + static_cast<std::uint32_t>(90));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    goto L_08A73C74;
L_08A73C74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A73D98;
    }
    goto L_08A73C88;
L_08A73C88:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A73C98u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A73C98u) goto L_08A73C98;
    return;
L_08A73C98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A73CACu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73CACu) goto L_08A73CAC;
    return;
L_08A73CAC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    if (static_cast<std::int32_t>(ctx.gpr[4]) <= 0) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A73D98;
    }
    goto L_08A73CBC;
L_08A73CBC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A73CD0;
      }
      goto L_08A73CC4;
    }
L_08A73CC4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A73CDC;
      }
      goto L_08A73CD0;
    }
L_08A73CD0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A73CDC;
L_08A73CDC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08A73D24;
      }
      goto L_08A73CE4;
    }
L_08A73CE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A73D18;
      }
      goto L_08A73D08;
    }
L_08A73D08:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A73D28;
      }
      goto L_08A73D18;
    }
L_08A73D18:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A73D28;
      }
      goto L_08A73D24;
    }
L_08A73D24:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    goto L_08A73D28;
L_08A73D28:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A73D38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A73D38u) goto L_08A73D38;
    return;
L_08A73D38:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (0u | 127u);
      if (branch_taken) {
          goto L_08A73D94;
      }
      goto L_08A73D40;
    }
L_08A73D40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11449)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11449), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11449)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 59 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A73D80;
      }
      goto L_08A73D74;
    }
L_08A73D74:
    ctx.gpr[4] = (0u | 53u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11449), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A73D80;
L_08A73D80:
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A73D94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A73D94u) goto L_08A73D94;
    return;
L_08A73D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    goto L_08A73D98;
L_08A73D98:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(5988)));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
        goto L_08A72848;
    }
    goto L_08A73DC0;
L_08A73DC0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73DEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (18120u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[17]);
    ctx.gpr[6] = (0u | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 52u, 0x08A74360u>(ctx, &aot_mem); return;
      }
      goto L_08A73E44;
    }
L_08A73E44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (0u | 5u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[8] = (ctx.gpr[8] & 496u);
    ctx.gpr[8] = (ctx.gpr[8] >> 4u);
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08A73E78;
      }
      goto L_08A73E60;
    }
L_08A73E60:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[21]) < 194 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[21]) < -992 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A73E80;
      }
      goto L_08A73E70;
    }
L_08A73E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[21]) < 196 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A73EA8;
      }
      goto L_08A73E78;
    }
L_08A73E78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 53u, 0x08A74364u>(ctx, &aot_mem); return;
      }
      goto L_08A73E80;
    }
L_08A73E80:
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[21]) < -973 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A73EF4;
      }
      goto L_08A73E88;
    }
L_08A73E88:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[7] = (ctx.gpr[21] + static_cast<std::uint32_t>(992));
      if (branch_taken) {
          goto L_08A73EF4;
      }
      goto L_08A73E90;
    }
L_08A73E90:
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[7]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-26776)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A73EA8:
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[21]) < 197 ? 1u : 0u);
        goto L_08A73EEC;
    }
    goto L_08A73EB0;
L_08A73EB0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 195 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A73F50;
      }
      goto L_08A73EBC;
    }
L_08A73EBC:
    ctx.gpr[5] = (17851u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (0u | 9000u);
    ctx.gpr[5] = (16856u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 100u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (0u | 195u);
      if (branch_taken) {
          goto L_08A73F78;
      }
      goto L_08A73EEC;
    }
L_08A73EEC:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A73EBC;
      }
      goto L_08A73EF4;
    }
L_08A73EF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 53u, 0x08A74364u>(ctx, &aot_mem); return;
      }
      goto L_08A73EFC;
    }
L_08A73EFC:
    ctx.gpr[5] = (17383u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (0u | 1782u);
    ctx.gpr[5] = (16856u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 100u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[30] = (0u | 195u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A73F78;
      }
      goto L_08A73F28;
    }
L_08A73F28:
    ctx.gpr[5] = (17397u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (0u | 1888u);
    ctx.gpr[5] = (16856u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 100u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[30] = (0u | 195u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A73F78;
      }
      goto L_08A73F50;
    }
L_08A73F50:
    ctx.gpr[5] = (17458u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 49152u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[19] = (0u | 3775u);
    ctx.gpr[5] = (17150u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.gpr[30] = (0u | 195u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_08A73F78;
L_08A73F78:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(60), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x08A73F84u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A73F84u) goto L_08A73F84;
    return;
L_08A73F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 1u, 0x08A74000u>(ctx, &aot_mem); return;
      }
      goto L_08A73F90;
    }
L_08A73F90:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[22] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25184));
    ctx.gpr[31] = (0x08A73FA0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08A73FA0u) goto L_08A73FA0;
    return;
L_08A73FA0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A73FACu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x08A73FACu) goto L_08A73FAC;
    return;
L_08A73FAC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
        goto L_08A73FC4;
    }
    goto L_08A73FC4;
L_08A73FC4:
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[22] = (0u | 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 3u, 0x08A74040u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 1u, 0x08A74000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0155(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0155_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_155(Runtime &runtime) {
    runtime.register_generated_unit(155u, 0x08A70000u, 16384u, &recomp_unit_0155, &recomp_unit_0155_entry);
    runtime.register_function(0x08A70000u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70028u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70030u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70038u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70048u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7004Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70058u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70064u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7006Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70098u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A700A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A700A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A700E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A700F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A700F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70104u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70110u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7011Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70120u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7012Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70134u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70150u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70160u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70198u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A701CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A701DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70214u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7022Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70238u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7024Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7025Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70270u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A702A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A702B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A702B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A702D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7032Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70334u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70340u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70348u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70354u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7036Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7037Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70388u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70390u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7039Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A703A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A703B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A703C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A703CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A703DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A703ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70418u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70424u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70434u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7043Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70448u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70458u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70464u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70470u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7047Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70488u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70490u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70498u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A704FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7051Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70524u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70548u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70550u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70558u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7056Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7057Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70594u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7059Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A705F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70604u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7060Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7061Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70628u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70638u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70640u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70654u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7065Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70670u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70678u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70688u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70694u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A706F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70700u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70710u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70724u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70728u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7073Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7074Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70760u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70778u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70780u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70788u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A707C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A707D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A707F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70808u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70818u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70838u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70870u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70878u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70880u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70888u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A708A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A708ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A708B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A708BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A708CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A708D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A708F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70908u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7091Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70924u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70948u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70958u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7096Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7097Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7098Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A709F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A2Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A54u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A5Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A70u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70A88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70AD0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70AE0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B2Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B44u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B64u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70B78u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70BB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70BC0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70BD8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70BE4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70BF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70BFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C04u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C38u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C5Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70C88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70CA0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70CA8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70CB4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70CE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70CF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70CF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D20u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70D9Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70DA4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70DA8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70DB4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70DECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70DF8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E5Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E70u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70E80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70EB4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70EC4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70ED4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70EE0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70EECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70EF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70EF8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F04u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F30u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F54u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F78u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70F88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A70FF8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71000u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71008u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71060u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71070u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71090u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A710B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A710C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A710D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A710ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A710F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71114u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7112Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71138u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71148u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7114Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71158u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7115Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71164u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71168u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71178u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71188u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71190u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71198u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A711A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A711B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A711C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A711D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A711E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A711F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A711F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71200u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71210u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71214u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71224u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71238u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71254u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71260u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71270u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71294u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A712F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71304u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71320u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7132Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71348u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71350u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71368u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7138Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71398u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A713A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A713B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A713B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A713D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A713D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A713FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71404u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71414u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71428u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71430u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71438u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7143Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7144Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71454u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71470u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71478u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71480u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A714FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71500u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71508u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71510u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7151Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71538u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71544u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7154Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71558u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71560u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71564u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71574u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71580u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7158Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A715ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A715BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A715D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A715D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A715DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A715F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71608u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7161Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71620u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71638u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71654u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71664u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7167Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7169Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A716A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A716A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A716B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A716C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A716DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A716F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A716F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7171Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71724u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7173Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71754u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71774u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71784u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7178Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7179Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A717FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71800u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7182Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71840u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71858u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71868u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71894u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7189Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A718F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71904u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71910u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71918u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71934u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71940u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71948u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71954u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7195Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71978u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71988u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7198Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71994u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A719A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A719B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A719C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A719E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A719F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A0Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A34u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A70u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71A9Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71AACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71AE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71AF8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B44u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B4Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B70u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71B94u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BA4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BBCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71BFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C30u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C38u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C3Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71C68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71CB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71CECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71CF8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D20u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D30u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D38u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D40u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D5Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71D9Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71DA4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71DACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71DB4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71DCCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71DF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71DF8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E0Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E14u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E24u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E7Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71E8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71EB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71EC8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F0Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F94u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71F9Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71FA0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A71FC0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72024u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72030u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72038u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72050u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72060u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72068u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72074u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72088u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72090u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A720F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72100u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72108u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72110u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7211Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72124u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72140u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72148u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72160u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72164u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7216Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72178u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72180u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7219Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A721FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72214u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72224u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72254u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72264u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72288u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A722A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A722D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A722E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A722F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7230Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72324u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7232Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72374u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72380u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72394u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7239Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A723A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A723E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A723F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72404u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72418u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72424u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72454u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7245Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72460u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A724F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72514u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72520u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72528u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72530u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72538u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72544u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72550u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72564u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72568u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7256Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72574u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72584u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72590u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A725A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A725A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A725ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A725B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A725CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A725D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A725ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A725F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72604u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72620u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72624u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72638u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72648u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7265Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72664u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72680u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72698u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7269Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A726D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A726E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A726ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A726F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72710u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7271Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7272Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72730u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7273Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72784u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A727B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A727B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A727E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72844u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72848u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72878u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72884u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72890u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72898u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A728A0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A728A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A728ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A728B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A728BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A728C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7290Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72920u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72968u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72974u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72998u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729D0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729E4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A729F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72A00u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72A08u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72A28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72A30u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72A48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72A7Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72A90u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72A98u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72A9Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72AF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72AFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B0Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B30u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B6Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72B80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72BA8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72BECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72C58u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72CA4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72CACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72CB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72CC4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72CCCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72CD4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72CE0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72CE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72D1Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72D28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72D34u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72D44u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72D48u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72D58u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72D88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72DD4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72DDCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72DE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72DF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72DFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E04u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E4Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E58u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E64u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E74u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E78u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72E88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72EB8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72EC0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72ECCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72EE0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72EE8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72EECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F44u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F68u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72F8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72FD0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A72FF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7303Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73060u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73074u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A730C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A730ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A730F8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73100u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73124u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73170u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73194u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A731E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73200u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73230u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7327Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73284u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A732A8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A732E0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73318u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73350u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7337Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A733ECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A733FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73420u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7343Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73464u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A734B0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A734B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A734F0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73558u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73560u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73570u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A735D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A735DCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A735E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73610u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7361Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7362Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73640u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73658u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73664u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73688u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A736B8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A736C4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A736D4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A736E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73734u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73748u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73754u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7375Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73760u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73768u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73774u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7377Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73780u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73788u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7379Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737A4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737ACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737B4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737BCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737C8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A737F4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73820u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7382Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7383Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73850u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73884u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738CCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738D8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738E8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A738FCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73928u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73930u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7394Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A7399Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A739C0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73A24u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73A60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73AA0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73AACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73ACCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73AE0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B10u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B38u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B40u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B7Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73B8Cu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73BD4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73BF0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73C18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73C74u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73C88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73C98u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73CACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73CBCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73CC4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73CD0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73CDCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73CE4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D08u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D18u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D24u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D38u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D40u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D74u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D94u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73D98u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73DC0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73DECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E44u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E60u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E70u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E78u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E80u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E88u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73E90u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EA8u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EB0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EBCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EECu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EF4u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73EFCu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F28u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F50u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F78u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F84u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73F90u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FA0u, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FACu, &recomp_unit_0155, "recomp_unit_0155");
    runtime.register_function(0x08A73FC4u, &recomp_unit_0155, "recomp_unit_0155");
}
} // namespace psprecomp
