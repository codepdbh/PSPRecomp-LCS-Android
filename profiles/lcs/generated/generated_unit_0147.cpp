#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0147[4015] = {
    1, 2, 3, 0, 4, 0, 5, 0, 0, 6, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10,
    0, 11, 0, 0, 0, 0, 0, 0, 12, 0, 13, 0, 14, 0, 15, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 19, 0,
    0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 22, 0, 0, 0, 0, 23, 0, 24, 0, 0, 0, 0, 25, 0, 0, 0, 0, 26, 27,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 0, 30, 0, 0, 0, 31, 0, 0, 32, 0, 33, 0, 0, 0, 34,
    0, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0,
    0, 42, 0, 43, 0, 0, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 0, 0, 0, 0, 47, 0, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0,
    49, 0, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53,
    0, 0, 0, 54, 0, 0, 55, 0, 0, 0, 56, 0, 0, 57, 0, 58, 0, 59, 0, 60, 0, 61, 0, 62, 0, 0, 63, 0, 0, 64, 0, 0,
    0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 69, 0, 70, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 74, 0,
    0, 0, 0, 0, 0, 0, 75, 0, 0, 76, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 78, 0, 79, 0, 80, 0, 81, 0, 82, 0, 0, 83,
    0, 0, 0, 0, 0, 84, 0, 85, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 89, 0, 0, 0, 90, 0, 0, 91, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 95, 0, 0, 96, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0, 102, 0,
    0, 0, 103, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 0, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 108, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 109, 0, 0, 0, 110, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 118, 0, 0, 119, 0, 0, 120, 0, 0, 0, 121, 0, 0, 122, 0, 0, 123, 0, 0, 124, 0, 0,
    0, 125, 0, 126, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 0, 0, 0, 0, 0, 129, 0, 130, 0, 131, 0, 132, 0, 133, 0, 0, 0, 134,
    0, 0, 0, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0, 138, 0, 0, 139, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 142, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0,
    0, 149, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 0, 153, 0, 0, 0, 154, 0, 0, 0, 155, 0, 0, 156, 0, 157, 0, 158,
    0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0,
    0, 164, 0, 0, 0, 165, 0, 0, 166, 0, 0, 167, 0, 0, 0, 168, 0, 0, 169, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172,
    0, 0, 0, 173, 0, 0, 0, 174, 0, 0, 175, 0, 176, 0, 0, 0, 0, 0, 177, 0, 178, 0, 179, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 180, 0, 0, 181, 0, 0, 0, 0, 0, 182, 0, 0, 0, 183, 0, 0, 0, 184, 0, 0, 185, 0, 186, 0, 0, 0,
    187, 0, 0, 0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 191, 0, 0, 0, 192, 0, 0, 193, 0, 0, 0, 0, 0, 194, 0,
    195, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 198, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0,
    0, 200, 0, 0, 0, 201, 0, 0, 202, 0, 203, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 208,
    0, 0, 0, 209, 0, 0, 210, 0, 0, 0, 0, 0, 211, 0, 212, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 0, 215,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 218, 0, 0, 219, 0, 0, 220, 0, 0, 0, 221, 0, 0, 222,
    0, 0, 0, 0, 0, 223, 0, 0, 0, 224, 0, 0, 225, 0, 0, 0, 226, 0, 0, 0, 227, 0, 0, 228, 0, 0, 0, 229, 0, 230, 0, 231,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 0, 0, 235, 0,
    0, 0, 236, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0,
    244, 0, 0, 245, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 247, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 251, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 252, 0, 0, 0, 0, 0, 0, 0, 0, 253, 0, 254, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 255, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 259, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 263, 0, 0, 0, 264, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 267, 0, 0,
    0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269, 0, 0, 0, 270, 0, 0, 271, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0,
    0, 0, 275, 0, 0, 0, 276, 0, 0, 277, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280, 0, 281, 0, 282, 0, 0, 0, 0, 0, 0, 283,
    0, 0, 284, 0, 0, 0, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 287, 0, 0, 288, 0, 0, 289, 0, 0, 0, 290,
    0, 0, 291, 0, 0, 0, 0, 0, 292, 0, 0, 0, 293, 0, 0, 294, 0, 0, 0, 295, 0, 0, 0, 296, 0, 0, 297, 0, 298, 0, 0, 0,
    0, 0, 299, 0, 0, 0, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 0, 0, 304, 0,
    0, 305, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 312, 0, 0, 313,
    0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 318,
    0, 0, 0, 319, 0, 0, 320, 0, 321, 0, 0, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 325, 0, 0, 0, 326, 0, 0,
    0, 327, 0, 0, 328, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0,
    0, 0, 0, 333, 0, 0, 0, 334, 0, 0, 335, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 339, 0, 0, 0, 340, 0,
    0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0, 0, 0,
    0, 0, 0, 348, 0, 0, 0, 0, 0, 349, 0, 0, 0, 350, 0, 0, 351, 0, 352, 0, 0, 0, 353, 0, 0, 0, 0, 0, 354, 0, 0, 0,
    355, 0, 0, 356, 0, 0, 0, 357, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0, 0, 360, 0, 0, 0, 361, 0, 0, 0, 362, 363, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 364, 0, 0, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 370, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 378, 0,
    0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0, 0, 0, 0, 0, 0, 383, 0, 0,
    384, 0, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 387, 0, 388, 0, 0, 0, 0, 389, 0, 390, 0, 391, 0, 0, 0, 0, 0, 0, 0,
    392, 0, 393, 0, 0, 0, 0, 0, 394, 0, 0, 395, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0,
    400, 0, 0, 401, 0, 0, 0, 402, 0, 0, 403, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406, 0, 407, 0, 408, 0,
    0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 413, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 414, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 416, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 417, 0, 0, 0, 0,
    0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 0,
    0, 422, 0, 423, 424, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 429,
    0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 433, 434, 0, 0, 0, 0, 0, 435, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 437,
    0, 438, 0, 0, 439, 0, 0, 0, 0, 440, 0, 0, 0, 441, 0, 442, 443, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 0, 0, 0,
    446, 0, 447, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 450, 0, 451, 452, 0, 0, 0, 0, 0, 453, 0, 0, 0, 454, 0, 455, 0, 0,
    0, 0, 0, 0, 0, 456, 0, 0, 0, 0, 457, 0, 458, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 462, 463, 0, 0, 0, 0,
    0, 464, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 468, 0, 469, 0, 0, 470, 0, 0, 0, 0, 0, 0,
    471, 0, 0, 0, 472, 0, 473, 474, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 0, 479, 0,
    0, 480, 0, 0, 0, 481, 0, 0, 482, 0, 0, 0, 0, 0, 0, 483, 0, 0, 0, 484, 0, 485, 486, 0, 0, 0, 0, 0, 487, 0, 0, 0,
    0, 0, 488, 0, 0, 0, 0, 489, 0, 490, 0, 0, 0, 0, 491, 0, 0, 492, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 495, 0,
    496, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 499, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 504,
    0, 505, 506, 0, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 510, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0,
    0, 513, 0, 514, 515, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 519, 0, 0, 520, 0, 0, 0, 0, 521,
    0, 0, 0, 522, 0, 523, 524, 0, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0, 0, 527, 0, 528, 0, 0, 529, 0, 0, 0,
    530, 0, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0, 0, 0, 534, 0, 535, 536, 0, 0, 0, 0,
    0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 0, 539, 0, 540, 0, 0, 541, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 543, 0, 0, 0, 544, 0, 545, 546, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 549, 0, 550, 551, 0, 552,
    553, 0, 0, 0, 0, 0, 554, 0, 0, 0, 555, 0, 0, 556, 0, 557, 0, 558, 0, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0,
    561, 0, 0, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 566, 567, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 570, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 573, 0, 574, 575, 0, 0, 0, 0,
    0, 576, 0, 0, 0, 0, 577, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 580, 0, 0, 0, 581, 0, 0, 0,
    582, 0, 0, 583, 0, 0, 0, 0, 584, 0, 0, 0, 585, 0, 586, 587, 0, 0, 0, 0, 0, 588, 0, 0, 0, 0, 589, 0, 0, 0, 0, 590,
    0, 591, 0, 0, 0, 592, 0, 593, 0, 0, 594, 0, 595, 0, 0, 596, 0, 0, 597, 0, 598, 0, 599, 0, 600, 601, 0, 0, 0, 0, 0, 0,
    0, 0, 602, 0, 0, 603, 0, 0, 604, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 608, 0, 609, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 611,
    0, 612, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 615, 0, 616, 617, 0, 618, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 621, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 622, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    627, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 629, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 630, 0, 0, 631, 0, 0, 632, 0, 0, 0, 0, 633, 0, 634,
    0, 0, 0, 635, 0, 636, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 642, 0, 0, 0, 643, 0, 644, 0, 0,
    645, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0,
    0, 0, 648, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 649, 0, 0,
    650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 653, 0, 0, 654,
    0, 655, 0, 656, 0, 0, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 659, 0, 0, 660, 0, 661, 0, 662, 0, 663, 664, 0, 0, 665, 0,
    0, 0, 0, 0, 0, 666, 0, 0, 667, 0, 0, 668, 0, 0, 669, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 673, 0, 0, 674,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 677, 678, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0,
    0, 680, 0, 0, 0, 0, 681, 0, 682, 0, 0, 0, 0, 683, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 686, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 688, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689,
};
void recomp_unit_0147_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A50000u;
        entry_id = (entry_delta < 16060u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0147[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A50000;
    case 2u: goto L_08A50004;
    case 3u: goto L_08A50008;
    case 4u: goto L_08A50010;
    case 5u: goto L_08A50018;
    case 6u: goto L_08A50024;
    case 7u: goto L_08A50030;
    case 8u: goto L_08A50060;
    case 9u: goto L_08A50074;
    case 10u: goto L_08A5007C;
    case 11u: goto L_08A50084;
    case 12u: goto L_08A500A0;
    case 13u: goto L_08A500A8;
    case 14u: goto L_08A500B0;
    case 15u: goto L_08A500B8;
    case 16u: goto L_08A500C0;
    case 17u: goto L_08A500E8;
    case 18u: goto L_08A500F0;
    case 19u: goto L_08A500F8;
    case 20u: goto L_08A50118;
    case 21u: goto L_08A50120;
    case 22u: goto L_08A50134;
    case 23u: goto L_08A50148;
    case 24u: goto L_08A50150;
    case 25u: goto L_08A50164;
    case 26u: goto L_08A50178;
    case 27u: goto L_08A5017C;
    case 28u: goto L_08A501A8;
    case 29u: goto L_08A501B8;
    case 30u: goto L_08A501C8;
    case 31u: goto L_08A501D8;
    case 32u: goto L_08A501E4;
    case 33u: goto L_08A501EC;
    case 34u: goto L_08A501FC;
    case 35u: goto L_08A50208;
    case 36u: goto L_08A50210;
    case 37u: goto L_08A50220;
    case 38u: goto L_08A50230;
    case 39u: goto L_08A50240;
    case 40u: goto L_08A50250;
    case 41u: goto L_08A50274;
    case 42u: goto L_08A50284;
    case 43u: goto L_08A5028C;
    case 44u: goto L_08A5029C;
    case 45u: goto L_08A502A4;
    case 46u: goto L_08A502B4;
    case 47u: goto L_08A502D0;
    case 48u: goto L_08A502DC;
    case 49u: goto L_08A50300;
    case 50u: goto L_08A50310;
    case 51u: goto L_08A5031C;
    case 52u: goto L_08A50324;
    case 53u: goto L_08A5037C;
    case 54u: goto L_08A5038C;
    case 55u: goto L_08A50398;
    case 56u: goto L_08A503A8;
    case 57u: goto L_08A503B4;
    case 58u: goto L_08A503BC;
    case 59u: goto L_08A503C4;
    case 60u: goto L_08A503CC;
    case 61u: goto L_08A503D4;
    case 62u: goto L_08A503DC;
    case 63u: goto L_08A503E8;
    case 64u: goto L_08A503F4;
    case 65u: goto L_08A5040C;
    case 66u: goto L_08A50414;
    case 67u: goto L_08A5044C;
    case 68u: goto L_08A5045C;
    case 69u: goto L_08A50468;
    case 70u: goto L_08A50470;
    case 71u: goto L_08A504AC;
    case 72u: goto L_08A504B8;
    case 73u: goto L_08A504EC;
    case 74u: goto L_08A504F8;
    case 75u: goto L_08A50518;
    case 76u: goto L_08A50524;
    case 77u: goto L_08A50540;
    case 78u: goto L_08A50550;
    case 79u: goto L_08A50558;
    case 80u: goto L_08A50560;
    case 81u: goto L_08A50568;
    case 82u: goto L_08A50570;
    case 83u: goto L_08A5057C;
    case 84u: goto L_08A50594;
    case 85u: goto L_08A5059C;
    case 86u: goto L_08A505AC;
    case 87u: goto L_08A505B8;
    case 88u: goto L_08A505C8;
    case 89u: goto L_08A505D4;
    case 90u: goto L_08A505E4;
    case 91u: goto L_08A505F0;
    case 92u: goto L_08A50604;
    case 93u: goto L_08A5061C;
    case 94u: goto L_08A50628;
    case 95u: goto L_08A50690;
    case 96u: goto L_08A5069C;
    case 97u: goto L_08A506AC;
    case 98u: goto L_08A506BC;
    case 99u: goto L_08A506C8;
    case 100u: goto L_08A506D4;
    case 101u: goto L_08A506E8;
    case 102u: goto L_08A506F8;
    case 103u: goto L_08A50708;
    case 104u: goto L_08A5070C;
    case 105u: goto L_08A50734;
    case 106u: goto L_08A50744;
    case 107u: goto L_08A5075C;
    case 108u: goto L_08A5078C;
    case 109u: goto L_08A507B8;
    case 110u: goto L_08A507C8;
    case 111u: goto L_08A507D4;
    case 112u: goto L_08A50804;
    case 113u: goto L_08A50828;
    case 114u: goto L_08A5083C;
    case 115u: goto L_08A50854;
    case 116u: goto L_08A50860;
    case 117u: goto L_08A50898;
    case 118u: goto L_08A508A8;
    case 119u: goto L_08A508B4;
    case 120u: goto L_08A508C0;
    case 121u: goto L_08A508D0;
    case 122u: goto L_08A508DC;
    case 123u: goto L_08A508E8;
    case 124u: goto L_08A508F4;
    case 125u: goto L_08A50904;
    case 126u: goto L_08A5090C;
    case 127u: goto L_08A5092C;
    case 128u: goto L_08A50934;
    case 129u: goto L_08A5094C;
    case 130u: goto L_08A50954;
    case 131u: goto L_08A5095C;
    case 132u: goto L_08A50964;
    case 133u: goto L_08A5096C;
    case 134u: goto L_08A5097C;
    case 135u: goto L_08A5098C;
    case 136u: goto L_08A5099C;
    case 137u: goto L_08A509A4;
    case 138u: goto L_08A509B4;
    case 139u: goto L_08A509C0;
    case 140u: goto L_08A509C8;
    case 141u: goto L_08A509D0;
    case 142u: goto L_08A50A04;
    case 143u: goto L_08A50A10;
    case 144u: goto L_08A50A34;
    case 145u: goto L_08A50A4C;
    case 146u: goto L_08A50A5C;
    case 147u: goto L_08A50A68;
    case 148u: goto L_08A50A74;
    case 149u: goto L_08A50A84;
    case 150u: goto L_08A50A90;
    case 151u: goto L_08A50AA4;
    case 152u: goto L_08A50AB4;
    case 153u: goto L_08A50AC0;
    case 154u: goto L_08A50AD0;
    case 155u: goto L_08A50AE0;
    case 156u: goto L_08A50AEC;
    case 157u: goto L_08A50AF4;
    case 158u: goto L_08A50AFC;
    case 159u: goto L_08A50B04;
    case 160u: goto L_08A50B0C;
    case 161u: goto L_08A50B3C;
    case 162u: goto L_08A50B48;
    case 163u: goto L_08A50B70;
    case 164u: goto L_08A50B84;
    case 165u: goto L_08A50B94;
    case 166u: goto L_08A50BA0;
    case 167u: goto L_08A50BAC;
    case 168u: goto L_08A50BBC;
    case 169u: goto L_08A50BC8;
    case 170u: goto L_08A50BE0;
    case 171u: goto L_08A50BF0;
    case 172u: goto L_08A50BFC;
    case 173u: goto L_08A50C0C;
    case 174u: goto L_08A50C1C;
    case 175u: goto L_08A50C28;
    case 176u: goto L_08A50C30;
    case 177u: goto L_08A50C48;
    case 178u: goto L_08A50C50;
    case 179u: goto L_08A50C58;
    case 180u: goto L_08A50C98;
    case 181u: goto L_08A50CA4;
    case 182u: goto L_08A50CBC;
    case 183u: goto L_08A50CCC;
    case 184u: goto L_08A50CDC;
    case 185u: goto L_08A50CE8;
    case 186u: goto L_08A50CF0;
    case 187u: goto L_08A50D00;
    case 188u: goto L_08A50D18;
    case 189u: goto L_08A50D28;
    case 190u: goto L_08A50D34;
    case 191u: goto L_08A50D44;
    case 192u: goto L_08A50D54;
    case 193u: goto L_08A50D60;
    case 194u: goto L_08A50D78;
    case 195u: goto L_08A50D80;
    case 196u: goto L_08A50D88;
    case 197u: goto L_08A50DC8;
    case 198u: goto L_08A50DD4;
    case 199u: goto L_08A50DEC;
    case 200u: goto L_08A50E04;
    case 201u: goto L_08A50E14;
    case 202u: goto L_08A50E20;
    case 203u: goto L_08A50E28;
    case 204u: goto L_08A50E38;
    case 205u: goto L_08A50E50;
    case 206u: goto L_08A50E60;
    case 207u: goto L_08A50E6C;
    case 208u: goto L_08A50E7C;
    case 209u: goto L_08A50E8C;
    case 210u: goto L_08A50E98;
    case 211u: goto L_08A50EB0;
    case 212u: goto L_08A50EB8;
    case 213u: goto L_08A50EC0;
    case 214u: goto L_08A50EF0;
    case 215u: goto L_08A50EFC;
    case 216u: goto L_08A50F24;
    case 217u: goto L_08A50F38;
    case 218u: goto L_08A50F48;
    case 219u: goto L_08A50F54;
    case 220u: goto L_08A50F60;
    case 221u: goto L_08A50F70;
    case 222u: goto L_08A50F7C;
    case 223u: goto L_08A50F94;
    case 224u: goto L_08A50FA4;
    case 225u: goto L_08A50FB0;
    case 226u: goto L_08A50FC0;
    case 227u: goto L_08A50FD0;
    case 228u: goto L_08A50FDC;
    case 229u: goto L_08A50FEC;
    case 230u: goto L_08A50FF4;
    case 231u: goto L_08A50FFC;
    case 232u: goto L_08A51030;
    case 233u: goto L_08A5103C;
    case 234u: goto L_08A51060;
    case 235u: goto L_08A51078;
    case 236u: goto L_08A51088;
    case 237u: goto L_08A51094;
    case 238u: goto L_08A5109C;
    case 239u: goto L_08A510AC;
    case 240u: goto L_08A510C4;
    case 241u: goto L_08A510D4;
    case 242u: goto L_08A510E0;
    case 243u: goto L_08A510F0;
    case 244u: goto L_08A51100;
    case 245u: goto L_08A5110C;
    case 246u: goto L_08A51120;
    case 247u: goto L_08A51138;
    case 248u: goto L_08A51140;
    case 249u: goto L_08A51150;
    case 250u: goto L_08A51160;
    case 251u: goto L_08A51164;
    case 252u: goto L_08A511A0;
    case 253u: goto L_08A511C4;
    case 254u: goto L_08A511CC;
    case 255u: goto L_08A511F8;
    case 256u: goto L_08A5122C;
    case 257u: goto L_08A51244;
    case 258u: goto L_08A5125C;
    case 259u: goto L_08A512B0;
    case 260u: goto L_08A512C4;
    case 261u: goto L_08A512DC;
    case 262u: goto L_08A51328;
    case 263u: goto L_08A51330;
    case 264u: goto L_08A51340;
    case 265u: goto L_08A5134C;
    case 266u: goto L_08A51368;
    case 267u: goto L_08A51374;
    case 268u: goto L_08A51398;
    case 269u: goto L_08A513B0;
    case 270u: goto L_08A513C0;
    case 271u: goto L_08A513CC;
    case 272u: goto L_08A513D8;
    case 273u: goto L_08A513E8;
    case 274u: goto L_08A513F4;
    case 275u: goto L_08A51408;
    case 276u: goto L_08A51418;
    case 277u: goto L_08A51424;
    case 278u: goto L_08A51434;
    case 279u: goto L_08A51444;
    case 280u: goto L_08A51450;
    case 281u: goto L_08A51458;
    case 282u: goto L_08A51460;
    case 283u: goto L_08A5147C;
    case 284u: goto L_08A51488;
    case 285u: goto L_08A514B0;
    case 286u: goto L_08A514C4;
    case 287u: goto L_08A514D4;
    case 288u: goto L_08A514E0;
    case 289u: goto L_08A514EC;
    case 290u: goto L_08A514FC;
    case 291u: goto L_08A51508;
    case 292u: goto L_08A51520;
    case 293u: goto L_08A51530;
    case 294u: goto L_08A5153C;
    case 295u: goto L_08A5154C;
    case 296u: goto L_08A5155C;
    case 297u: goto L_08A51568;
    case 298u: goto L_08A51570;
    case 299u: goto L_08A51588;
    case 300u: goto L_08A515A8;
    case 301u: goto L_08A515B4;
    case 302u: goto L_08A515D8;
    case 303u: goto L_08A515E8;
    case 304u: goto L_08A515F8;
    case 305u: goto L_08A51604;
    case 306u: goto L_08A5160C;
    case 307u: goto L_08A5161C;
    case 308u: goto L_08A51634;
    case 309u: goto L_08A51644;
    case 310u: goto L_08A51650;
    case 311u: goto L_08A51660;
    case 312u: goto L_08A51670;
    case 313u: goto L_08A5167C;
    case 314u: goto L_08A51694;
    case 315u: goto L_08A516B4;
    case 316u: goto L_08A516C0;
    case 317u: goto L_08A516E4;
    case 318u: goto L_08A516FC;
    case 319u: goto L_08A5170C;
    case 320u: goto L_08A51718;
    case 321u: goto L_08A51720;
    case 322u: goto L_08A51730;
    case 323u: goto L_08A51748;
    case 324u: goto L_08A51758;
    case 325u: goto L_08A51764;
    case 326u: goto L_08A51774;
    case 327u: goto L_08A51784;
    case 328u: goto L_08A51790;
    case 329u: goto L_08A517A8;
    case 330u: goto L_08A517C4;
    case 331u: goto L_08A517D0;
    case 332u: goto L_08A517F8;
    case 333u: goto L_08A5180C;
    case 334u: goto L_08A5181C;
    case 335u: goto L_08A51828;
    case 336u: goto L_08A51834;
    case 337u: goto L_08A51844;
    case 338u: goto L_08A51850;
    case 339u: goto L_08A51868;
    case 340u: goto L_08A51878;
    case 341u: goto L_08A51884;
    case 342u: goto L_08A51894;
    case 343u: goto L_08A518A4;
    case 344u: goto L_08A518B0;
    case 345u: goto L_08A518C0;
    case 346u: goto L_08A518DC;
    case 347u: goto L_08A518E8;
    case 348u: goto L_08A5190C;
    case 349u: goto L_08A51924;
    case 350u: goto L_08A51934;
    case 351u: goto L_08A51940;
    case 352u: goto L_08A51948;
    case 353u: goto L_08A51958;
    case 354u: goto L_08A51970;
    case 355u: goto L_08A51980;
    case 356u: goto L_08A5198C;
    case 357u: goto L_08A5199C;
    case 358u: goto L_08A519AC;
    case 359u: goto L_08A519B8;
    case 360u: goto L_08A519CC;
    case 361u: goto L_08A519DC;
    case 362u: goto L_08A519EC;
    case 363u: goto L_08A519F0;
    case 364u: goto L_08A51A2C;
    case 365u: goto L_08A51A50;
    case 366u: goto L_08A51A58;
    case 367u: goto L_08A51A84;
    case 368u: goto L_08A51AB8;
    case 369u: goto L_08A51AD0;
    case 370u: goto L_08A51AE8;
    case 371u: goto L_08A51B3C;
    case 372u: goto L_08A51B50;
    case 373u: goto L_08A51B68;
    case 374u: goto L_08A51BB4;
    case 375u: goto L_08A51BCC;
    case 376u: goto L_08A51BE4;
    case 377u: goto L_08A51BEC;
    case 378u: goto L_08A51BF8;
    case 379u: goto L_08A51C1C;
    case 380u: goto L_08A51C28;
    case 381u: goto L_08A51C34;
    case 382u: goto L_08A51C4C;
    case 383u: goto L_08A51C74;
    case 384u: goto L_08A51C80;
    case 385u: goto L_08A51CA0;
    case 386u: goto L_08A51CA8;
    case 387u: goto L_08A51CB4;
    case 388u: goto L_08A51CBC;
    case 389u: goto L_08A51CD0;
    case 390u: goto L_08A51CD8;
    case 391u: goto L_08A51CE0;
    case 392u: goto L_08A51D00;
    case 393u: goto L_08A51D08;
    case 394u: goto L_08A51D20;
    case 395u: goto L_08A51D2C;
    case 396u: goto L_08A51D34;
    case 397u: goto L_08A51D3C;
    case 398u: goto L_08A51D5C;
    case 399u: goto L_08A51D64;
    case 400u: goto L_08A51D80;
    case 401u: goto L_08A51D8C;
    case 402u: goto L_08A51D9C;
    case 403u: goto L_08A51DA8;
    case 404u: goto L_08A51DB4;
    case 405u: goto L_08A51DE0;
    case 406u: goto L_08A51DE8;
    case 407u: goto L_08A51DF0;
    case 408u: goto L_08A51DF8;
    case 409u: goto L_08A51E08;
    case 410u: goto L_08A51E14;
    case 411u: goto L_08A51E20;
    case 412u: goto L_08A51E38;
    case 413u: goto L_08A51E40;
    case 414u: goto L_08A51E84;
    case 415u: goto L_08A51EC8;
    case 416u: goto L_08A51EF8;
    case 417u: goto L_08A51F6C;
    case 418u: goto L_08A51F90;
    case 419u: goto L_08A51FA4;
    case 420u: goto L_08A51FB0;
    case 421u: goto L_08A51FF4;
    case 422u: goto L_08A52004;
    case 423u: goto L_08A5200C;
    case 424u: goto L_08A52010;
    case 425u: goto L_08A52028;
    case 426u: goto L_08A5204C;
    case 427u: goto L_08A52060;
    case 428u: goto L_08A52074;
    case 429u: goto L_08A5207C;
    case 430u: goto L_08A52088;
    case 431u: goto L_08A5209C;
    case 432u: goto L_08A520AC;
    case 433u: goto L_08A520B4;
    case 434u: goto L_08A520B8;
    case 435u: goto L_08A520D0;
    case 436u: goto L_08A520E8;
    case 437u: goto L_08A520FC;
    case 438u: goto L_08A52104;
    case 439u: goto L_08A52110;
    case 440u: goto L_08A52124;
    case 441u: goto L_08A52134;
    case 442u: goto L_08A5213C;
    case 443u: goto L_08A52140;
    case 444u: goto L_08A52158;
    case 445u: goto L_08A5216C;
    case 446u: goto L_08A52180;
    case 447u: goto L_08A52188;
    case 448u: goto L_08A52194;
    case 449u: goto L_08A521A8;
    case 450u: goto L_08A521B8;
    case 451u: goto L_08A521C0;
    case 452u: goto L_08A521C4;
    case 453u: goto L_08A521DC;
    case 454u: goto L_08A521EC;
    case 455u: goto L_08A521F4;
    case 456u: goto L_08A52214;
    case 457u: goto L_08A52228;
    case 458u: goto L_08A52230;
    case 459u: goto L_08A5223C;
    case 460u: goto L_08A52250;
    case 461u: goto L_08A52260;
    case 462u: goto L_08A52268;
    case 463u: goto L_08A5226C;
    case 464u: goto L_08A52284;
    case 465u: goto L_08A52294;
    case 466u: goto L_08A5229C;
    case 467u: goto L_08A522BC;
    case 468u: goto L_08A522D0;
    case 469u: goto L_08A522D8;
    case 470u: goto L_08A522E4;
    case 471u: goto L_08A52300;
    case 472u: goto L_08A52310;
    case 473u: goto L_08A52318;
    case 474u: goto L_08A5231C;
    case 475u: goto L_08A52334;
    case 476u: goto L_08A52348;
    case 477u: goto L_08A5235C;
    case 478u: goto L_08A52364;
    case 479u: goto L_08A52378;
    case 480u: goto L_08A52384;
    case 481u: goto L_08A52394;
    case 482u: goto L_08A523A0;
    case 483u: goto L_08A523BC;
    case 484u: goto L_08A523CC;
    case 485u: goto L_08A523D4;
    case 486u: goto L_08A523D8;
    case 487u: goto L_08A523F0;
    case 488u: goto L_08A52408;
    case 489u: goto L_08A5241C;
    case 490u: goto L_08A52424;
    case 491u: goto L_08A52438;
    case 492u: goto L_08A52444;
    case 493u: goto L_08A5245C;
    case 494u: goto L_08A5246C;
    case 495u: goto L_08A52478;
    case 496u: goto L_08A52480;
    case 497u: goto L_08A52490;
    case 498u: goto L_08A524A0;
    case 499u: goto L_08A524AC;
    case 500u: goto L_08A524BC;
    case 501u: goto L_08A524CC;
    case 502u: goto L_08A524D8;
    case 503u: goto L_08A524EC;
    case 504u: goto L_08A524FC;
    case 505u: goto L_08A52504;
    case 506u: goto L_08A52508;
    case 507u: goto L_08A52520;
    case 508u: goto L_08A52538;
    case 509u: goto L_08A5254C;
    case 510u: goto L_08A52554;
    case 511u: goto L_08A52560;
    case 512u: goto L_08A52574;
    case 513u: goto L_08A52584;
    case 514u: goto L_08A5258C;
    case 515u: goto L_08A52590;
    case 516u: goto L_08A525A8;
    case 517u: goto L_08A525C0;
    case 518u: goto L_08A525D4;
    case 519u: goto L_08A525DC;
    case 520u: goto L_08A525E8;
    case 521u: goto L_08A525FC;
    case 522u: goto L_08A5260C;
    case 523u: goto L_08A52614;
    case 524u: goto L_08A52618;
    case 525u: goto L_08A52630;
    case 526u: goto L_08A52648;
    case 527u: goto L_08A5265C;
    case 528u: goto L_08A52664;
    case 529u: goto L_08A52670;
    case 530u: goto L_08A52680;
    case 531u: goto L_08A5268C;
    case 532u: goto L_08A526A8;
    case 533u: goto L_08A526D0;
    case 534u: goto L_08A526E0;
    case 535u: goto L_08A526E8;
    case 536u: goto L_08A526EC;
    case 537u: goto L_08A52704;
    case 538u: goto L_08A52720;
    case 539u: goto L_08A52734;
    case 540u: goto L_08A5273C;
    case 541u: goto L_08A52748;
    case 542u: goto L_08A52754;
    case 543u: goto L_08A52784;
    case 544u: goto L_08A52794;
    case 545u: goto L_08A5279C;
    case 546u: goto L_08A527A0;
    case 547u: goto L_08A527B8;
    case 548u: goto L_08A527D8;
    case 549u: goto L_08A527E8;
    case 550u: goto L_08A527F0;
    case 551u: goto L_08A527F4;
    case 552u: goto L_08A527FC;
    case 553u: goto L_08A52800;
    case 554u: goto L_08A52818;
    case 555u: goto L_08A52828;
    case 556u: goto L_08A52834;
    case 557u: goto L_08A5283C;
    case 558u: goto L_08A52844;
    case 559u: goto L_08A52850;
    case 560u: goto L_08A5286C;
    case 561u: goto L_08A52880;
    case 562u: goto L_08A5289C;
    case 563u: goto L_08A528AC;
    case 564u: goto L_08A528BC;
    case 565u: goto L_08A528C4;
    case 566u: goto L_08A528E0;
    case 567u: goto L_08A528E4;
    case 568u: goto L_08A52994;
    case 569u: goto L_08A529A8;
    case 570u: goto L_08A529B0;
    case 571u: goto L_08A529BC;
    case 572u: goto L_08A529D0;
    case 573u: goto L_08A529E0;
    case 574u: goto L_08A529E8;
    case 575u: goto L_08A529EC;
    case 576u: goto L_08A52A04;
    case 577u: goto L_08A52A18;
    case 578u: goto L_08A52A2C;
    case 579u: goto L_08A52A34;
    case 580u: goto L_08A52AE0;
    case 581u: goto L_08A52AF0;
    case 582u: goto L_08A52B00;
    case 583u: goto L_08A52B0C;
    case 584u: goto L_08A52B20;
    case 585u: goto L_08A52B30;
    case 586u: goto L_08A52B38;
    case 587u: goto L_08A52B3C;
    case 588u: goto L_08A52B54;
    case 589u: goto L_08A52B68;
    case 590u: goto L_08A52B7C;
    case 591u: goto L_08A52B84;
    case 592u: goto L_08A52B94;
    case 593u: goto L_08A52B9C;
    case 594u: goto L_08A52BA8;
    case 595u: goto L_08A52BB0;
    case 596u: goto L_08A52BBC;
    case 597u: goto L_08A52BC8;
    case 598u: goto L_08A52BD0;
    case 599u: goto L_08A52BD8;
    case 600u: goto L_08A52BE0;
    case 601u: goto L_08A52BE4;
    case 602u: goto L_08A52C08;
    case 603u: goto L_08A52C14;
    case 604u: goto L_08A52C20;
    case 605u: goto L_08A52C28;
    case 606u: goto L_08A52C68;
    case 607u: goto L_08A52CAC;
    case 608u: goto L_08A52CE8;
    case 609u: goto L_08A52CF0;
    case 610u: goto L_08A52D70;
    case 611u: goto L_08A52D7C;
    case 612u: goto L_08A52D84;
    case 613u: goto L_08A52D9C;
    case 614u: goto L_08A52DA4;
    case 615u: goto L_08A52DD4;
    case 616u: goto L_08A52DDC;
    case 617u: goto L_08A52DE0;
    case 618u: goto L_08A52DE8;
    case 619u: goto L_08A52E44;
    case 620u: goto L_08A52E4C;
    case 621u: goto L_08A52F20;
    case 622u: goto L_08A53008;
    case 623u: goto L_08A530A4;
    case 624u: goto L_08A531C4;
    case 625u: goto L_08A532E4;
    case 626u: goto L_08A533E0;
    case 627u: goto L_08A53500;
    case 628u: goto L_08A53614;
    case 629u: goto L_08A53718;
    case 630u: goto L_08A53748;
    case 631u: goto L_08A53754;
    case 632u: goto L_08A53760;
    case 633u: goto L_08A53774;
    case 634u: goto L_08A5377C;
    case 635u: goto L_08A5378C;
    case 636u: goto L_08A53794;
    case 637u: goto L_08A537A0;
    case 638u: goto L_08A5388C;
    case 639u: goto L_08A53894;
    case 640u: goto L_08A538C0;
    case 641u: goto L_08A538D4;
    case 642u: goto L_08A538DC;
    case 643u: goto L_08A538EC;
    case 644u: goto L_08A538F4;
    case 645u: goto L_08A53900;
    case 646u: goto L_08A53938;
    case 647u: goto L_08A53974;
    case 648u: goto L_08A53988;
    case 649u: goto L_08A539F4;
    case 650u: goto L_08A53A00;
    case 651u: goto L_08A53A44;
    case 652u: goto L_08A53A68;
    case 653u: goto L_08A53A70;
    case 654u: goto L_08A53A7C;
    case 655u: goto L_08A53A84;
    case 656u: goto L_08A53A8C;
    case 657u: goto L_08A53AAC;
    case 658u: goto L_08A53AB8;
    case 659u: goto L_08A53AC4;
    case 660u: goto L_08A53AD0;
    case 661u: goto L_08A53AD8;
    case 662u: goto L_08A53AE0;
    case 663u: goto L_08A53AE8;
    case 664u: goto L_08A53AEC;
    case 665u: goto L_08A53AF8;
    case 666u: goto L_08A53B14;
    case 667u: goto L_08A53B20;
    case 668u: goto L_08A53B2C;
    case 669u: goto L_08A53B38;
    case 670u: goto L_08A53B44;
    case 671u: goto L_08A53BD8;
    case 672u: goto L_08A53BE4;
    case 673u: goto L_08A53BF0;
    case 674u: goto L_08A53BFC;
    case 675u: goto L_08A53CD4;
    case 676u: goto L_08A53CE8;
    case 677u: goto L_08A53CF0;
    case 678u: goto L_08A53CF4;
    case 679u: goto L_08A53D78;
    case 680u: goto L_08A53D84;
    case 681u: goto L_08A53D98;
    case 682u: goto L_08A53DA0;
    case 683u: goto L_08A53DB4;
    case 684u: goto L_08A53DC0;
    case 685u: goto L_08A53DC8;
    case 686u: goto L_08A53DF4;
    case 687u: goto L_08A53E6C;
    case 688u: goto L_08A53E78;
    case 689u: goto L_08A53EB8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A50000:
    // nop
    goto L_08A50004;
L_08A50004:
    ctx.gpr[19] = (0u | 1u);
    goto L_08A50008;
L_08A50008:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A5029C;
      }
      goto L_08A50010;
    }
