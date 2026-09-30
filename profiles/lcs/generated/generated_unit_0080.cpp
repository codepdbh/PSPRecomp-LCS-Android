#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0080[4094] = {
    1, 0, 2, 0, 3, 0, 0, 4, 0, 5, 0, 6, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 7, 0, 0, 0, 0, 0, 0, 8, 0, 0,
    0, 0, 0, 0, 0, 9, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 13, 0, 0, 14, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 0, 18, 0, 19, 0, 20, 0, 0,
    0, 0, 0, 0, 0, 0, 21, 0, 22, 0, 0, 23, 0, 0, 0, 0, 0, 24, 0, 25, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 0, 0,
    0, 0, 27, 0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 0, 31, 0, 32, 0, 33, 0, 34, 0, 35, 0, 36, 0, 0, 0, 37,
    0, 38, 0, 39, 0, 40, 41, 0, 42, 0, 43, 44, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0,
    0, 0, 0, 0, 47, 0, 0, 0, 48, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 0, 0, 0, 0, 0, 52, 0,
    0, 0, 0, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 57, 0, 0, 0, 0, 0, 58, 0, 0, 59, 0, 0, 60, 0, 61, 0, 62, 63, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 68, 0, 69, 0, 0, 0, 0, 0, 0, 0,
    70, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 73, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 76, 0, 77, 0, 78, 0, 0, 79,
    0, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 82, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 0, 0, 0,
    0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 89, 0, 90, 0, 91, 0, 92, 0, 93, 0, 0, 0, 94, 0, 95, 0, 96, 0,
    0, 97, 0, 0, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 101, 0, 0, 0, 0, 0, 0, 0, 0, 0, 102, 0,
    103, 0, 0, 0, 104, 0, 105, 0, 106, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 0, 109, 0, 0, 110, 0, 111, 0, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 113, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 119,
    0, 0, 0, 120, 0, 0, 0, 0, 121, 122, 0, 0, 0, 123, 0, 0, 0, 0, 0, 0, 124, 0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0,
    127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 134, 0, 135, 0, 136, 0, 0, 137, 0, 0,
    0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0, 0, 0, 141, 0, 0, 142, 0, 0, 0, 143, 0, 144, 0,
    145, 0, 146, 0, 147, 0, 0, 148, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0, 0, 0, 153, 0, 154, 0, 155, 0, 156, 0, 157, 158, 0, 0,
    159, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 161, 0, 0, 0, 0, 0, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0,
    0, 0, 0, 0, 164, 0, 0, 0, 165, 0, 0, 0, 166, 0, 0, 0, 167, 0, 0, 0, 168, 0, 0, 0, 169, 0, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 171, 0, 0, 0, 172, 0, 0, 0, 173, 0, 174, 0, 0, 0, 0, 0, 175, 0, 176, 0, 0, 0, 177, 0, 0, 0, 0, 178, 0,
    179, 0, 0, 180, 0, 0, 0, 0, 0, 0, 181, 0, 182, 0, 183, 0, 0, 0, 184, 0, 0, 0, 185, 0, 0, 0, 0, 0, 186, 0, 0, 0,
    0, 187, 0, 188, 0, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 0, 191, 0, 192, 0, 0, 0, 193, 0, 0, 194, 0, 0, 195, 0, 0, 0,
    196, 0, 0, 197, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 200, 0, 0, 201, 0, 202, 0, 203, 0, 0, 0, 0, 204, 0, 0,
    0, 205, 0, 0, 206, 0, 0, 0, 207, 0, 0, 208, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 211,
    0, 0, 0, 0, 0, 0, 212, 0, 213, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 218, 0, 0, 0, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 223,
    0, 224, 0, 0, 225, 0, 226, 0, 0, 227, 0, 228, 0, 0, 229, 0, 230, 0, 231, 0, 232, 0, 233, 0, 234, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 0, 0, 0, 0, 0, 236, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 238, 0, 239, 0, 240, 241, 0,
    0, 0, 242, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 0, 246, 0, 0, 0, 0, 0,
    247, 0, 0, 0, 0, 0, 248, 0, 0, 0, 0, 0, 0, 249, 0, 250, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 0, 0, 254, 0, 255, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 259, 260,
    0, 261, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 0, 264, 0, 0, 0, 0, 0, 265, 0, 0, 266, 0, 267, 0, 268, 0, 0, 269, 0, 270,
    0, 271, 0, 272, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 275, 0, 276, 0, 0, 0, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 279, 0,
    280, 0, 281, 0, 282, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 288, 0, 289, 290, 0, 0, 0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 293, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 0, 0,
    296, 0, 0, 0, 297, 0, 298, 0, 299, 0, 300, 0, 301, 0, 302, 0, 303, 0, 304, 0, 305, 0, 306, 0, 307, 308, 0, 309, 0, 310, 0, 0,
    0, 0, 311, 0, 312, 0, 313, 0, 314, 0, 315, 0, 316, 0, 317, 0, 318, 0, 0, 0, 0, 0, 319, 0, 320, 321, 0, 0, 0, 322, 0, 0,
    323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 327, 0, 328, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0,
    0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 336,
    0, 337, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 340, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0,
    344, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    0, 0, 349, 0, 350, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 353, 354, 0, 0, 0, 0, 355, 0, 0, 356, 0, 0, 0, 357, 0,
    358, 359, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 364, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 367, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370,
    0, 0, 371, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 375, 0, 376, 0, 377, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 378, 379, 0, 0, 380, 0, 0, 381, 0, 382, 383, 0, 0, 0, 0, 384, 0, 0, 385, 0, 386,
    0, 0, 0, 0, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 0, 389, 0, 0, 0, 390, 0, 391, 0, 0, 0,
    0, 392, 0, 393, 0, 394, 0, 395, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 398, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 401, 0, 0,
    402, 0, 0, 0, 0, 0, 403, 0, 404, 0, 405, 0, 406, 0, 0, 407, 0, 408, 0, 0, 409, 0, 410, 0, 411, 0, 0, 0, 412, 0, 0, 0,
    413, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 416, 0, 0, 417, 0, 418, 0, 419, 0, 420, 0, 0, 0, 421, 0, 0, 0, 0, 422, 0, 0,
    0, 0, 423, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 427, 0, 428, 0, 0, 429, 430, 0, 431, 0, 0, 432, 0, 0, 0, 433, 0,
    0, 0, 0, 434, 0, 435, 0, 0, 436, 0, 0, 437, 438, 0, 439, 0, 0, 440, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0,
    0, 444, 0, 0, 445, 0, 0, 446, 0, 447, 448, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 450, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452, 0, 0, 453, 0, 0,
    0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 460, 0, 0, 461, 0, 462,
    0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 464, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 465, 0, 0, 466, 0, 467, 0, 0, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0,
    0, 0, 0, 470, 0, 0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 472, 0, 473, 0, 0, 0, 474, 0, 0, 475, 0, 476, 0, 477, 0, 0,
    0, 0, 0, 0, 0, 0, 478, 0, 0, 0, 0, 0, 0, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480,
    0, 0, 0, 481, 0, 482, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 0, 485, 0, 0, 486, 0, 0, 487, 488, 0, 489, 490, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491,
    0, 0, 0, 0, 0, 0, 0, 492, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 495, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 496, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 497, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 500, 0, 501, 0, 502, 0, 0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 0, 506, 507, 0, 508, 0, 0, 0, 0, 509, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 512, 0, 0, 513, 0, 0, 0, 0, 0, 514,
    0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 517, 518, 0, 0, 0, 0, 519, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 522, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 526, 0, 0, 527, 0, 0, 528, 529, 0, 0, 530, 0, 0, 0, 531, 0, 0, 532, 0, 533,
    0, 534, 0, 0, 535, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 537, 0, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 0, 0, 544, 0,
    0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 548, 0, 0, 549, 0, 0, 550, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 551, 0, 552,
    0, 553, 0, 0, 0, 0, 0, 0, 554, 0, 555, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 559, 0, 560, 0,
    0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 565, 0,
    0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 568, 569, 0, 570, 0, 571, 0, 0, 0,
    0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 573, 0, 0, 0, 0, 574, 0, 575, 0, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0, 578,
    0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 580, 581, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 583, 584, 0, 0, 0, 0,
    0, 0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 587, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 590, 0, 591, 0, 592, 0, 593, 0, 594, 0,
    595, 0, 596, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    606, 0, 0, 0, 0, 607, 0, 0, 0, 0, 608, 609, 0, 0, 610, 0, 0, 0, 611, 0, 0, 0, 612, 0, 613, 0, 0, 614, 0, 0, 0, 0,
    615, 0, 0, 616, 0, 0, 0, 617, 0, 618, 0, 619, 0, 620, 0, 621, 0, 0, 0, 0, 0, 0, 622, 0, 623, 0, 624, 0, 0, 0, 625, 0,
    0, 0, 626, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 629, 0, 630, 0, 0, 631, 0, 0, 0, 0, 632, 0, 633, 0, 0, 634, 0, 0,
    635, 0, 636, 0, 637, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 0, 0, 642, 643, 0, 0, 0,
    0, 0, 0, 0, 644, 0, 0, 0, 645, 0, 646, 0, 0, 0, 647, 648, 0, 0, 0, 649, 0, 650, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 652, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0, 656, 0, 0, 657, 0, 658, 0, 659, 0, 660, 0, 0, 0, 0, 0, 0, 0, 0, 0, 661,
    0, 662, 0, 0, 663, 0, 664, 0, 0, 0, 0, 665, 0, 666, 0, 0, 667, 0, 0, 0, 0, 668, 0, 0, 669, 0, 670, 0, 0, 0, 0, 0,
    671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0, 0, 673, 0, 674, 0, 675, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 676, 0, 0, 677, 0, 678, 0, 0, 679, 0, 680, 0, 681, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 684,
    0, 0, 0, 0, 0, 0, 685, 0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 688, 0, 689, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0,
    693, 0, 694, 0, 695, 0, 696, 0, 697, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    700, 0, 0, 0, 701, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703, 704, 0, 705, 0, 0, 706, 0, 707, 0, 708, 0, 0,
    709, 0, 0, 710, 0, 0, 711, 712, 713, 0, 714, 0, 715, 0, 0, 716, 0, 0, 717, 0, 0, 718, 719, 720, 721, 0, 722, 0, 0, 723, 0, 0,
    724, 0, 0, 725, 726, 727, 0, 728, 0, 729, 0, 0, 730, 0, 0, 731, 0, 0, 732, 733, 734, 735, 0, 736, 0, 737, 0, 0, 0, 738, 0, 0,
    0, 739, 0, 740, 0, 741, 0, 742, 0, 743, 744, 0, 745, 0, 746, 0, 747, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 749, 0, 0, 0, 0,
    0, 0, 0, 750, 0, 0, 751, 0, 0, 0, 752, 0, 753, 0, 754, 0, 0, 755, 0, 756, 0, 757, 0, 758, 0, 759, 0, 0, 760, 0, 761, 0,
    0, 0, 762, 0, 763, 0, 0, 764, 0, 765, 0, 766, 0, 0, 767, 0, 768, 0, 769, 0, 0, 0, 770, 0, 771, 0, 0, 772, 0, 0, 773, 0,
    0, 0, 774, 0, 0, 0, 775, 0, 776, 0, 0, 777, 0, 778, 0, 779, 0, 0, 780, 0, 0, 0, 781, 0, 0, 782, 0, 0, 783, 0, 0, 0,
    0, 0, 0, 784, 0, 0, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 0, 789, 0,
    790, 0, 791, 0, 792, 0, 0, 0, 793, 0, 0, 794, 0, 0, 0, 0, 0, 0, 0, 0, 795, 0, 796, 0, 797, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800,
    0, 0, 0, 801, 0, 0, 802, 0, 803, 0, 804, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 806, 0, 0, 0, 807, 0, 0, 0, 808, 0,
    809, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 813, 0, 0, 0, 0, 0,
    0, 814, 0, 0, 0, 815, 0, 0, 0, 816, 0, 0, 0, 0, 0, 0, 0, 817, 0, 818, 0, 0, 0, 0, 0, 0, 0, 0, 819, 0, 820, 0,
    0, 0, 821, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 825, 0, 0, 0,
    826, 0, 0, 0, 0, 0, 827, 0, 0, 828, 0, 0, 0, 829, 0, 0, 830, 0, 831, 0, 832, 0, 0, 833, 0, 0, 0, 834, 0, 835, 0, 0,
    836, 837, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 838, 0, 0, 839, 0, 0,
    0, 840, 0, 0, 0, 0, 841, 0, 0, 842, 0, 843, 0, 0, 844, 0, 845, 0, 846, 0, 847, 0, 848, 0, 849, 850, 0, 0, 851, 0, 0, 0,
    0, 0, 0, 0, 0, 852, 0, 0, 0, 853, 0, 0, 854, 0, 0, 0, 855, 0, 856, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 857, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 858, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 859, 0, 0, 860, 0, 0, 0, 861, 0, 0, 0, 862, 0, 0, 0, 863, 0, 0, 0, 864, 0, 0, 0, 865, 0, 0, 0, 866, 0, 0,
    0, 0, 867, 0, 868, 0, 0, 869, 0, 870, 0, 0, 871, 0, 872, 0, 0, 873, 0, 0, 0, 0, 874, 0, 875, 0, 0, 876, 877, 0, 878, 0,
    0, 879, 0, 0, 880, 0, 0, 881, 882, 0, 883, 0, 0, 0, 884, 0, 885, 0, 0, 0, 886, 0, 887, 0, 0, 0, 0, 888, 0, 889, 0, 0,
    0, 0, 890, 0, 0, 891, 0, 0, 0, 0, 0, 0, 0, 0, 0, 892, 0, 893, 0, 0, 0, 0, 0, 0, 0, 0, 894, 0, 0, 895, 0, 896,
    0, 0, 0, 0, 0, 0, 0, 0, 897, 0, 0, 0, 898, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 899, 0, 900, 0,
    0, 0, 0, 901, 0, 902, 0, 0, 0, 0, 903, 904, 0, 905, 0, 0, 0, 0, 906, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    907, 0, 0, 0, 908, 0, 0, 0, 0, 909, 0, 910, 0, 911, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 912, 0, 0, 0, 913, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 914, 0, 915, 0, 0, 0, 0, 916, 0, 917, 0, 0, 0, 0, 918, 919, 0, 920, 0, 0,
    0, 0, 921, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 922, 0, 0, 0, 0, 923, 0, 0, 0, 924, 0, 0, 0, 925,
};
void recomp_unit_0080_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08944000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0080[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08944000;
    case 2u: goto L_08944008;
    case 3u: goto L_08944010;
    case 4u: goto L_0894401C;
    case 5u: goto L_08944024;
    case 6u: goto L_0894402C;
    case 7u: goto L_08944058;
    case 8u: goto L_08944074;
    case 9u: goto L_08944094;
    case 10u: goto L_089440A0;
    case 11u: goto L_089440D0;
    case 12u: goto L_089440D8;
    case 13u: goto L_089440E0;
    case 14u: goto L_089440EC;
    case 15u: goto L_08944114;
    case 16u: goto L_08944128;
    case 17u: goto L_0894414C;
    case 18u: goto L_08944164;
    case 19u: goto L_0894416C;
    case 20u: goto L_08944174;
    case 21u: goto L_08944198;
    case 22u: goto L_089441A0;
    case 23u: goto L_089441AC;
    case 24u: goto L_089441C4;
    case 25u: goto L_089441CC;
    case 26u: goto L_089441E4;
    case 27u: goto L_08944208;
    case 28u: goto L_08944210;
    case 29u: goto L_08944234;
    case 30u: goto L_0894423C;
    case 31u: goto L_08944244;
    case 32u: goto L_0894424C;
    case 33u: goto L_08944254;
    case 34u: goto L_0894425C;
    case 35u: goto L_08944264;
    case 36u: goto L_0894426C;
    case 37u: goto L_0894427C;
    case 38u: goto L_08944284;
    case 39u: goto L_0894428C;
    case 40u: goto L_08944294;
    case 41u: goto L_08944298;
    case 42u: goto L_089442A0;
    case 43u: goto L_089442A8;
    case 44u: goto L_089442AC;
    case 45u: goto L_089442C4;
    case 46u: goto L_089442F8;
    case 47u: goto L_08944310;
    case 48u: goto L_08944320;
    case 49u: goto L_08944324;
    case 50u: goto L_08944354;
    case 51u: goto L_08944360;
    case 52u: goto L_08944378;
    case 53u: goto L_08944398;
    case 54u: goto L_089443A8;
    case 55u: goto L_089443C4;
    case 56u: goto L_089443D8;
    case 57u: goto L_08944408;
    case 58u: goto L_08944420;
    case 59u: goto L_0894442C;
    case 60u: goto L_08944438;
    case 61u: goto L_08944440;
    case 62u: goto L_08944448;
    case 63u: goto L_0894444C;
    case 64u: goto L_0894445C;
    case 65u: goto L_089444C8;
    case 66u: goto L_089444E8;
    case 67u: goto L_0894452C;
    case 68u: goto L_08944558;
    case 69u: goto L_08944560;
    case 70u: goto L_08944580;
    case 71u: goto L_08944598;
    case 72u: goto L_089445A4;
    case 73u: goto L_089445AC;
    case 74u: goto L_089445C0;
    case 75u: goto L_089445D4;
    case 76u: goto L_089445E0;
    case 77u: goto L_089445E8;
    case 78u: goto L_089445F0;
    case 79u: goto L_089445FC;
    case 80u: goto L_08944618;
    case 81u: goto L_08944628;
    case 82u: goto L_08944634;
    case 83u: goto L_08944644;
    case 84u: goto L_08944660;
    case 85u: goto L_08944668;
    case 86u: goto L_08944670;
    case 87u: goto L_08944690;
    case 88u: goto L_089446AC;
    case 89u: goto L_089446B8;
    case 90u: goto L_089446C0;
    case 91u: goto L_089446C8;
    case 92u: goto L_089446D0;
    case 93u: goto L_089446D8;
    case 94u: goto L_089446E8;
    case 95u: goto L_089446F0;
    case 96u: goto L_089446F8;
    case 97u: goto L_08944704;
    case 98u: goto L_08944718;
    case 99u: goto L_08944720;
    case 100u: goto L_08944754;
    case 101u: goto L_089447D0;
    case 102u: goto L_089447F8;
    case 103u: goto L_08944800;
    case 104u: goto L_08944810;
    case 105u: goto L_08944818;
    case 106u: goto L_08944820;
    case 107u: goto L_08944824;
    case 108u: goto L_08944848;
    case 109u: goto L_08944860;
    case 110u: goto L_0894486C;
    case 111u: goto L_08944874;
    case 112u: goto L_0894488C;
    case 113u: goto L_089448A8;
    case 114u: goto L_089448B0;
    case 115u: goto L_089448C0;
    case 116u: goto L_089448D0;
    case 117u: goto L_089448E4;
    case 118u: goto L_089448EC;
    case 119u: goto L_089448FC;
    case 120u: goto L_0894490C;
    case 121u: goto L_08944920;
    case 122u: goto L_08944924;
    case 123u: goto L_08944934;
    case 124u: goto L_08944950;
    case 125u: goto L_08944958;
    case 126u: goto L_08944960;
    case 127u: goto L_08944980;
    case 128u: goto L_0894499C;
    case 129u: goto L_089449A8;
    case 130u: goto L_089449B0;
    case 131u: goto L_089449B8;
    case 132u: goto L_089449C0;
    case 133u: goto L_089449C8;
    case 134u: goto L_089449D8;
    case 135u: goto L_089449E0;
    case 136u: goto L_089449E8;
    case 137u: goto L_089449F4;
    case 138u: goto L_08944A08;
    case 139u: goto L_08944A10;
    case 140u: goto L_08944A38;
    case 141u: goto L_08944A54;
    case 142u: goto L_08944A60;
    case 143u: goto L_08944A70;
    case 144u: goto L_08944A78;
    case 145u: goto L_08944A80;
    case 146u: goto L_08944A88;
    case 147u: goto L_08944A90;
    case 148u: goto L_08944A9C;
    case 149u: goto L_08944AA8;
    case 150u: goto L_08944AB0;
    case 151u: goto L_08944AB8;
    case 152u: goto L_08944AC0;
    case 153u: goto L_08944AD0;
    case 154u: goto L_08944AD8;
    case 155u: goto L_08944AE0;
    case 156u: goto L_08944AE8;
    case 157u: goto L_08944AF0;
    case 158u: goto L_08944AF4;
    case 159u: goto L_08944B00;
    case 160u: goto L_08944B20;
    case 161u: goto L_08944B2C;
    case 162u: goto L_08944B4C;
    case 163u: goto L_08944B78;
    case 164u: goto L_08944B90;
    case 165u: goto L_08944BA0;
    case 166u: goto L_08944BB0;
    case 167u: goto L_08944BC0;
    case 168u: goto L_08944BD0;
    case 169u: goto L_08944BE0;
    case 170u: goto L_08944BF0;
    case 171u: goto L_08944C0C;
    case 172u: goto L_08944C1C;
    case 173u: goto L_08944C2C;
    case 174u: goto L_08944C34;
    case 175u: goto L_08944C4C;
    case 176u: goto L_08944C54;
    case 177u: goto L_08944C64;
    case 178u: goto L_08944C78;
    case 179u: goto L_08944C80;
    case 180u: goto L_08944C8C;
    case 181u: goto L_08944CA8;
    case 182u: goto L_08944CB0;
    case 183u: goto L_08944CB8;
    case 184u: goto L_08944CC8;
    case 185u: goto L_08944CD8;
    case 186u: goto L_08944CF0;
    case 187u: goto L_08944D04;
    case 188u: goto L_08944D0C;
    case 189u: goto L_08944D18;
    case 190u: goto L_08944D34;
    case 191u: goto L_08944D40;
    case 192u: goto L_08944D48;
    case 193u: goto L_08944D58;
    case 194u: goto L_08944D64;
    case 195u: goto L_08944D70;
    case 196u: goto L_08944D80;
    case 197u: goto L_08944D8C;
    case 198u: goto L_08944DA0;
    case 199u: goto L_08944DB8;
    case 200u: goto L_08944DC4;
    case 201u: goto L_08944DD0;
    case 202u: goto L_08944DD8;
    case 203u: goto L_08944DE0;
    case 204u: goto L_08944DF4;
    case 205u: goto L_08944E04;
    case 206u: goto L_08944E10;
    case 207u: goto L_08944E20;
    case 208u: goto L_08944E2C;
    case 209u: goto L_08944E58;
    case 210u: goto L_08944E64;
    case 211u: goto L_08944E7C;
    case 212u: goto L_08944E98;
    case 213u: goto L_08944EA0;
    case 214u: goto L_08944EA8;
    case 215u: goto L_08944EC0;
    case 216u: goto L_08944EC8;
    case 217u: goto L_08944EE0;
    case 218u: goto L_08944F08;
    case 219u: goto L_08944F1C;
    case 220u: goto L_08944F2C;
    case 221u: goto L_08944F34;
    case 222u: goto L_08944F50;
    case 223u: goto L_08944F7C;
    case 224u: goto L_08944F84;
    case 225u: goto L_08944F90;
    case 226u: goto L_08944F98;
    case 227u: goto L_08944FA4;
    case 228u: goto L_08944FAC;
    case 229u: goto L_08944FB8;
    case 230u: goto L_08944FC0;
    case 231u: goto L_08944FC8;
    case 232u: goto L_08944FD0;
    case 233u: goto L_08944FD8;
    case 234u: goto L_08944FE0;
    case 235u: goto L_08944FF8;
    case 236u: goto L_0894501C;
    case 237u: goto L_08945050;
    case 238u: goto L_08945064;
    case 239u: goto L_0894506C;
    case 240u: goto L_08945074;
    case 241u: goto L_08945078;
    case 242u: goto L_08945088;
    case 243u: goto L_089450B4;
    case 244u: goto L_089450D0;
    case 245u: goto L_089450DC;
    case 246u: goto L_089450E8;
    case 247u: goto L_08945100;
    case 248u: goto L_08945118;
    case 249u: goto L_08945134;
    case 250u: goto L_0894513C;
    case 251u: goto L_08945144;
    case 252u: goto L_0894515C;
    case 253u: goto L_089451A4;
    case 254u: goto L_089451B4;
    case 255u: goto L_089451BC;
    case 256u: goto L_089451C0;
    case 257u: goto L_089451DC;
    case 258u: goto L_089451F0;
    case 259u: goto L_089451F8;
    case 260u: goto L_089451FC;
    case 261u: goto L_08945204;
    case 262u: goto L_0894521C;
    case 263u: goto L_08945228;
    case 264u: goto L_08945234;
    case 265u: goto L_0894524C;
    case 266u: goto L_08945258;
    case 267u: goto L_08945260;
    case 268u: goto L_08945268;
    case 269u: goto L_08945274;
    case 270u: goto L_0894527C;
    case 271u: goto L_08945284;
    case 272u: goto L_0894528C;
    case 273u: goto L_08945298;
    case 274u: goto L_089452A4;
    case 275u: goto L_089452B8;
    case 276u: goto L_089452C0;
    case 277u: goto L_089452E4;
    case 278u: goto L_089452F0;
    case 279u: goto L_089452F8;
    case 280u: goto L_08945300;
    case 281u: goto L_08945308;
    case 282u: goto L_08945310;
    case 283u: goto L_08945320;
    case 284u: goto L_08945358;
    case 285u: goto L_08945390;
    case 286u: goto L_089453A0;
    case 287u: goto L_089453D8;
    case 288u: goto L_0894540C;
    case 289u: goto L_08945414;
    case 290u: goto L_08945418;
    case 291u: goto L_0894542C;
    case 292u: goto L_08945444;
    case 293u: goto L_0894544C;
    case 294u: goto L_08945458;
    case 295u: goto L_08945460;
    case 296u: goto L_08945480;
    case 297u: goto L_08945490;
    case 298u: goto L_08945498;
    case 299u: goto L_089454A0;
    case 300u: goto L_089454A8;
    case 301u: goto L_089454B0;
    case 302u: goto L_089454B8;
    case 303u: goto L_089454C0;
    case 304u: goto L_089454C8;
    case 305u: goto L_089454D0;
    case 306u: goto L_089454D8;
    case 307u: goto L_089454E0;
    case 308u: goto L_089454E4;
    case 309u: goto L_089454EC;
    case 310u: goto L_089454F4;
    case 311u: goto L_08945508;
    case 312u: goto L_08945510;
    case 313u: goto L_08945518;
    case 314u: goto L_08945520;
    case 315u: goto L_08945528;
    case 316u: goto L_08945530;
    case 317u: goto L_08945538;
    case 318u: goto L_08945540;
    case 319u: goto L_08945558;
    case 320u: goto L_08945560;
    case 321u: goto L_08945564;
    case 322u: goto L_08945574;
    case 323u: goto L_08945580;
    case 324u: goto L_08945590;
    case 325u: goto L_089455A0;
    case 326u: goto L_089455C4;
    case 327u: goto L_089455CC;
    case 328u: goto L_089455D4;
    case 329u: goto L_089455E4;
    case 330u: goto L_089455F8;
    case 331u: goto L_0894561C;
    case 332u: goto L_08945624;
    case 333u: goto L_0894562C;
    case 334u: goto L_08945644;
    case 335u: goto L_08945658;
    case 336u: goto L_0894567C;
    case 337u: goto L_08945684;
    case 338u: goto L_0894568C;
    case 339u: goto L_0894569C;
    case 340u: goto L_089456B0;
    case 341u: goto L_089456C0;
    case 342u: goto L_089456CC;
    case 343u: goto L_089456F0;
    case 344u: goto L_08945700;
    case 345u: goto L_08945710;
    case 346u: goto L_08945718;
    case 347u: goto L_08945750;
    case 348u: goto L_08945768;
    case 349u: goto L_08945788;
    case 350u: goto L_08945790;
    case 351u: goto L_089457A4;
    case 352u: goto L_089457AC;
    case 353u: goto L_089457C4;
    case 354u: goto L_089457C8;
    case 355u: goto L_089457DC;
    case 356u: goto L_089457E8;
    case 357u: goto L_089457F8;
    case 358u: goto L_08945800;
    case 359u: goto L_08945804;
    case 360u: goto L_08945810;
    case 361u: goto L_0894581C;
    case 362u: goto L_08945824;
    case 363u: goto L_08945858;
    case 364u: goto L_08945870;
    case 365u: goto L_089458A0;
    case 366u: goto L_089458A8;
    case 367u: goto L_089458B0;
    case 368u: goto L_089458B8;
    case 369u: goto L_089458C0;
    case 370u: goto L_089458FC;
    case 371u: goto L_08945908;
    case 372u: goto L_08945910;
    case 373u: goto L_08945918;
    case 374u: goto L_08945954;
    case 375u: goto L_08945960;
    case 376u: goto L_08945968;
    case 377u: goto L_08945970;
    case 378u: goto L_089459AC;
    case 379u: goto L_089459B0;
    case 380u: goto L_089459BC;
    case 381u: goto L_089459C8;
    case 382u: goto L_089459D0;
    case 383u: goto L_089459D4;
    case 384u: goto L_089459E8;
    case 385u: goto L_089459F4;
    case 386u: goto L_089459FC;
    case 387u: goto L_08945A18;
    case 388u: goto L_08945A4C;
    case 389u: goto L_08945A58;
    case 390u: goto L_08945A68;
    case 391u: goto L_08945A70;
    case 392u: goto L_08945A84;
    case 393u: goto L_08945A8C;
    case 394u: goto L_08945A94;
    case 395u: goto L_08945A9C;
    case 396u: goto L_08945AA8;
    case 397u: goto L_08945AB8;
    case 398u: goto L_08945AC8;
    case 399u: goto L_08945AD8;
    case 400u: goto L_08945AE4;
    case 401u: goto L_08945AF4;
    case 402u: goto L_08945B00;
    case 403u: goto L_08945B18;
    case 404u: goto L_08945B20;
    case 405u: goto L_08945B28;
    case 406u: goto L_08945B30;
    case 407u: goto L_08945B3C;
    case 408u: goto L_08945B44;
    case 409u: goto L_08945B50;
    case 410u: goto L_08945B58;
    case 411u: goto L_08945B60;
    case 412u: goto L_08945B70;
    case 413u: goto L_08945B80;
    case 414u: goto L_08945B98;
    case 415u: goto L_08945BA0;
    case 416u: goto L_08945BAC;
    case 417u: goto L_08945BB8;
    case 418u: goto L_08945BC0;
    case 419u: goto L_08945BC8;
    case 420u: goto L_08945BD0;
    case 421u: goto L_08945BE0;
    case 422u: goto L_08945BF4;
    case 423u: goto L_08945C08;
    case 424u: goto L_08945C10;
    case 425u: goto L_08945C20;
    case 426u: goto L_08945C30;
    case 427u: goto L_08945C3C;
    case 428u: goto L_08945C44;
    case 429u: goto L_08945C50;
    case 430u: goto L_08945C54;
    case 431u: goto L_08945C5C;
    case 432u: goto L_08945C68;
    case 433u: goto L_08945C78;
    case 434u: goto L_08945C8C;
    case 435u: goto L_08945C94;
    case 436u: goto L_08945CA0;
    case 437u: goto L_08945CAC;
    case 438u: goto L_08945CB0;
    case 439u: goto L_08945CB8;
    case 440u: goto L_08945CC4;
    case 441u: goto L_08945CD4;
    case 442u: goto L_08945CE8;
    case 443u: goto L_08945CF0;
    case 444u: goto L_08945D04;
    case 445u: goto L_08945D10;
    case 446u: goto L_08945D1C;
    case 447u: goto L_08945D24;
    case 448u: goto L_08945D28;
    case 449u: goto L_08945D48;
    case 450u: goto L_08945D74;
    case 451u: goto L_08945DA0;
    case 452u: goto L_08945DE8;
    case 453u: goto L_08945DF4;
    case 454u: goto L_08945E04;
    case 455u: goto L_08945E48;
    case 456u: goto L_08945F10;
    case 457u: goto L_08945F48;
    case 458u: goto L_08945F74;
    case 459u: goto L_08945FD0;
    case 460u: goto L_08945FE8;
    case 461u: goto L_08945FF4;
    case 462u: goto L_08945FFC;
    case 463u: goto L_08946004;
    case 464u: goto L_08946060;
    case 465u: goto L_089460A4;
    case 466u: goto L_089460B0;
    case 467u: goto L_089460B8;
    case 468u: goto L_089460E0;
    case 469u: goto L_089460F8;
    case 470u: goto L_0894610C;
    case 471u: goto L_08946134;
    case 472u: goto L_08946140;
    case 473u: goto L_08946148;
    case 474u: goto L_08946158;
    case 475u: goto L_08946164;
    case 476u: goto L_0894616C;
    case 477u: goto L_08946174;
    case 478u: goto L_08946198;
    case 479u: goto L_089461C0;
    case 480u: goto L_089461FC;
    case 481u: goto L_0894620C;
    case 482u: goto L_08946214;
    case 483u: goto L_08946234;
    case 484u: goto L_08946244;
    case 485u: goto L_08946250;
    case 486u: goto L_0894625C;
    case 487u: goto L_08946268;
    case 488u: goto L_0894626C;
    case 489u: goto L_08946274;
    case 490u: goto L_08946278;
    case 491u: goto L_089462FC;
    case 492u: goto L_0894631C;
    case 493u: goto L_08946324;
    case 494u: goto L_08946338;
    case 495u: goto L_0894634C;
    case 496u: goto L_089463A0;
    case 497u: goto L_089463D8;
    case 498u: goto L_0894645C;
    case 499u: goto L_08946464;
    case 500u: goto L_0894648C;
    case 501u: goto L_08946494;
    case 502u: goto L_0894649C;
    case 503u: goto L_089464AC;
    case 504u: goto L_089464B8;
    case 505u: goto L_089464C4;
    case 506u: goto L_089464D0;
    case 507u: goto L_089464D4;
    case 508u: goto L_089464DC;
    case 509u: goto L_089464F0;
    case 510u: goto L_08946528;
    case 511u: goto L_08946548;
    case 512u: goto L_08946558;
    case 513u: goto L_08946564;
    case 514u: goto L_0894657C;
    case 515u: goto L_08946588;
    case 516u: goto L_08946594;
    case 517u: goto L_089465A8;
    case 518u: goto L_089465AC;
    case 519u: goto L_089465C0;
    case 520u: goto L_089465D0;
    case 521u: goto L_089465DC;
    case 522u: goto L_0894662C;
    case 523u: goto L_08946638;
    case 524u: goto L_08946640;
    case 525u: goto L_08946660;
    case 526u: goto L_089466B0;
    case 527u: goto L_089466BC;
    case 528u: goto L_089466C8;
    case 529u: goto L_089466CC;
    case 530u: goto L_089466D8;
    case 531u: goto L_089466E8;
    case 532u: goto L_089466F4;
    case 533u: goto L_089466FC;
    case 534u: goto L_08946704;
    case 535u: goto L_08946710;
    case 536u: goto L_08946730;
    case 537u: goto L_08946744;
    case 538u: goto L_08946758;
    case 539u: goto L_08946774;
    case 540u: goto L_089467B4;
    case 541u: goto L_089467C0;
    case 542u: goto L_089467D0;
    case 543u: goto L_089467E4;
    case 544u: goto L_089467F8;
    case 545u: goto L_08946804;
    case 546u: goto L_08946814;
    case 547u: goto L_08946828;
    case 548u: goto L_08946830;
    case 549u: goto L_0894683C;
    case 550u: goto L_08946848;
    case 551u: goto L_08946874;
    case 552u: goto L_0894687C;
    case 553u: goto L_08946884;
    case 554u: goto L_089468A0;
    case 555u: goto L_089468A8;
    case 556u: goto L_089468B4;
    case 557u: goto L_089468BC;
    case 558u: goto L_089468E8;
    case 559u: goto L_089468F0;
    case 560u: goto L_089468F8;
    case 561u: goto L_08946918;
    case 562u: goto L_08946940;
    case 563u: goto L_0894694C;
    case 564u: goto L_08946958;
    case 565u: goto L_08946978;
    case 566u: goto L_08946988;
    case 567u: goto L_089469AC;
    case 568u: goto L_089469DC;
    case 569u: goto L_089469E0;
    case 570u: goto L_089469E8;
    case 571u: goto L_089469F0;
    case 572u: goto L_08946A10;
    case 573u: goto L_08946A28;
    case 574u: goto L_08946A3C;
    case 575u: goto L_08946A44;
    case 576u: goto L_08946A5C;
    case 577u: goto L_08946A64;
    case 578u: goto L_08946A7C;
    case 579u: goto L_08946A9C;
    case 580u: goto L_08946AB4;
    case 581u: goto L_08946AB8;
    case 582u: goto L_08946AE4;
    case 583u: goto L_08946AE8;
    case 584u: goto L_08946AEC;
    case 585u: goto L_08946B10;
    case 586u: goto L_08946B20;
    case 587u: goto L_08946B2C;
    case 588u: goto L_08946B44;
    case 589u: goto L_08946B50;
    case 590u: goto L_08946B58;
    case 591u: goto L_08946B60;
    case 592u: goto L_08946B68;
    case 593u: goto L_08946B70;
    case 594u: goto L_08946B78;
    case 595u: goto L_08946B80;
    case 596u: goto L_08946B88;
    case 597u: goto L_08946B90;
    case 598u: goto L_08946BA0;
    case 599u: goto L_08946BBC;
    case 600u: goto L_08946BC8;
    case 601u: goto L_08946BD8;
    case 602u: goto L_08946C0C;
    case 603u: goto L_08946C24;
    case 604u: goto L_08946C44;
    case 605u: goto L_08946C50;
    case 606u: goto L_08946C80;
    case 607u: goto L_08946C94;
    case 608u: goto L_08946CA8;
    case 609u: goto L_08946CAC;
    case 610u: goto L_08946CB8;
    case 611u: goto L_08946CC8;
    case 612u: goto L_08946CD8;
    case 613u: goto L_08946CE0;
    case 614u: goto L_08946CEC;
    case 615u: goto L_08946D00;
    case 616u: goto L_08946D0C;
    case 617u: goto L_08946D1C;
    case 618u: goto L_08946D24;
    case 619u: goto L_08946D2C;
    case 620u: goto L_08946D34;
    case 621u: goto L_08946D3C;
    case 622u: goto L_08946D58;
    case 623u: goto L_08946D60;
    case 624u: goto L_08946D68;
    case 625u: goto L_08946D78;
    case 626u: goto L_08946D88;
    case 627u: goto L_08946D94;
    case 628u: goto L_08946DA4;
    case 629u: goto L_08946DB8;
    case 630u: goto L_08946DC0;
    case 631u: goto L_08946DCC;
    case 632u: goto L_08946DE0;
    case 633u: goto L_08946DE8;
    case 634u: goto L_08946DF4;
    case 635u: goto L_08946E00;
    case 636u: goto L_08946E08;
    case 637u: goto L_08946E10;
    case 638u: goto L_08946E2C;
    case 639u: goto L_08946E34;
    case 640u: goto L_08946E4C;
    case 641u: goto L_08946E54;
    case 642u: goto L_08946E6C;
    case 643u: goto L_08946E70;
    case 644u: goto L_08946E90;
    case 645u: goto L_08946EA0;
    case 646u: goto L_08946EA8;
    case 647u: goto L_08946EB8;
    case 648u: goto L_08946EBC;
    case 649u: goto L_08946ECC;
    case 650u: goto L_08946ED4;
    case 651u: goto L_08946EDC;
    case 652u: goto L_08946F04;
    case 653u: goto L_08946F0C;
    case 654u: goto L_08946F18;
    case 655u: goto L_08946F20;
    case 656u: goto L_08946F30;
    case 657u: goto L_08946F3C;
    case 658u: goto L_08946F44;
    case 659u: goto L_08946F4C;
    case 660u: goto L_08946F54;
    case 661u: goto L_08946F7C;
    case 662u: goto L_08946F84;
    case 663u: goto L_08946F90;
    case 664u: goto L_08946F98;
    case 665u: goto L_08946FAC;
    case 666u: goto L_08946FB4;
    case 667u: goto L_08946FC0;
    case 668u: goto L_08946FD4;
    case 669u: goto L_08946FE0;
    case 670u: goto L_08946FE8;
    case 671u: goto L_08947000;
    case 672u: goto L_08947028;
    case 673u: goto L_08947034;
    case 674u: goto L_0894703C;
    case 675u: goto L_08947044;
    case 676u: goto L_08947084;
    case 677u: goto L_08947090;
    case 678u: goto L_08947098;
    case 679u: goto L_089470A4;
    case 680u: goto L_089470AC;
    case 681u: goto L_089470B4;
    case 682u: goto L_089470C0;
    case 683u: goto L_089470C8;
    case 684u: goto L_089470FC;
    case 685u: goto L_08947118;
    case 686u: goto L_08947128;
    case 687u: goto L_08947134;
    case 688u: goto L_08947144;
    case 689u: goto L_0894714C;
    case 690u: goto L_08947154;
    case 691u: goto L_08947164;
    case 692u: goto L_08947178;
    case 693u: goto L_08947180;
    case 694u: goto L_08947188;
    case 695u: goto L_08947190;
    case 696u: goto L_08947198;
    case 697u: goto L_089471A0;
    case 698u: goto L_089471AC;
    case 699u: goto L_089471B4;
    case 700u: goto L_08947200;
    case 701u: goto L_08947210;
    case 702u: goto L_0894721C;
    case 703u: goto L_0894724C;
    case 704u: goto L_08947250;
    case 705u: goto L_08947258;
    case 706u: goto L_08947264;
    case 707u: goto L_0894726C;
    case 708u: goto L_08947274;
    case 709u: goto L_08947280;
    case 710u: goto L_0894728C;
    case 711u: goto L_08947298;
    case 712u: goto L_0894729C;
    case 713u: goto L_089472A0;
    case 714u: goto L_089472A8;
    case 715u: goto L_089472B0;
    case 716u: goto L_089472BC;
    case 717u: goto L_089472C8;
    case 718u: goto L_089472D4;
    case 719u: goto L_089472D8;
    case 720u: goto L_089472DC;
    case 721u: goto L_089472E0;
    case 722u: goto L_089472E8;
    case 723u: goto L_089472F4;
    case 724u: goto L_08947300;
    case 725u: goto L_0894730C;
    case 726u: goto L_08947310;
    case 727u: goto L_08947314;
    case 728u: goto L_0894731C;
    case 729u: goto L_08947324;
    case 730u: goto L_08947330;
    case 731u: goto L_0894733C;
    case 732u: goto L_08947348;
    case 733u: goto L_0894734C;
    case 734u: goto L_08947350;
    case 735u: goto L_08947354;
    case 736u: goto L_0894735C;
    case 737u: goto L_08947364;
    case 738u: goto L_08947374;
    case 739u: goto L_08947384;
    case 740u: goto L_0894738C;
    case 741u: goto L_08947394;
    case 742u: goto L_0894739C;
    case 743u: goto L_089473A4;
    case 744u: goto L_089473A8;
    case 745u: goto L_089473B0;
    case 746u: goto L_089473B8;
    case 747u: goto L_089473C0;
    case 748u: goto L_089473E0;
    case 749u: goto L_089473EC;
    case 750u: goto L_0894740C;
    case 751u: goto L_08947418;
    case 752u: goto L_08947428;
    case 753u: goto L_08947430;
    case 754u: goto L_08947438;
    case 755u: goto L_08947444;
    case 756u: goto L_0894744C;
    case 757u: goto L_08947454;
    case 758u: goto L_0894745C;
    case 759u: goto L_08947464;
    case 760u: goto L_08947470;
    case 761u: goto L_08947478;
    case 762u: goto L_08947488;
    case 763u: goto L_08947490;
    case 764u: goto L_0894749C;
    case 765u: goto L_089474A4;
    case 766u: goto L_089474AC;
    case 767u: goto L_089474B8;
    case 768u: goto L_089474C0;
    case 769u: goto L_089474C8;
    case 770u: goto L_089474D8;
    case 771u: goto L_089474E0;
    case 772u: goto L_089474EC;
    case 773u: goto L_089474F8;
    case 774u: goto L_08947508;
    case 775u: goto L_08947518;
    case 776u: goto L_08947520;
    case 777u: goto L_0894752C;
    case 778u: goto L_08947534;
    case 779u: goto L_0894753C;
    case 780u: goto L_08947548;
    case 781u: goto L_08947558;
    case 782u: goto L_08947564;
    case 783u: goto L_08947570;
    case 784u: goto L_0894758C;
    case 785u: goto L_089475A4;
    case 786u: goto L_089475B4;
    case 787u: goto L_089475D4;
    case 788u: goto L_089475DC;
    case 789u: goto L_089475F8;
    case 790u: goto L_08947600;
    case 791u: goto L_08947608;
    case 792u: goto L_08947610;
    case 793u: goto L_08947620;
    case 794u: goto L_0894762C;
    case 795u: goto L_08947650;
    case 796u: goto L_08947658;
    case 797u: goto L_08947660;
    case 798u: goto L_08947690;
    case 799u: goto L_089476BC;
    case 800u: goto L_089476FC;
    case 801u: goto L_0894770C;
    case 802u: goto L_08947718;
    case 803u: goto L_08947720;
    case 804u: goto L_08947728;
    case 805u: goto L_08947748;
    case 806u: goto L_08947758;
    case 807u: goto L_08947768;
    case 808u: goto L_08947778;
    case 809u: goto L_08947780;
    case 810u: goto L_08947788;
    case 811u: goto L_089477A4;
    case 812u: goto L_089477BC;
    case 813u: goto L_089477E8;
    case 814u: goto L_08947804;
    case 815u: goto L_08947814;
    case 816u: goto L_08947824;
    case 817u: goto L_08947844;
    case 818u: goto L_0894784C;
    case 819u: goto L_08947870;
    case 820u: goto L_08947878;
    case 821u: goto L_08947888;
    case 822u: goto L_089478A4;
    case 823u: goto L_089478C4;
    case 824u: goto L_089478E8;
    case 825u: goto L_089478F0;
    case 826u: goto L_08947900;
    case 827u: goto L_08947918;
    case 828u: goto L_08947924;
    case 829u: goto L_08947934;
    case 830u: goto L_08947940;
    case 831u: goto L_08947948;
    case 832u: goto L_08947950;
    case 833u: goto L_0894795C;
    case 834u: goto L_0894796C;
    case 835u: goto L_08947974;
    case 836u: goto L_08947980;
    case 837u: goto L_08947984;
    case 838u: goto L_089479E8;
    case 839u: goto L_089479F4;
    case 840u: goto L_08947A04;
    case 841u: goto L_08947A18;
    case 842u: goto L_08947A24;
    case 843u: goto L_08947A2C;
    case 844u: goto L_08947A38;
    case 845u: goto L_08947A40;
    case 846u: goto L_08947A48;
    case 847u: goto L_08947A50;
    case 848u: goto L_08947A58;
    case 849u: goto L_08947A60;
    case 850u: goto L_08947A64;
    case 851u: goto L_08947A70;
    case 852u: goto L_08947A94;
    case 853u: goto L_08947AA4;
    case 854u: goto L_08947AB0;
    case 855u: goto L_08947AC0;
    case 856u: goto L_08947AC8;
    case 857u: goto L_08947B0C;
    case 858u: goto L_08947B58;
    case 859u: goto L_08947B88;
    case 860u: goto L_08947B94;
    case 861u: goto L_08947BA4;
    case 862u: goto L_08947BB4;
    case 863u: goto L_08947BC4;
    case 864u: goto L_08947BD4;
    case 865u: goto L_08947BE4;
    case 866u: goto L_08947BF4;
    case 867u: goto L_08947C08;
    case 868u: goto L_08947C10;
    case 869u: goto L_08947C1C;
    case 870u: goto L_08947C24;
    case 871u: goto L_08947C30;
    case 872u: goto L_08947C38;
    case 873u: goto L_08947C44;
    case 874u: goto L_08947C58;
    case 875u: goto L_08947C60;
    case 876u: goto L_08947C6C;
    case 877u: goto L_08947C70;
    case 878u: goto L_08947C78;
    case 879u: goto L_08947C84;
    case 880u: goto L_08947C90;
    case 881u: goto L_08947C9C;
    case 882u: goto L_08947CA0;
    case 883u: goto L_08947CA8;
    case 884u: goto L_08947CB8;
    case 885u: goto L_08947CC0;
    case 886u: goto L_08947CD0;
    case 887u: goto L_08947CD8;
    case 888u: goto L_08947CEC;
    case 889u: goto L_08947CF4;
    case 890u: goto L_08947D08;
    case 891u: goto L_08947D14;
    case 892u: goto L_08947D3C;
    case 893u: goto L_08947D44;
    case 894u: goto L_08947D68;
    case 895u: goto L_08947D74;
    case 896u: goto L_08947D7C;
    case 897u: goto L_08947DA0;
    case 898u: goto L_08947DB0;
    case 899u: goto L_08947DF0;
    case 900u: goto L_08947DF8;
    case 901u: goto L_08947E0C;
    case 902u: goto L_08947E14;
    case 903u: goto L_08947E28;
    case 904u: goto L_08947E2C;
    case 905u: goto L_08947E34;
    case 906u: goto L_08947E48;
    case 907u: goto L_08947E80;
    case 908u: goto L_08947E90;
    case 909u: goto L_08947EA4;
    case 910u: goto L_08947EAC;
    case 911u: goto L_08947EB4;
    case 912u: goto L_08947EE0;
    case 913u: goto L_08947EF0;
    case 914u: goto L_08947F30;
    case 915u: goto L_08947F38;
    case 916u: goto L_08947F4C;
    case 917u: goto L_08947F54;
    case 918u: goto L_08947F68;
    case 919u: goto L_08947F6C;
    case 920u: goto L_08947F74;
    case 921u: goto L_08947F88;
    case 922u: goto L_08947FC0;
    case 923u: goto L_08947FD4;
    case 924u: goto L_08947FE4;
    case 925u: goto L_08947FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08944000:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 851u, 0x08943FD4u>(ctx, &aot_mem); return;
      }
      goto L_08944008;
    }