L_08A50010:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5029C;
      }
      goto L_08A50018;
    }
L_08A50018:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A50024u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A50024u) goto L_08A50024;
    return;
L_08A50024:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50030u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 280u, 0x08A4D3E4u>(ctx, &aot_mem) && ctx.pc == 0x08A50030u) goto L_08A50030;
    return;
L_08A50030:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(172)));
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A50074;
      }
      goto L_08A50060;
    }
L_08A50060:
    ctx.gpr[4] = (15395u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08A50074;
L_08A50074:
    ctx.gpr[31] = (0x08A5007Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 449u, 0x08AFA07Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5007Cu) goto L_08A5007C;
    return;
L_08A5007C:
    ctx.gpr[31] = (0x08A50084u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 288u, 0x08A4D484u>(ctx, &aot_mem) && ctx.pc == 0x08A50084u) goto L_08A50084;
    return;
L_08A50084:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A50118;
      }
      goto L_08A500A0;
    }
L_08A500A0:
    ctx.gpr[31] = (0x08A500A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A500A8u) goto L_08A500A8;
    return;
L_08A500A8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A500E8;
      }
      goto L_08A500B0;
    }
L_08A500B0:
    ctx.gpr[31] = (0x08A500B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 449u, 0x08AFA07Cu>(ctx, &aot_mem) && ctx.pc == 0x08A500B8u) goto L_08A500B8;
    return;