L_08944008:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894402C;
      }
      goto L_08944010;
    }
L_08944010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-29912)));
    ctx.gpr[31] = (0x0894401Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(6115));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 469u, 0x089C6068u>(ctx, &aot_mem) && ctx.pc == 0x0894401Cu) goto L_0894401C;
    return;
L_0894401C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0894402C;
      }
      goto L_08944024;
    }
L_08944024:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29880), 0u);
    goto L_0894402C;
L_0894402C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944058:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08944094;
      }
      goto L_08944074;
    }
L_08944074:
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08944094u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_089440A0;
L_08944094:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089440A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[7] = (0u | 12u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089440E0;
      }
      goto L_089440D0;
    }
L_089440D0:
    ctx.gpr[31] = (0x089440D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089440D8u) goto L_089440D8;
    return;
L_089440D8:
    ctx.gpr[31] = (0x089440E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 327u, 0x088EE310u>(ctx, &aot_mem) && ctx.pc == 0x089440E0u) goto L_089440E0;
    return;
L_089440E0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089440ECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 598u, 0x0899F2C4u>(ctx, &aot_mem) && ctx.pc == 0x089440ECu) goto L_089440EC;
    return;
L_089440EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(1440));
    ctx.gpr[31] = (0x08944114u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08944114u) goto L_08944114;
    return;