L_08A500B8:
    ctx.gpr[31] = (0x08A500C0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 288u, 0x08A4D484u>(ctx, &aot_mem) && ctx.pc == 0x08A500C0u) goto L_08A500C0;
    return;
L_08A500C0:
    ctx.gpr[4] = (16140u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_08A50118;
      }
      goto L_08A500E8;
    }
L_08A500E8:
    ctx.gpr[31] = (0x08A500F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 449u, 0x08AFA07Cu>(ctx, &aot_mem) && ctx.pc == 0x08A500F0u) goto L_08A500F0;
    return;
L_08A500F0:
    ctx.gpr[31] = (0x08A500F8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 288u, 0x08A4D484u>(ctx, &aot_mem) && ctx.pc == 0x08A500F8u) goto L_08A500F8;
    return;
L_08A500F8:
    ctx.gpr[4] = (16140u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[0];
    ctx.gpr[4] = (16416u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_08A50118;
L_08A50118:
    ctx.gpr[31] = (0x08A50120u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 449u, 0x08AFA07Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50120u) goto L_08A50120;
    return;
L_08A50120:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A50148;
      }
      goto L_08A50134;
    }
L_08A50134:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A50178;
      }
      goto L_08A50148;
    }
L_08A50148:
    ctx.gpr[31] = (0x08A50150u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 449u, 0x08AFA07Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50150u) goto L_08A50150;
    return;
L_08A50150:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5017C;
      }
      goto L_08A50164;
    }
L_08A50164:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5017C;
      }
      goto L_08A50178;
    }
L_08A50178:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    goto L_08A5017C;
L_08A5017C:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
    ctx.gpr[31] = (0x08A501A8u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 289u, 0x08A4D490u>(ctx, &aot_mem) && ctx.pc == 0x08A501A8u) goto L_08A501A8;
    return;
L_08A501A8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A501B8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A501B8u) goto L_08A501B8;
    return;
L_08A501B8:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A501C8u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 278u, 0x08A4D3A4u>(ctx, &aot_mem) && ctx.pc == 0x08A501C8u) goto L_08A501C8;
    return;
L_08A501C8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A501D8u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A501D8u) goto L_08A501D8;
    return;
L_08A501D8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A501E4u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A501E4u) goto L_08A501E4;
    return;
L_08A501E4:
    ctx.gpr[31] = (0x08A501ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A501ECu) goto L_08A501EC;
    return;
L_08A501EC:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A501FCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A501FCu) goto L_08A501FC;
    return;
L_08A501FC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A50208u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9E80u>(ctx, &aot_mem) && ctx.pc == 0x08A50208u) goto L_08A50208;
    return;
L_08A50208:
    ctx.gpr[31] = (0x08A50210u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A50210u) goto L_08A50210;
    return;
L_08A50210:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A50220u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50220u) goto L_08A50220;
    return;
L_08A50220:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A50230u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A50230u) goto L_08A50230;
    return;
L_08A50230:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A50240u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(816), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A50240u) goto L_08A50240;
    return;
L_08A50240:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(820), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(820));
    ctx.gpr[31] = (0x08A50250u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(816));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x08A50250u) goto L_08A50250;
    return;
L_08A50250:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (48960u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[31] = (0x08A50274u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50274u) goto L_08A50274;
    return;
L_08A50274:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A50284u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A50284u) goto L_08A50284;
    return;
L_08A50284:
    ctx.gpr[31] = (0x08A5028Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5028Cu) goto L_08A5028C;
    return;
L_08A5028C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A5029Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A5029Cu) goto L_08A5029C;
    return;
L_08A5029C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A502B4;
      }
      goto L_08A502A4;
    }
L_08A502A4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A502B4;
L_08A502B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A503B4;
      }
      goto L_08A502D0;
    }
L_08A502D0:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(864));
    ctx.gpr[31] = (0x08A502DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A502DCu) goto L_08A502DC;
    return;
L_08A502DC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(832));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A50300u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 289u, 0x08A4D490u>(ctx, &aot_mem) && ctx.pc == 0x08A50300u) goto L_08A50300;
    return;
L_08A50300:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A50310u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 277u, 0x08A4D38Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50310u) goto L_08A50310;
    return;
L_08A50310:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A5031Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 280u, 0x08A4D3E4u>(ctx, &aot_mem) && ctx.pc == 0x08A5031Cu) goto L_08A5031C;
    return;
L_08A5031C:
    ctx.gpr[31] = (0x08A50324u);
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A50324u) goto L_08A50324;
    return;
L_08A50324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (15820u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[4] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (16025u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(848));
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(864)));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]) ^ 0x80000000u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5037Cu);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 289u, 0x08A4D490u>(ctx, &aot_mem) && ctx.pc == 0x08A5037Cu) goto L_08A5037C;
    return;
L_08A5037C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A5038Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A5038Cu) goto L_08A5038C;
    return;
L_08A5038C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50398u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08A50398u) goto L_08A50398;
    return;
L_08A50398:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]) ^ 0x80000000u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A503A8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A503A8u) goto L_08A503A8;
    return;
L_08A503A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A503B4u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9E80u>(ctx, &aot_mem) && ctx.pc == 0x08A503B4u) goto L_08A503B4;
    return;
L_08A503B4:
    ctx.gpr[31] = (0x08A503BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A503BCu) goto L_08A503BC;
    return;
L_08A503BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50468;
      }
      goto L_08A503C4;
    }
L_08A503C4:
    ctx.gpr[31] = (0x08A503CCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A503CCu) goto L_08A503CC;
    return;
L_08A503CC:
    ctx.gpr[31] = (0x08A503D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1064u, 0x08A97E3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A503D4u) goto L_08A503D4;
    return;
L_08A503D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50468;
      }
      goto L_08A503DC;
    }
L_08A503DC:
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A503E8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A503E8u) goto L_08A503E8;
    return;
L_08A503E8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A503F4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 280u, 0x08A4D3E4u>(ctx, &aot_mem) && ctx.pc == 0x08A503F4u) goto L_08A503F4;
    return;
L_08A503F4:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A50468;
      }
      goto L_08A5040C;
    }
L_08A5040C:
    ctx.gpr[31] = (0x08A50414u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(880));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A50414u) goto L_08A50414;
    return;
L_08A50414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (48588u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A5044Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A5044Cu) goto L_08A5044C;
    return;
L_08A5044C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A5045Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A5045Cu) goto L_08A5045C;
    return;
L_08A5045C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A50468u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9E80u>(ctx, &aot_mem) && ctx.pc == 0x08A50468u) goto L_08A50468;
    return;
L_08A50468:
    ctx.gpr[31] = (0x08A50470u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50470u) goto L_08A50470;
    return;
L_08A50470:
    ctx.gpr[4] = (17645u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (48163u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A504ACu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x08A504ACu) goto L_08A504AC;
    return;
L_08A504AC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A504B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A504B8u) goto L_08A504B8;
    return;
L_08A504B8:
    ctx.gpr[4] = (50413u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | 32768u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A504ECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x08A504ECu) goto L_08A504EC;
    return;
L_08A504EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A504F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A504F8u) goto L_08A504F8;
    return;
L_08A504F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A50518u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 330u, 0x08AF9774u>(ctx, &aot_mem) && ctx.pc == 0x08A50518u) goto L_08A50518;
    return;
L_08A50518:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A50524u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50524u) goto L_08A50524;
    return;
L_08A50524:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A50540u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 336u, 0x08AF97C0u>(ctx, &aot_mem) && ctx.pc == 0x08A50540u) goto L_08A50540;
    return;
L_08A50540:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A50568;
      }
      goto L_08A50550;
    }
L_08A50550:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50568;
      }
      goto L_08A50558;
    }
L_08A50558:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50568;
      }
      goto L_08A50560;
    }
L_08A50560:
    ctx.gpr[31] = (0x08A50568u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A53DF4;
L_08A50568:
    ctx.gpr[31] = (0x08A50570u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50570u) goto L_08A50570;
    return;
L_08A50570:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A50594;
      }
      goto L_08A5057C;
    }
L_08A5057C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(972)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
        goto L_08A5070C;
    }
    goto L_08A50594;
L_08A50594:
    if (ctx.gpr[18] != 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
        goto L_08A5070C;
    }
    goto L_08A5059C;
L_08A5059C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(912));
    ctx.gpr[31] = (0x08A505ACu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A505ACu) goto L_08A505AC;
    return;
L_08A505AC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A505B8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 387u, 0x08AF9B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A505B8u) goto L_08A505B8;
    return;
L_08A505B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A505C8u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A505C8u) goto L_08A505C8;
    return;
L_08A505C8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A505D4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 387u, 0x08AF9B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A505D4u) goto L_08A505D4;
    return;
L_08A505D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A505E4u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A505E4u) goto L_08A505E4;
    return;
L_08A505E4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A505F0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 387u, 0x08AF9B0Cu>(ctx, &aot_mem) && ctx.pc == 0x08A505F0u) goto L_08A505F0;
    return;
L_08A505F0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A50604u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 289u, 0x08A4D490u>(ctx, &aot_mem) && ctx.pc == 0x08A50604u) goto L_08A50604;
    return;
L_08A50604:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(896));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5061Cu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 279u, 0x08A4D3C4u>(ctx, &aot_mem) && ctx.pc == 0x08A5061Cu) goto L_08A5061C;
    return;
L_08A5061C:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A50628u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A50628u) goto L_08A50628;
    return;
L_08A50628:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(128)));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(912)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.fpr[13] = ctx.fpr[14] / ctx.fpr[13];
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(132)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(136)));
    ctx.fpr[19] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[18]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(912), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A50690u);
    ctx.fpr[20] = ctx.fpr[14] - ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 278u, 0x08A4D3A4u>(ctx, &aot_mem) && ctx.pc == 0x08A50690u) goto L_08A50690;
    return;
L_08A50690:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A5069Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5069Cu) goto L_08A5069C;
    return;
L_08A5069C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(212)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A506ACu);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08A506ACu) goto L_08A506AC;
    return;
L_08A506AC:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A506BCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A506BCu) goto L_08A506BC;
    return;
L_08A506BC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A506C8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A506C8u) goto L_08A506C8;
    return;
L_08A506C8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(928));
    ctx.gpr[31] = (0x08A506D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A506D4u) goto L_08A506D4;
    return;
L_08A506D4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A506E8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 278u, 0x08A4D3A4u>(ctx, &aot_mem) && ctx.pc == 0x08A506E8u) goto L_08A506E8;
    return;
L_08A506E8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08A506F8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A506F8u) goto L_08A506F8;
    return;
L_08A506F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50708u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A50708u) goto L_08A50708;
    return;
L_08A50708:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    goto L_08A5070C;
L_08A5070C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1024)));
    ctx.gpr[4] = (17948u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[4] | 16384u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[17] != 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(1028), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A50904;
      }
      goto L_08A50734;
    }
L_08A50734:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A50904;
      }
      goto L_08A50744;
    }
L_08A50744:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A50904;
      }
      goto L_08A5075C;
    }
L_08A5075C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (17224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A507B8;
      }
      goto L_08A5078C;
    }
L_08A5078C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x08A507B8u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x08A507B8u) goto L_08A507B8;
    return;
L_08A507B8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 201 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A50904;
      }
      goto L_08A507C8;
    }
L_08A507C8:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x08A507D4u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 292u, 0x08A4D4D0u>(ctx, &aot_mem) && ctx.pc == 0x08A507D4u) goto L_08A507D4;
    return;
L_08A507D4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
    ctx.gpr[5] = (14979u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A50804u);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 289u, 0x08A4D490u>(ctx, &aot_mem) && ctx.pc == 0x08A50804u) goto L_08A50804;
    return;
L_08A50804:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A5083C;
      }
      goto L_08A50828;
    }
L_08A50828:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(156)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A5083C;
L_08A5083C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
        goto L_08A50860;
    }
    goto L_08A50854;
L_08A50854:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
    goto L_08A50860;
L_08A50860:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (48163u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(160)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(976));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(944));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(960));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A50898u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A50898u) goto L_08A50898;
    return;
L_08A50898:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A508A8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A508A8u) goto L_08A508A8;
    return;
L_08A508A8:
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A508B4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A508B4u) goto L_08A508B4;
    return;
L_08A508B4:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A508C0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 280u, 0x08A4D3E4u>(ctx, &aot_mem) && ctx.pc == 0x08A508C0u) goto L_08A508C0;
    return;
L_08A508C0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08A508D0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A508D0u) goto L_08A508D0;
    return;
L_08A508D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A508DCu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08A508DCu) goto L_08A508DC;
    return;
L_08A508DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[31] = (0x08A508E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 294u, 0x08A4D4F8u>(ctx, &aot_mem) && ctx.pc == 0x08A508E8u) goto L_08A508E8;
    return;
L_08A508E8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A508F4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 433u, 0x08AF9E80u>(ctx, &aot_mem) && ctx.pc == 0x08A508F4u) goto L_08A508F4;
    return;
L_08A508F4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A50904u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 435u, 0x08AF9EA4u>(ctx, &aot_mem) && ctx.pc == 0x08A50904u) goto L_08A50904;
    return;
L_08A50904:
    ctx.gpr[31] = (0x08A5090Cu);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 291u, 0x08A4D4B4u>(ctx, &aot_mem) && ctx.pc == 0x08A5090Cu) goto L_08A5090C;
    return;
L_08A5090C:
    ctx.gpr[4] = (15692u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51BB4;
      }
      goto L_08A5092C;
    }
L_08A5092C:
    ctx.gpr[31] = (0x08A50934u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 344u, 0x08AF982Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50934u) goto L_08A50934;
    return;
L_08A50934:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A51BB4;
      }
      goto L_08A5094C;
    }
L_08A5094C:
    ctx.gpr[31] = (0x08A50954u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 122u, 0x088ED020u>(ctx, &aot_mem) && ctx.pc == 0x08A50954u) goto L_08A50954;
    return;
L_08A50954:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51BB4;
      }
      goto L_08A5095C;
    }
L_08A5095C:
    ctx.gpr[31] = (0x08A50964u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 746u, 0x08A2F708u>(ctx, &aot_mem) && ctx.pc == 0x08A50964u) goto L_08A50964;
    return;
L_08A50964:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51BB4;
      }
      goto L_08A5096C;
    }
L_08A5096C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5099C;
      }
      goto L_08A5097C;
    }
L_08A5097C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A51BB4;
      }
      goto L_08A5098C;
    }
L_08A5098C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51BB4;
      }
      goto L_08A5099C;
    }
L_08A5099C:
    ctx.gpr[31] = (0x08A509A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08A509A4u) goto L_08A509A4;
    return;
L_08A509A4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -973 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 195u);
      if (branch_taken) {
          goto L_08A50AF4;
      }
      goto L_08A509B4;
    }
L_08A509B4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -991 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(991));
      if (branch_taken) {
          goto L_08A50C30;
      }
      goto L_08A509C0;
    }
L_08A509C0:
    ctx.gpr[31] = (0x08A509C8u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 295u, 0x08A4D514u>(ctx, &aot_mem) && ctx.pc == 0x08A509C8u) goto L_08A509C8;
    return;
L_08A509C8:
    ctx.gpr[31] = (0x08A509D0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 399u, 0x08AF9BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A509D0u) goto L_08A509D0;
    return;
L_08A509D0:
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[6] = (48896u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A50A04u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A50A04u) goto L_08A50A04;
    return;
L_08A50A04:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50A10u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A50A10u) goto L_08A50A10;
    return;
L_08A50A10:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A50A34u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50A34u) goto L_08A50A34;
    return;
L_08A50A34:
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50A4Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50A4Cu) goto L_08A50A4C;
    return;
L_08A50A4C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A50A5Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50A5Cu) goto L_08A50A5C;
    return;
L_08A50A5C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50A68u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08A50A68u) goto L_08A50A68;
    return;
L_08A50A68:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x08A50A74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50A74u) goto L_08A50A74;
    return;
L_08A50A74:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50A84u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A50A84u) goto L_08A50A84;
    return;
L_08A50A84:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08A50A90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50A90u) goto L_08A50A90;
    return;
L_08A50A90:
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A50AA4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50AA4u) goto L_08A50AA4;
    return;
L_08A50AA4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50AB4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A50AB4u) goto L_08A50AB4;
    return;
L_08A50AB4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08A50AC0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A50AC0u) goto L_08A50AC0;
    return;
L_08A50AC0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A50AD0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A50AD0u) goto L_08A50AD0;
    return;
L_08A50AD0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50AE0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A50AE0u) goto L_08A50AE0;
    return;
L_08A50AE0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A50AECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A50AECu) goto L_08A50AEC;
    return;
L_08A50AEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51120;
      }
      goto L_08A50AF4;
    }
L_08A50AF4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A509C0;
      }
      goto L_08A50AFC;
    }
L_08A50AFC:
    ctx.gpr[31] = (0x08A50B04u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 295u, 0x08A4D514u>(ctx, &aot_mem) && ctx.pc == 0x08A50B04u) goto L_08A50B04;
    return;
L_08A50B04:
    ctx.gpr[31] = (0x08A50B0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 399u, 0x08AF9BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A50B0Cu) goto L_08A50B0C;
    return;
L_08A50B0C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[6] = (48896u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A50B3Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A50B3Cu) goto L_08A50B3C;
    return;
L_08A50B3C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50B48u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A50B48u) goto L_08A50B48;
    return;
L_08A50B48:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A50B70u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50B70u) goto L_08A50B70;
    return;
L_08A50B70:
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A50B84u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50B84u) goto L_08A50B84;
    return;
L_08A50B84:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A50B94u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50B94u) goto L_08A50B94;
    return;
L_08A50B94:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50BA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08A50BA0u) goto L_08A50BA0;
    return;
L_08A50BA0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x08A50BACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50BACu) goto L_08A50BAC;
    return;
L_08A50BAC:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50BBCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A50BBCu) goto L_08A50BBC;
    return;
L_08A50BBC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08A50BC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50BC8u) goto L_08A50BC8;
    return;
L_08A50BC8:
    ctx.gpr[5] = (16294u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A50BE0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50BE0u) goto L_08A50BE0;
    return;
L_08A50BE0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50BF0u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A50BF0u) goto L_08A50BF0;
    return;
L_08A50BF0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08A50BFCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A50BFCu) goto L_08A50BFC;
    return;
L_08A50BFC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A50C0Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A50C0Cu) goto L_08A50C0C;
    return;
L_08A50C0C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50C1Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A50C1Cu) goto L_08A50C1C;
    return;
L_08A50C1C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A50C28u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A50C28u) goto L_08A50C28;
    return;
L_08A50C28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51120;
      }
      goto L_08A50C30;
    }
L_08A50C30:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(6744)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A50C48:
    ctx.gpr[31] = (0x08A50C50u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 295u, 0x08A4D514u>(ctx, &aot_mem) && ctx.pc == 0x08A50C50u) goto L_08A50C50;
    return;
L_08A50C50:
    ctx.gpr[31] = (0x08A50C58u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 399u, 0x08AF9BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A50C58u) goto L_08A50C58;
    return;
L_08A50C58:
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[4] = (16000u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[4] = (16051u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A50C98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A50C98u) goto L_08A50C98;
    return;
L_08A50C98:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50CA4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A50CA4u) goto L_08A50CA4;
    return;
L_08A50CA4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A50CBCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50CBCu) goto L_08A50CBC;
    return;
L_08A50CBC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50CCCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50CCCu) goto L_08A50CCC;
    return;
L_08A50CCC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A50CDCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50CDCu) goto L_08A50CDC;
    return;
L_08A50CDC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50CE8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08A50CE8u) goto L_08A50CE8;
    return;
L_08A50CE8:
    ctx.gpr[31] = (0x08A50CF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50CF0u) goto L_08A50CF0;
    return;
L_08A50CF0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x08A50D00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50D00u) goto L_08A50D00;
    return;
L_08A50D00:
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A50D18u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50D18u) goto L_08A50D18;
    return;
L_08A50D18:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50D28u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A50D28u) goto L_08A50D28;
    return;
L_08A50D28:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[31] = (0x08A50D34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A50D34u) goto L_08A50D34;
    return;
L_08A50D34:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A50D44u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A50D44u) goto L_08A50D44;
    return;
L_08A50D44:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A50D54u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A50D54u) goto L_08A50D54;
    return;
L_08A50D54:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A50D60u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A50D60u) goto L_08A50D60;
    return;
L_08A50D60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51120;
      }
      goto L_08A50D78;
    }
L_08A50D78:
    ctx.gpr[31] = (0x08A50D80u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 295u, 0x08A4D514u>(ctx, &aot_mem) && ctx.pc == 0x08A50D80u) goto L_08A50D80;
    return;
L_08A50D80:
    ctx.gpr[31] = (0x08A50D88u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 399u, 0x08AF9BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A50D88u) goto L_08A50D88;
    return;
L_08A50D88:
    ctx.gpr[4] = (16204u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[4] = (16000u << 16u);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[4] = (15912u << 16u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A50DC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A50DC8u) goto L_08A50DC8;
    return;
L_08A50DC8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50DD4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A50DD4u) goto L_08A50DD4;
    return;
L_08A50DD4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A50DECu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50DECu) goto L_08A50DEC;
    return;
L_08A50DEC:
    ctx.gpr[5] = (15897u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50E04u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50E04u) goto L_08A50E04;
    return;
L_08A50E04:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A50E14u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50E14u) goto L_08A50E14;
    return;
L_08A50E14:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50E20u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08A50E20u) goto L_08A50E20;
    return;
L_08A50E20:
    ctx.gpr[31] = (0x08A50E28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50E28u) goto L_08A50E28;
    return;
L_08A50E28:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08A50E38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50E38u) goto L_08A50E38;
    return;
L_08A50E38:
    ctx.gpr[5] = (16166u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A50E50u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50E50u) goto L_08A50E50;
    return;
L_08A50E50:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50E60u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A50E60u) goto L_08A50E60;
    return;
L_08A50E60:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08A50E6Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A50E6Cu) goto L_08A50E6C;
    return;
L_08A50E6C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A50E7Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A50E7Cu) goto L_08A50E7C;
    return;
L_08A50E7C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50E8Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A50E8Cu) goto L_08A50E8C;
    return;
L_08A50E8C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A50E98u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A50E98u) goto L_08A50E98;
    return;
L_08A50E98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51120;
      }
      goto L_08A50EB0;
    }
L_08A50EB0:
    ctx.gpr[31] = (0x08A50EB8u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 295u, 0x08A4D514u>(ctx, &aot_mem) && ctx.pc == 0x08A50EB8u) goto L_08A50EB8;
    return;