L_08944114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
        goto L_08944128;
    }
    goto L_08944128;
L_08944128:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1436), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x0894414Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x0894414Cu) goto L_0894414C;
    return;
L_0894414C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 64u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894416C;
      }
      goto L_08944164;
    }
L_08944164:
    ctx.gpr[31] = (0x0894416Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08944DA0;
L_0894416C:
    ctx.gpr[31] = (0x08944174u);
    ctx.gpr[4] = (0u | 28u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08944174u) goto L_08944174;
    return;
L_08944174:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (32u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (0u | 201u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[17] = (0u | 57u);
        goto L_08944198;
    }
    goto L_08944198;
L_08944198:
    ctx.gpr[31] = (0x089441A0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x089441A0u) goto L_089441A0;
    return;
L_089441A0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089441C4;
      }
      goto L_089441AC;
    }
L_089441AC:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    goto L_089441C4;
L_089441C4:
    ctx.gpr[31] = (0x089441CCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 327u, 0x088EE310u>(ctx, &aot_mem) && ctx.pc == 0x089441CCu) goto L_089441CC;
    return;
L_089441CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089441E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944208u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 617u, 0x08942D38u>(ctx, &aot_mem) && ctx.pc == 0x08944208u) goto L_08944208;
    return;
L_08944208:
    ctx.gpr[31] = (0x08944210u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08944210u) goto L_08944210;
    return;
L_08944210:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27772)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1428)));
      if (branch_taken) {
          goto L_08944244;
      }
      goto L_08944234;
    }
L_08944234:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    ctx.gpr[6] = (0u | 11u);
      if (branch_taken) {
          goto L_08944244;
      }
      goto L_0894423C;
    }
L_0894423C:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08944254;
      }
      goto L_08944244;
    }
L_08944244:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894425C;
      }
      goto L_0894424C;
    }
L_0894424C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089442AC;
      }
      goto L_08944254;
    }
L_08944254:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089442AC;
      }
      goto L_0894425C;
    }
L_0894425C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894424C;
      }
      goto L_08944264;
    }
L_08944264:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944284;
      }
      goto L_0894426C;
    }
L_0894426C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 16u);
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
        goto L_08944298;
    }
    goto L_0894427C;
L_0894427C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 22u);
      if (branch_taken) {
          goto L_0894428C;
      }
      goto L_08944284;
    }