L_08A50EB8:
    ctx.gpr[31] = (0x08A50EC0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 399u, 0x08AF9BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A50EC0u) goto L_08A50EC0;
    return;
L_08A50EC0:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[6] = (48640u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A50EF0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A50EF0u) goto L_08A50EF0;
    return;
L_08A50EF0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50EFCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A50EFCu) goto L_08A50EFC;
    return;
L_08A50EFC:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A50F24u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50F24u) goto L_08A50F24;
    return;
L_08A50F24:
    ctx.gpr[6] = (16000u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A50F38u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50F38u) goto L_08A50F38;
    return;
L_08A50F38:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A50F48u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50F48u) goto L_08A50F48;
    return;
L_08A50F48:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50F54u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08A50F54u) goto L_08A50F54;
    return;
L_08A50F54:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08A50F60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50F60u) goto L_08A50F60;
    return;
L_08A50F60:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50F70u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A50F70u) goto L_08A50F70;
    return;
L_08A50F70:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1024));
    ctx.gpr[31] = (0x08A50F7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50F7Cu) goto L_08A50F7C;
    return;
L_08A50F7C:
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A50F94u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A50F94u) goto L_08A50F94;
    return;
L_08A50F94:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A50FA4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A50FA4u) goto L_08A50FA4;
    return;
L_08A50FA4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    ctx.gpr[31] = (0x08A50FB0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A50FB0u) goto L_08A50FB0;
    return;
L_08A50FB0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A50FC0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A50FC0u) goto L_08A50FC0;
    return;
L_08A50FC0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A50FD0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A50FD0u) goto L_08A50FD0;
    return;
L_08A50FD0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A50FDCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A50FDCu) goto L_08A50FDC;
    return;
L_08A50FDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51120;
      }
      goto L_08A50FEC;
    }
L_08A50FEC:
    ctx.gpr[31] = (0x08A50FF4u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 295u, 0x08A4D514u>(ctx, &aot_mem) && ctx.pc == 0x08A50FF4u) goto L_08A50FF4;
    return;
L_08A50FF4:
    ctx.gpr[31] = (0x08A50FFCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 399u, 0x08AF9BFCu>(ctx, &aot_mem) && ctx.pc == 0x08A50FFCu) goto L_08A50FFC;
    return;
L_08A50FFC:
    ctx.gpr[4] = (16230u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1088));
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[6] = (48896u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A51030u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A51030u) goto L_08A51030;
    return;
L_08A51030:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A5103Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5103Cu) goto L_08A5103C;
    return;
L_08A5103C:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1072));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A51060u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51060u) goto L_08A51060;
    return;
L_08A51060:
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A51078u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51078u) goto L_08A51078;
    return;
L_08A51078:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A51088u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51088u) goto L_08A51088;
    return;
L_08A51088:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51094u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08A51094u) goto L_08A51094;
    return;
L_08A51094:
    ctx.gpr[31] = (0x08A5109Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5109Cu) goto L_08A5109C;
    return;
L_08A5109C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1056));
    ctx.gpr[31] = (0x08A510ACu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A510ACu) goto L_08A510AC;
    return;
L_08A510AC:
    ctx.gpr[5] = (16364u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A510C4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A510C4u) goto L_08A510C4;
    return;
L_08A510C4:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A510D4u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A510D4u) goto L_08A510D4;
    return;
L_08A510D4:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1040));
    ctx.gpr[31] = (0x08A510E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A510E0u) goto L_08A510E0;
    return;
L_08A510E0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A510F0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A510F0u) goto L_08A510F0;
    return;
L_08A510F0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A51100u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A51100u) goto L_08A51100;
    return;
L_08A51100:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A5110Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5110Cu) goto L_08A5110C;
    return;
L_08A5110C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A51120;
L_08A51120:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51140;
      }
      goto L_08A51138;
    }
L_08A51138:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A51140;
L_08A51140:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
        goto L_08A51164;
    }
    goto L_08A51150;
L_08A51150:
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[31] = (0x08A51160u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 294u, 0x08A4D4F8u>(ctx, &aot_mem) && ctx.pc == 0x08A51160u) goto L_08A51160;
    return;
L_08A51160:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
    goto L_08A51164;
L_08A51164:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (14749u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.fpr[17] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1012)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[31] = (0x08A511A0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x08A511A0u) goto L_08A511A0;
    return;
L_08A511A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51328;
      }
      goto L_08A511C4;
    }
L_08A511C4:
    ctx.gpr[31] = (0x08A511CCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 523u, 0x08927014u>(ctx, &aot_mem) && ctx.pc == 0x08A511CCu) goto L_08A511CC;
    return;
L_08A511CC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08A51328;
      }
      goto L_08A511F8;
    }
L_08A511F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1104));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[6] = (16192u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5122Cu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5122Cu) goto L_08A5122C;
    return;
L_08A5122C:
    ctx.fpr[28] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[26] = ctx.fpr[24] + ctx.fpr[26];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A51244u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 401u, 0x08A4DE3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51244u) goto L_08A51244;
    return;
L_08A51244:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08A5125Cu);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 401u, 0x08A4DE3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5125Cu) goto L_08A5125C;
    return;
L_08A5125C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[21] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-9708)));
    ctx.gpr[22] = (2229u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-9704)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[11] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A512B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08A512B0u) goto L_08A512B0;
    return;
L_08A512B0:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08A512C4u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 401u, 0x08A4DE3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A512C4u) goto L_08A512C4;
    return;
L_08A512C4:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x08A512DCu);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 401u, 0x08A4DE3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A512DCu) goto L_08A512DC;
    return;
L_08A512DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-9708)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-9704)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[12];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A51328u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08A51328u) goto L_08A51328;
    return;
L_08A51328:
    ctx.gpr[31] = (0x08A51330u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51330u) goto L_08A51330;
    return;
L_08A51330:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -973 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 195u);
      if (branch_taken) {
          goto L_08A51458;
      }
      goto L_08A51340;
    }
L_08A51340:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < -991 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(991));
      if (branch_taken) {
          goto L_08A51570;
      }
      goto L_08A5134C;
    }
L_08A5134C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[6] = (48896u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A51368u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A51368u) goto L_08A51368;
    return;
L_08A51368:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51374u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A51374u) goto L_08A51374;
    return;
L_08A51374:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A51398u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51398u) goto L_08A51398;
    return;
L_08A51398:
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A513B0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A513B0u) goto L_08A513B0;
    return;
L_08A513B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A513C0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A513C0u) goto L_08A513C0;
    return;
L_08A513C0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A513CCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A513CCu) goto L_08A513CC;
    return;
L_08A513CC:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x08A513D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A513D8u) goto L_08A513D8;
    return;
L_08A513D8:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A513E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A513E8u) goto L_08A513E8;
    return;
L_08A513E8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[31] = (0x08A513F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A513F4u) goto L_08A513F4;
    return;
L_08A513F4:
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A51408u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51408u) goto L_08A51408;
    return;
L_08A51408:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51418u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 282u, 0x08A4D418u>(ctx, &aot_mem) && ctx.pc == 0x08A51418u) goto L_08A51418;
    return;
L_08A51418:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x08A51424u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A51424u) goto L_08A51424;
    return;
L_08A51424:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A51434u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A51434u) goto L_08A51434;
    return;
L_08A51434:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A51444u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A51444u) goto L_08A51444;
    return;
L_08A51444:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A51450u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A51450u) goto L_08A51450;
    return;
L_08A51450:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A519CC;
      }
      goto L_08A51458;
    }
L_08A51458:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5134C;
      }
      goto L_08A51460;
    }
L_08A51460:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[6] = (48896u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A5147Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A5147Cu) goto L_08A5147C;
    return;
L_08A5147C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51488u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A51488u) goto L_08A51488;
    return;
L_08A51488:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A514B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A514B0u) goto L_08A514B0;
    return;
L_08A514B0:
    ctx.gpr[6] = (16128u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A514C4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A514C4u) goto L_08A514C4;
    return;
L_08A514C4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A514D4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A514D4u) goto L_08A514D4;
    return;
L_08A514D4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A514E0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A514E0u) goto L_08A514E0;
    return;
L_08A514E0:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x08A514ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A514ECu) goto L_08A514EC;
    return;
L_08A514EC:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A514FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A514FCu) goto L_08A514FC;
    return;
L_08A514FC:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[31] = (0x08A51508u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51508u) goto L_08A51508;
    return;
L_08A51508:
    ctx.gpr[5] = (16294u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A51520u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51520u) goto L_08A51520;
    return;
L_08A51520:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51530u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 282u, 0x08A4D418u>(ctx, &aot_mem) && ctx.pc == 0x08A51530u) goto L_08A51530;
    return;
L_08A51530:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x08A5153Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A5153Cu) goto L_08A5153C;
    return;
L_08A5153C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A5154Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A5154Cu) goto L_08A5154C;
    return;
L_08A5154C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A5155Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A5155Cu) goto L_08A5155C;
    return;
L_08A5155C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A51568u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A51568u) goto L_08A51568;
    return;
L_08A51568:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A519CC;
      }
      goto L_08A51570;
    }
L_08A51570:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(6816)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51588:
    ctx.gpr[4] = (16051u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A515A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A515A8u) goto L_08A515A8;
    return;
L_08A515A8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A515B4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A515B4u) goto L_08A515B4;
    return;
L_08A515B4:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[31] = (0x08A515D8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A515D8u) goto L_08A515D8;
    return;
L_08A515D8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A515E8u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A515E8u) goto L_08A515E8;
    return;
L_08A515E8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A515F8u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A515F8u) goto L_08A515F8;
    return;
L_08A515F8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51604u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A51604u) goto L_08A51604;
    return;
L_08A51604:
    ctx.gpr[31] = (0x08A5160Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5160Cu) goto L_08A5160C;
    return;
L_08A5160C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x08A5161Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5161Cu) goto L_08A5161C;
    return;
L_08A5161C:
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A51634u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51634u) goto L_08A51634;
    return;
L_08A51634:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51644u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 282u, 0x08A4D418u>(ctx, &aot_mem) && ctx.pc == 0x08A51644u) goto L_08A51644;
    return;
L_08A51644:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[31] = (0x08A51650u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A51650u) goto L_08A51650;
    return;
L_08A51650:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A51660u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A51660u) goto L_08A51660;
    return;
L_08A51660:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A51670u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A51670u) goto L_08A51670;
    return;
L_08A51670:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A5167Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5167Cu) goto L_08A5167C;
    return;
L_08A5167C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A519CC;
      }
      goto L_08A51694;
    }
L_08A51694:
    ctx.gpr[4] = (15912u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A516B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A516B4u) goto L_08A516B4;
    return;
L_08A516B4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A516C0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A516C0u) goto L_08A516C0;
    return;
L_08A516C0:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A516E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A516E4u) goto L_08A516E4;
    return;
L_08A516E4:
    ctx.gpr[5] = (15897u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A516FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A516FCu) goto L_08A516FC;
    return;
L_08A516FC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5170Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5170Cu) goto L_08A5170C;
    return;
L_08A5170C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51718u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A51718u) goto L_08A51718;
    return;
L_08A51718:
    ctx.gpr[31] = (0x08A51720u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51720u) goto L_08A51720;
    return;
L_08A51720:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[31] = (0x08A51730u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51730u) goto L_08A51730;
    return;
L_08A51730:
    ctx.gpr[5] = (16166u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A51748u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51748u) goto L_08A51748;
    return;
L_08A51748:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51758u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 282u, 0x08A4D418u>(ctx, &aot_mem) && ctx.pc == 0x08A51758u) goto L_08A51758;
    return;
L_08A51758:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x08A51764u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A51764u) goto L_08A51764;
    return;
L_08A51764:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A51774u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A51774u) goto L_08A51774;
    return;
L_08A51774:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A51784u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A51784u) goto L_08A51784;
    return;
L_08A51784:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A51790u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A51790u) goto L_08A51790;
    return;
L_08A51790:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A519CC;
      }
      goto L_08A517A8;
    }
L_08A517A8:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[6] = (48640u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A517C4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A517C4u) goto L_08A517C4;
    return;
L_08A517C4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A517D0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A517D0u) goto L_08A517D0;
    return;
L_08A517D0:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A517F8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A517F8u) goto L_08A517F8;
    return;
L_08A517F8:
    ctx.gpr[6] = (16000u << 16u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[31] = (0x08A5180Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5180Cu) goto L_08A5180C;
    return;
L_08A5180C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A5181Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5181Cu) goto L_08A5181C;
    return;
L_08A5181C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51828u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A51828u) goto L_08A51828;
    return;
L_08A51828:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[31] = (0x08A51834u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51834u) goto L_08A51834;
    return;
L_08A51834:
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51844u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A51844u) goto L_08A51844;
    return;
L_08A51844:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    ctx.gpr[31] = (0x08A51850u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51850u) goto L_08A51850;
    return;
L_08A51850:
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A51868u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51868u) goto L_08A51868;
    return;
L_08A51868:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51878u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 282u, 0x08A4D418u>(ctx, &aot_mem) && ctx.pc == 0x08A51878u) goto L_08A51878;
    return;
L_08A51878:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[31] = (0x08A51884u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A51884u) goto L_08A51884;
    return;
L_08A51884:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A51894u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A51894u) goto L_08A51894;
    return;
L_08A51894:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A518A4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A518A4u) goto L_08A518A4;
    return;
L_08A518A4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A518B0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A518B0u) goto L_08A518B0;
    return;
L_08A518B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A519CC;
      }
      goto L_08A518C0;
    }
L_08A518C0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1184));
    ctx.gpr[6] = (48896u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x08A518DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A518DCu) goto L_08A518DC;
    return;
L_08A518DC:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A518E8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A518E8u) goto L_08A518E8;
    return;
L_08A518E8:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(1168));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A5190Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5190Cu) goto L_08A5190C;
    return;
L_08A5190C:
    ctx.gpr[5] = (16051u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A51924u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51924u) goto L_08A51924;
    return;
L_08A51924:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A51934u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51934u) goto L_08A51934;
    return;
L_08A51934:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51940u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 566u, 0x089274C4u>(ctx, &aot_mem) && ctx.pc == 0x08A51940u) goto L_08A51940;
    return;
L_08A51940:
    ctx.gpr[31] = (0x08A51948u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51948u) goto L_08A51948;
    return;
L_08A51948:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(1152));
    ctx.gpr[31] = (0x08A51958u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 342u, 0x08AF981Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51958u) goto L_08A51958;
    return;
L_08A51958:
    ctx.gpr[5] = (16364u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A51970u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51970u) goto L_08A51970;
    return;
L_08A51970:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51980u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 282u, 0x08A4D418u>(ctx, &aot_mem) && ctx.pc == 0x08A51980u) goto L_08A51980;
    return;
L_08A51980:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1136));
    ctx.gpr[31] = (0x08A5198Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 343u, 0x08AF9824u>(ctx, &aot_mem) && ctx.pc == 0x08A5198Cu) goto L_08A5198C;
    return;
L_08A5198C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A5199Cu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 283u, 0x08A4D430u>(ctx, &aot_mem) && ctx.pc == 0x08A5199Cu) goto L_08A5199C;
    return;
L_08A5199C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A519ACu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 281u, 0x08A4D400u>(ctx, &aot_mem) && ctx.pc == 0x08A519ACu) goto L_08A519AC;
    return;
L_08A519AC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[31] = (0x08A519B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 293u, 0x08A4D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A519B8u) goto L_08A519B8;
    return;
L_08A519B8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A519CC;
L_08A519CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
        goto L_08A519F0;
    }
    goto L_08A519DC;