L_08944284:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089442AC;
      }
      goto L_0894428C;
    }
L_0894428C:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089442A8;
      }
      goto L_08944294;
    }
L_08944294:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_08944298;
L_08944298:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089442A8;
      }
      goto L_089442A0;
    }
L_089442A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089442AC;
      }
      goto L_089442A8;
    }
L_089442A8:
    ctx.gpr[2] = (0u | 1u);
    goto L_089442AC;
L_089442AC:
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
L_089442C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089442F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089442F8u) goto L_089442F8;
    return;
L_089442F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
        goto L_08944324;
    }
    goto L_08944310;
L_08944310:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089443C4;
      }
      goto L_08944320;
    }
L_08944320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    goto L_08944324;
L_08944324:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (16095u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08944354u);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08944354u) goto L_08944354;
    return;
L_08944354:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x08944360u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08944360u) goto L_08944360;
    return;
L_08944360:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944398;
      }
      goto L_08944378;
    }
L_08944378:
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089443C4;
      }
      goto L_08944398;
    }
L_08944398:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089443C4;
      }
      goto L_089443A8;
    }
L_089443A8:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1252)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089443C4;
L_089443C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089443D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944408u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08944408u) goto L_08944408;
    return;
L_08944408:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894442C;
      }
      goto L_08944420;
    }
L_08944420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944440;
      }
      goto L_0894442C;
    }
L_0894442C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944448;
      }
      goto L_08944438;
    }
L_08944438:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0894444C;
      }
      goto L_08944440;
    }
L_08944440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_0894444C;
      }
      goto L_08944448;
    }
L_08944448:
    ctx.gpr[2] = (0u | 0u);
    goto L_0894444C;
L_0894444C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894445C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[20]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[31]);
    ctx.gpr[31] = (0x089444C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089444C8u) goto L_089444C8;
    return;
L_089444C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089444E8;
      }
      goto L_089444E8;
    }
L_089444E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = ctx.fpr[15] - ctx.fpr[16];
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[17];
    ctx.fpr[22] = std::sqrt(ctx.fpr[22]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944720;
      }
      goto L_0894452C;
    }
L_0894452C:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08944558u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08944FF8;
L_08944558:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944720;
      }
      goto L_08944560;
    }
L_08944560:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08944580u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08944580u) goto L_08944580;
    return;
L_08944580:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[24] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_089445A4;
      }
      goto L_08944598;
    }
L_08944598:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089445A4;
L_089445A4:
    ctx.gpr[31] = (0x089445ACu);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089445ACu) goto L_089445AC;
    return;
L_089445AC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_089445C0;
    }
    goto L_089445C0;
L_089445C0:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.fpr[22] = ctx.fpr[22] - ctx.fpr[12];
      if (branch_taken) {
          goto L_089445E0;
      }
      goto L_089445D4;
    }
L_089445D4:
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_089445E0;
L_089445E0:
    ctx.gpr[31] = (0x089445E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x089445E8u) goto L_089445E8;
    return;
L_089445E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089445FC;
      }
      goto L_089445F0;
    }
L_089445F0:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_089445FC;
L_089445FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944634;
      }
      goto L_08944618;
    }
L_08944618:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08944634;
      }
      goto L_08944628;
    }
L_08944628:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08944634;
L_08944634:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944704;
      }
      goto L_08944644;
    }
L_08944644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944704;
      }
      goto L_08944660;
    }
L_08944660:
    ctx.gpr[31] = (0x08944668u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F74Cu>(ctx, &aot_mem) && ctx.pc == 0x08944668u) goto L_08944668;
    return;
L_08944668:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944704;
      }
      goto L_08944670;
    }
L_08944670:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089446F8;
      }
      goto L_08944690;
    }
L_08944690:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089446ACu);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089446ACu) goto L_089446AC;
    return;
L_089446AC:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089446F0;
      }
      goto L_089446B8;
    }
L_089446B8:
    ctx.gpr[31] = (0x089446C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 144u, 0x08980A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089446C0u) goto L_089446C0;
    return;
L_089446C0:
    ctx.gpr[31] = (0x089446C8u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089446C8u) goto L_089446C8;
    return;
L_089446C8:
    ctx.gpr[31] = (0x089446D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 261u, 0x089A5284u>(ctx, &aot_mem) && ctx.pc == 0x089446D0u) goto L_089446D0;
    return;
L_089446D0:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089446E8;
      }
      goto L_089446D8;
    }
L_089446D8:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
      if (branch_taken) {
          goto L_089446F0;
      }
      goto L_089446E8;
    }
L_089446E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944720;
      }
      goto L_089446F0;
    }
L_089446F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944704;
      }
      goto L_089446F8;
    }
L_089446F8:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[12];
    goto L_08944704;
L_08944704:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944720;
      }
      goto L_08944718;
    }
L_08944718:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08944720;
L_08944720:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944754:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[20]);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[9] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[16] = ctx.fpr[16] - ctx.fpr[17];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[18] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.fpr[14] = std::sqrt(ctx.fpr[14]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08944A10;
      }
      goto L_089447D0;
    }
L_089447D0:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089447F8u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1428));
    goto L_08944FF8;
L_089447F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08944824;
      }
      goto L_08944800;
    }
L_08944800:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944A10;
      }
      goto L_08944810;
    }
L_08944810:
    ctx.gpr[31] = (0x08944818u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F74Cu>(ctx, &aot_mem) && ctx.pc == 0x08944818u) goto L_08944818;
    return;
L_08944818:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944A10;
      }
      goto L_08944820;
    }
L_08944820:
    ctx.gpr[4] = (2232u << 16u);
    goto L_08944824;
L_08944824:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x08944848u);
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08944848u) goto L_08944848;
    return;
L_08944848:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16585u << 16u);
      if (branch_taken) {
          goto L_0894486C;
      }
      goto L_08944860;
    }
L_08944860:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_0894486C;
L_0894486C:
    ctx.gpr[31] = (0x08944874u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08944874u) goto L_08944874;
    return;
L_08944874:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_0894488C;
    }
    goto L_0894488C;
L_0894488C:
    ctx.gpr[4] = (16223u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26355u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944A10;
      }
      goto L_089448A8;
    }
L_089448A8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_089448EC;
      }
      goto L_089448B0;
    }
L_089448B0:
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089448D0;
      }
      goto L_089448C0;
    }
L_089448C0:
    ctx.gpr[4] = (51139u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944924;
      }
      goto L_089448D0;
    }
L_089448D0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_089448E4;
    }
    goto L_089448E4;
L_089448E4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
      if (branch_taken) {
          goto L_08944924;
      }
      goto L_089448EC;
    }
L_089448EC:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894490C;
      }
      goto L_089448FC;
    }
L_089448FC:
    ctx.gpr[4] = (51139u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20480u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944924;
      }
      goto L_0894490C;
    }
L_0894490C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_08944920;
    }
    goto L_08944920;
L_08944920:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    goto L_08944924;
L_08944924:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089449F4;
      }
      goto L_08944934;
    }
L_08944934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089449F4;
      }
      goto L_08944950;
    }
L_08944950:
    ctx.gpr[31] = (0x08944958u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F74Cu>(ctx, &aot_mem) && ctx.pc == 0x08944958u) goto L_08944958;
    return;
L_08944958:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089449F4;
      }
      goto L_08944960;
    }
L_08944960:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089449E8;
      }
      goto L_08944980;
    }
L_08944980:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0894499Cu);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0894499Cu) goto L_0894499C;
    return;
L_0894499C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089449E0;
      }
      goto L_089449A8;
    }
L_089449A8:
    ctx.gpr[31] = (0x089449B0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 144u, 0x08980A9Cu>(ctx, &aot_mem) && ctx.pc == 0x089449B0u) goto L_089449B0;
    return;
L_089449B0:
    ctx.gpr[31] = (0x089449B8u);
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089449B8u) goto L_089449B8;
    return;
L_089449B8:
    ctx.gpr[31] = (0x089449C0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 261u, 0x089A5284u>(ctx, &aot_mem) && ctx.pc == 0x089449C0u) goto L_089449C0;
    return;
L_089449C0:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_089449D8;
      }
      goto L_089449C8;
    }
L_089449C8:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
      if (branch_taken) {
          goto L_089449E0;
      }
      goto L_089449D8;
    }
L_089449D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944A10;
      }
      goto L_089449E0;
    }
L_089449E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089449F4;
      }
      goto L_089449E8;
    }
L_089449E8:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    goto L_089449F4;
L_089449F4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944A10;
      }
      goto L_08944A08;
    }
L_08944A08:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08944A10;
L_08944A10:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944A38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(412)));
    ctx.gpr[7] = (32u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944A80;
      }
      goto L_08944A54;
    }
L_08944A54:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08944A78;
      }
      goto L_08944A60;
    }
L_08944A60:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(592)));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944AB0;
      }
      goto L_08944A70;
    }
L_08944A70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 10 ? 1u : 0u);
      if (branch_taken) {
          goto L_08944A88;
      }
      goto L_08944A78;
    }
L_08944A78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08944AF4;
      }
      goto L_08944A80;
    }
L_08944A80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08944AF4;
      }
      goto L_08944A88;
    }
L_08944A88:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944AB0;
      }
      goto L_08944A90;
    }
L_08944A90:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08944AA8;
      }
      goto L_08944A9C;
    }
L_08944A9C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 39u);
      if (branch_taken) {
          goto L_08944AB8;
      }
      goto L_08944AA8;
    }
L_08944AA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08944AF4;
      }
      goto L_08944AB0;
    }
L_08944AB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (0u | 39u);
    goto L_08944AB8;
L_08944AB8:
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08944AE8;
      }
      goto L_08944AC0;
    }
L_08944AC0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944AE0;
      }
      goto L_08944AD0;
    }
L_08944AD0:
    ctx.gpr[31] = (0x08944AD8u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F74Cu>(ctx, &aot_mem) && ctx.pc == 0x08944AD8u) goto L_08944AD8;
    return;
L_08944AD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944AF0;
      }
      goto L_08944AE0;
    }
L_08944AE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08944AF4;
      }
      goto L_08944AE8;
    }
L_08944AE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08944AF4;
      }
      goto L_08944AF0;
    }
L_08944AF0:
    ctx.gpr[2] = (0u | 1u);
    goto L_08944AF4;
L_08944AF4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944B00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08944D70;
      }
      goto L_08944B20;
    }
L_08944B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944D70;
      }
      goto L_08944B2C;
    }
L_08944B2C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08944B4Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08944B4Cu) goto L_08944B4C;
    return;
L_08944B4C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(33) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08944D64;
      }
      goto L_08944B78;
    }
L_08944B78:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31208)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944B90:
    ctx.gpr[4] = (15589u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944D8C;
      }
      goto L_08944BA0;
    }
L_08944BA0:
    ctx.gpr[4] = (15589u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944D8C;
      }
      goto L_08944BB0;
    }
L_08944BB0:
    ctx.gpr[4] = (15589u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944D8C;
      }
      goto L_08944BC0;
    }
L_08944BC0:
    ctx.gpr[4] = (15589u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51450u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944D8C;
      }
      goto L_08944BD0;
    }
L_08944BD0:
    ctx.gpr[4] = (15506u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14868u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944D8C;
      }
      goto L_08944BE0;
    }
L_08944BE0:
    ctx.gpr[4] = (15648u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55676u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944D8C;
      }
      goto L_08944BF0;
    }
L_08944BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08944C34;
      }
      goto L_08944C0C;
    }
L_08944C0C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 203u);
        goto L_08944C1C;
    }
    goto L_08944C1C;
L_08944C1C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08944C2Cu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08944C2Cu) goto L_08944C2C;
    return;
L_08944C2C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944C54;
      }
      goto L_08944C34;
    }
L_08944C34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (ctx.gpr[5] & 8192u);
    ctx.gpr[17] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08944C64;
      }
      goto L_08944C4C;
    }
L_08944C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08944C78;
      }
      goto L_08944C54;
    }
L_08944C54:
    ctx.gpr[4] = (15561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944D8C;
      }
      goto L_08944C64;
    }
L_08944C64:
    ctx.gpr[4] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    goto L_08944C78;
L_08944C78:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944CC8;
      }
      goto L_08944C80;
    }
L_08944C80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[16] = (0u | 202u);
      if (branch_taken) {
          goto L_08944CA8;
      }
      goto L_08944C8C;
    }
L_08944C8C:
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (0u | 205u);
        goto L_08944CA8;
    }
    goto L_08944CA8;
L_08944CA8:
    ctx.gpr[31] = (0x08944CB0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08944CB0u) goto L_08944CB0;
    return;
L_08944CB0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944CC8;
      }
      goto L_08944CB8;
    }
L_08944CB8:
    ctx.gpr[4] = (15506u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14868u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944D8C;
      }
      goto L_08944CC8;
    }
L_08944CC8:
    ctx.gpr[4] = (15648u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55676u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944D8C;
      }
      goto L_08944CD8;
    }
L_08944CD8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[17] & 8192u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08944D04;
      }
      goto L_08944CF0;
    }
L_08944CF0:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    goto L_08944D04;
L_08944D04:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08944D58;
      }
      goto L_08944D0C;
    }
L_08944D0C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 202u);
      if (branch_taken) {
          goto L_08944D34;
      }
      goto L_08944D18;
    }
L_08944D18:
    ctx.gpr[4] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 205u);
        goto L_08944D34;
    }
    goto L_08944D34;
L_08944D34:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08944D40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08944D40u) goto L_08944D40;
    return;
L_08944D40:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944D58;
      }
      goto L_08944D48;
    }
L_08944D48:
    ctx.gpr[4] = (15506u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14868u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944D8C;
      }
      goto L_08944D58;
    }
L_08944D58:
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944D8C;
      }
      goto L_08944D64;
    }
L_08944D64:
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08944D8C;
      }
      goto L_08944D70;
    }
L_08944D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944D64;
      }
      goto L_08944D80;
    }
L_08944D80:
    ctx.gpr[4] = (15589u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 51450u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08944D8C;
L_08944D8C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944DA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1376)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08944DD8;
      }
      goto L_08944DB8;
    }
L_08944DB8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08944DC4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 505u, 0x0899ED08u>(ctx, &aot_mem) && ctx.pc == 0x08944DC4u) goto L_08944DC4;
    return;
L_08944DC4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08944DD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 327u, 0x088EE310u>(ctx, &aot_mem) && ctx.pc == 0x08944DD0u) goto L_08944DD0;
    return;
L_08944DD0:
    ctx.gpr[31] = (0x08944DD8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 160u, 0x08868FB4u>(ctx, &aot_mem) && ctx.pc == 0x08944DD8u) goto L_08944DD8;
    return;
L_08944DD8:
    ctx.gpr[31] = (0x08944DE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 311u, 0x088D55F0u>(ctx, &aot_mem) && ctx.pc == 0x08944DE0u) goto L_08944DE0;
    return;
L_08944DE0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3229), static_cast<std::uint8_t>(0u));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944DF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944E04u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 300u, 0x08ACD3A4u>(ctx, &aot_mem) && ctx.pc == 0x08944E04u) goto L_08944E04;
    return;
L_08944E04:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944E10:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944E20u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 323u, 0x08ACD4E4u>(ctx, &aot_mem) && ctx.pc == 0x08944E20u) goto L_08944E20;
    return;
L_08944E20:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944E2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944E58u);
    ctx.gpr[5] = (0u | 141u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08944E58u) goto L_08944E58;
    return;
L_08944E58:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944F34;
      }
      goto L_08944E64;
    }
L_08944E64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944F34;
      }
      goto L_08944E7C;
    }
L_08944E7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944F34;
      }
      goto L_08944E98;
    }
L_08944E98:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944F34;
      }
      goto L_08944EA0;
    }
L_08944EA0:
    ctx.gpr[31] = (0x08944EA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 859u, 0x08A97538u>(ctx, &aot_mem) && ctx.pc == 0x08944EA8u) goto L_08944EA8;
    return;
L_08944EA8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944EE0;
      }
      goto L_08944EC0;
    }
L_08944EC0:
    ctx.gpr[31] = (0x08944EC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 868u, 0x08A9759Cu>(ctx, &aot_mem) && ctx.pc == 0x08944EC8u) goto L_08944EC8;
    return;
L_08944EC8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08944F34;
      }
      goto L_08944EE0;
    }
L_08944EE0:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08944F08u);
    ctx.gpr[6] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08944F08u) goto L_08944F08;
    return;
L_08944F08:
    ctx.gpr[5] = (2202u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08944F1Cu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(18740));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x08944F1Cu) goto L_08944F1C;
    return;
L_08944F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 41u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08944F34;
      }
      goto L_08944F2C;
    }
L_08944F2C:
    ctx.gpr[31] = (0x08944F34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08944F34u) goto L_08944F34;
    return;
L_08944F34:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08944F50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2972)));
    ctx.gpr[18] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08944F7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08944F7Cu) goto L_08944F7C;
    return;
L_08944F7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944FD8;
      }
      goto L_08944F84;
    }
L_08944F84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x08944F90u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2976)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08944F90u) goto L_08944F90;
    return;
L_08944F90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944FD0;
      }
      goto L_08944F98;
    }
L_08944F98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x08944FA4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2980)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08944FA4u) goto L_08944FA4;
    return;
L_08944FA4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08944FC8;
      }
      goto L_08944FAC;
    }
L_08944FAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x08944FB8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2984)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08944FB8u) goto L_08944FB8;
    return;
L_08944FB8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08944FE0;
      }
      goto L_08944FC0;
    }
L_08944FC0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2984), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08944FE0;
      }
      goto L_08944FC8;
    }
L_08944FC8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2980), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08944FE0;
      }
      goto L_08944FD0;
    }
L_08944FD0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2976), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08944FE0;
      }
      goto L_08944FD8;
    }
L_08944FD8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(2972), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08944FE0;
      }
      goto L_08944FE0;
    }
L_08944FE0:
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
L_08944FF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3229)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_0894506C;
      }
      goto L_0894501C;
    }