L_08A519DC:
    ctx.gpr[5] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[31] = (0x08A519ECu);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 294u, 0x08A4D4F8u>(ctx, &aot_mem) && ctx.pc == 0x08A519ECu) goto L_08A519EC;
    return;
L_08A519EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1028))))));
    goto L_08A519F0;
L_08A519F0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (14749u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18770u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (0u | 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.fpr[17] = ctx.fpr[14] + ctx.fpr[17];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1008)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1012)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.gpr[31] = (0x08A51A2Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1000), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x08A51A2Cu) goto L_08A51A2C;
    return;
L_08A51A2C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1016)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51BB4;
      }
      goto L_08A51A50;
    }
L_08A51A50:
    ctx.gpr[31] = (0x08A51A58u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 523u, 0x08927014u>(ctx, &aot_mem) && ctx.pc == 0x08A51A58u) goto L_08A51A58;
    return;
L_08A51A58:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (17036u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (15820u << 16u);
      if (branch_taken) {
          goto L_08A51BB4;
      }
      goto L_08A51A84;
    }
L_08A51A84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1200));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(992));
    ctx.gpr[6] = (16192u << 16u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1016), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A51AB8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 284u, 0x08A4D44Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51AB8u) goto L_08A51AB8;
    return;
L_08A51AB8:
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[22] = ctx.fpr[24] + ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A51AD0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 401u, 0x08A4DE3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51AD0u) goto L_08A51AD0;
    return;
L_08A51AD0:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (17076u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A51AE8u);
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 401u, 0x08A4DE3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51AE8u) goto L_08A51AE8;
    return;
L_08A51AE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.gpr[21] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-9708)));
    ctx.gpr[22] = (2229u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-9704)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (0u | 44u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[12];
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[11] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A51B3Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08A51B3Cu) goto L_08A51B3C;
    return;
L_08A51B3C:
    ctx.gpr[4] = (16076u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.gpr[31] = (0x08A51B50u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 401u, 0x08A4DE3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51B50u) goto L_08A51B50;
    return;
L_08A51B50:
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (16948u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x08A51B68u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 401u, 0x08A4DE3Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51B68u) goto L_08A51B68;
    return;
L_08A51B68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1000)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-9708)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-9704)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (0u | 45u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.fpr[14] = ctx.fpr[16] + ctx.fpr[12];
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(56));
    ctx.gpr[9] = (ctx.gpr[17] | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A51BB4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 269u, 0x089998F8u>(ctx, &aot_mem) && ctx.pc == 0x08A51BB4u) goto L_08A51BB4;
    return;
L_08A51BB4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1024)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51C74;
      }
      goto L_08A51BCC;
    }
L_08A51BCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51C74;
      }
      goto L_08A51BE4;
    }
L_08A51BE4:
    ctx.gpr[31] = (0x08A51BECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51BECu) goto L_08A51BEC;
    return;
L_08A51BEC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A51C74;
      }
      goto L_08A51BF8;
    }
L_08A51BF8:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(1216));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[31] = (0x08A51C1Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 289u, 0x08A4D490u>(ctx, &aot_mem) && ctx.pc == 0x08A51C1Cu) goto L_08A51C1C;
    return;
L_08A51C1C:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(1232));
    ctx.gpr[31] = (0x08A51C28u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51C28u) goto L_08A51C28;
    return;
L_08A51C28:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A51C34u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 290u, 0x08A4D4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A51C34u) goto L_08A51C34;
    return;
L_08A51C34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1232)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1236)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1240)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(260));
    ctx.gpr[31] = (0x08A51C4Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x08A51C4Cu) goto L_08A51C4C;
    return;
L_08A51C4C:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(1240), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 7u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 65u);
    ctx.gpr[31] = (0x08A51C74u);
    ctx.gpr[9] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0115_entry, 115u, 607u, 0x089D2784u>(ctx, &aot_mem) && ctx.pc == 0x08A51C74u) goto L_08A51C74;
    return;
L_08A51C74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1024), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51CA0;
      }
      goto L_08A51C80;
    }
L_08A51C80:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(948))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(948), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A51CA0;
L_08A51CA0:
    ctx.gpr[31] = (0x08A51CA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 351u, 0x08AF987Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51CA8u) goto L_08A51CA8;
    return;
L_08A51CA8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A51D8C;
      }
      goto L_08A51CB4;
    }
L_08A51CB4:
    ctx.gpr[31] = (0x08A51CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A51CBCu) goto L_08A51CBC;
    return;
L_08A51CBC:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[0] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51D8C;
      }
      goto L_08A51CD0;
    }
L_08A51CD0:
    ctx.gpr[31] = (0x08A51CD8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 411u, 0x08AF9D00u>(ctx, &aot_mem) && ctx.pc == 0x08A51CD8u) goto L_08A51CD8;
    return;
L_08A51CD8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A51D34;
      }
      goto L_08A51CE0;
    }
L_08A51CE0:
    ctx.gpr[4] = (15969u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51D20;
      }
      goto L_08A51D00;
    }
L_08A51D00:
    ctx.gpr[31] = (0x08A51D08u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A51D08u) goto L_08A51D08;
    return;
L_08A51D08:
    ctx.gpr[4] = (14979u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A51D20;
L_08A51D20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A51D2Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 427u, 0x088A2208u>(ctx, &aot_mem) && ctx.pc == 0x08A51D2Cu) goto L_08A51D2C;
    return;
L_08A51D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51DA8;
      }
      goto L_08A51D34;
    }
L_08A51D34:
    ctx.gpr[31] = (0x08A51D3Cu);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A51D3Cu) goto L_08A51D3C;
    return;
L_08A51D3C:
    ctx.gpr[4] = (14851u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51D80;
      }
      goto L_08A51D5C;
    }
L_08A51D5C:
    ctx.gpr[31] = (0x08A51D64u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 340u, 0x08AF97F4u>(ctx, &aot_mem) && ctx.pc == 0x08A51D64u) goto L_08A51D64;
    return;
L_08A51D64:
    ctx.gpr[4] = (14851u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51DA8;
      }
      goto L_08A51D80;
    }
L_08A51D80:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51DA8;
      }
      goto L_08A51D8C;
    }
L_08A51D8C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16179)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51DA8;
      }
      goto L_08A51D9C;
    }
L_08A51D9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A51DA8u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 427u, 0x088A2208u>(ctx, &aot_mem) && ctx.pc == 0x08A51DA8u) goto L_08A51DA8;
    return;
L_08A51DA8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(949)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A51E38;
      }
      goto L_08A51DB4;
    }
L_08A51DB4:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (50716u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(952)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 16374u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A51DF0;
      }
      goto L_08A51DE0;
    }
L_08A51DE0:
    ctx.gpr[31] = (0x08A51DE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 392u, 0x08AF9B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51DE8u) goto L_08A51DE8;
    return;
L_08A51DE8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(952), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_08A51E38;
      }
      goto L_08A51DF0;
    }
L_08A51DF0:
    ctx.gpr[31] = (0x08A51DF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 392u, 0x08AF9B8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51DF8u) goto L_08A51DF8;
    return;
L_08A51DF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(952)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A51E08u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[0];
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 348u, 0x08AF985Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51E08u) goto L_08A51E08;
    return;
L_08A51E08:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(1248));
    ctx.gpr[31] = (0x08A51E14u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 290u, 0x08A4D4A4u>(ctx, &aot_mem) && ctx.pc == 0x08A51E14u) goto L_08A51E14;
    return;
L_08A51E14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A51E20u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 495u, 0x08A062F0u>(ctx, &aot_mem) && ctx.pc == 0x08A51E20u) goto L_08A51E20;
    return;
L_08A51E20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1252)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1256)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A51E38;
L_08A51E38:
    ctx.gpr[31] = (0x08A51E40u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 628u, 0x0889F00Cu>(ctx, &aot_mem) && ctx.pc == 0x08A51E40u) goto L_08A51E40;
    return;
L_08A51E40:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1636)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1640)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1644)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1648)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1652)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1656)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1660)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1664)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1668)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1672)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1676)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1680)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1684)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1688)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1692)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1696));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A51E84:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A51EC8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 509u, 0x0889E8ACu>(ctx, &aot_mem) && ctx.pc == 0x08A51EC8u) goto L_08A51EC8;
    return;
L_08A51EC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1000));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-988));
      if (branch_taken) {
          goto L_08A52480;
      }
      goto L_08A51EF8;
    }
L_08A51EF8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = ctx.fpr[12] / ctx.fpr[15];
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16073u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A51F6C;
    }
    goto L_08A51F6C;
L_08A51F6C:
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[4] = (17279u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A51FA4;
      }
      goto L_08A51F90;
    }
L_08A51F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u | 192u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A522D8;
      }
      goto L_08A51FA4;
    }
L_08A51FA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5207C;
      }
      goto L_08A51FB0;
    }
L_08A51FB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16068u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 38922u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A5200C;
      }
      goto L_08A51FF4;
    }
L_08A51FF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A52010;
      }
      goto L_08A52004;
    }
L_08A52004:
    ctx.gpr[31] = (0x08A5200Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A5200Cu) goto L_08A5200C;
    return;
L_08A5200C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A52010;
L_08A52010:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52028u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52028u) goto L_08A52028;
    return;
L_08A52028:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A5204Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A5204Cu) goto L_08A5204C;
    return;
L_08A5204C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A52060u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06698u>(ctx, &aot_mem) && ctx.pc == 0x08A52060u) goto L_08A52060;
    return;
L_08A52060:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A52074u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A52074u) goto L_08A52074;
    return;
L_08A52074:
    ctx.gpr[31] = (0x08A5207Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5207Cu) goto L_08A5207C;
    return;
L_08A5207C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(876)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52104;
      }
      goto L_08A52088;
    }
L_08A52088:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(876)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A520B4;
      }
      goto L_08A5209C;
    }
L_08A5209C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A520B8;
      }
      goto L_08A520AC;
    }
L_08A520AC:
    ctx.gpr[31] = (0x08A520B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A520B4u) goto L_08A520B4;
    return;
L_08A520B4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A520B8;
L_08A520B8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A520D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A520D0u) goto L_08A520D0;
    return;
L_08A520D0:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A520E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x08A520E8u) goto L_08A520E8;
    return;
L_08A520E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A520FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A520FCu) goto L_08A520FC;
    return;
L_08A520FC:
    ctx.gpr[31] = (0x08A52104u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A52104u) goto L_08A52104;
    return;
L_08A52104:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52188;
      }
      goto L_08A52110;
    }
L_08A52110:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A5213C;
      }
      goto L_08A52124;
    }
L_08A52124:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A52140;
      }
      goto L_08A52134;
    }
L_08A52134:
    ctx.gpr[31] = (0x08A5213Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A5213Cu) goto L_08A5213C;
    return;
L_08A5213C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A52140;
L_08A52140:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52158u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52158u) goto L_08A52158;
    return;
L_08A52158:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.gpr[31] = (0x08A5216Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x08A5216Cu) goto L_08A5216C;
    return;
L_08A5216C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A52180u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A52180u) goto L_08A52180;
    return;
L_08A52180:
    ctx.gpr[31] = (0x08A52188u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A52188u) goto L_08A52188;
    return;
L_08A52188:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(884)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52230;
      }
      goto L_08A52194;
    }
L_08A52194:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(884)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A521C0;
      }
      goto L_08A521A8;
    }
L_08A521A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A521C4;
      }
      goto L_08A521B8;
    }
L_08A521B8:
    ctx.gpr[31] = (0x08A521C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A521C0u) goto L_08A521C0;
    return;
L_08A521C0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A521C4;
L_08A521C4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A521DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A521DCu) goto L_08A521DC;
    return;
L_08A521DC:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08A521ECu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A521ECu) goto L_08A521EC;
    return;
L_08A521EC:
    ctx.gpr[31] = (0x08A521F4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 812u, 0x08A972D8u>(ctx, &aot_mem) && ctx.pc == 0x08A521F4u) goto L_08A521F4;
    return;
L_08A521F4:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A52214u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x08A52214u) goto L_08A52214;
    return;
L_08A52214:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A52228u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A52228u) goto L_08A52228;
    return;
L_08A52228:
    ctx.gpr[31] = (0x08A52230u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A52230u) goto L_08A52230;
    return;
L_08A52230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(888)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A522D8;
      }
      goto L_08A5223C;
    }
L_08A5223C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(888)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A52268;
      }
      goto L_08A52250;
    }
L_08A52250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A5226C;
      }
      goto L_08A52260;
    }
L_08A52260:
    ctx.gpr[31] = (0x08A52268u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A52268u) goto L_08A52268;
    return;
L_08A52268:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A5226C;
L_08A5226C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52284u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52284u) goto L_08A52284;
    return;
L_08A52284:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08A52294u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A52294u) goto L_08A52294;
    return;
L_08A52294:
    ctx.gpr[31] = (0x08A5229Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 812u, 0x08A972D8u>(ctx, &aot_mem) && ctx.pc == 0x08A5229Cu) goto L_08A5229C;
    return;
L_08A5229C:
    ctx.gpr[4] = (0u - ctx.gpr[2]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15360u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x08A522BCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x08A522BCu) goto L_08A522BC;
    return;
L_08A522BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A522D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A522D0u) goto L_08A522D0;
    return;
L_08A522D0:
    ctx.gpr[31] = (0x08A522D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A522D8u) goto L_08A522D8;
    return;
L_08A522D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52394;
      }
      goto L_08A522E4;
    }
L_08A522E4:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (2213u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11160));
      if (branch_taken) {
          goto L_08A52318;
      }
      goto L_08A52300;
    }
L_08A52300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A5231C;
      }
      goto L_08A52310;
    }
L_08A52310:
    ctx.gpr[31] = (0x08A52318u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A52318u) goto L_08A52318;
    return;
L_08A52318:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(16));
    goto L_08A5231C;
L_08A5231C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52334u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52334u) goto L_08A52334;
    return;
L_08A52334:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[31] = (0x08A52348u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 488u, 0x08A05FACu>(ctx, &aot_mem) && ctx.pc == 0x08A52348u) goto L_08A52348;
    return;
L_08A52348:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A5235Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A5235Cu) goto L_08A5235C;
    return;
L_08A5235C:
    ctx.gpr[31] = (0x08A52364u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A52364u) goto L_08A52364;
    return;
L_08A52364:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A52378u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 116u, 0x08A5CFF4u>(ctx, &aot_mem) && ctx.pc == 0x08A52378u) goto L_08A52378;
    return;
L_08A52378:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52394;
      }
      goto L_08A52384;
    }
L_08A52384:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A52394u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 122u, 0x088A0894u>(ctx, &aot_mem) && ctx.pc == 0x08A52394u) goto L_08A52394;
    return;
L_08A52394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5246C;
      }
      goto L_08A523A0;
    }
L_08A523A0:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (2213u << 16u);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-11160));
      if (branch_taken) {
          goto L_08A523D4;
      }
      goto L_08A523BC;
    }
L_08A523BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A523D8;
      }
      goto L_08A523CC;
    }
L_08A523CC:
    ctx.gpr[31] = (0x08A523D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A523D4u) goto L_08A523D4;
    return;
L_08A523D4:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A523D8;
L_08A523D8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A523F0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A523F0u) goto L_08A523F0;
    return;
L_08A523F0:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A52408u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 488u, 0x08A05FACu>(ctx, &aot_mem) && ctx.pc == 0x08A52408u) goto L_08A52408;
    return;
L_08A52408:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A5241Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A5241Cu) goto L_08A5241C;
    return;
L_08A5241C:
    ctx.gpr[31] = (0x08A52424u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A52424u) goto L_08A52424;
    return;