L_0894501C:
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08945050u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08945050u) goto L_08945050;
    return;
L_08945050:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08945074;
      }
      goto L_08945064;
    }
L_08945064:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08945078;
      }
      goto L_0894506C;
    }
L_0894506C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08945078;
      }
      goto L_08945074;
    }
L_08945074:
    ctx.gpr[2] = (0u | 0u);
    goto L_08945078;
L_08945078:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945088:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_0894513C;
      }
      goto L_089450B4;
    }
L_089450B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x089450D0u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089450D0u) goto L_089450D0;
    return;
L_089450D0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x089450DCu);
    ctx.fpr[12] = ctx.fpr[0] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x089450DCu) goto L_089450DC;
    return;
L_089450DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089450E8u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089450E8u) goto L_089450E8;
    return;
L_089450E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894513C;
      }
      goto L_08945100;
    }
L_08945100:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) ^ 0x80000000u);
        goto L_08945118;
    }
    goto L_08945118;
L_08945118:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0894513C;
      }
      goto L_08945134;
    }
L_08945134:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089451C0;
      }
      goto L_0894513C;
    }
L_0894513C:
    ctx.gpr[31] = (0x08945144u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08945144u) goto L_08945144;
    return;
L_08945144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089451BC;
      }
      goto L_0894515C;
    }
L_0894515C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[16]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_089451A4;
    }
    goto L_089451A4;
L_089451A4:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089451BC;
      }
      goto L_089451B4;
    }
L_089451B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089451C0;
      }
      goto L_089451BC;
    }
L_089451BC:
    ctx.gpr[2] = (0u | 1u);
    goto L_089451C0;
L_089451C0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089451DC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-25840)));
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089451F8;
      }
      goto L_089451F0;
    }
L_089451F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
      if (branch_taken) {
          goto L_089451FC;
      }
      goto L_089451F8;
    }
L_089451F8:
    ctx.gpr[2] = (0u | 0u);
    goto L_089451FC;
L_089451FC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945204:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08945228;
      }
      goto L_0894521C;
    }
L_0894521C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08945228u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 327u, 0x088EE310u>(ctx, &aot_mem) && ctx.pc == 0x08945228u) goto L_08945228;
    return;
L_08945228:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945234:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 52 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08945258;
      }
      goto L_0894524C;
    }
L_0894524C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08945284;
      }
      goto L_08945258;
    }
L_08945258:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 55 ? 1u : 0u);
      if (branch_taken) {
          goto L_08945274;
      }
      goto L_08945260;
    }
L_08945260:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945274;
      }
      goto L_08945268;
    }
L_08945268:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08945284;
      }
      goto L_08945274;
    }
L_08945274:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945284;
      }
      goto L_0894527C;
    }
L_0894527C:
    ctx.gpr[4] = (0u | 46u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08945284;
L_08945284:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0894528C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2995)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089452B8;
      }
      goto L_08945298;
    }
L_08945298:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2988)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089452B8;
      }
      goto L_089452A4;
    }
L_089452A4:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(2988), 0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089452B8;
L_089452B8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089452C0:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] << 24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 24u));
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[6] = (ctx.gpr[4] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894540C;
      }
      goto L_089452E4;
    }
L_089452E4:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08945320;
      }
      goto L_089452F0;
    }
L_089452F0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08945358;
      }
      goto L_089452F8;
    }
L_089452F8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08945390;
      }
      goto L_08945300;
    }
L_08945300:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089453A0;
      }
      goto L_08945308;
    }
L_08945308:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089453D8;
      }
      goto L_08945310;
    }
L_08945310:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894540C;
      }
      goto L_08945320;
    }
L_08945320:
    ctx.gpr[4] = (16221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46039u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894540C;
      }
      goto L_08945358;
    }
L_08945358:
    ctx.gpr[4] = (16221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46039u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894540C;
      }
      goto L_08945390;
    }
L_08945390:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894540C;
      }
      goto L_089453A0;
    }
L_089453A0:
    ctx.gpr[4] = (16221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46039u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[16] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0894540C;
      }
      goto L_089453D8;
    }
L_089453D8:
    ctx.gpr[4] = (16221u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 46039u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    ctx.fpr[12] = ctx.fpr[16] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0894540C;
L_0894540C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945414:
    ctx.gpr[7] = (0u | 0u);
    goto L_08945418;
L_08945418:
    ctx.gpr[6] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(3160)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894544C;
      }
      goto L_0894542C;
    }
L_0894542C:
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[6] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[7]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945418;
      }
      goto L_08945444;
    }
L_08945444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945458;
      }
      goto L_0894544C;
    }
L_0894544C:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(3160), 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1788), 0u);
      if (branch_taken) {
          goto L_08945458;
      }
      goto L_08945458;
    }
L_08945458:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945460:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945498;
      }
      goto L_08945480;
    }
L_08945480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 26u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089454D8;
      }
      goto L_08945490;
    }
L_08945490:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 27u);
      if (branch_taken) {
          goto L_089454A0;
      }
      goto L_08945498;
    }
L_08945498:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089454E4;
      }
      goto L_089454A0;
    }
L_089454A0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 19u);
      if (branch_taken) {
          goto L_089454D8;
      }
      goto L_089454A8;
    }
L_089454A8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 20u);
      if (branch_taken) {
          goto L_089454D8;
      }
      goto L_089454B0;
    }
L_089454B0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 21u);
      if (branch_taken) {
          goto L_089454D8;
      }
      goto L_089454B8;
    }
L_089454B8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 30u);
      if (branch_taken) {
          goto L_089454D8;
      }
      goto L_089454C0;
    }
L_089454C0:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 32u);
      if (branch_taken) {
          goto L_089454D8;
      }
      goto L_089454C8;
    }
L_089454C8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 33u);
      if (branch_taken) {
          goto L_089454D8;
      }
      goto L_089454D0;
    }
L_089454D0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089454E0;
      }
      goto L_089454D8;
    }
L_089454D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_089454E4;
      }
      goto L_089454E0;
    }
L_089454E0:
    ctx.gpr[2] = (0u | 0u);
    goto L_089454E4;
L_089454E4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089454EC:
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] + static_cast<std::uint32_t>(3228));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089454F4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08945508u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    goto L_08945574;
L_08945508:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945558;
      }
      goto L_08945510;
    }
L_08945510:
    ctx.gpr[31] = (0x08945518u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945590;
L_08945518:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945558;
      }
      goto L_08945520;
    }
L_08945520:
    ctx.gpr[31] = (0x08945528u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945580;
L_08945528:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945558;
      }
      goto L_08945530;
    }
L_08945530:
    ctx.gpr[31] = (0x08945538u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 78u, 0x089184E0u>(ctx, &aot_mem) && ctx.pc == 0x08945538u) goto L_08945538;
    return;
L_08945538:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945558;
      }
      goto L_08945540;
    }
L_08945540:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945560;
      }
      goto L_08945558;
    }
L_08945558:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08945564;
      }
      goto L_08945560;
    }
L_08945560:
    ctx.gpr[2] = (0u | 0u);
    goto L_08945564;
L_08945564:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945574:
    ctx.gpr[2] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3228)));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[2] & 1u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945580:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[2] = (ctx.gpr[4] & 4u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945590:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[2] = (ctx.gpr[4] & 2u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (0u < ctx.gpr[2] ? 1u : 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089455A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_089455E4;
      }
      goto L_089455C4;
    }
L_089455C4:
    ctx.gpr[31] = (0x089455CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089454F4;
L_089455CC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089455E4;
      }
      goto L_089455D4;
    }
L_089455D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3228)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3220), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089455E4;
L_089455E4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089455F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08945644;
      }
      goto L_0894561C;
    }
L_0894561C:
    ctx.gpr[31] = (0x08945624u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089454F4;
L_08945624:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945644;
      }
      goto L_0894562C;
    }
L_0894562C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3228)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3220), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 2000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3224), ctx.gpr[4]);
    goto L_08945644;
L_08945644:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945658:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0894569C;
      }
      goto L_0894567C;
    }
L_0894567C:
    ctx.gpr[31] = (0x08945684u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_089454F4;
L_08945684:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894569C;
      }
      goto L_0894568C;
    }
L_0894568C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3228)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(3220), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894569C;
L_0894569C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089456B0:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945710;
      }
      goto L_089456C0;
    }
L_089456C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945710;
      }
      goto L_089456CC;
    }
L_089456CC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3220)));
    ctx.gpr[7] = (ctx.gpr[7] | 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[8] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3220), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945700;
      }
      goto L_089456F0;
    }
L_089456F0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08945710;
      }
      goto L_08945700;
    }
L_08945700:
    ctx.gpr[4] = (16298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 15729u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08945710;
L_08945710:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945718:
    ctx.gpr[5] = (2230u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[16] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[6] = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3220)));
      if (branch_taken) {
          goto L_08945768;
      }
      goto L_08945750;
    }
L_08945750:
    ctx.fpr[12] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
      if (branch_taken) {
          goto L_08945788;
      }
      goto L_08945768;
    }
L_08945768:
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[6] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    goto L_08945788;
L_08945788:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3220), ctx.gpr[5]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945790:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(3220)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
        goto L_089457A4;
    }
    goto L_089457A4;
L_089457A4:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089457AC:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[7] = (ctx.gpr[6] & 32u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089457C8;
      }
      goto L_089457C4;
    }
L_089457C4:
    ctx.gpr[5] = (0u | 1u);
    goto L_089457C8;
L_089457C8:
    ctx.gpr[6] = (ctx.gpr[6] & 16u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945804;
      }
      goto L_089457DC;
    }
L_089457DC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945804;
      }
      goto L_089457E8;
    }
L_089457E8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(836)));
    ctx.gpr[8] = (16256u << 16u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[8]);
      if (branch_taken) {
          goto L_08945800;
      }
      goto L_089457F8;
    }
L_089457F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1564), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08945804;
      }
      goto L_08945800;
    }
L_08945800:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(1284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08945804;
L_08945804:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3220), 0u);
      if (branch_taken) {
          goto L_0894581C;
      }
      goto L_08945810;
    }
L_08945810:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[5] = (ctx.gpr[5] | 32u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_0894581C;
L_0894581C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945824:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 16u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089458B0;
      }
      goto L_08945858;
    }
L_08945858:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3228)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089458B0;
      }
      goto L_08945870;
    }
L_08945870:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x089458A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945574;
L_089458A0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089458C0;
      }
      goto L_089458A8;
    }
L_089458A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945908;
      }
      goto L_089458B0;
    }
L_089458B0:
    ctx.gpr[31] = (0x089458B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089457AC;
L_089458B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089459FC;
      }
      goto L_089458C0;
    }
L_089458C0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(272)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3220)));
    ctx.gpr[7] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089458FCu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 206u, 0x08A84F08u>(ctx, &aot_mem) && ctx.pc == 0x089458FCu) goto L_089458FC;
    return;
L_089458FC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089459B0;
      }
      goto L_08945908;
    }
L_08945908:
    ctx.gpr[31] = (0x08945910u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945590;
L_08945910:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945960;
      }
      goto L_08945918;
    }
L_08945918:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(274)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3220)));
    ctx.gpr[7] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08945954u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 206u, 0x08A84F08u>(ctx, &aot_mem) && ctx.pc == 0x08945954u) goto L_08945954;
    return;
L_08945954:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089459B0;
      }
      goto L_08945960;
    }
L_08945960:
    ctx.gpr[31] = (0x08945968u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945580;
L_08945968:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089459B0;
      }
      goto L_08945970;
    }
L_08945970:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(276)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3220)));
    ctx.gpr[7] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[6]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[7]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x089459ACu);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 206u, 0x08A84F08u>(ctx, &aot_mem) && ctx.pc == 0x089459ACu) goto L_089459AC;
    return;
L_089459AC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_089459B0;
L_089459B0:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x089459BCu);
    ctx.gpr[4] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x089459BCu) goto L_089459BC;
    return;
L_089459BC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_089459D4;
      }
      goto L_089459C8;
    }
L_089459C8:
    ctx.gpr[31] = (0x089459D0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 414u, 0x089198E0u>(ctx, &aot_mem) && ctx.pc == 0x089459D0u) goto L_089459D0;
    return;
L_089459D0:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_089459D4;
L_089459D4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x089459E8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 57u, 0x089C0478u>(ctx, &aot_mem) && ctx.pc == 0x089459E8u) goto L_089459E8;
    return;
L_089459E8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089459F4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 426u, 0x08A5A2CCu>(ctx, &aot_mem) && ctx.pc == 0x089459F4u) goto L_089459F4;
    return;
L_089459F4:
    ctx.gpr[31] = (0x089459FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089457AC;
L_089459FC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945A18:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    ctx.gpr[18] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(5992));
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08945A4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x08945A4Cu) goto L_08945A4C;
    return;
L_08945A4C:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08945A70;
      }
      goto L_08945A58;
    }
L_08945A58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08945A68u);
    ctx.gpr[19] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 287u, 0x088A93FCu>(ctx, &aot_mem) && ctx.pc == 0x08945A68u) goto L_08945A68;
    return;
L_08945A68:
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08945A94;
      }
      goto L_08945A70;
    }
L_08945A70:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08945A84u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08945A84u) goto L_08945A84;
    return;
L_08945A84:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
        goto L_08945A9C;
    }
    goto L_08945A8C;
L_08945A8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945AE4;
      }
      goto L_08945A94;
    }
L_08945A94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08945D28;
      }
      goto L_08945A9C;
    }
L_08945A9C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08945AA8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08945AA8u) goto L_08945AA8;
    return;
L_08945AA8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08945AD8;
    }
    goto L_08945AB8;
L_08945AB8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08945AC8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08945AC8u) goto L_08945AC8;
    return;
L_08945AC8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08945AD8;
L_08945AD8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08945B20;
      }
      goto L_08945AE4;
    }
L_08945AE4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08945AF4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08945AF4u) goto L_08945AF4;
    return;
L_08945AF4:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945BC0;
      }
      goto L_08945B00;
    }
L_08945B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945B28;
      }
      goto L_08945B18;
    }
L_08945B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08945B44;
      }
      goto L_08945B20;
    }
L_08945B20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08945D28;
      }
      goto L_08945B28;
    }
L_08945B28:
    ctx.gpr[31] = (0x08945B30u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 144u, 0x08980A9Cu>(ctx, &aot_mem) && ctx.pc == 0x08945B30u) goto L_08945B30;
    return;
L_08945B30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08945B3Cu);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 261u, 0x089A5284u>(ctx, &aot_mem) && ctx.pc == 0x08945B3Cu) goto L_08945B3C;
    return;
L_08945B3C:
    { const bool branch_taken = ctx.gpr[16] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08945B58;
      }
      goto L_08945B44;
    }
L_08945B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945B60;
      }
      goto L_08945B50;
    }
L_08945B50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08945B80;
      }
      goto L_08945B58;
    }
L_08945B58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08945D28;
      }
      goto L_08945B60;
    }
L_08945B60:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08945B70u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08945B70u) goto L_08945B70;
    return;
L_08945B70:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    goto L_08945B80;
L_08945B80:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(102)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08945BC8;
      }
      goto L_08945B98;
    }
L_08945B98:
    ctx.gpr[31] = (0x08945BA0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x08945BA0u) goto L_08945BA0;
    return;
L_08945BA0:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08945BC0;
      }
      goto L_08945BAC;
    }
L_08945BAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945BD0;
      }
      goto L_08945BB8;
    }
L_08945BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
      if (branch_taken) {
          goto L_08945BF4;
      }
      goto L_08945BC0;
    }
L_08945BC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08945D28;
      }
      goto L_08945BC8;
    }
L_08945BC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08945D28;
      }
      goto L_08945BD0;
    }
L_08945BD0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(18));
    ctx.gpr[31] = (0x08945BE0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08945BE0u) goto L_08945BE0;
    return;
L_08945BE0:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(18)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08945BF4;
L_08945BF4:
    ctx.gpr[5] = (ctx.gpr[5] ^ 65535u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945BC0;
      }
      goto L_08945C08;
    }
L_08945C08:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (0u | 65535u);
      if (branch_taken) {
          goto L_08945C30;
      }
      goto L_08945C10;
    }
L_08945C10:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(19));
    ctx.gpr[31] = (0x08945C20u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08945C20u) goto L_08945C20;
    return;
L_08945C20:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(19)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08945C30;
L_08945C30:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945C44;
      }
      goto L_08945C3C;
    }
L_08945C3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08945C54;
      }
      goto L_08945C44;
    }
L_08945C44:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08945C50u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08945C50u) goto L_08945C50;
    return;
L_08945C50:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08945C54;
L_08945C54:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945BC0;
      }
      goto L_08945C5C;
    }
L_08945C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08945C8C;
    }
    goto L_08945C68;
L_08945C68:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(20));
    ctx.gpr[31] = (0x08945C78u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08945C78u) goto L_08945C78;
    return;
L_08945C78:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08945C8C;
L_08945C8C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945CA0;
      }
      goto L_08945C94;
    }
L_08945C94:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_08945CB0;
      }
      goto L_08945CA0;
    }
L_08945CA0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08945CACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08945CACu) goto L_08945CAC;
    return;
L_08945CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    goto L_08945CB0;
L_08945CB0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945BC0;
      }
      goto L_08945CB8;
    }
L_08945CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
        goto L_08945CE8;
    }
    goto L_08945CC4;
L_08945CC4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(21));
    ctx.gpr[31] = (0x08945CD4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08945CD4u) goto L_08945CD4;
    return;
L_08945CD4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(21)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    goto L_08945CE8;
L_08945CE8:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08945D04;
      }
      goto L_08945CF0;
    }
L_08945CF0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
      if (branch_taken) {
          goto L_08945D1C;
      }
      goto L_08945D04;
    }
L_08945D04:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x08945D10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08945D10u) goto L_08945D10;
    return;
L_08945D10:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(112)));
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    goto L_08945D1C;
L_08945D1C:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08945BC0;
      }
      goto L_08945D24;
    }
L_08945D24:
    ctx.gpr[2] = (0u | 0u);
    goto L_08945D28;
L_08945D28:
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
L_08945D48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[6] = (7168u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08945D74u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0108_entry, 108u, 653u, 0x089B67FCu>(ctx, &aot_mem) && ctx.pc == 0x08945D74u) goto L_08945D74;
    return;
L_08945D74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[5] = (7168u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-4912), ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08945DA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-528));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[7] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (ctx.gpr[7] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[31]);
    ctx.gpr[31] = (0x08945DE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08945DE8u) goto L_08945DE8;
    return;
L_08945DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08945E48;
      }
      goto L_08945DF4;
    }
L_08945DF4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08945E04u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 426u, 0x088D5E64u>(ctx, &aot_mem) && ctx.pc == 0x08945E04u) goto L_08945E04;
    return;
L_08945E04:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946174;
      }
      goto L_08945E48;
    }
L_08945E48:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
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
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08945F10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 503u, 0x08A06460u>(ctx, &aot_mem) && ctx.pc == 0x08945F10u) goto L_08945F10;
    return;
L_08945F10:
    ctx.gpr[4] = (16373u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48651u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946004;
      }
      goto L_08945F48;
    }
L_08945F48:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08945F74u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 616u, 0x08942D10u>(ctx, &aot_mem) && ctx.pc == 0x08945F74u) goto L_08945F74;
    return;
L_08945F74:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08945FD0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 616u, 0x08942D10u>(ctx, &aot_mem) && ctx.pc == 0x08945FD0u) goto L_08945FD0;
    return;
L_08945FD0:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945FFC;
      }
      goto L_08945FE8;
    }
L_08945FE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08945FFC;
      }
      goto L_08945FF4;
    }
L_08945FF4:
    ctx.gpr[31] = (0x08945FFCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08945FFCu) goto L_08945FFC;
    return;
L_08945FFC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946148;
      }
      goto L_08946004;
    }
L_08946004:
    ctx.gpr[4] = (16752u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08946060u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 512u, 0x08A065B8u>(ctx, &aot_mem) && ctx.pc == 0x08946060u) goto L_08946060;
    return;
L_08946060:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089460B0;
      }
      goto L_089460A4;
    }
L_089460A4:
    ctx.gpr[4] = (17106u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_089460B8;
      }
      goto L_089460B0;
    }
L_089460B0:
    ctx.gpr[4] = (49874u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_089460B8;
L_089460B8:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x089460E0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x089460E0u) goto L_089460E0;
    return;
L_089460E0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089460F8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 616u, 0x08942D10u>(ctx, &aot_mem) && ctx.pc == 0x089460F8u) goto L_089460F8;
    return;
L_089460F8:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0894610Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0894610Cu) goto L_0894610C;
    return;
L_0894610C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1724)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946148;
      }
      goto L_08946134;
    }
L_08946134:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946148;
      }
      goto L_08946140;
    }
L_08946140:
    ctx.gpr[31] = (0x08946148u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08946148u) goto L_08946148;
    return;
L_08946148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894616C;
      }
      goto L_08946158;
    }
L_08946158:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894616C;
      }
      goto L_08946164;
    }
L_08946164:
    ctx.gpr[31] = (0x0894616Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x0894616Cu) goto L_0894616C;
    return;
L_0894616C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946174;
      }
      goto L_08946174;
    }
L_08946174:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946198:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x089461C0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 329u, 0x089A5680u>(ctx, &aot_mem) && ctx.pc == 0x089461C0u) goto L_089461C0;
    return;
L_089461C0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-18148));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2999), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(40));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(2064));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(3008));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089461FCu);
    ctx.gpr[5] = (0u | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089461FCu) goto L_089461FC;
    return;
L_089461FC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3232), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3229), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x0894620Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089463A0;
L_0894620C:
    ctx.gpr[31] = (0x08946214u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 223u, 0x08ACCD9Cu>(ctx, &aot_mem) && ctx.pc == 0x08946214u) goto L_08946214;
    return;
L_08946214:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2928), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1720), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2952), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2949), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08946234u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 505u, 0x0899ED08u>(ctx, &aot_mem) && ctx.pc == 0x08946234u) goto L_08946234;
    return;
L_08946234:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08946278;
      }
      goto L_08946244;
    }
L_08946244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894626C;
      }
      goto L_08946250;
    }
L_08946250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_0894626C;
    }
    goto L_0894625C;
L_0894625C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08946268u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08946268u) goto L_08946268;
    return;
L_08946268:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_0894626C;
L_0894626C:
    ctx.gpr[31] = (0x08946274u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08946274u) goto L_08946274;
    return;
L_08946274:
    ctx.gpr[4] = (0u | 1u);
    goto L_08946278;
L_08946278:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (17174u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2944), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2940), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2950), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2968), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2956), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2960), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2964), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2996), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2997), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2998), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3196), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3204), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3212), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2984), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2980), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2976), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2972), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3037), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(3040));
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_089462FC;
L_089462FC:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(3136), 0u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089462FC;
      }
      goto L_0894631C;
    }
L_0894631C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08946324;
L_08946324:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(3160), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08946324;
      }
      goto L_08946338;
    }
L_08946338:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(3184), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3216), 0u);
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x0894634Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(31196));
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 529u, 0x08A8B25Cu>(ctx, &aot_mem) && ctx.pc == 0x0894634Cu) goto L_0894634C;
    return;
L_0894634C:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29912), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3220), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3228), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3224), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3208), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089463A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2992), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2993), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x089463D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 367u, 0x088E9FE0u>(ctx, &aot_mem) && ctx.pc == 0x089463D8u) goto L_089463D8;
    return;
L_089463D8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2994), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2995), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2988), 0u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1328), 0u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1384), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1388), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1392), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1396), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(592), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(596), 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(324), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[31] = (0x0894645Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 53u, 0x089A03F8u>(ctx, &aot_mem) && ctx.pc == 0x0894645Cu) goto L_0894645C;
    return;
L_0894645C:
    ctx.gpr[31] = (0x08946464u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x08946464u) goto L_08946464;
    return;
L_08946464:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946494;
      }
      goto L_0894648C;
    }
L_0894648C:
    ctx.gpr[31] = (0x08946494u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1756)));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 545u, 0x0884E1D0u>(ctx, &aot_mem) && ctx.pc == 0x08946494u) goto L_08946494;
    return;
L_08946494:
    ctx.gpr[31] = (0x0894649Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 320u, 0x08865768u>(ctx, &aot_mem) && ctx.pc == 0x0894649Cu) goto L_0894649C;
    return;
L_0894649C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089464DC;
      }
      goto L_089464AC;
    }
L_089464AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089464D4;
      }
      goto L_089464B8;
    }
L_089464B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
        goto L_089464D4;
    }
    goto L_089464C4;
L_089464C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089464D0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089464D0u) goto L_089464D0;
    return;
L_089464D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(912), 0u);
    goto L_089464D4;
L_089464D4:
    ctx.gpr[31] = (0x089464DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089464DCu) goto L_089464DC;
    return;
L_089464DC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089464F0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089464F0u) goto L_089464F0;
    return;
L_089464F0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), 0u);
    ctx.gpr[4] = (0u | 31u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(744), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (61440u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2950), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2968), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x08946528u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08947B0C;
L_08946528:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2997), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (0u | 50u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(37), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946564;
      }
      goto L_08946548;
    }
L_08946548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946564;
      }
      goto L_08946558;
    }
L_08946558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08946564;
L_08946564:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1924), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1960), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(3229), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089465C0;
      }
      goto L_0894657C;
    }
L_0894657C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08946588u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08946588u) goto L_08946588;
    return;
L_08946588:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_089465AC;
      }
      goto L_08946594;
    }
L_08946594:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(246)));
    ctx.gpr[31] = (0x089465A8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x089465A8u) goto L_089465A8;
    return;
L_089465A8:
    ctx.gpr[19] = (ctx.gpr[18] | 0u);
    goto L_089465AC;
L_089465AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3232), ctx.gpr[19]);
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089465C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x089465C0u) goto L_089465C0;
    return;
L_089465C0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089465D0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 481u, 0x08A05DFCu>(ctx, &aot_mem) && ctx.pc == 0x089465D0u) goto L_089465D0;
    return;
L_089465D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[31] = (0x089465DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x089465DCu) goto L_089465DC;
    return;
L_089465DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (65528u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3232)));
    ctx.gpr[5] = (65535u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32767));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946640;
      }
      goto L_0894662C;
    }
L_0894662C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946640;
      }
      goto L_08946638;
    }
L_08946638:
    ctx.gpr[31] = (0x08946640u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08946640u) goto L_08946640;
    return;
L_08946640:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08946660:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2950)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    ctx.gpr[17] = (2229u << 16u);
      if (branch_taken) {
          goto L_089466BC;
      }
      goto L_089466B0;
    }
L_089466B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2950)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2950), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089466BC;
L_089466BC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2950)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089466CC;
      }
      goto L_089466C8;
    }
L_089466C8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2968), 0u);
    goto L_089466CC;
L_089466CC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089466E8;
      }
      goto L_089466D8;
    }
L_089466D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089466E8;
L_089466E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089466FC;
      }
      goto L_089466F4;
    }
L_089466F4:
    ctx.gpr[31] = (0x089466FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 142u, 0x0894CBA4u>(ctx, &aot_mem) && ctx.pc == 0x089466FCu) goto L_089466FC;
    return;
L_089466FC:
    ctx.gpr[31] = (0x08946704u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 215u, 0x0894D234u>(ctx, &aot_mem) && ctx.pc == 0x08946704u) goto L_08946704;
    return;
L_08946704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946758;
      }
      goto L_08946710;
    }
L_08946710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946758;
      }
      goto L_08946730;
    }
L_08946730:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1264)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946758;
      }
      goto L_08946744;
    }
L_08946744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089467F8;
      }
      goto L_08946758;
    }
L_08946758:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(86)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089467F8;
      }
      goto L_08946774;
    }
L_08946774:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (16608u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x089467B4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x089467B4u) goto L_089467B4;
    return;
L_089467B4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089467E4;
      }
      goto L_089467C0;
    }
L_089467C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089467E4;
      }
      goto L_089467D0;
    }
L_089467D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_089467F8;
      }
      goto L_089467E4;
    }
L_089467E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_089467F8;
L_089467F8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2993)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894683C;
      }
      goto L_08946804;
    }
L_08946804:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2992)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08946830;
      }
      goto L_08946814;
    }
L_08946814:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2992), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08946828u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(7128));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 367u, 0x088E9FE0u>(ctx, &aot_mem) && ctx.pc == 0x08946828u) goto L_08946828;
    return;
L_08946828:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2993), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0894683C;
      }
      goto L_08946830;
    }
L_08946830:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2992)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2992), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0894683C;
L_0894683C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2992)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946874;
      }
      goto L_08946848;
    }
L_08946848:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2992)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(7128));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[31] = (0x08946874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 364u, 0x088E9FA8u>(ctx, &aot_mem) && ctx.pc == 0x08946874u) goto L_08946874;
    return;
L_08946874:
    ctx.gpr[31] = (0x0894687Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 300u, 0x089B1038u>(ctx, &aot_mem) && ctx.pc == 0x0894687Cu) goto L_0894687C;
    return;
L_0894687C:
    ctx.gpr[31] = (0x08946884u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 249u, 0x0894D538u>(ctx, &aot_mem) && ctx.pc == 0x08946884u) goto L_08946884;
    return;
L_08946884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089468F0;
      }
      goto L_089468A0;
    }
L_089468A0:
    ctx.gpr[31] = (0x089468A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 617u, 0x08942D38u>(ctx, &aot_mem) && ctx.pc == 0x089468A8u) goto L_089468A8;
    return;
L_089468A8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089468B4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(2064));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 230u, 0x08ACCE8Cu>(ctx, &aot_mem) && ctx.pc == 0x089468B4u) goto L_089468B4;
    return;
L_089468B4:
    ctx.gpr[31] = (0x089468BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 720u, 0x0883BA30u>(ctx, &aot_mem) && ctx.pc == 0x089468BCu) goto L_089468BC;
    return;
L_089468BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[22] = (0u | 55u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 33u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[23] = (0u | 4u);
      if (branch_taken) {
          goto L_089468F8;
      }
      goto L_089468E8;
    }
L_089468E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
      if (branch_taken) {
          goto L_08946AEC;
      }
      goto L_089468F0;
    }
L_089468F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947AC8;
      }
      goto L_089468F8;
    }
L_089468F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08946918u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08946918u) goto L_08946918;
    return;
L_08946918:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (32u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 201u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (0u | 57u);
        goto L_08946940;
    }
    goto L_08946940;
L_08946940:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0894694Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x0894694Cu) goto L_0894694C;
    return;
L_0894694C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946A64;
      }
      goto L_08946958;
    }
L_08946958:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946A64;
      }
      goto L_08946978;
    }
L_08946978:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946A64;
      }
      goto L_08946988;
    }
L_08946988:
    ctx.gpr[4] = (16102u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (2230u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-7827));
      if (branch_taken) {
          goto L_089469E0;
      }
      goto L_089469AC;
    }
L_089469AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15444u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089469E0;
      }
      goto L_089469DC;
    }
L_089469DC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_089469E0;
L_089469E0:
    ctx.gpr[31] = (0x089469E8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1101u, 0x08A97F90u>(ctx, &aot_mem) && ctx.pc == 0x089469E8u) goto L_089469E8;
    return;
L_089469E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946A44;
      }
      goto L_089469F0;
    }
L_089469F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08946A44;
      }
      goto L_08946A10;
    }
L_08946A10:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946A44;
      }
      goto L_08946A28;
    }
L_08946A28:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08946A3Cu);
    ctx.gpr[6] = (0u | 190u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08946A3Cu) goto L_08946A3C;
    return;
L_08946A3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946AE8;
      }
      goto L_08946A44;
    }
L_08946A44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08946A5Cu);
    ctx.gpr[6] = (0u | 191u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08946A5Cu) goto L_08946A5C;
    return;
L_08946A5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946AE8;
      }
      goto L_08946A64;
    }
L_08946A64:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946AE8;
      }
      goto L_08946A7C;
    }
L_08946A7C:
    ctx.gpr[4] = (16102u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
        goto L_08946AB8;
    }
    goto L_08946A9C;
L_08946A9C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 192u);
    ctx.gpr[31] = (0x08946AB4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08946AB4u) goto L_08946AB4;
    return;
L_08946AB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3200)));
    goto L_08946AB8;
L_08946AB8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15172u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39846u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08946AE8;
      }
      goto L_08946AE4;
    }
L_08946AE4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3200), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08946AE8;
L_08946AE8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    goto L_08946AEC;
L_08946AEC:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946B44;
      }
      goto L_08946B10;
    }
L_08946B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946B44;
      }
      goto L_08946B20;
    }
L_08946B20:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946B44;
      }
      goto L_08946B2C;
    }
L_08946B2C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 52u);
    ctx.gpr[31] = (0x08946B44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08946B44u) goto L_08946B44;
    return;
L_08946B44:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946CAC;
      }
      goto L_08946B50;
    }
L_08946B50:
    ctx.gpr[31] = (0x08946B58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089454F4;
L_08946B58:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946CAC;
      }
      goto L_08946B60;
    }
L_08946B60:
    ctx.gpr[31] = (0x08946B68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945718;
L_08946B68:
    ctx.gpr[31] = (0x08946B70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945790;
L_08946B70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) > 0;
    // nop
      if (branch_taken) {
          goto L_08946B80;
      }
      goto L_08946B78;
    }
L_08946B78:
    ctx.gpr[31] = (0x08946B80u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089457AC;
L_08946B80:
    ctx.gpr[31] = (0x08946B88u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08945590;
L_08946B88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946CAC;
      }
      goto L_08946B90;
    }
L_08946B90:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946CAC;
      }
      goto L_08946BA0;
    }
L_08946BA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946CAC;
      }
      goto L_08946BBC;
    }
L_08946BBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08946CAC;
      }
      goto L_08946BC8;
    }
L_08946BC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08946CAC;
      }
      goto L_08946BD8;
    }
L_08946BD8:
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[6] = (17530u << 16u);
    ctx.gpr[7] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(3224)));
      if (branch_taken) {
          goto L_08946C24;
      }
      goto L_08946C0C;
    }
L_08946C0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08946C44;
      }
      goto L_08946C24;
    }
L_08946C24:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    ctx.gpr[5] = (32768u << 16u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    goto L_08946C44;
L_08946C44:
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3224), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08946CAC;
      }
      goto L_08946C50;
    }
L_08946C50:
    ctx.gpr[4] = (0u | 2000u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3224), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29916)));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[13] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08946C94;
      }
      goto L_08946C80;
    }
L_08946C80:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
      if (branch_taken) {
          goto L_08946CA8;
      }
      goto L_08946C94;
    }
L_08946C94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_08946CA8;
L_08946CA8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08946CAC;
L_08946CAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08946CE0;
      }
      goto L_08946CB8;
    }
L_08946CB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946CE0;
      }
      goto L_08946CC8;
    }
L_08946CC8:
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08946CD8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 708u, 0x08943340u>(ctx, &aot_mem) && ctx.pc == 0x08946CD8u) goto L_08946CD8;
    return;
L_08946CD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946D00;
      }
      goto L_08946CE0;
    }
L_08946CE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08946D00;
      }
      goto L_08946CEC;
    }
L_08946CEC:
    ctx.gpr[5] = (16025u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08946D00u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 708u, 0x08943340u>(ctx, &aot_mem) && ctx.pc == 0x08946D00u) goto L_08946D00;
    return;
L_08946D00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08946D24;
      }
      goto L_08946D0C;
    }
L_08946D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946D34;
      }
      goto L_08946D1C;
    }
L_08946D1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946D68;
      }
      goto L_08946D24;
    }
L_08946D24:
    ctx.gpr[31] = (0x08946D2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08944DA0;
L_08946D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947AC8;
      }
      goto L_08946D34;
    }
L_08946D34:
    ctx.gpr[31] = (0x08946D3Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08944DA0;
L_08946D3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4000));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946D60;
      }
      goto L_08946D58;
    }