L_08A52424:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A52438u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 116u, 0x08A5CFF4u>(ctx, &aot_mem) && ctx.pc == 0x08A52438u) goto L_08A52438;
    return;
L_08A52438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5246C;
      }
      goto L_08A52444;
    }
L_08A52444:
    ctx.gpr[5] = (0u | 150u);
    ctx.gpr[23] = (ctx.gpr[5] - ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < 0 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[23] = (0u | 0u);
        goto L_08A5245C;
    }
    goto L_08A5245C;
L_08A5245C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A5246Cu);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 122u, 0x088A0894u>(ctx, &aot_mem) && ctx.pc == 0x08A5246Cu) goto L_08A5246C;
    return;
L_08A5246C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A52478u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 360u, 0x0892AE44u>(ctx, &aot_mem) && ctx.pc == 0x08A52478u) goto L_08A52478;
    return;
L_08A52478:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-988));
      if (branch_taken) {
          goto L_08A52664;
      }
      goto L_08A52480;
    }
L_08A52480:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-987));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A524CC;
      }
      goto L_08A52490;
    }
L_08A52490:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-991));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A524CC;
      }
      goto L_08A524A0;
    }
L_08A524A0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A524CC;
      }
      goto L_08A524AC;
    }
L_08A524AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-974));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A524CC;
      }
      goto L_08A524BC;
    }
L_08A524BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-990));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A52664;
      }
      goto L_08A524CC;
    }
L_08A524CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52554;
      }
      goto L_08A524D8;
    }
L_08A524D8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(872)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A52504;
      }
      goto L_08A524EC;
    }
L_08A524EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A52508;
      }
      goto L_08A524FC;
    }
L_08A524FC:
    ctx.gpr[31] = (0x08A52504u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A52504u) goto L_08A52504;
    return;
L_08A52504:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A52508;
L_08A52508:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52520u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52520u) goto L_08A52520;
    return;
L_08A52520:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A52538u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x08A52538u) goto L_08A52538;
    return;
L_08A52538:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A5254Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A5254Cu) goto L_08A5254C;
    return;
L_08A5254C:
    ctx.gpr[31] = (0x08A52554u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A52554u) goto L_08A52554;
    return;
L_08A52554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(884)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A525DC;
      }
      goto L_08A52560;
    }
L_08A52560:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(884)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A5258C;
      }
      goto L_08A52574;
    }
L_08A52574:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A52590;
      }
      goto L_08A52584;
    }
L_08A52584:
    ctx.gpr[31] = (0x08A5258Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A5258Cu) goto L_08A5258C;
    return;
L_08A5258C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A52590;
L_08A52590:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A525A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A525A8u) goto L_08A525A8;
    return;
L_08A525A8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A525C0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x08A525C0u) goto L_08A525C0;
    return;
L_08A525C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A525D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A525D4u) goto L_08A525D4;
    return;
L_08A525D4:
    ctx.gpr[31] = (0x08A525DCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A525DCu) goto L_08A525DC;
    return;
L_08A525DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(888)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52664;
      }
      goto L_08A525E8;
    }
L_08A525E8:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(888)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A52614;
      }
      goto L_08A525FC;
    }
L_08A525FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A52618;
      }
      goto L_08A5260C;
    }
L_08A5260C:
    ctx.gpr[31] = (0x08A52614u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A52614u) goto L_08A52614;
    return;
L_08A52614:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A52618;
L_08A52618:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52630u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52630u) goto L_08A52630;
    return;
L_08A52630:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(584)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[31] = (0x08A52648u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x08A52648u) goto L_08A52648;
    return;
L_08A52648:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A5265Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A5265Cu) goto L_08A5265C;
    return;
L_08A5265C:
    ctx.gpr[31] = (0x08A52664u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A52664u) goto L_08A52664;
    return;
L_08A52664:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A52680;
      }
      goto L_08A52670;
    }
L_08A52670:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-990));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A5273C;
      }
      goto L_08A52680;
    }
L_08A52680:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(876)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A5273C;
      }
      goto L_08A5268C;
    }
L_08A5268C:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(896));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A526A8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 642u, 0x08A071A4u>(ctx, &aot_mem) && ctx.pc == 0x08A526A8u) goto L_08A526A8;
    return;
L_08A526A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(905)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(908)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(876)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A526E8;
      }
      goto L_08A526D0;
    }
L_08A526D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A526EC;
      }
      goto L_08A526E0;
    }
L_08A526E0:
    ctx.gpr[31] = (0x08A526E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A526E8u) goto L_08A526E8;
    return;
L_08A526E8:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A526EC;
L_08A526EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52704u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52704u) goto L_08A52704;
    return;
L_08A52704:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[31] = (0x08A52720u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A52720u) goto L_08A52720;
    return;
L_08A52720:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A52734u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A52734u) goto L_08A52734;
    return;
L_08A52734:
    ctx.gpr[31] = (0x08A5273Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A5273Cu) goto L_08A5273C;
    return;
L_08A5273C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_08A52AE0;
      }
      goto L_08A52748;
    }
L_08A52748:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A529B0;
      }
      goto L_08A52754;
    }
L_08A52754:
    ctx.gpr[5] = (48969u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(880)));
    ctx.gpr[5] = (16268u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (ctx.gpr[5] | 48716u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A5279C;
      }
      goto L_08A52784;
    }
L_08A52784:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A527A0;
      }
      goto L_08A52794;
    }
L_08A52794:
    ctx.gpr[31] = (0x08A5279Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A5279Cu) goto L_08A5279C;
    return;
L_08A5279C:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A527A0;
L_08A527A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A527B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A527B8u) goto L_08A527B8;
    return;
L_08A527B8:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[22]) || std::isnan(ctx.fpr[20])) && ctx.fpr[22] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
      if (branch_taken) {
          goto L_08A527F0;
      }
      goto L_08A527D8;
    }
L_08A527D8:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A527F4;
    }
    goto L_08A527E8;
L_08A527E8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_08A52800;
      }
      goto L_08A527F0;
    }
L_08A527F0:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A527F4;
L_08A527F4:
    ctx.gpr[31] = (0x08A527FCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08A527FCu) goto L_08A527FC;
    return;
L_08A527FC:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A52800;
L_08A52800:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_08A52834;
      }
      goto L_08A52818;
    }
L_08A52818:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[20])) && ctx.fpr[13] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52834;
      }
      goto L_08A52828;
    }
L_08A52828:
    ctx.fpr[20] = ctx.fpr[22] + ctx.fpr[20];
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[20];
      if (branch_taken) {
          goto L_08A52844;
      }
      goto L_08A52834;
    }
L_08A52834:
    ctx.gpr[31] = (0x08A5283Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5283Cu) goto L_08A5283C;
    return;
L_08A5283C:
    ctx.fpr[20] = ctx.fpr[22] + ctx.fpr[0];
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[20];
    goto L_08A52844;
L_08A52844:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A52850u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x08A52850u) goto L_08A52850;
    return;
L_08A52850:
    ctx.gpr[4] = (16329u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A52880;
      }
      goto L_08A5286C;
    }
L_08A5286C:
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[20];
      if (branch_taken) {
          goto L_08A528AC;
      }
      goto L_08A52880;
    }
L_08A52880:
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A528AC;
      }
      goto L_08A5289C;
    }
L_08A5289C:
    ctx.gpr[4] = (49225u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[20];
    goto L_08A528AC;
L_08A528AC:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A528C4;
      }
      goto L_08A528BC;
    }
L_08A528BC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
      if (branch_taken) {
          goto L_08A528E4;
      }
      goto L_08A528C4;
    }
L_08A528C4:
    ctx.gpr[4] = (49036u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48716u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A528E4;
      }
      goto L_08A528E0;
    }
L_08A528E0:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A528E4;
L_08A528E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7688)));
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (15107u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[15];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[5] = (16255u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 40370u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[6]);
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
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17402u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[15] / ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(852), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.gpr[31] = (0x08A52994u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x08A52994u) goto L_08A52994;
    return;
L_08A52994:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A529A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A529A8u) goto L_08A529A8;
    return;
L_08A529A8:
    ctx.gpr[31] = (0x08A529B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A529B0u) goto L_08A529B0;
    return;
L_08A529B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08A52C08;
    }
    goto L_08A529BC;
L_08A529BC:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A529E8;
      }
      goto L_08A529D0;
    }
L_08A529D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A529EC;
      }
      goto L_08A529E0;
    }
L_08A529E0:
    ctx.gpr[31] = (0x08A529E8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A529E8u) goto L_08A529E8;
    return;
L_08A529E8:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    goto L_08A529EC;
L_08A529EC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52A04u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52A04u) goto L_08A52A04;
    return;
L_08A52A04:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[31] = (0x08A52A18u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 488u, 0x08A05FACu>(ctx, &aot_mem) && ctx.pc == 0x08A52A18u) goto L_08A52A18;
    return;
L_08A52A18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A52A2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A52A2Cu) goto L_08A52A2C;
    return;
L_08A52A2C:
    ctx.gpr[31] = (0x08A52A34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A52A34u) goto L_08A52A34;
    return;
L_08A52A34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7688)));
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16180u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
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
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A52C08;
      }
      goto L_08A52AE0;
    }
L_08A52AE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 196u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A52B00;
      }
      goto L_08A52AF0;
    }
L_08A52AF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 195u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08A52C08;
    }
    goto L_08A52B00;
L_08A52B00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
        goto L_08A52BE4;
    }
    goto L_08A52B0C;
L_08A52B0C:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A52B38;
      }
      goto L_08A52B20;
    }
L_08A52B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_08A52B3C;
      }
      goto L_08A52B30;
    }
L_08A52B30:
    ctx.gpr[31] = (0x08A52B38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A52B38u) goto L_08A52B38;
    return;
L_08A52B38:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(16));
    goto L_08A52B3C;
L_08A52B3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A52B54u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x08A52B54u) goto L_08A52B54;
    return;
L_08A52B54:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    ctx.gpr[31] = (0x08A52B68u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 490u, 0x08A05FD4u>(ctx, &aot_mem) && ctx.pc == 0x08A52B68u) goto L_08A52B68;
    return;
L_08A52B68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08A52B7Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A52B7Cu) goto L_08A52B7C;
    return;
L_08A52B7C:
    ctx.gpr[31] = (0x08A52B84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A52B84u) goto L_08A52B84;
    return;
L_08A52B84:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(16172)));
    if (ctx.gpr[4] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
        goto L_08A52BE4;
    }
    goto L_08A52B94;
L_08A52B94:
    ctx.gpr[31] = (0x08A52B9Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x08A52B9Cu) goto L_08A52B9C;
    return;
L_08A52B9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52BD0;
      }
      goto L_08A52BA8;
    }
L_08A52BA8:
    ctx.gpr[31] = (0x08A52BB0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x08A52BB0u) goto L_08A52BB0;
    return;
L_08A52BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[31] = (0x08A52BBCu);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x08A52BBCu) goto L_08A52BBC;
    return;
L_08A52BBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08A52BC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A52BC8u) goto L_08A52BC8;
    return;
L_08A52BC8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
      if (branch_taken) {
          goto L_08A52BE4;
      }
      goto L_08A52BD0;
    }
L_08A52BD0:
    ctx.gpr[31] = (0x08A52BD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 221u, 0x08A4CE74u>(ctx, &aot_mem) && ctx.pc == 0x08A52BD8u) goto L_08A52BD8;
    return;
L_08A52BD8:
    ctx.gpr[31] = (0x08A52BE0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 191u, 0x08AC9104u>(ctx, &aot_mem) && ctx.pc == 0x08A52BE0u) goto L_08A52BE0;
    return;
L_08A52BE0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(848)));
    goto L_08A52BE4;
L_08A52BE4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08A52C08;
L_08A52C08:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52C28;
      }
      goto L_08A52C14;
    }
L_08A52C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A52C28;
      }
      goto L_08A52C20;
    }
L_08A52C20:
    ctx.gpr[31] = (0x08A52C28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A52C28u) goto L_08A52C28;
    return;
L_08A52C28:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52C68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-560));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1000));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(540), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(552), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(556), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[30] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A52CE8;
      }
      goto L_08A52CAC;
    }
L_08A52CAC:
    ctx.gpr[23] = (2232u << 16u);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(-25488), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-25488));
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(4), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(6), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (2232u << 16u);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(10), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[17] = (0u | 255u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25472));
      if (branch_taken) {
          goto L_08A52CF0;
      }
      goto L_08A52CE8;
    }
L_08A52CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53900;
      }
      goto L_08A52CF0;
    }
L_08A52CF0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(18), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(19), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(26), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(27), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(72));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(ctx.gpr[17]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(31), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(104));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 194 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 196 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A52D9C;
      }
      goto L_08A52D70;
    }
L_08A52D70:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < -992 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < -973 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A52E44;
      }
      goto L_08A52D7C;
    }
L_08A52D7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(992));
      if (branch_taken) {
          goto L_08A52E44;
      }
      goto L_08A52D84;
    }
L_08A52D84:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(6888)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A52D9C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 197 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A52DE0;
      }
      goto L_08A52DA4;
    }
L_08A52DA4:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 195 ? 1u : 0u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[22] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A52E4C;
      }
      goto L_08A52DD4;
    }
L_08A52DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (16437u << 16u);
      if (branch_taken) {
          goto L_08A52F20;
      }
      goto L_08A52DDC;
    }
L_08A52DDC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 197 ? 1u : 0u);
    goto L_08A52DE0;
L_08A52DE0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16371u << 16u);
      if (branch_taken) {
          goto L_08A52E44;
      }
      goto L_08A52DE8;
    }
L_08A52DE8:
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49081u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16245u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (16313u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.gpr[4] = (49264u << 16u);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A53008;
      }
      goto L_08A52E44;
    }
L_08A52E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53900;
      }
      goto L_08A52E4C;
    }
L_08A52E4C:
    ctx.gpr[6] = (49043u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (49061u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 7866u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16238u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 5243u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16275u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (49292u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 31457u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24340)));
      if (branch_taken) {
          goto L_08A53718;
      }
      goto L_08A52F20;
    }
L_08A52F20:
    ctx.gpr[6] = (ctx.gpr[6] | 7864u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (49295u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (16212u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 31457u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (49139u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[6] = (16371u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] | 13107u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[6] = (49108u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] | 31457u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    ctx.gpr[6] = (16340u << 16u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] | 31457u);
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24340)));
      if (branch_taken) {
          goto L_08A53718;
      }
      goto L_08A53008;
    }
L_08A53008:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24340)));
      if (branch_taken) {
          goto L_08A53718;
      }
      goto L_08A530A4;
    }
L_08A530A4:
    ctx.gpr[4] = (16338u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3146u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16146u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 45089u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49080u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 54526u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (16130u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 19923u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[4] = (48972u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 2097u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 2097u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (48989u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16221u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24340)));
      if (branch_taken) {
          goto L_08A53718;
      }
      goto L_08A531C4;
    }
L_08A531C4:
    ctx.gpr[4] = (16484u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 10486u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16067u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 38273u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16212u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 48234u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (16067u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[4] = (48937u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 47710u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16169u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 47710u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (49035u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] | 8913u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16267u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (ctx.gpr[4] | 8913u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24340)));
      if (branch_taken) {
          goto L_08A53718;
      }
      goto L_08A532E4;
    }
L_08A532E4:
    ctx.gpr[4] = (49062u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49026u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 3146u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16130u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36700u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16294u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (49205u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16253u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    ctx.gpr[22] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24340)));
      if (branch_taken) {
          goto L_08A53718;
      }
      goto L_08A533E0;
    }