L_08946D58:
    ctx.gpr[31] = (0x08946D60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 424u, 0x089A1DB8u>(ctx, &aot_mem) && ctx.pc == 0x08946D60u) goto L_08946D60;
    return;
L_08946D60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947AC8;
      }
      goto L_08946D68;
    }
L_08946D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946F0C;
      }
      goto L_08946D78;
    }
L_08946D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08946F0C;
      }
      goto L_08946D88;
    }
L_08946D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946F04;
      }
      goto L_08946D94;
    }
L_08946D94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946F04;
      }
      goto L_08946DA4;
    }
L_08946DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(848));
    ctx.gpr[31] = (0x08946DB8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 215u, 0x08A292C8u>(ctx, &aot_mem) && ctx.pc == 0x08946DB8u) goto L_08946DB8;
    return;
L_08946DB8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08946F04;
      }
      goto L_08946DC0;
    }
L_08946DC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08946DCCu);
    ctx.gpr[5] = (0u | 79u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08946DCCu) goto L_08946DCC;
    return;
L_08946DCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(543)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08946ED4;
      }
      goto L_08946DE0;
    }
L_08946DE0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946ED4;
      }
      goto L_08946DE8;
    }
L_08946DE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08946DF4u);
    ctx.gpr[5] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08946DF4u) goto L_08946DF4;
    return;
L_08946DF4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946ED4;
      }
      goto L_08946E00;
    }
L_08946E00:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
        goto L_08946E70;
    }
    goto L_08946E08;
L_08946E08:
    ctx.gpr[31] = (0x08946E10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 7u, 0x08A9802Cu>(ctx, &aot_mem) && ctx.pc == 0x08946E10u) goto L_08946E10;
    return;
L_08946E10:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946ED4;
      }
      goto L_08946E2C;
    }
L_08946E2C:
    ctx.gpr[31] = (0x08946E34u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 799u, 0x08A97230u>(ctx, &aot_mem) && ctx.pc == 0x08946E34u) goto L_08946E34;
    return;
L_08946E34:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946ED4;
      }
      goto L_08946E4C;
    }
L_08946E4C:
    ctx.gpr[31] = (0x08946E54u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1077u, 0x08A97EB4u>(ctx, &aot_mem) && ctx.pc == 0x08946E54u) goto L_08946E54;
    return;
L_08946E54:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08946ED4;
      }
      goto L_08946E6C;
    }
L_08946E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    goto L_08946E70;
L_08946E70:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(543)));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(543), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946EA8;
      }
      goto L_08946E90;
    }
L_08946E90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08946EA0u);
    ctx.gpr[6] = (0u | 80u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08946EA0u) goto L_08946EA0;
    return;
L_08946EA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08946EBC;
      }
      goto L_08946EA8;
    }
L_08946EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08946EB8u);
    ctx.gpr[6] = (0u | 79u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x08946EB8u) goto L_08946EB8;
    return;
L_08946EB8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08946EBC;
L_08946EBC:
    ctx.gpr[5] = (2184u << 16u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08946ECCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(25448));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x08946ECCu) goto L_08946ECC;
    return;
L_08946ECC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947AC8;
      }
      goto L_08946ED4;
    }
L_08946ED4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946F04;
      }
      goto L_08946EDC;
    }
L_08946EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(224));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[5] = (0u | 15u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x08946F04u);
    ctx.gpr[6] = (0u | 79u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08946F04u) goto L_08946F04;
    return;
L_08946F04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947AC8;
      }
      goto L_08946F0C;
    }
L_08946F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946F20;
      }
      goto L_08946F18;
    }
L_08946F18:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[4]);
    goto L_08946F20;
L_08946F20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946F3C;
      }
      goto L_08946F30;
    }
L_08946F30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08946F3Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    goto L_08944E2C;
L_08946F3C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946FD4;
      }
      goto L_08946F44;
    }
L_08946F44:
    ctx.gpr[31] = (0x08946F4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1108u, 0x08A97FCCu>(ctx, &aot_mem) && ctx.pc == 0x08946F4Cu) goto L_08946F4C;
    return;
L_08946F4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08946FD4;
      }
      goto L_08946F54;
    }
L_08946F54:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08946F7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 335u, 0x088EE37Cu>(ctx, &aot_mem) && ctx.pc == 0x08946F7Cu) goto L_08946F7C;
    return;
L_08946F7C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08946FD4;
      }
      goto L_08946F84;
    }
L_08946F84:
    ctx.gpr[4] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 28u);
      if (branch_taken) {
          goto L_08946F98;
      }
      goto L_08946F90;
    }
L_08946F90:
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08946FB4;
      }
      goto L_08946F98;
    }
L_08946F98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 59u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08946FACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08946FACu) goto L_08946FAC;
    return;
L_08946FAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08946FD4;
      }
      goto L_08946FB4;
    }
L_08946FB4:
    ctx.gpr[4] = (0u | 30u);
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08946FD4;
      }
      goto L_08946FC0;
    }
L_08946FC0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 60u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08946FD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08946FD4u) goto L_08946FD4;
    return;
L_08946FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 63 ? 1u : 0u);
      if (branch_taken) {
          goto L_089475DC;
      }
      goto L_08946FE0;
    }
L_08946FE0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089475DC;
      }
      goto L_08946FE8;
    }
L_08946FE8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(31352)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947000:
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.gpr[5] = (0u | 57u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[21] = (8u << 16u);
      if (branch_taken) {
          goto L_0894703C;
      }
      goto L_08947028;
    }
L_08947028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894703C;
      }
      goto L_08947034;
    }
L_08947034:
    ctx.gpr[31] = (0x0894703Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0033_entry, 33u, 814u, 0x0888B740u>(ctx, &aot_mem) && ctx.pc == 0x0894703Cu) goto L_0894703C;
    return;
L_0894703C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089475F8;
      }
      goto L_08947044;
    }
L_08947044:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.gpr[6] = (0u | 28u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[21] = (8u << 16u);
      if (branch_taken) {
          goto L_089470AC;
      }
      goto L_08947084;
    }
L_08947084:
    ctx.gpr[5] = (0u | 29u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089470AC;
      }
      goto L_08947090;
    }
L_08947090:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089470C0;
      }
      goto L_08947098;
    }
L_08947098:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089470A4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 742u, 0x08943624u>(ctx, &aot_mem) && ctx.pc == 0x089470A4u) goto L_089470A4;
    return;
L_089470A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089470C0;
      }
      goto L_089470AC;
    }
L_089470AC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089470C0;
      }
      goto L_089470B4;
    }
L_089470B4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089470C0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 195u, 0x08948D00u>(ctx, &aot_mem) && ctx.pc == 0x089470C0u) goto L_089470C0;
    return;
L_089470C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089475F8;
      }
      goto L_089470C8;
    }
L_089470C8:
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
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[20] = (0u | 12u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (8u << 16u);
      if (branch_taken) {
          goto L_08947118;
      }
      goto L_089470FC;
    }
L_089470FC:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[17] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[21] = (8u << 16u);
    goto L_08947118;
L_08947118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
      if (branch_taken) {
          goto L_08947144;
      }
      goto L_08947128;
    }
L_08947128:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947178;
      }
      goto L_08947134;
    }
L_08947134:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08947180;
      }
      goto L_08947144;
    }
L_08947144:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
      if (branch_taken) {
          goto L_08947164;
      }
      goto L_0894714C;
    }
L_0894714C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947178;
      }
      goto L_08947154;
    }
L_08947154:
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08947180;
      }
      goto L_08947164;
    }
L_08947164:
    ctx.gpr[4] = (16358u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08947180;
      }
      goto L_08947178;
    }
L_08947178:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08947180;
L_08947180:
    ctx.gpr[31] = (0x08947188u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08947B0C;
L_08947188:
    ctx.gpr[31] = (0x08947190u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0105_entry, 105u, 508u, 0x089AA458u>(ctx, &aot_mem) && ctx.pc == 0x08947190u) goto L_08947190;
    return;
L_08947190:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089471AC;
      }
      goto L_08947198;
    }
L_08947198:
    ctx.gpr[31] = (0x089471A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x089471A0u) goto L_089471A0;
    return;
L_089471A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089471ACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x089471ACu) goto L_089471AC;
    return;
L_089471AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089475F8;
      }
      goto L_089471B4;
    }
L_089471B4:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1312)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[4] = (ctx.gpr[4] & 32768u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (8u << 16u);
      if (branch_taken) {
          goto L_08947210;
      }
      goto L_08947200;
    }
L_08947200:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_0894721C;
    }
    goto L_08947210;
L_08947210:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08947250;
      }
      goto L_0894721C;
    }
L_0894721C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[14] = std::sqrt(ctx.fpr[12]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
      if (branch_taken) {
          goto L_08947250;
      }
      goto L_0894724C;
    }
L_0894724C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08947250;
L_08947250:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894738C;
      }
      goto L_08947258;
    }
L_08947258:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894738C;
      }
      goto L_08947264;
    }
L_08947264:
    ctx.gpr[31] = (0x0894726Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 59u, 0x08A98240u>(ctx, &aot_mem) && ctx.pc == 0x0894726Cu) goto L_0894726C;
    return;
L_0894726C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0894735C;
      }
      goto L_08947274;
    }
L_08947274:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25652)));
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(18))))));
        goto L_089472A8;
    }
    goto L_08947280;
L_08947280:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(2))))));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0894729C;
      }
      goto L_0894728C;
    }
L_0894728C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089472A0;
      }
      goto L_08947298;
    }
L_08947298:
    ctx.gpr[5] = (0u | 1u);
    goto L_0894729C;
L_0894729C:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_089472A0;
L_089472A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089472E0;
      }
      goto L_089472A8;
    }
L_089472A8:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_089472BC;
      }
      goto L_089472B0;
    }
L_089472B0:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(68))))));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (0u | 1u);
        goto L_089472D8;
    }
    goto L_089472BC;
L_089472BC:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20))))));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
        goto L_089472DC;
    }
    goto L_089472C8;
L_089472C8:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(70))))));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_089472DC;
      }
      goto L_089472D4;
    }
L_089472D4:
    ctx.gpr[5] = (0u | 1u);
    goto L_089472D8;
L_089472D8:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_089472DC;
L_089472DC:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_089472E0;
L_089472E0:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0894735C;
      }
      goto L_089472E8;
    }
L_089472E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25652)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(22))))));
        goto L_0894731C;
    }
    goto L_089472F4;
L_089472F4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(4))))));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08947310;
      }
      goto L_08947300;
    }
L_08947300:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(54))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08947314;
      }
      goto L_0894730C;
    }
L_0894730C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08947310;
L_08947310:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08947314;
L_08947314:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08947354;
      }
      goto L_0894731C;
    }
L_0894731C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08947330;
      }
      goto L_08947324;
    }
L_08947324:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(72))))));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0894734C;
    }
    goto L_08947330;
L_08947330:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(24))))));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
        goto L_08947350;
    }
    goto L_0894733C;
L_0894733C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(74))))));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08947350;
      }
      goto L_08947348;
    }
L_08947348:
    ctx.gpr[4] = (0u | 1u);
    goto L_0894734C;
L_0894734C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08947350;
L_08947350:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08947354;
L_08947354:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894738C;
      }
      goto L_0894735C;
    }
L_0894735C:
    ctx.gpr[31] = (0x08947364u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 222u, 0x089AD70Cu>(ctx, &aot_mem) && ctx.pc == 0x08947364u) goto L_08947364;
    return;
L_08947364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947384;
      }
      goto L_08947374;
    }
L_08947374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 18u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894738C;
      }
      goto L_08947384;
    }
L_08947384:
    ctx.gpr[31] = (0x0894738Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 535u, 0x08886BB0u>(ctx, &aot_mem) && ctx.pc == 0x0894738Cu) goto L_0894738C;
    return;
L_0894738C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089473A8;
      }
      goto L_08947394;
    }
L_08947394:
    ctx.gpr[31] = (0x0894739Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 116u, 0x08A984C8u>(ctx, &aot_mem) && ctx.pc == 0x0894739Cu) goto L_0894739C;
    return;
L_0894739C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089473A8;
      }
      goto L_089473A4;
    }
L_089473A4:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), ctx.gpr[17]);
    goto L_089473A8;
L_089473A8:
    ctx.gpr[31] = (0x089473B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08947B0C;
L_089473B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089475F8;
      }
      goto L_089473B8;
    }
L_089473B8:
    ctx.gpr[31] = (0x089473C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08944DA0;
L_089473C0:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[17] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (8u << 16u);
      if (branch_taken) {
          goto L_089475F8;
      }
      goto L_089473E0;
    }
L_089473E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x089473ECu);
    ctx.gpr[5] = (0u | 2048u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 336u, 0x08865854u>(ctx, &aot_mem) && ctx.pc == 0x089473ECu) goto L_089473EC;
    return;
L_089473EC:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[17] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[21] = (8u << 16u);
      if (branch_taken) {
          goto L_089474B8;
      }
      goto L_0894740C;
    }
L_0894740C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089474B8;
      }
      goto L_08947418;
    }
L_08947418:
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x08947428u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 335u, 0x088EE37Cu>(ctx, &aot_mem) && ctx.pc == 0x08947428u) goto L_08947428;
    return;
L_08947428:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894744C;
      }
      goto L_08947430;
    }
L_08947430:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089474B8;
      }
      goto L_08947438;
    }
L_08947438:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08947444u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 195u, 0x08948D00u>(ctx, &aot_mem) && ctx.pc == 0x08947444u) goto L_08947444;
    return;
L_08947444:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089474B8;
      }
      goto L_0894744C;
    }
L_0894744C:
    ctx.gpr[31] = (0x08947454u);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(400));
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 483u, 0x088EAB10u>(ctx, &aot_mem) && ctx.pc == 0x08947454u) goto L_08947454;
    return;
L_08947454:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947478;
      }
      goto L_0894745C;
    }
L_0894745C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089474B8;
      }
      goto L_08947464;
    }
L_08947464:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08947470u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 779u, 0x089439E4u>(ctx, &aot_mem) && ctx.pc == 0x08947470u) goto L_08947470;
    return;
L_08947470:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089474B8;
      }
      goto L_08947478;
    }
L_08947478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089474A4;
      }
      goto L_08947488;
    }
L_08947488:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089474B8;
      }
      goto L_08947490;
    }
L_08947490:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894749Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 721u, 0x08943478u>(ctx, &aot_mem) && ctx.pc == 0x0894749Cu) goto L_0894749C;
    return;
L_0894749C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089474B8;
      }
      goto L_089474A4;
    }
L_089474A4:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089474B8;
      }
      goto L_089474AC;
    }
L_089474AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089474B8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 137u, 0x08948870u>(ctx, &aot_mem) && ctx.pc == 0x089474B8u) goto L_089474B8;
    return;
L_089474B8:
    ctx.gpr[31] = (0x089474C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x089474C0u) goto L_089474C0;
    return;
L_089474C0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089474EC;
      }
      goto L_089474C8;
    }
L_089474C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089474EC;
      }
      goto L_089474D8;
    }
L_089474D8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_089474EC;
      }
      goto L_089474E0;
    }
L_089474E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089474ECu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 305u, 0x089498DCu>(ctx, &aot_mem) && ctx.pc == 0x089474ECu) goto L_089474EC;
    return;
L_089474EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3229)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894752C;
      }
      goto L_089474F8;
    }
L_089474F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947518;
      }
      goto L_08947508;
    }
L_08947508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0894752C;
      }
      goto L_08947518;
    }
L_08947518:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0894752C;
      }
      goto L_08947520;
    }
L_08947520:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894752Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 247u, 0x08949114u>(ctx, &aot_mem) && ctx.pc == 0x0894752Cu) goto L_0894752C;
    return;
L_0894752C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089475F8;
      }
      goto L_08947534;
    }
L_08947534:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947548;
      }
      goto L_0894753C;
    }
L_0894753C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08947548u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 137u, 0x08948870u>(ctx, &aot_mem) && ctx.pc == 0x08947548u) goto L_08947548;
    return;
L_08947548:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 2048u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089475A4;
      }
      goto L_08947558;
    }
L_08947558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08947564u);
    ctx.gpr[5] = (0u | 136u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08947564u) goto L_08947564;
    return;
L_08947564:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089475A4;
      }
      goto L_08947570;
    }
L_08947570:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089475A4;
      }
      goto L_0894758C;
    }
L_0894758C:
    ctx.gpr[7] = (16256u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x089475A4u);
    ctx.gpr[6] = (0u | 140u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x089475A4u) goto L_089475A4;
    return;
L_089475A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089475D4;
      }
      goto L_089475B4;
    }
L_089475B4:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[17] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (8u << 16u);
      if (branch_taken) {
          goto L_089475F8;
      }
      goto L_089475D4;
    }
L_089475D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947AC8;
      }
      goto L_089475DC;
    }
L_089475DC:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[17] = (0u | 5u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (0u | 12u);
    ctx.gpr[19] = (2228u << 16u);
    ctx.gpr[21] = (8u << 16u);
    goto L_089475F8;
L_089475F8:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947650;
      }
      goto L_08947600;
    }
L_08947600:
    ctx.gpr[31] = (0x08947608u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 347u, 0x0899E1F4u>(ctx, &aot_mem) && ctx.pc == 0x08947608u) goto L_08947608;
    return;
L_08947608:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947650;
      }
      goto L_08947610;
    }
L_08947610:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 36u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947650;
      }
      goto L_08947620;
    }
L_08947620:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0894762Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 646u, 0x0894B0C0u>(ctx, &aot_mem) && ctx.pc == 0x0894762Cu) goto L_0894762C;
    return;
L_0894762C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08947650u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0020_entry, 20u, 327u, 0x08855A5Cu>(ctx, &aot_mem) && ctx.pc == 0x08947650u) goto L_08947650;
    return;
L_08947650:
    ctx.gpr[31] = (0x08947658u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 744u, 0x0894B63Cu>(ctx, &aot_mem) && ctx.pc == 0x08947658u) goto L_08947658;
    return;
L_08947658:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08947950;
      }
      goto L_08947660;
    }
L_08947660:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(428))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08947950;
      }
      goto L_08947690;
    }
L_08947690:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947950;
      }
      goto L_089476BC;
    }
L_089476BC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1780), 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(816)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(820)));
      if (branch_taken) {
          goto L_0894770C;
      }
      goto L_089476FC;
    }
L_089476FC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08947720;
      }
      goto L_0894770C;
    }
L_0894770C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08947718u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08947718u) goto L_08947718;
    return;
L_08947718:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08947720;
      }
      goto L_08947720;
    }
L_08947720:
    ctx.gpr[31] = (0x08947728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08947728u) goto L_08947728;
    return;
L_08947728:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947778;
      }
      goto L_08947748;
    }
L_08947748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947778;
      }
      goto L_08947758;
    }
L_08947758:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 58u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947778;
      }
      goto L_08947768;
    }
L_08947768:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 60u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947788;
      }
      goto L_08947778;
    }
L_08947778:
    ctx.gpr[31] = (0x08947780u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x08947780u) goto L_08947780;
    return;
L_08947780:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947950;
      }
      goto L_08947788;
    }
L_08947788:
    ctx.gpr[4] = (16134u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16568u << 16u);
      if (branch_taken) {
          goto L_08947948;
      }
      goto L_089477A4;
    }
L_089477A4:
    ctx.gpr[4] = (ctx.gpr[4] | 20105u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16423u << 16u);
      if (branch_taken) {
          goto L_08947948;
      }
      goto L_089477BC;
    }
L_089477BC:
    ctx.gpr[4] = (ctx.gpr[4] | 36151u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (16968u << 16u);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[26]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08947878;
      }
      goto L_089477E8;
    }
L_089477E8:
    ctx.gpr[4] = (16490u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 37504u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08947878;
      }
      goto L_08947804;
    }
L_08947804:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[30] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08947814u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[30];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08947814u) goto L_08947814;
    return;
L_08947814:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08947824u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[30];
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08947824u) goto L_08947824;
    return;
L_08947824:
    ctx.gpr[4] = (18804u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1764)));
    ctx.gpr[4] = (ctx.gpr[4] | 9200u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_0894784C;
      }
      goto L_08947844;
    }
L_08947844:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08947878;
      }
      goto L_0894784C;
    }
L_0894784C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1764)));
    ctx.fpr[14] = ctx.fpr[26] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) & 0x7FFFFFFFu);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08947878;
      }
      goto L_08947870;
    }
L_08947870:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08947878;
      }
      goto L_08947878;
    }
L_08947878:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08947888u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 71u, 0x089A04F8u>(ctx, &aot_mem) && ctx.pc == 0x08947888u) goto L_08947888;
    return;
L_08947888:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7864)));
        goto L_089478C4;
    }
    goto L_089478A4;
L_089478A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[18]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
      if (branch_taken) {
          goto L_089478E8;
      }
      goto L_089478C4;
    }
L_089478C4:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[18] = (32768u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[24];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    goto L_089478E8;
L_089478E8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[18]) >= 0;
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_08947900;
      }
      goto L_089478F0;
    }
L_089478F0:
    ctx.gpr[4] = (20352u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[12];
    ctx.gpr[4] = (16544u << 16u);
    goto L_08947900;
L_08947900:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[24];
        goto L_08947924;
    }
    goto L_08947918;
L_08947918:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08947934;
      }
      goto L_08947924;
    }
L_08947924:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08947934;
L_08947934:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08947940u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x08947940u) goto L_08947940;
    return;
L_08947940:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08947950;
      }
      goto L_08947948;
    }
L_08947948:
    ctx.gpr[31] = (0x08947950u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x08947950u) goto L_08947950;
    return;
L_08947950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    if (ctx.gpr[4] != ctx.gpr[17]) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_08947984;
    }
    goto L_0894795C;
L_0894795C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
        goto L_08947984;
    }
    goto L_0894796C;
L_0894796C:
    ctx.gpr[31] = (0x08947974u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 84u, 0x089A0660u>(ctx, &aot_mem) && ctx.pc == 0x08947974u) goto L_08947974;
    return;
L_08947974:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08947980u);
    ctx.gpr[5] = (0u | 250u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x08947980u) goto L_08947980;
    return;
L_08947980:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    goto L_08947984;
L_08947984:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[17];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[28]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08947A24;
      }
      goto L_089479E8;
    }
L_089479E8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2952)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08947A04;
      }
      goto L_089479F4;
    }
L_089479F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2952), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08947A2C;
      }
      goto L_08947A04;
    }
L_08947A04:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2952)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947A2C;
      }
      goto L_08947A18;
    }
L_08947A18:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2949), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08947A2C;
      }
      goto L_08947A24;
    }
L_08947A24:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2952), 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2949), static_cast<std::uint8_t>(0u));
    goto L_08947A2C;
L_08947A2C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(-29896)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947A64;
      }
      goto L_08947A38;
    }
L_08947A38:
    ctx.gpr[31] = (0x08947A40u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08947A40u) goto L_08947A40;
    return;
L_08947A40:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08947A64;
      }
      goto L_08947A48;
    }
L_08947A48:
    ctx.gpr[31] = (0x08947A50u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08947A50u) goto L_08947A50;
    return;
L_08947A50:
    ctx.gpr[31] = (0x08947A58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 59u, 0x08A98240u>(ctx, &aot_mem) && ctx.pc == 0x08947A58u) goto L_08947A58;
    return;
L_08947A58:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947A64;
      }
      goto L_08947A60;
    }
L_08947A60:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(-29896), static_cast<std::uint8_t>(0u));
    goto L_08947A64;
L_08947A64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08947AB0;
      }
      goto L_08947A70;
    }
L_08947A70:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1432)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947AA4;
      }
      goto L_08947A94;
    }
L_08947A94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08947AB0;
      }
      goto L_08947AA4;
    }
L_08947AA4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(3212), ctx.gpr[4]);
    goto L_08947AB0;
L_08947AB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947AC8;
      }
      goto L_08947AC0;
    }
L_08947AC0:
    ctx.gpr[31] = (0x08947AC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 762u, 0x08A2F7D8u>(ctx, &aot_mem) && ctx.pc == 0x08947AC8u) goto L_08947AC8;
    return;
L_08947AC8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08947B0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(420)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 240u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08947B88;
      }
      goto L_08947B58;
    }
L_08947B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-241));
    ctx.gpr[6] = (ctx.gpr[4] & 240u);
    ctx.gpr[6] = (ctx.gpr[6] >> 4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & 15u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2932), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08947B88;
L_08947B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08947B94u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08947B94u) goto L_08947B94;
    return;
L_08947B94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08947BA4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08947BA4u) goto L_08947BA4;
    return;
L_08947BA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08947BB4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08947BB4u) goto L_08947BB4;
    return;
L_08947BB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08947BC4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08947BC4u) goto L_08947BC4;
    return;
L_08947BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08947BD4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08947BD4u) goto L_08947BD4;
    return;
L_08947BD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08947BE4u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08947BE4u) goto L_08947BE4;
    return;
L_08947BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08947BF4u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08947BF4u) goto L_08947BF4;
    return;
L_08947BF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08947C58;
      }
      goto L_08947C08;
    }
L_08947C08:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947C1C;
      }
      goto L_08947C10;
    }
L_08947C10:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08947C1Cu);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x08947C1Cu) goto L_08947C1C;
    return;
L_08947C1C:
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947C30;
      }
      goto L_08947C24;
    }
L_08947C24:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08947C30u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x08947C30u) goto L_08947C30;
    return;
L_08947C30:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947C44;
      }
      goto L_08947C38;
    }
L_08947C38:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08947C44u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x08947C44u) goto L_08947C44;
    return;
L_08947C44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_08947C58;
L_08947C58:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947C70;
      }
      goto L_08947C60;
    }
L_08947C60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08947C6Cu);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08947C6Cu) goto L_08947C6C;
    return;
L_08947C6C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08947C70;
L_08947C70:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947CA0;
      }
      goto L_08947C78;
    }
L_08947C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08947C84u);
    ctx.gpr[5] = (0u | 41u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08947C84u) goto L_08947C84;
    return;
L_08947C84:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947CA0;
      }
      goto L_08947C90;
    }
L_08947C90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08947C9Cu);
    ctx.gpr[5] = (0u | 204u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x08947C9Cu) goto L_08947C9C;
    return;
L_08947C9C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08947CA0;
L_08947CA0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947CB8;
      }
      goto L_08947CA8;
    }
L_08947CA8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 95u, 0x08948630u>(ctx, &aot_mem); return;
      }
      goto L_08947CB8;
    }
L_08947CB8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947CD0;
      }
      goto L_08947CC0;
    }
L_08947CC0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 95u, 0x08948630u>(ctx, &aot_mem); return;
      }
      goto L_08947CD0;
    }
L_08947CD0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_08947CEC;
      }
      goto L_08947CD8;
    }
L_08947CD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08947D08;
      }
      goto L_08947CEC;
    }
L_08947CEC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947E90;
      }
      goto L_08947CF4;
    }
L_08947CF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08947E90;
      }
      goto L_08947D08;
    }
L_08947D08:
    ctx.gpr[4] = (16640u << 16u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08947D3C;
      }
      goto L_08947D14;
    }
L_08947D14:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08947D68;
      }
      goto L_08947D3C;
    }
L_08947D3C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08947D68;
      }
      goto L_08947D44;
    }
L_08947D44:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08947D68;
L_08947D68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
    ctx.gpr[31] = (0x08947D74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 879u, 0x089A3B74u>(ctx, &aot_mem) && ctx.pc == 0x08947D74u) goto L_08947D74;
    return;
L_08947D74:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947E80;
      }
      goto L_08947D7C;
    }
L_08947D7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2936)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29860)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29864)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29852)));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29856)));
      if (branch_taken) {
          goto L_08947E14;
      }
      goto L_08947DA0;
    }
L_08947DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947E14;
      }
      goto L_08947DB0;
    }
L_08947DB0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08947DF0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x08947DF0u) goto L_08947DF0;
    return;
L_08947DF0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947E14;
      }
      goto L_08947DF8;
    }
L_08947DF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08947E0Cu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x08947E0Cu) goto L_08947E0C;
    return;
L_08947E0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08947E2C;
      }
      goto L_08947E14;
    }
L_08947E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x08947E28u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x08947E28u) goto L_08947E28;
    return;
L_08947E28:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08947E2C;
L_08947E2C:
    ctx.gpr[31] = (0x08947E34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08947E34u) goto L_08947E34;
    return;
L_08947E34:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08947E48u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08947E48u) goto L_08947E48;
    return;
L_08947E48:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_08947E80;
L_08947E80:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 95u, 0x08948630u>(ctx, &aot_mem); return;
      }
      goto L_08947E90;
    }
L_08947E90:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 14u, 0x089480F4u>(ctx, &aot_mem); return;
      }
      goto L_08947EA4;
    }
L_08947EA4:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 14u, 0x089480F4u>(ctx, &aot_mem); return;
      }
      goto L_08947EAC;
    }
L_08947EAC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[21]);
      if (branch_taken) {
          goto L_08947FC0;
      }
      goto L_08947EB4;
    }
L_08947EB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2936)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29860)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29864)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29852)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29856)));
    ctx.gpr[4] = (16512u << 16u);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08947F54;
      }
      goto L_08947EE0;
    }
L_08947EE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947F54;
      }
      goto L_08947EF0;
    }
L_08947EF0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[31] = (0x08947F30u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x08947F30u) goto L_08947F30;
    return;
L_08947F30:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08947F54;
      }
      goto L_08947F38;
    }
L_08947F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08947F4Cu);
    ctx.gpr[6] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x08947F4Cu) goto L_08947F4C;
    return;
L_08947F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08947F6C;
      }
      goto L_08947F54;
    }
L_08947F54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.gpr[31] = (0x08947F68u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x08947F68u) goto L_08947F68;
    return;
L_08947F68:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_08947F6C;
L_08947F6C:
    ctx.gpr[31] = (0x08947F74u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08947F74u) goto L_08947F74;
    return;
L_08947F74:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08947F88u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08947F88u) goto L_08947F88;
    return;
L_08947F88:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_08947FC0;
L_08947FC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2936)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
      if (branch_taken) {
          goto L_08947FE4;
      }
      goto L_08947FD4;
    }
L_08947FD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948014u>(ctx, &aot_mem); return;
      }
      goto L_08947FE4;
    }
L_08947FE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0081_entry, 81u, 3u, 0x08948014u>(ctx, &aot_mem); return;
      }
      goto L_08947FF4;
    }
L_08947FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(744)));
    ctx.pc = 0x08948000u; return;
}

void recomp_unit_0080(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0080_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_80(Runtime &runtime) {
    runtime.register_generated_unit(80u, 0x08944000u, 16384u, &recomp_unit_0080, &recomp_unit_0080_entry);
    runtime.register_function(0x08944000u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944008u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944010u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894401Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944024u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894402Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944058u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944074u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944094u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089440ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944114u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944128u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894414Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944164u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894416Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944174u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944198u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089441E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944208u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944210u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944234u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894423Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944244u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894424Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944254u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894425Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944264u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894426Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894427Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944284u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894428Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944294u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944298u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089442F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944310u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944320u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944324u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944354u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944360u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944378u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944398u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089443A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089443C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089443D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944408u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944420u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894442Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944438u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944440u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944448u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894444Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894445Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089444E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894452Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944558u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944560u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944580u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944598u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089445FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944618u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944628u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944634u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944644u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944660u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944668u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944670u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944690u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089446F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944704u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944718u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944720u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944754u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089447D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089447F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944800u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944810u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944818u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944820u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944824u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944848u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944860u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894486Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944874u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894488Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089448FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894490Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944920u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944924u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944934u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944950u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944958u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944960u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944980u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894499Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089449F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A88u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944A9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944AF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944B90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944BF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C64u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944C8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944CF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D64u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944D8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944DF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E64u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944E98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944EE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944F98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08944FF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894501Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945050u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945064u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894506Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945074u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945078u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945088u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089450E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945100u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945118u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945134u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894513Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945144u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894515Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089451FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945204u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894521Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945228u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945234u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894524Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945258u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945260u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945268u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945274u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894527Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945284u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894528Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945298u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089452F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945300u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945308u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945310u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945320u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945358u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945390u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089453D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894540Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945414u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945418u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894542Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945444u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894544Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945458u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945460u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945480u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945490u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945498u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089454F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945508u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945510u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945518u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945520u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945528u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945530u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945538u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945540u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945558u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945560u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945564u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945574u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945580u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945590u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089455F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894561Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945624u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894562Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945644u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945658u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894567Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945684u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894568Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894569Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089456F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945700u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945710u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945718u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945750u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945768u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945788u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945790u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089457F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945800u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945804u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945810u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894581Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945824u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945858u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945870u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089458FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945908u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945910u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945918u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945954u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945960u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945968u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945970u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089459FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945A9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945AA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945AB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945AC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945AD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945AE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945AF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945B98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945BF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C8Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945C94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945CF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945D74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945DF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945E48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945F74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08945FFCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946004u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946060u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089460F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894610Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946134u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946140u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946148u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946158u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946164u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894616Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946174u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946198u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089461C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089461FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894620Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946214u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946234u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946244u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946250u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894625Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946268u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894626Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946274u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946278u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089462FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894631Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946324u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946338u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894634Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089463A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089463D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894645Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946464u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894648Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946494u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894649Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089464F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946528u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946548u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946558u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946564u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894657Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946588u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946594u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089465DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894662Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946638u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946640u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946660u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466CCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089466FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946704u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946710u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946730u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946744u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946758u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946774u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467D0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467E4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089467F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946804u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946814u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946828u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946830u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894683Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946848u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946874u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894687Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946884u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089468F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946918u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946940u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894694Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946958u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946978u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946988u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089469F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A5Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A64u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946A9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946AECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B88u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946B90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946BD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946C94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946CECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D88u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946D94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DCCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946DF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E00u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946E90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EBCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946ECCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946ED4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946EDCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F20u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946F98u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08946FE8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947000u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947028u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947034u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894703Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947044u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947084u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947090u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947098u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089470A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089470ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089470B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089470C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089470C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089470FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947118u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947128u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947134u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947144u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894714Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947154u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947164u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947178u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947180u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947188u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947190u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947198u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089471B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947200u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947210u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894721Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894724Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947250u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947258u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947264u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894726Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947274u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947280u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894728Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947298u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894729Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472A0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089472F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947300u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894730Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947310u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947314u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894731Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947324u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947330u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894733Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947348u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894734Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947350u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947354u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894735Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947364u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947374u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947384u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894738Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947394u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894739Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473A8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473B0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089473ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894740Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947418u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947428u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947430u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947438u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947444u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894744Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947454u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894745Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947464u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947470u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947478u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947488u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947490u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894749Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474ACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474B8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474C0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474C8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474D8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474E0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474ECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089474F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947508u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947518u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947520u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894752Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947534u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894753Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947548u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947558u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947564u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947570u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894758Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475B4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475D4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475DCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089475F8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947600u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947608u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947610u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947620u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894762Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947650u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947658u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947660u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947690u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089476FCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894770Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947718u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947720u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947728u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947748u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947758u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947768u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947778u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947780u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947788u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477BCu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089477E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947804u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947814u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947824u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947844u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894784Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947870u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947878u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947888u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478A4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478C4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089478F0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947900u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947918u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947924u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947934u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947940u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947948u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947950u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894795Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x0894796Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947974u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947980u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947984u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479E8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x089479F4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A04u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A18u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A40u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A50u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A64u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947A94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947AC8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B88u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947B94u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BC4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947BF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C10u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C1Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C24u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C58u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C60u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C70u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C78u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C84u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947C9Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CA8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CB8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CD0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CD8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CECu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947CF4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D08u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D3Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D44u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947D7Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DA0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DB0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947DF8u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E0Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E14u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E28u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E2Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E34u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E48u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E80u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947E90u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EA4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EACu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EB4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EE0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947EF0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F30u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F38u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F4Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F54u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F68u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F6Cu, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F74u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947F88u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FC0u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FD4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FE4u, &recomp_unit_0080, "recomp_unit_0080");
    runtime.register_function(0x08947FF4u, &recomp_unit_0080, "recomp_unit_0080");
}
} // namespace psprecomp