L_08A533E0:
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 16777u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16308u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23069u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49070u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 63963u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (16216u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 37749u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[4] = (49052u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 27263u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16284u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 27263u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (49054u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 47186u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16286u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 47186u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24340)));
      if (branch_taken) {
          goto L_08A53718;
      }
      goto L_08A53500;
    }
L_08A53500:
    ctx.gpr[4] = (49071u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48759u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16201u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 30933u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (49322u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 19923u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[4] = (49055u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 31982u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16287u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 31982u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (49026u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] | 61866u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (16258u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[4] | 61866u);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24340)));
      if (branch_taken) {
          goto L_08A53718;
      }
      goto L_08A53614;
    }
L_08A53614:
    ctx.gpr[4] = (16201u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 30933u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49137u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26739u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49174u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13631u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16369u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26739u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49301u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[4] = (16215u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36176u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[19] = (ctx.gpr[16] + static_cast<std::uint32_t>(84));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(116));
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(-991));
    ctx.gpr[22] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(456), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(460), std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24340)));
    goto L_08A53718;
L_08A53718:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-25472), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x08A53748u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A53748u) goto L_08A53748;
    return;
L_08A53748:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08A53754u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A53754u) goto L_08A53754;
    return;
L_08A53754:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(16172)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A53794;
      }
      goto L_08A53760;
    }
L_08A53760:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A53774u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868560u>(ctx, &aot_mem) && ctx.pc == 0x08A53774u) goto L_08A53774;
    return;
L_08A53774:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53794;
      }
      goto L_08A5377C;
    }
L_08A5377C:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A5378Cu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886885Cu>(ctx, &aot_mem) && ctx.pc == 0x08A5378Cu) goto L_08A5378C;
    return;
L_08A5378C:
    ctx.gpr[31] = (0x08A53794u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868844u>(ctx, &aot_mem) && ctx.pc == 0x08A53794u) goto L_08A53794;
    return;
L_08A53794:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[21];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A5388C;
      }
      goto L_08A537A0;
    }
L_08A537A0:
    ctx.gpr[4] = (16212u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48234u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16067u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49214u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 34603u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49035u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 8913u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(468), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(464), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(472), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (16267u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 8913u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (49036u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 27263u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] | 27263u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08A5388C;
      }
      goto L_08A5388C;
    }
L_08A5388C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A538F4;
      }
      goto L_08A53894;
    }
L_08A53894:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-25472), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(16172)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A538F4;
      }
      goto L_08A538C0;
    }
L_08A538C0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08A538D4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868560u>(ctx, &aot_mem) && ctx.pc == 0x08A538D4u) goto L_08A538D4;
    return;
L_08A538D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A538F4;
      }
      goto L_08A538DC;
    }
L_08A538DC:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A538ECu);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 71u, 0x0886885Cu>(ctx, &aot_mem) && ctx.pc == 0x08A538ECu) goto L_08A538EC;
    return;
L_08A538EC:
    ctx.gpr[31] = (0x08A538F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868844u>(ctx, &aot_mem) && ctx.pc == 0x08A538F4u) goto L_08A538F4;
    return;
L_08A538F4:
    ctx.gpr[4] = (0u | 14u);
    ctx.gpr[31] = (0x08A53900u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x08A53900u) goto L_08A53900;
    return;
L_08A53900:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(556)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53938:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(599))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 64u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53A84;
      }
      goto L_08A53974;
    }
L_08A53974:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u | 80u);
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    ctx.gpr[4] = (15877u << 16u);
      if (branch_taken) {
          goto L_08A53A84;
      }
      goto L_08A53988;
    }
L_08A53988:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 80u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16179u << 16u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(646), static_cast<std::uint16_t>(0u));
    ctx.gpr[20] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A539F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 297u, 0x088EE070u>(ctx, &aot_mem) && ctx.pc == 0x08A539F4u) goto L_08A539F4;
    return;
L_08A539F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x08A53A00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 588u, 0x0889EDC4u>(ctx, &aot_mem) && ctx.pc == 0x08A53A00u) goto L_08A53A00;
    return;
L_08A53A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A53A44u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 93u, 0x088A0730u>(ctx, &aot_mem) && ctx.pc == 0x08A53A44u) goto L_08A53A44;
    return;
L_08A53A44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 1u);
    ctx.gpr[31] = (0x08A53A68u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0144_entry, 144u, 406u, 0x08A46A1Cu>(ctx, &aot_mem) && ctx.pc == 0x08A53A68u) goto L_08A53A68;
    return;
L_08A53A68:
    ctx.gpr[31] = (0x08A53A70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 60u, 0x089183B8u>(ctx, &aot_mem) && ctx.pc == 0x08A53A70u) goto L_08A53A70;
    return;
L_08A53A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A53A8C;
      }
      goto L_08A53A7C;
    }
L_08A53A7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53DC8;
      }
      goto L_08A53A84;
    }
L_08A53A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53DC8;
      }
      goto L_08A53A8C;
    }
L_08A53A8C:
    ctx.gpr[18] = (2213u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-11160));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A53AACu);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 116u, 0x08A5CFF4u>(ctx, &aot_mem) && ctx.pc == 0x08A53AACu) goto L_08A53AAC;
    return;
L_08A53AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53AD8;
      }
      goto L_08A53AB8;
    }
L_08A53AB8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A53AC4u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08A53AC4u) goto L_08A53AC4;
    return;
L_08A53AC4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A53AE0;
      }
      goto L_08A53AD0;
    }
L_08A53AD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53AEC;
      }
      goto L_08A53AD8;
    }
L_08A53AD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53DC8;
      }
      goto L_08A53AE0;
    }
L_08A53AE0:
    ctx.gpr[31] = (0x08A53AE8u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 192u, 0x0883CF88u>(ctx, &aot_mem) && ctx.pc == 0x08A53AE8u) goto L_08A53AE8;
    return;
L_08A53AE8:
    ctx.gpr[17] = (ctx.gpr[21] | 0u);
    goto L_08A53AEC;
L_08A53AEC:
    ctx.gpr[21] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53CE8;
      }
      goto L_08A53AF8;
    }
L_08A53AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08A53B14u);
    ctx.gpr[5] = (0u | 245u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08A53B14u) goto L_08A53B14;
    return;
L_08A53B14:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x08A53B20u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 290u, 0x0883D718u>(ctx, &aot_mem) && ctx.pc == 0x08A53B20u) goto L_08A53B20;
    return;
L_08A53B20:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[31] = (0x08A53B2Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 213u, 0x08A5D6F0u>(ctx, &aot_mem) && ctx.pc == 0x08A53B2Cu) goto L_08A53B2C;
    return;
L_08A53B2C:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x08A53B38u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 224u, 0x08A5D7E4u>(ctx, &aot_mem) && ctx.pc == 0x08A53B38u) goto L_08A53B38;
    return;
L_08A53B38:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A53B44u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 169u, 0x08AC8DC8u>(ctx, &aot_mem) && ctx.pc == 0x08A53B44u) goto L_08A53B44;
    return;
L_08A53B44:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(28)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(52)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A53BD8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0177_entry, 177u, 184u, 0x08AC8ED4u>(ctx, &aot_mem) && ctx.pc == 0x08A53BD8u) goto L_08A53BD8;
    return;
L_08A53BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A53BE4u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 512u, 0x08926ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A53BE4u) goto L_08A53BE4;
    return;
L_08A53BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A53BF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 91u, 0x089C8788u>(ctx, &aot_mem) && ctx.pc == 0x08A53BF0u) goto L_08A53BF0;
    return;
L_08A53BF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08A53BFCu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 665u, 0x08A2EF70u>(ctx, &aot_mem) && ctx.pc == 0x08A53BFCu) goto L_08A53BFC;
    return;
L_08A53BFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16253u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 28836u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (15363u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16298u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 43691u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(3540)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(3540), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20000));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(440), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
      if (branch_taken) {
          goto L_08A53CF0;
      }
      goto L_08A53CD4;
    }
L_08A53CD4:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A53CF4;
      }
      goto L_08A53CE8;
    }
L_08A53CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53DC8;
      }
      goto L_08A53CF0;
    }
L_08A53CF0:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_08A53CF4;
L_08A53CF4:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(40)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A53D84;
      }
      goto L_08A53D78;
    }
L_08A53D78:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A53D84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x08A53D84u) goto L_08A53D84;
    return;
L_08A53D84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08A53D98u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A53D98u) goto L_08A53D98;
    return;
L_08A53D98:
    ctx.gpr[31] = (0x08A53DA0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A53DA0u) goto L_08A53DA0;
    return;
L_08A53DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A53DB4u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 116u, 0x08A5CFF4u>(ctx, &aot_mem) && ctx.pc == 0x08A53DB4u) goto L_08A53DB4;
    return;
L_08A53DB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A53DC8;
      }
      goto L_08A53DC0;
    }
L_08A53DC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(0u));
    goto L_08A53DC8;
L_08A53DC8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A53DF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-208));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (14979u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(184)));
    ctx.gpr[4] = (ctx.gpr[5] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1000)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[8] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1000));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_08A53E78;
      }
      goto L_08A53E6C;
    }
L_08A53E6C:
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-9736)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    goto L_08A53E78;
L_08A53E78:
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (15692u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
        goto L_08A53EB8;
    }
    goto L_08A53EB8;
L_08A53EB8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = ctx.fpr[22] / ctx.fpr[12];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(944)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(48)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[7] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[7] = (16128u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[7]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(52)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[7]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[8]);
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
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(56)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[7]);
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
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<8u, 4u>(vfpu_value); }
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 4u, 3u);
      ctx.read_vfpu_vector_ct<8u, 3u>(vfpu_target_raw);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(116)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(120)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.pc = 0x08A54000u; return;
}

void recomp_unit_0147(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0147_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_147(Runtime &runtime) {
    runtime.register_generated_unit(147u, 0x08A50000u, 16384u, &recomp_unit_0147, &recomp_unit_0147_entry);
    runtime.register_function(0x08A50000u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50004u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50008u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50010u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50018u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50024u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50030u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50060u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50074u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5007Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50084u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A500F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50118u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50120u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50134u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50148u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50150u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50164u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50178u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5017Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A501FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50208u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50210u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50220u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50230u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50240u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50250u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50274u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50284u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5028Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5029Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A502A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A502B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A502D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A502DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50300u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50310u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5031Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50324u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5037Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5038Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50398u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A503F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5040Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50414u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5044Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5045Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50468u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50470u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A504F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50518u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50524u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50540u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50550u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50558u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50560u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50568u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50570u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5057Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50594u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5059Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A505F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50604u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5061Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50628u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50690u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5069Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A506F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50708u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5070Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50734u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50744u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5075Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5078Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A507D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50804u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50828u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5083Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50854u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50860u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50898u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A508F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50904u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5090Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5092Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50934u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5094Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50954u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5095Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50964u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5096Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5097Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5098Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5099Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509C8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A509D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A04u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A10u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A4Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A5Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A68u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A74u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A84u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50A90u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AA4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AC0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AD0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AF4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50AFCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B04u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B0Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B3Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B48u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B70u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B84u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50B94u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BA0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BBCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BC8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50BFCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C0Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C1Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C28u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C30u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C48u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C58u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50C98u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CA4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CBCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CCCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CDCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CE8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50CF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D00u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D28u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D44u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D54u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D60u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D78u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D80u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50D88u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50DC8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50DD4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50DECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E04u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E14u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E28u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E38u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E60u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E6Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E7Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E8Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50E98u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EB0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EB8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EC0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50EFCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F24u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F38u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F48u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F54u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F60u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F70u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F7Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50F94u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FA4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FB0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FC0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FD0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FDCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FF4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A50FFCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51030u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5103Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51060u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51078u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51088u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51094u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5109Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A510F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51100u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5110Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51120u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51138u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51140u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51150u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51160u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51164u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A511F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5122Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51244u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5125Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A512B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A512C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A512DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51328u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51330u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51340u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5134Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51368u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51374u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51398u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A513B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A513C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A513CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A513D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A513E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A513F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51408u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51418u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51424u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51434u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51444u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51450u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51458u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51460u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5147Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51488u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A514FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51508u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51520u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51530u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5153Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5154Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5155Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51568u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51570u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51588u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A515F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51604u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5160Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5161Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51634u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51644u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51650u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51660u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51670u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5167Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51694u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A516B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A516C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A516E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A516FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5170Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51718u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51720u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51730u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51748u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51758u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51764u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51774u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51784u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51790u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A517F8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5180Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5181Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51828u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51834u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51844u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51850u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51868u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51878u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51884u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51894u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A518E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5190Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51924u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51934u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51940u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51948u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51958u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51970u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51980u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5198Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5199Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A519F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A2Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A58u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51A84u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51AB8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51AD0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51AE8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B3Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B50u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51B68u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51BB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51BCCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51BE4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51BECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51BF8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C1Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C28u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C4Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C74u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51C80u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CA0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CA8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CBCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CD0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CD8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51CE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D00u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D08u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D2Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D3Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D5Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D64u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D80u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D8Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51D9Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DA8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DE8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51DF8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E08u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E14u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E38u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E40u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51E84u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51EC8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51EF8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F6Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51F90u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51FA4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51FB0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A51FF4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52004u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5200Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52010u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52028u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5204Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52060u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52074u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5207Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52088u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5209Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A520ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A520B4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A520B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A520D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A520E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A520FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52104u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52110u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52124u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52134u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5213Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52140u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52158u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5216Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52180u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52188u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52194u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A521F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52214u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52228u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52230u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5223Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52250u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52260u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52268u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5226Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52284u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52294u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5229Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A522BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A522D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A522D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A522E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52300u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52310u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52318u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5231Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52334u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52348u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5235Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52364u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52378u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52384u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52394u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A523A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A523BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A523CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A523D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A523D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A523F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52408u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5241Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52424u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52438u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52444u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5245Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5246Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52478u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52480u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52490u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524CCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A524FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52504u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52508u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52520u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52538u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5254Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52554u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52560u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52574u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52584u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5258Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52590u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A525FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5260Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52614u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52618u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52630u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52648u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5265Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52664u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52670u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52680u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5268Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A526A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A526D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A526E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A526E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A526ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52704u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52720u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52734u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5273Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52748u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52754u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52784u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52794u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5279Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527B8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527D8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527F0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A527FCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52800u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52818u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52828u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52834u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5283Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52844u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52850u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5286Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52880u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5289Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528ACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A528E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52994u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529A8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529B0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529BCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529D0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529E8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A529ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A04u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A18u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A2Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52A34u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52AE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52AF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B00u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B0Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B30u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B38u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B3Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B54u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B68u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B7Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B84u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B94u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52B9Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52BA8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52BB0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52BBCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52BC8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52BD0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52BD8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52BE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52BE4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C08u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C14u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C28u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52C68u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52CACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52CE8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52CF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52D70u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52D7Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52D84u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52D9Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52DA4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52DD4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52DDCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52DE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52DE8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52E44u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52E4Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A52F20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53008u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A530A4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A531C4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A532E4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A533E0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53500u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53614u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53718u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53748u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53754u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53760u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53774u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5377Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5378Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53794u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A537A0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A5388Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53894u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A538C0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A538D4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A538DCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A538ECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A538F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53900u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53938u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53974u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53988u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A539F4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A00u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A44u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A68u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A70u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A7Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A84u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53A8Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53AACu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53AB8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53AC4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53AD0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53AD8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53AE0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53AE8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53AECu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53AF8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B14u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B20u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B2Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B38u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53B44u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BD8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BE4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53BFCu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53CD4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53CE8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53CF0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53CF4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D78u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D84u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53D98u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53DA0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53DB4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53DC0u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53DC8u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53DF4u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53E6Cu, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53E78u, &recomp_unit_0147, "recomp_unit_0147");
    runtime.register_function(0x08A53EB8u, &recomp_unit_0147, "recomp_unit_0147");
}
} // namespace psprecomp
