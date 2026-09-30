#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0085[4095] = {
    1, 0, 0, 0, 2, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 4, 5, 0, 0, 0, 0, 0, 0, 0, 0, 6, 0, 0, 7, 0, 0, 0,
    0, 0, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10, 11, 0, 0, 12, 0, 0, 0, 13, 0, 14, 0, 15, 0, 0, 16, 0, 0, 0, 0, 17,
    0, 0, 0, 0, 0, 18, 0, 0, 0, 0, 0, 19, 20, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 25, 0, 0, 0, 0, 0, 0, 26, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0,
    31, 0, 0, 0, 0, 0, 32, 0, 33, 34, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 39, 0, 40, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 0, 44, 45, 0, 0, 46,
    0, 0, 0, 0, 47, 0, 48, 49, 0, 50, 0, 0, 0, 0, 51, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 55, 56, 0, 0, 0, 0, 0,
    57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 59, 0, 0, 60, 0, 0, 61, 0, 0, 0,
    0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0,
    68, 0, 69, 0, 70, 0, 0, 71, 0, 72, 0, 73, 0, 74, 0, 0, 75, 0, 76, 0, 0, 77, 0, 78, 0, 0, 79, 0, 80, 0, 0, 81,
    0, 82, 0, 0, 83, 0, 84, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 0, 88, 0, 0, 0, 0, 0, 89, 0, 90, 0, 0,
    0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 93, 0, 0, 94, 0, 0, 95, 0, 96, 0, 97, 98, 0, 99, 0, 100, 0, 101, 0, 0, 102, 0,
    0, 103, 0, 0, 104, 0, 0, 105, 106, 0, 107, 0, 0, 108, 0, 109, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 112, 0, 113,
    0, 114, 0, 115, 0, 116, 0, 117, 0, 0, 118, 0, 119, 0, 120, 0, 121, 0, 122, 0, 123, 0, 124, 0, 0, 125, 0, 0, 0, 126, 0, 0,
    0, 127, 0, 0, 0, 128, 0, 129, 0, 130, 0, 131, 0, 0, 132, 0, 133, 0, 0, 0, 134, 0, 0, 135, 0, 0, 136, 0, 0, 137, 138, 0,
    0, 0, 139, 0, 140, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 144, 0, 145, 0, 146, 0, 0, 0, 147, 0, 0, 0, 0, 0, 0, 148,
    0, 0, 0, 149, 0, 150, 0, 151, 0, 152, 0, 153, 0, 154, 0, 0, 0, 155, 0, 0, 0, 156, 0, 157, 0, 158, 0, 159, 0, 160, 0, 0,
    0, 161, 0, 0, 0, 162, 0, 0, 0, 163, 0, 164, 0, 165, 0, 166, 0, 0, 167, 0, 168, 0, 0, 169, 0, 0, 170, 0, 0, 171, 0, 0,
    172, 173, 0, 174, 0, 175, 0, 0, 0, 176, 0, 0, 0, 0, 0, 177, 0, 0, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 0, 0, 183,
    0, 0, 0, 184, 0, 185, 0, 186, 0, 187, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    191, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 192, 0, 0, 193, 0, 0, 194, 0, 195, 0, 0, 196,
    0, 197, 0, 198, 199, 0, 200, 0, 201, 0, 202, 203, 0, 204, 0, 0, 205, 0, 0, 0, 206, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0,
    209, 0, 210, 0, 211, 0, 212, 0, 0, 213, 0, 0, 214, 0, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 0, 0, 217, 0, 218, 0, 219, 0,
    220, 0, 221, 0, 222, 0, 0, 223, 0, 0, 0, 224, 0, 0, 0, 0, 0, 225, 0, 0, 0, 226, 0, 227, 0, 228, 0, 229, 0, 230, 0, 0,
    0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    234, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 0,
    240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0,
    0, 0, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 0, 0, 249, 0, 0, 0, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 0, 0, 252, 0,
    0, 0, 0, 253, 0, 0, 0, 0, 0, 0, 254, 0, 0, 0, 0, 0, 255, 0, 0, 0, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 0,
    0, 0, 258, 0, 0, 0, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 0, 0, 0, 262, 0, 0, 0, 0, 0, 0,
    263, 0, 0, 0, 0, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 268, 0, 0,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 0, 0, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0,
    0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0, 0, 276, 0, 0, 0, 0, 277, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0,
    0, 279, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283, 0, 0, 0, 0, 0, 0, 284,
    0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 287, 0, 0, 0, 0, 0, 288, 0, 0, 0, 0, 289, 0, 0,
    0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 0, 0, 0, 0, 0, 294, 0, 0,
    0, 0, 295, 0, 0, 0, 0, 0, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0,
    0, 0, 300, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0,
    0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 307, 308, 0, 309, 0, 0, 0, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 312, 0, 313, 0, 0, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 0, 0, 316,
    317, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0,
    0, 0, 323, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 326, 0, 327, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 329, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 333, 0, 0, 0, 0, 0, 0, 334, 335, 0,
    336, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 341,
    0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 343, 344, 0, 345, 0, 0, 0, 0, 346, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 0, 352, 353, 0, 354, 0, 0, 0,
    0, 355, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0,
    360, 0, 0, 0, 0, 0, 0, 361, 362, 0, 363, 0, 0, 0, 0, 364, 0, 0, 0, 0, 365, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    366, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0, 370, 371, 0, 372, 0, 0, 0, 0, 373, 0, 0,
    0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0, 0, 0, 0, 0, 378, 0,
    0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 380, 381, 0, 382, 0, 0, 0, 0, 383, 0, 0, 0, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0,
    385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 0, 390,
    391, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0,
    397, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 400, 401, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 0,
    0, 404, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 0, 0, 0,
    409, 0, 0, 0, 0, 0, 0, 410, 411, 0, 412, 0, 0, 0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 0, 0, 0, 419, 0, 0, 0, 0, 0, 0, 420, 421, 0, 422, 0, 0,
    0, 0, 423, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 0, 0, 0,
    0, 428, 0, 0, 0, 0, 429, 0, 0, 0, 0, 0, 0, 430, 431, 0, 432, 0, 0, 0, 0, 433, 0, 0, 0, 0, 434, 0, 0, 0, 0, 0,
    0, 435, 0, 0, 0, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0,
    440, 441, 0, 442, 0, 0, 0, 0, 443, 0, 0, 0, 0, 444, 0, 0, 0, 0, 0, 0, 445, 0, 0, 0, 0, 0, 0, 0, 0, 0, 446, 0,
    447, 0, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 451, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0,
    0, 0, 454, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 456, 0, 0, 0, 0, 0, 0, 457, 0, 0, 0, 0, 458, 0, 0,
    0, 0, 0, 0, 459, 460, 0, 461, 0, 0, 0, 0, 462, 0, 0, 0, 0, 0, 0, 463, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    464, 0, 465, 0, 0, 0, 0, 0, 0, 466, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 468, 469, 0, 470, 0, 0, 0, 0, 0, 0, 471,
    0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 0, 0, 0, 476, 0,
    0, 0, 0, 0, 0, 477, 478, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    482, 0, 483, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 487, 0, 488, 0, 0, 0, 0, 489, 0, 0,
    0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0,
    0, 0, 0, 0, 495, 496, 0, 497, 0, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0,
    501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 504, 505, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0,
    508, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0, 512, 0, 0, 0, 0,
    0, 0, 513, 514, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 518, 0, 519, 0,
    0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 523, 0, 524, 0, 0, 0, 0, 525, 0, 0, 0, 0, 0, 0,
    526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 0, 0, 0, 531,
    0, 0, 0, 0, 0, 0, 532, 533, 0, 534, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 537, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 542, 543, 0, 544, 0,
    0, 0, 0, 0, 0, 545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 549, 0, 0, 0,
    0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0, 552, 553, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0,
    0, 0, 0, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0, 0, 0,
    0, 0, 0, 562, 563, 0, 564, 0, 0, 0, 0, 565, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 568, 0, 569, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 571, 0, 0, 0, 0, 0, 0, 572, 573, 0, 574, 0, 0, 0, 0, 575, 0,
    0, 0, 0, 576, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 0, 0, 0, 0, 578, 0, 579, 0, 0, 0, 0, 0, 0, 580, 0, 0,
    0, 0, 581, 0, 0, 0, 0, 0, 0, 582, 583, 0, 584, 0, 0, 0, 0, 585, 0, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 587, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 592, 593, 0, 594,
    0, 0, 0, 0, 595, 0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0,
    0, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 602, 603, 0, 604, 0, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 606, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 0, 0, 0, 609, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0,
    611, 612, 0, 613, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 616, 0, 617, 0,
    0, 0, 0, 0, 0, 618, 0, 0, 0, 0, 619, 0, 0, 0, 0, 0, 0, 620, 621, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 0,
    629, 630, 0, 631, 0, 0, 0, 0, 632, 0, 0, 0, 0, 633, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 634, 0, 635, 0, 0, 0,
    0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 638, 639, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 0, 642, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 647, 648,
    0, 649, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0,
    654, 0, 0, 0, 0, 0, 0, 655, 0, 0, 0, 0, 656, 0, 0, 0, 0, 0, 0, 657, 658, 0, 659, 0, 0, 0, 0, 660, 0, 0, 0, 0,
    0, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 665, 0, 0, 0,
    0, 666, 0, 0, 0, 0, 0, 0, 667, 668, 0, 669, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 672, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 673, 0, 674, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0, 677, 678, 0, 679, 0,
    0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 684, 0, 0, 0, 0,
    0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 687, 688, 0, 689, 0, 0, 0, 0, 690, 0, 0, 0, 0, 691, 0, 0, 0, 0,
    0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 693, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0,
    0, 697, 698, 0, 699, 0, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 703, 0, 0, 704, 0, 705, 0, 0,
    0, 0, 0, 706, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 0, 0, 0, 709, 0, 0, 710, 0, 711, 0, 0, 712, 0, 713, 0, 0, 0, 714,
    0, 0, 0, 715, 0, 0, 716, 0, 0, 0, 0, 0, 717, 0, 0, 718, 0, 719, 0, 720, 0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0,
    723, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 725, 0, 0, 726, 0, 727, 0, 728, 0, 729, 0, 0, 0, 0,
    0, 730, 0, 731, 0, 0, 0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 0, 0, 0, 0, 0, 734, 0, 0, 0, 0, 735, 0, 736, 0, 737,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 739, 0, 0, 740, 741, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 744, 0, 0, 0, 0, 0, 745, 0, 746, 0, 0, 0, 0, 0,
    747, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 755, 0, 0, 756, 757, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 760, 0, 0,
    0, 0, 0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 762, 0, 0, 0, 763,
    0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 766, 0, 0, 0, 767, 0, 768, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 769,
    0, 0, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 773, 0, 0, 774, 0, 0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 777, 0, 778, 0, 779, 0, 0, 780, 0, 0, 0, 781, 0,
    0, 0, 782, 0, 0, 0, 783, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 786, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 787, 0, 788, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 791, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 794, 0, 0, 0, 795, 0, 0, 796, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0,
    798, 0, 0, 0, 799, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 800, 0, 801, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 802, 0, 0,
    0, 0, 803, 0, 804, 0, 0, 0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 807, 0, 0, 0, 0,
    0, 0, 0, 0, 808, 0, 809, 0, 0, 0, 0, 0, 0, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 0, 0, 812, 0, 0, 0, 0, 813, 0,
    0, 0, 0, 0, 0, 814, 0, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 816, 0, 817, 0, 0, 0, 0, 0, 0, 818, 0, 0, 0, 0, 819,
    0, 0, 0, 0, 0, 0, 820, 0, 821, 0, 0, 0, 0, 0, 0, 0, 822, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 825,
};
void recomp_unit_0085_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08958000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0085[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08958000;
    case 2u: goto L_08958010;
    case 3u: goto L_08958020;
    case 4u: goto L_0895803C;
    case 5u: goto L_08958040;
    case 6u: goto L_08958064;
    case 7u: goto L_08958070;
    case 8u: goto L_08958090;
    case 9u: goto L_089580A4;
    case 10u: goto L_089580AC;
    case 11u: goto L_089580B0;
    case 12u: goto L_089580BC;
    case 13u: goto L_089580CC;
    case 14u: goto L_089580D4;
    case 15u: goto L_089580DC;
    case 16u: goto L_089580E8;
    case 17u: goto L_089580FC;
    case 18u: goto L_08958114;
    case 19u: goto L_0895812C;
    case 20u: goto L_08958130;
    case 21u: goto L_0895813C;
    case 22u: goto L_0895814C;
    case 23u: goto L_08958154;
    case 24u: goto L_0895815C;
    case 25u: goto L_08958184;
    case 26u: goto L_089581A0;
    case 27u: goto L_089581B4;
    case 28u: goto L_089581D4;
    case 29u: goto L_089581E4;
    case 30u: goto L_089581F0;
    case 31u: goto L_08958200;
    case 32u: goto L_08958218;
    case 33u: goto L_08958220;
    case 34u: goto L_08958224;
    case 35u: goto L_0895822C;
    case 36u: goto L_08958258;
    case 37u: goto L_08958264;
    case 38u: goto L_089582DC;
    case 39u: goto L_089582E8;
    case 40u: goto L_089582F0;
    case 41u: goto L_08958334;
    case 42u: goto L_0895833C;
    case 43u: goto L_08958344;
    case 44u: goto L_0895836C;
    case 45u: goto L_08958370;
    case 46u: goto L_0895837C;
    case 47u: goto L_08958390;
    case 48u: goto L_08958398;
    case 49u: goto L_0895839C;
    case 50u: goto L_089583A4;
    case 51u: goto L_089583B8;
    case 52u: goto L_089583C8;
    case 53u: goto L_089583D0;
    case 54u: goto L_089583DC;
    case 55u: goto L_089583E4;
    case 56u: goto L_089583E8;
    case 57u: goto L_08958400;
    case 58u: goto L_08958440;
    case 59u: goto L_08958458;
    case 60u: goto L_08958464;
    case 61u: goto L_08958470;
    case 62u: goto L_08958484;
    case 63u: goto L_08958494;
    case 64u: goto L_089584C8;
    case 65u: goto L_089584D4;
    case 66u: goto L_089584E8;
    case 67u: goto L_089584F4;
    case 68u: goto L_08958500;
    case 69u: goto L_08958508;
    case 70u: goto L_08958510;
    case 71u: goto L_0895851C;
    case 72u: goto L_08958524;
    case 73u: goto L_0895852C;
    case 74u: goto L_08958534;
    case 75u: goto L_08958540;
    case 76u: goto L_08958548;
    case 77u: goto L_08958554;
    case 78u: goto L_0895855C;
    case 79u: goto L_08958568;
    case 80u: goto L_08958570;
    case 81u: goto L_0895857C;
    case 82u: goto L_08958584;
    case 83u: goto L_08958590;
    case 84u: goto L_08958598;
    case 85u: goto L_089585A4;
    case 86u: goto L_089585B0;
    case 87u: goto L_089585C8;
    case 88u: goto L_089585D4;
    case 89u: goto L_089585EC;
    case 90u: goto L_089585F4;
    case 91u: goto L_08958604;
    case 92u: goto L_0895862C;
    case 93u: goto L_089586A8;
    case 94u: goto L_089586B4;
    case 95u: goto L_089586C0;
    case 96u: goto L_089586C8;
    case 97u: goto L_089586D0;
    case 98u: goto L_089586D4;
    case 99u: goto L_089586DC;
    case 100u: goto L_089586E4;
    case 101u: goto L_089586EC;
    case 102u: goto L_089586F8;
    case 103u: goto L_08958704;
    case 104u: goto L_08958710;
    case 105u: goto L_0895871C;
    case 106u: goto L_08958720;
    case 107u: goto L_08958728;
    case 108u: goto L_08958734;
    case 109u: goto L_0895873C;
    case 110u: goto L_08958754;
    case 111u: goto L_08958764;
    case 112u: goto L_08958774;
    case 113u: goto L_0895877C;
    case 114u: goto L_08958784;
    case 115u: goto L_0895878C;
    case 116u: goto L_08958794;
    case 117u: goto L_0895879C;
    case 118u: goto L_089587A8;
    case 119u: goto L_089587B0;
    case 120u: goto L_089587B8;
    case 121u: goto L_089587C0;
    case 122u: goto L_089587C8;
    case 123u: goto L_089587D0;
    case 124u: goto L_089587D8;
    case 125u: goto L_089587E4;
    case 126u: goto L_089587F4;
    case 127u: goto L_08958804;
    case 128u: goto L_08958814;
    case 129u: goto L_0895881C;
    case 130u: goto L_08958824;
    case 131u: goto L_0895882C;
    case 132u: goto L_08958838;
    case 133u: goto L_08958840;
    case 134u: goto L_08958850;
    case 135u: goto L_0895885C;
    case 136u: goto L_08958868;
    case 137u: goto L_08958874;
    case 138u: goto L_08958878;
    case 139u: goto L_08958888;
    case 140u: goto L_08958890;
    case 141u: goto L_089588A0;
    case 142u: goto L_089588B0;
    case 143u: goto L_089588B8;
    case 144u: goto L_089588C0;
    case 145u: goto L_089588C8;
    case 146u: goto L_089588D0;
    case 147u: goto L_089588E0;
    case 148u: goto L_089588FC;
    case 149u: goto L_0895890C;
    case 150u: goto L_08958914;
    case 151u: goto L_0895891C;
    case 152u: goto L_08958924;
    case 153u: goto L_0895892C;
    case 154u: goto L_08958934;
    case 155u: goto L_08958944;
    case 156u: goto L_08958954;
    case 157u: goto L_0895895C;
    case 158u: goto L_08958964;
    case 159u: goto L_0895896C;
    case 160u: goto L_08958974;
    case 161u: goto L_08958984;
    case 162u: goto L_08958994;
    case 163u: goto L_089589A4;
    case 164u: goto L_089589AC;
    case 165u: goto L_089589B4;
    case 166u: goto L_089589BC;
    case 167u: goto L_089589C8;
    case 168u: goto L_089589D0;
    case 169u: goto L_089589DC;
    case 170u: goto L_089589E8;
    case 171u: goto L_089589F4;
    case 172u: goto L_08958A00;
    case 173u: goto L_08958A04;
    case 174u: goto L_08958A0C;
    case 175u: goto L_08958A14;
    case 176u: goto L_08958A24;
    case 177u: goto L_08958A3C;
    case 178u: goto L_08958A4C;
    case 179u: goto L_08958A54;
    case 180u: goto L_08958A5C;
    case 181u: goto L_08958A64;
    case 182u: goto L_08958A6C;
    case 183u: goto L_08958A7C;
    case 184u: goto L_08958A8C;
    case 185u: goto L_08958A94;
    case 186u: goto L_08958A9C;
    case 187u: goto L_08958AA4;
    case 188u: goto L_08958AB0;
    case 189u: goto L_08958AB8;
    case 190u: goto L_08958AD0;
    case 191u: goto L_08958B00;
    case 192u: goto L_08958B50;
    case 193u: goto L_08958B5C;
    case 194u: goto L_08958B68;
    case 195u: goto L_08958B70;
    case 196u: goto L_08958B7C;
    case 197u: goto L_08958B84;
    case 198u: goto L_08958B8C;
    case 199u: goto L_08958B90;
    case 200u: goto L_08958B98;
    case 201u: goto L_08958BA0;
    case 202u: goto L_08958BA8;
    case 203u: goto L_08958BAC;
    case 204u: goto L_08958BB4;
    case 205u: goto L_08958BC0;
    case 206u: goto L_08958BD0;
    case 207u: goto L_08958BE8;
    case 208u: goto L_08958BF8;
    case 209u: goto L_08958C00;
    case 210u: goto L_08958C08;
    case 211u: goto L_08958C10;
    case 212u: goto L_08958C18;
    case 213u: goto L_08958C24;
    case 214u: goto L_08958C30;
    case 215u: goto L_08958C40;
    case 216u: goto L_08958C58;
    case 217u: goto L_08958C68;
    case 218u: goto L_08958C70;
    case 219u: goto L_08958C78;
    case 220u: goto L_08958C80;
    case 221u: goto L_08958C88;
    case 222u: goto L_08958C90;
    case 223u: goto L_08958C9C;
    case 224u: goto L_08958CAC;
    case 225u: goto L_08958CC4;
    case 226u: goto L_08958CD4;
    case 227u: goto L_08958CDC;
    case 228u: goto L_08958CE4;
    case 229u: goto L_08958CEC;
    case 230u: goto L_08958CF4;
    case 231u: goto L_08958D08;
    case 232u: goto L_08958D20;
    case 233u: goto L_08958D50;
    case 234u: goto L_08958D80;
    case 235u: goto L_08958D98;
    case 236u: goto L_08958DA0;
    case 237u: goto L_08958DBC;
    case 238u: goto L_08958DDC;
    case 239u: goto L_08958DF4;
    case 240u: goto L_08958E00;
    case 241u: goto L_08958E1C;
    case 242u: goto L_08958E28;
    case 243u: goto L_08958E30;
    case 244u: goto L_08958E48;
    case 245u: goto L_08958E70;
    case 246u: goto L_08958E78;
    case 247u: goto L_08958E8C;
    case 248u: goto L_08958EA8;
    case 249u: goto L_08958EB8;
    case 250u: goto L_08958ECC;
    case 251u: goto L_08958EE8;
    case 252u: goto L_08958EF8;
    case 253u: goto L_08958F0C;
    case 254u: goto L_08958F28;
    case 255u: goto L_08958F40;
    case 256u: goto L_08958F54;
    case 257u: goto L_08958F70;
    case 258u: goto L_08958F88;
    case 259u: goto L_08958F9C;
    case 260u: goto L_08958FB8;
    case 261u: goto L_08958FD0;
    case 262u: goto L_08958FE4;
    case 263u: goto L_08959000;
    case 264u: goto L_08959018;
    case 265u: goto L_0895902C;
    case 266u: goto L_08959048;
    case 267u: goto L_08959060;
    case 268u: goto L_08959074;
    case 269u: goto L_08959090;
    case 270u: goto L_089590A8;
    case 271u: goto L_089590BC;
    case 272u: goto L_089590D8;
    case 273u: goto L_089590F0;
    case 274u: goto L_08959104;
    case 275u: goto L_08959120;
    case 276u: goto L_08959138;
    case 277u: goto L_0895914C;
    case 278u: goto L_08959168;
    case 279u: goto L_08959184;
    case 280u: goto L_08959198;
    case 281u: goto L_089591B4;
    case 282u: goto L_089591CC;
    case 283u: goto L_089591E0;
    case 284u: goto L_089591FC;
    case 285u: goto L_08959218;
    case 286u: goto L_0895922C;
    case 287u: goto L_08959248;
    case 288u: goto L_08959260;
    case 289u: goto L_08959274;
    case 290u: goto L_08959290;
    case 291u: goto L_089592AC;
    case 292u: goto L_089592C0;
    case 293u: goto L_089592DC;
    case 294u: goto L_089592F4;
    case 295u: goto L_08959308;
    case 296u: goto L_08959324;
    case 297u: goto L_08959340;
    case 298u: goto L_08959354;
    case 299u: goto L_08959370;
    case 300u: goto L_08959388;
    case 301u: goto L_0895939C;
    case 302u: goto L_089593B8;
    case 303u: goto L_089593E8;
    case 304u: goto L_089593F0;
    case 305u: goto L_0895940C;
    case 306u: goto L_08959420;
    case 307u: goto L_0895943C;
    case 308u: goto L_08959440;
    case 309u: goto L_08959448;
    case 310u: goto L_0895945C;
    case 311u: goto L_08959478;
    case 312u: goto L_089594A8;
    case 313u: goto L_089594B0;
    case 314u: goto L_089594CC;
    case 315u: goto L_089594E0;
    case 316u: goto L_089594FC;
    case 317u: goto L_08959500;
    case 318u: goto L_08959508;
    case 319u: goto L_08959524;
    case 320u: goto L_08959534;
    case 321u: goto L_08959564;
    case 322u: goto L_0895956C;
    case 323u: goto L_08959588;
    case 324u: goto L_0895959C;
    case 325u: goto L_089595B8;
    case 326u: goto L_089595BC;
    case 327u: goto L_089595C4;
    case 328u: goto L_089595E0;
    case 329u: goto L_089595F0;
    case 330u: goto L_08959620;
    case 331u: goto L_08959628;
    case 332u: goto L_08959644;
    case 333u: goto L_08959658;
    case 334u: goto L_08959674;
    case 335u: goto L_08959678;
    case 336u: goto L_08959680;
    case 337u: goto L_08959694;
    case 338u: goto L_089596A8;
    case 339u: goto L_089596D8;
    case 340u: goto L_089596E0;
    case 341u: goto L_089596FC;
    case 342u: goto L_08959710;
    case 343u: goto L_0895972C;
    case 344u: goto L_08959730;
    case 345u: goto L_08959738;
    case 346u: goto L_0895974C;
    case 347u: goto L_08959760;
    case 348u: goto L_08959790;
    case 349u: goto L_08959798;
    case 350u: goto L_089597B4;
    case 351u: goto L_089597C8;
    case 352u: goto L_089597E4;
    case 353u: goto L_089597E8;
    case 354u: goto L_089597F0;
    case 355u: goto L_08959804;
    case 356u: goto L_08959818;
    case 357u: goto L_08959848;
    case 358u: goto L_08959850;
    case 359u: goto L_0895986C;
    case 360u: goto L_08959880;
    case 361u: goto L_0895989C;
    case 362u: goto L_089598A0;
    case 363u: goto L_089598A8;
    case 364u: goto L_089598BC;
    case 365u: goto L_089598D0;
    case 366u: goto L_08959900;
    case 367u: goto L_08959908;
    case 368u: goto L_08959924;
    case 369u: goto L_08959938;
    case 370u: goto L_08959954;
    case 371u: goto L_08959958;
    case 372u: goto L_08959960;
    case 373u: goto L_08959974;
    case 374u: goto L_08959990;
    case 375u: goto L_089599AC;
    case 376u: goto L_089599D4;
    case 377u: goto L_089599DC;
    case 378u: goto L_089599F8;
    case 379u: goto L_08959A0C;
    case 380u: goto L_08959A28;
    case 381u: goto L_08959A2C;
    case 382u: goto L_08959A34;
    case 383u: goto L_08959A48;
    case 384u: goto L_08959A64;
    case 385u: goto L_08959A80;
    case 386u: goto L_08959AA8;
    case 387u: goto L_08959AB0;
    case 388u: goto L_08959ACC;
    case 389u: goto L_08959AE0;
    case 390u: goto L_08959AFC;
    case 391u: goto L_08959B00;
    case 392u: goto L_08959B08;
    case 393u: goto L_08959B24;
    case 394u: goto L_08959B34;
    case 395u: goto L_08959B50;
    case 396u: goto L_08959B78;
    case 397u: goto L_08959B80;
    case 398u: goto L_08959B9C;
    case 399u: goto L_08959BB0;
    case 400u: goto L_08959BCC;
    case 401u: goto L_08959BD0;
    case 402u: goto L_08959BD8;
    case 403u: goto L_08959BF4;
    case 404u: goto L_08959C04;
    case 405u: goto L_08959C20;
    case 406u: goto L_08959C48;
    case 407u: goto L_08959C50;
    case 408u: goto L_08959C6C;
    case 409u: goto L_08959C80;
    case 410u: goto L_08959C9C;
    case 411u: goto L_08959CA0;
    case 412u: goto L_08959CA8;
    case 413u: goto L_08959CBC;
    case 414u: goto L_08959CD0;
    case 415u: goto L_08959CEC;
    case 416u: goto L_08959D14;
    case 417u: goto L_08959D1C;
    case 418u: goto L_08959D38;
    case 419u: goto L_08959D4C;
    case 420u: goto L_08959D68;
    case 421u: goto L_08959D6C;
    case 422u: goto L_08959D74;
    case 423u: goto L_08959D88;
    case 424u: goto L_08959D9C;
    case 425u: goto L_08959DB8;
    case 426u: goto L_08959DE0;
    case 427u: goto L_08959DE8;
    case 428u: goto L_08959E04;
    case 429u: goto L_08959E18;
    case 430u: goto L_08959E34;
    case 431u: goto L_08959E38;
    case 432u: goto L_08959E40;
    case 433u: goto L_08959E54;
    case 434u: goto L_08959E68;
    case 435u: goto L_08959E84;
    case 436u: goto L_08959EAC;
    case 437u: goto L_08959EB4;
    case 438u: goto L_08959ED0;
    case 439u: goto L_08959EE4;
    case 440u: goto L_08959F00;
    case 441u: goto L_08959F04;
    case 442u: goto L_08959F0C;
    case 443u: goto L_08959F20;
    case 444u: goto L_08959F34;
    case 445u: goto L_08959F50;
    case 446u: goto L_08959F78;
    case 447u: goto L_08959F80;
    case 448u: goto L_08959F9C;
    case 449u: goto L_08959FB0;
    case 450u: goto L_08959FCC;
    case 451u: goto L_08959FD0;
    case 452u: goto L_08959FD8;
    case 453u: goto L_08959FEC;
    case 454u: goto L_0895A008;
    case 455u: goto L_0895A03C;
    case 456u: goto L_0895A044;
    case 457u: goto L_0895A060;
    case 458u: goto L_0895A074;
    case 459u: goto L_0895A090;
    case 460u: goto L_0895A094;
    case 461u: goto L_0895A09C;
    case 462u: goto L_0895A0B0;
    case 463u: goto L_0895A0CC;
    case 464u: goto L_0895A100;
    case 465u: goto L_0895A108;
    case 466u: goto L_0895A124;
    case 467u: goto L_0895A138;
    case 468u: goto L_0895A154;
    case 469u: goto L_0895A158;
    case 470u: goto L_0895A160;
    case 471u: goto L_0895A17C;
    case 472u: goto L_0895A18C;
    case 473u: goto L_0895A1C0;
    case 474u: goto L_0895A1C8;
    case 475u: goto L_0895A1E4;
    case 476u: goto L_0895A1F8;
    case 477u: goto L_0895A214;
    case 478u: goto L_0895A218;
    case 479u: goto L_0895A220;
    case 480u: goto L_0895A23C;
    case 481u: goto L_0895A24C;
    case 482u: goto L_0895A280;
    case 483u: goto L_0895A288;
    case 484u: goto L_0895A2A4;
    case 485u: goto L_0895A2B8;
    case 486u: goto L_0895A2D4;
    case 487u: goto L_0895A2D8;
    case 488u: goto L_0895A2E0;
    case 489u: goto L_0895A2F4;
    case 490u: goto L_0895A308;
    case 491u: goto L_0895A33C;
    case 492u: goto L_0895A344;
    case 493u: goto L_0895A360;
    case 494u: goto L_0895A374;
    case 495u: goto L_0895A390;
    case 496u: goto L_0895A394;
    case 497u: goto L_0895A39C;
    case 498u: goto L_0895A3B0;
    case 499u: goto L_0895A3C4;
    case 500u: goto L_0895A3F8;
    case 501u: goto L_0895A400;
    case 502u: goto L_0895A41C;
    case 503u: goto L_0895A430;
    case 504u: goto L_0895A44C;
    case 505u: goto L_0895A450;
    case 506u: goto L_0895A458;
    case 507u: goto L_0895A46C;
    case 508u: goto L_0895A480;
    case 509u: goto L_0895A4B4;
    case 510u: goto L_0895A4BC;
    case 511u: goto L_0895A4D8;
    case 512u: goto L_0895A4EC;
    case 513u: goto L_0895A508;
    case 514u: goto L_0895A50C;
    case 515u: goto L_0895A514;
    case 516u: goto L_0895A528;
    case 517u: goto L_0895A53C;
    case 518u: goto L_0895A570;
    case 519u: goto L_0895A578;
    case 520u: goto L_0895A594;
    case 521u: goto L_0895A5A8;
    case 522u: goto L_0895A5C4;
    case 523u: goto L_0895A5C8;
    case 524u: goto L_0895A5D0;
    case 525u: goto L_0895A5E4;
    case 526u: goto L_0895A600;
    case 527u: goto L_0895A61C;
    case 528u: goto L_0895A644;
    case 529u: goto L_0895A64C;
    case 530u: goto L_0895A668;
    case 531u: goto L_0895A67C;
    case 532u: goto L_0895A698;
    case 533u: goto L_0895A69C;
    case 534u: goto L_0895A6A4;
    case 535u: goto L_0895A6B8;
    case 536u: goto L_0895A6D4;
    case 537u: goto L_0895A6F0;
    case 538u: goto L_0895A718;
    case 539u: goto L_0895A720;
    case 540u: goto L_0895A73C;
    case 541u: goto L_0895A750;
    case 542u: goto L_0895A76C;
    case 543u: goto L_0895A770;
    case 544u: goto L_0895A778;
    case 545u: goto L_0895A794;
    case 546u: goto L_0895A7A4;
    case 547u: goto L_0895A7C0;
    case 548u: goto L_0895A7E8;
    case 549u: goto L_0895A7F0;
    case 550u: goto L_0895A80C;
    case 551u: goto L_0895A820;
    case 552u: goto L_0895A83C;
    case 553u: goto L_0895A840;
    case 554u: goto L_0895A848;
    case 555u: goto L_0895A864;
    case 556u: goto L_0895A874;
    case 557u: goto L_0895A890;
    case 558u: goto L_0895A8B8;
    case 559u: goto L_0895A8C0;
    case 560u: goto L_0895A8DC;
    case 561u: goto L_0895A8F0;
    case 562u: goto L_0895A90C;
    case 563u: goto L_0895A910;
    case 564u: goto L_0895A918;
    case 565u: goto L_0895A92C;
    case 566u: goto L_0895A940;
    case 567u: goto L_0895A95C;
    case 568u: goto L_0895A984;
    case 569u: goto L_0895A98C;
    case 570u: goto L_0895A9A8;
    case 571u: goto L_0895A9BC;
    case 572u: goto L_0895A9D8;
    case 573u: goto L_0895A9DC;
    case 574u: goto L_0895A9E4;
    case 575u: goto L_0895A9F8;
    case 576u: goto L_0895AA0C;
    case 577u: goto L_0895AA28;
    case 578u: goto L_0895AA50;
    case 579u: goto L_0895AA58;
    case 580u: goto L_0895AA74;
    case 581u: goto L_0895AA88;
    case 582u: goto L_0895AAA4;
    case 583u: goto L_0895AAA8;
    case 584u: goto L_0895AAB0;
    case 585u: goto L_0895AAC4;
    case 586u: goto L_0895AAD8;
    case 587u: goto L_0895AAF4;
    case 588u: goto L_0895AB1C;
    case 589u: goto L_0895AB24;
    case 590u: goto L_0895AB40;
    case 591u: goto L_0895AB54;
    case 592u: goto L_0895AB70;
    case 593u: goto L_0895AB74;
    case 594u: goto L_0895AB7C;
    case 595u: goto L_0895AB90;
    case 596u: goto L_0895ABA4;
    case 597u: goto L_0895ABC0;
    case 598u: goto L_0895ABE8;
    case 599u: goto L_0895ABF0;
    case 600u: goto L_0895AC0C;
    case 601u: goto L_0895AC20;
    case 602u: goto L_0895AC3C;
    case 603u: goto L_0895AC40;
    case 604u: goto L_0895AC48;
    case 605u: goto L_0895AC5C;
    case 606u: goto L_0895AC78;
    case 607u: goto L_0895ACAC;
    case 608u: goto L_0895ACB4;
    case 609u: goto L_0895ACD0;
    case 610u: goto L_0895ACE4;
    case 611u: goto L_0895AD00;
    case 612u: goto L_0895AD04;
    case 613u: goto L_0895AD0C;
    case 614u: goto L_0895AD20;
    case 615u: goto L_0895AD3C;
    case 616u: goto L_0895AD70;
    case 617u: goto L_0895AD78;
    case 618u: goto L_0895AD94;
    case 619u: goto L_0895ADA8;
    case 620u: goto L_0895ADC4;
    case 621u: goto L_0895ADC8;
    case 622u: goto L_0895ADD0;
    case 623u: goto L_0895ADE4;
    case 624u: goto L_0895ADF8;
    case 625u: goto L_0895AE2C;
    case 626u: goto L_0895AE34;
    case 627u: goto L_0895AE50;
    case 628u: goto L_0895AE64;
    case 629u: goto L_0895AE80;
    case 630u: goto L_0895AE84;
    case 631u: goto L_0895AE8C;
    case 632u: goto L_0895AEA0;
    case 633u: goto L_0895AEB4;
    case 634u: goto L_0895AEE8;
    case 635u: goto L_0895AEF0;
    case 636u: goto L_0895AF0C;
    case 637u: goto L_0895AF20;
    case 638u: goto L_0895AF3C;
    case 639u: goto L_0895AF40;
    case 640u: goto L_0895AF48;
    case 641u: goto L_0895AF5C;
    case 642u: goto L_0895AF70;
    case 643u: goto L_0895AFA4;
    case 644u: goto L_0895AFAC;
    case 645u: goto L_0895AFC8;
    case 646u: goto L_0895AFDC;
    case 647u: goto L_0895AFF8;
    case 648u: goto L_0895AFFC;
    case 649u: goto L_0895B004;
    case 650u: goto L_0895B018;
    case 651u: goto L_0895B034;
    case 652u: goto L_0895B050;
    case 653u: goto L_0895B078;
    case 654u: goto L_0895B080;
    case 655u: goto L_0895B09C;
    case 656u: goto L_0895B0B0;
    case 657u: goto L_0895B0CC;
    case 658u: goto L_0895B0D0;
    case 659u: goto L_0895B0D8;
    case 660u: goto L_0895B0EC;
    case 661u: goto L_0895B108;
    case 662u: goto L_0895B124;
    case 663u: goto L_0895B14C;
    case 664u: goto L_0895B154;
    case 665u: goto L_0895B170;
    case 666u: goto L_0895B184;
    case 667u: goto L_0895B1A0;
    case 668u: goto L_0895B1A4;
    case 669u: goto L_0895B1AC;
    case 670u: goto L_0895B1C0;
    case 671u: goto L_0895B1D4;
    case 672u: goto L_0895B1F0;
    case 673u: goto L_0895B218;
    case 674u: goto L_0895B220;
    case 675u: goto L_0895B23C;
    case 676u: goto L_0895B250;
    case 677u: goto L_0895B26C;
    case 678u: goto L_0895B270;
    case 679u: goto L_0895B278;
    case 680u: goto L_0895B28C;
    case 681u: goto L_0895B2A0;
    case 682u: goto L_0895B2BC;
    case 683u: goto L_0895B2E4;
    case 684u: goto L_0895B2EC;
    case 685u: goto L_0895B308;
    case 686u: goto L_0895B31C;
    case 687u: goto L_0895B338;
    case 688u: goto L_0895B33C;
    case 689u: goto L_0895B344;
    case 690u: goto L_0895B358;
    case 691u: goto L_0895B36C;
    case 692u: goto L_0895B388;
    case 693u: goto L_0895B3B0;
    case 694u: goto L_0895B3B8;
    case 695u: goto L_0895B3D4;
    case 696u: goto L_0895B3E8;
    case 697u: goto L_0895B404;
    case 698u: goto L_0895B408;
    case 699u: goto L_0895B410;
    case 700u: goto L_0895B428;
    case 701u: goto L_0895B434;
    case 702u: goto L_0895B444;
    case 703u: goto L_0895B460;
    case 704u: goto L_0895B46C;
    case 705u: goto L_0895B474;
    case 706u: goto L_0895B48C;
    case 707u: goto L_0895B498;
    case 708u: goto L_0895B4A8;
    case 709u: goto L_0895B4C4;
    case 710u: goto L_0895B4D0;
    case 711u: goto L_0895B4D8;
    case 712u: goto L_0895B4E4;
    case 713u: goto L_0895B4EC;
    case 714u: goto L_0895B4FC;
    case 715u: goto L_0895B50C;
    case 716u: goto L_0895B518;
    case 717u: goto L_0895B530;
    case 718u: goto L_0895B53C;
    case 719u: goto L_0895B544;
    case 720u: goto L_0895B54C;
    case 721u: goto L_0895B560;
    case 722u: goto L_0895B568;
    case 723u: goto L_0895B580;
    case 724u: goto L_0895B5AC;
    case 725u: goto L_0895B5C8;
    case 726u: goto L_0895B5D4;
    case 727u: goto L_0895B5DC;
    case 728u: goto L_0895B5E4;
    case 729u: goto L_0895B5EC;
    case 730u: goto L_0895B604;
    case 731u: goto L_0895B60C;
    case 732u: goto L_0895B624;
    case 733u: goto L_0895B638;
    case 734u: goto L_0895B658;
    case 735u: goto L_0895B66C;
    case 736u: goto L_0895B674;
    case 737u: goto L_0895B67C;
    case 738u: goto L_0895B6B0;
    case 739u: goto L_0895B6DC;
    case 740u: goto L_0895B6E8;
    case 741u: goto L_0895B6EC;
    case 742u: goto L_0895B714;
    case 743u: goto L_0895B740;
    case 744u: goto L_0895B748;
    case 745u: goto L_0895B760;
    case 746u: goto L_0895B768;
    case 747u: goto L_0895B780;
    case 748u: goto L_0895B7B4;
    case 749u: goto L_0895B7E0;
    case 750u: goto L_0895B820;
    case 751u: goto L_0895B854;
    case 752u: goto L_0895B884;
    case 753u: goto L_0895B88C;
    case 754u: goto L_0895B8A8;
    case 755u: goto L_0895B8DC;
    case 756u: goto L_0895B8E8;
    case 757u: goto L_0895B8EC;
    case 758u: goto L_0895B91C;
    case 759u: goto L_0895B948;
    case 760u: goto L_0895B974;
    case 761u: goto L_0895B998;
    case 762u: goto L_0895B9EC;
    case 763u: goto L_0895B9FC;
    case 764u: goto L_0895BA04;
    case 765u: goto L_0895BA3C;
    case 766u: goto L_0895BA90;
    case 767u: goto L_0895BAA0;
    case 768u: goto L_0895BAA8;
    case 769u: goto L_0895BAFC;
    case 770u: goto L_0895BB0C;
    case 771u: goto L_0895BB14;
    case 772u: goto L_0895BB3C;
    case 773u: goto L_0895BB8C;
    case 774u: goto L_0895BB98;
    case 775u: goto L_0895BBA4;
    case 776u: goto L_0895BBB8;
    case 777u: goto L_0895BBCC;
    case 778u: goto L_0895BBD4;
    case 779u: goto L_0895BBDC;
    case 780u: goto L_0895BBE8;
    case 781u: goto L_0895BBF8;
    case 782u: goto L_0895BC08;
    case 783u: goto L_0895BC18;
    case 784u: goto L_0895BC24;
    case 785u: goto L_0895BC48;
    case 786u: goto L_0895BC58;
    case 787u: goto L_0895BC88;
    case 788u: goto L_0895BC90;
    case 789u: goto L_0895BCBC;
    case 790u: goto L_0895BCC4;
    case 791u: goto L_0895BCD0;
    case 792u: goto L_0895BCE0;
    case 793u: goto L_0895BCEC;
    case 794u: goto L_0895BD34;
    case 795u: goto L_0895BD44;
    case 796u: goto L_0895BD50;
    case 797u: goto L_0895BD5C;
    case 798u: goto L_0895BD80;
    case 799u: goto L_0895BD90;
    case 800u: goto L_0895BDC0;
    case 801u: goto L_0895BDC8;
    case 802u: goto L_0895BDF4;
    case 803u: goto L_0895BE08;
    case 804u: goto L_0895BE10;
    case 805u: goto L_0895BE28;
    case 806u: goto L_0895BE5C;
    case 807u: goto L_0895BE6C;
    case 808u: goto L_0895BE90;
    case 809u: goto L_0895BE98;
    case 810u: goto L_0895BEC0;
    case 811u: goto L_0895BEC8;
    case 812u: goto L_0895BEE4;
    case 813u: goto L_0895BEF8;
    case 814u: goto L_0895BF14;
    case 815u: goto L_0895BF1C;
    case 816u: goto L_0895BF44;
    case 817u: goto L_0895BF4C;
    case 818u: goto L_0895BF68;
    case 819u: goto L_0895BF7C;
    case 820u: goto L_0895BF98;
    case 821u: goto L_0895BFA0;
    case 822u: goto L_0895BFC0;
    case 823u: goto L_0895BFC8;
    case 824u: goto L_0895BFF0;
    case 825u: goto L_0895BFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08958000:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958040;
      }
      goto L_08958010;
    }
L_08958010:
    ctx.gpr[10] = (2269u << 16u);
    ctx.gpr[11] = (ctx.gpr[10] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[10] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[11] | 0u);
    goto L_08958020;
L_08958020:
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[11]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    ctx.gpr[11] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[8]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08958020;
      }
      goto L_0895803C;
    }
L_0895803C:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(520)));
    goto L_08958040;
L_08958040:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (ctx.gpr[10] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(520), ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[8] << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08958064u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08958064u) goto L_08958064;
    return;
L_08958064:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08958070:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08958090u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-32024));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 420u, 0x08956F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08958090u) goto L_08958090;
    return;
L_08958090:
    ctx.gpr[18] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-29360)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    ctx.gpr[16] = (2228u << 16u);
      if (branch_taken) {
          goto L_089580B0;
      }
      goto L_089580A4;
    }
L_089580A4:
    ctx.gpr[31] = (0x089580ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 212u, 0x088B9200u>(ctx, &aot_mem) && ctx.pc == 0x089580ACu) goto L_089580AC;
    return;
L_089580AC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-29360), ctx.gpr[17]);
    goto L_089580B0;
L_089580B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29316)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089580FC;
      }
      goto L_089580BC;
    }
L_089580BC:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-9136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089580DC;
      }
      goto L_089580CC;
    }
L_089580CC:
    ctx.gpr[31] = (0x089580D4u);
    // nop
    ctx.pc = 0x08B0BB0Cu;
    return;
L_089580D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089580E8;
      }
      goto L_089580DC;
    }
L_089580DC:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x089580E8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-26512));
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 730u, 0x08AA367Cu>(ctx, &aot_mem) && ctx.pc == 0x089580E8u) goto L_089580E8;
    return;
L_089580E8:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6548), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7028), 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29316), 0u);
    goto L_089580FC;
L_089580FC:
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
L_08958114:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7016)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_0895814C;
      }
      goto L_0895812C;
    }
L_0895812C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29312)));
    goto L_08958130;
L_08958130:
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08958154;
      }
      goto L_0895813C;
    }
L_0895813C:
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08958130;
      }
      goto L_0895814C;
    }
L_0895814C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08958154;
      }
      goto L_08958154;
    }
L_08958154:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895815C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6852)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6852));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08958184u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 618u, 0x08957CCCu>(ctx, &aot_mem) && ctx.pc == 0x08958184u) goto L_08958184;
    return;
L_08958184:
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29304)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-29304), ctx.gpr[7]);
    ctx.gpr[31] = (0x089581A0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 534u, 0x08957884u>(ctx, &aot_mem) && ctx.pc == 0x089581A0u) goto L_089581A0;
    return;
L_089581A0:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089581B4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 624u, 0x08957D04u>(ctx, &aot_mem) && ctx.pc == 0x089581B4u) goto L_089581B4;
    return;
L_089581B4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(ctx.gpr[4]));
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
L_089581D4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x089581E4u);
    ctx.gpr[4] = (0u | 0u);
    goto L_0895815C;
L_089581E4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089581F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7028)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_08958220;
      }
      goto L_08958200;
    }
L_08958200:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08958220;
      }
      goto L_08958218;
    }
L_08958218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08958224;
      }
      goto L_08958220;
    }
L_08958220:
    ctx.gpr[2] = (0u | 0u);
    goto L_08958224;
L_08958224:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0895822C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22048));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13940));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08958258u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 356u, 0x08AF5BC0u>(ctx, &aot_mem) && ctx.pc == 0x08958258u) goto L_08958258;
    return;
L_08958258:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08958264:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7104), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7104));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(15728), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(15730), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-17188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26132), ctx.gpr[17]);
    ctx.gpr[31] = (0x089582DCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089582DCu) goto L_089582DC;
    return;
L_089582DC:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2084), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089582E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0121_entry, 121u, 126u, 0x089E8A2Cu>(ctx, &aot_mem) && ctx.pc == 0x089582E8u) goto L_089582E8;
    return;
L_089582E8:
    ctx.gpr[31] = (0x089582F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 503u, 0x08ACE2C8u>(ctx, &aot_mem) && ctx.pc == 0x089582F0u) goto L_089582F0;
    return;
L_089582F0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[20] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(13216));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7827));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (2230u << 16u);
      if (branch_taken) {
          goto L_0895833C;
      }
      goto L_08958334;
    }
L_08958334:
    ctx.gpr[31] = (0x0895833Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 369u, 0x088EE5C0u>(ctx, &aot_mem) && ctx.pc == 0x0895833Cu) goto L_0895833C;
    return;
L_0895833C:
    ctx.gpr[31] = (0x08958344u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 278u, 0x088EDF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08958344u) goto L_08958344;
    return;
L_08958344:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1669), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-24624), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-24622), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(22912)));
    ctx.gpr[31] = (0x0895836Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0158_entry, 158u, 280u, 0x08A7D76Cu>(ctx, &aot_mem) && ctx.pc == 0x0895836Cu) goto L_0895836C;
    return;
L_0895836C:
    ctx.gpr[20] = (0u | 0u);
    goto L_08958370;
L_08958370:
    ctx.gpr[5] = (ctx.gpr[20] & 255u);
    ctx.gpr[31] = (0x0895837Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 183u, 0x08864CF0u>(ctx, &aot_mem) && ctx.pc == 0x0895837Cu) goto L_0895837C;
    return;
L_0895837C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958370;
      }
      goto L_08958390;
    }
L_08958390:
    ctx.gpr[31] = (0x08958398u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 558u, 0x08932DD8u>(ctx, &aot_mem) && ctx.pc == 0x08958398u) goto L_08958398;
    return;
L_08958398:
    ctx.gpr[20] = (0u | 0u);
    goto L_0895839C;
L_0895839C:
    ctx.gpr[31] = (0x089583A4u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 882u, 0x089C796Cu>(ctx, &aot_mem) && ctx.pc == 0x089583A4u) goto L_089583A4;
    return;
L_089583A4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895839C;
      }
      goto L_089583B8;
    }
L_089583B8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(-6520))))));
      if (branch_taken) {
          goto L_089583D0;
      }
      goto L_089583C8;
    }
L_089583C8:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7788), static_cast<std::uint8_t>(0u));
    goto L_089583D0;
L_089583D0:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_089583E8;
      }
      goto L_089583DC;
    }
L_089583DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089583E8;
      }
      goto L_089583E4;
    }
L_089583E4:
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(-6520), static_cast<std::uint16_t>(ctx.gpr[17]));
    goto L_089583E8;
L_089583E8:
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08958400u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08958400u) goto L_08958400;
    return;
L_08958400:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(333), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2094), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(2094))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2094), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08958440u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 261u, 0x089D9164u>(ctx, &aot_mem) && ctx.pc == 0x08958440u) goto L_08958440;
    return;
L_08958440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2993), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2994), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08958458u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08958458u) goto L_08958458;
    return;
L_08958458:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08958464u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 644u, 0x08A96C40u>(ctx, &aot_mem) && ctx.pc == 0x08958464u) goto L_08958464;
    return;
L_08958464:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(363), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[31] = (0x08958470u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08958470u) goto L_08958470;
    return;
L_08958470:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08958484u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08958484u) goto L_08958484;
    return;
L_08958484:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08958494u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 198u, 0x08864DF8u>(ctx, &aot_mem) && ctx.pc == 0x08958494u) goto L_08958494;
    return;
L_08958494:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16182), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(16183), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6868), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6540), ctx.gpr[17]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6542), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x089584C8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24016));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 458u, 0x08957274u>(ctx, &aot_mem) && ctx.pc == 0x089584C8u) goto L_089584C8;
    return;
L_089584C8:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x089584D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23968));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 494u, 0x089574B4u>(ctx, &aot_mem) && ctx.pc == 0x089584D4u) goto L_089584D4;
    return;
L_089584D4:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[19] = (2229u << 16u);
    ctx.gpr[20] = (2229u << 16u);
    ctx.gpr[21] = (2229u << 16u);
    goto L_089584E8;
L_089584E8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089585B0;
      }
      goto L_089584F4;
    }
L_089584F4:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_08958510;
      }
      goto L_08958500;
    }
L_08958500:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_089585A4;
      }
      goto L_08958508;
    }
L_08958508:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895852C;
      }
      goto L_08958510;
    }
L_08958510:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08958554;
      }
      goto L_0895851C;
    }
L_0895851C:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895857C;
      }
      goto L_08958524;
    }
L_08958524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089585A4;
      }
      goto L_0895852C;
    }
L_0895852C:
    ctx.gpr[31] = (0x08958534u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08958534u) goto L_08958534;
    return;
L_08958534:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958548;
      }
      goto L_08958540;
    }
L_08958540:
    ctx.gpr[31] = (0x08958548u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 195u, 0x0887CD58u>(ctx, &aot_mem) && ctx.pc == 0x08958548u) goto L_08958548;
    return;
L_08958548:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089585A4;
      }
      goto L_08958554;
    }
L_08958554:
    ctx.gpr[31] = (0x0895855Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0895855Cu) goto L_0895855C;
    return;
L_0895855C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958570;
      }
      goto L_08958568;
    }
L_08958568:
    ctx.gpr[31] = (0x08958570u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 151u, 0x0887CAC8u>(ctx, &aot_mem) && ctx.pc == 0x08958570u) goto L_08958570;
    return;
L_08958570:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089585A4;
      }
      goto L_0895857C;
    }
L_0895857C:
    ctx.gpr[31] = (0x08958584u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08958584u) goto L_08958584;
    return;
L_08958584:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958598;
      }
      goto L_08958590;
    }
L_08958590:
    ctx.gpr[31] = (0x08958598u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 200u, 0x0887CDCCu>(ctx, &aot_mem) && ctx.pc == 0x08958598u) goto L_08958598;
    return;
L_08958598:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089585A4;
      }
      goto L_089585A4;
    }
L_089585A4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089585B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08958B00;
L_089585B0:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089584E8;
      }
      goto L_089585C8;
    }
L_089585C8:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[17] = (0u | 20u);
    goto L_089585D4;
L_089585D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(13)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089585F4;
      }
      goto L_089585EC;
    }
L_089585EC:
    ctx.gpr[31] = (0x089585F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 624u, 0x089C6A08u>(ctx, &aot_mem) && ctx.pc == 0x089585F4u) goto L_089585F4;
    return;
L_089585F4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4900 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(20));
      if (branch_taken) {
          goto L_089585D4;
      }
      goto L_08958604;
    }
L_08958604:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
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
L_0895862C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31988));
    ctx.gpr[23] = (0u | 3u);
    ctx.gpr[22] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31956));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31928));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31900));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[30] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_089586A8;
L_089586A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958AB8;
      }
      goto L_089586B4;
    }
L_089586B4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_089586D4;
      }
      goto L_089586C0;
    }
L_089586C0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08958AB8;
      }
      goto L_089586C8;
    }
L_089586C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_089586EC;
      }
      goto L_089586D0;
    }
L_089586D0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    goto L_089586D4;
L_089586D4:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08958840;
      }
      goto L_089586DC;
    }
L_089586DC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089589D0;
      }
      goto L_089586E4;
    }
L_089586E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958AB8;
      }
      goto L_089586EC;
    }
L_089586EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x089586F8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089586F8u) goto L_089586F8;
    return;
L_089586F8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958838;
      }
      goto L_08958704;
    }
L_08958704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x08958710u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x08958710u) goto L_08958710;
    return;
L_08958710:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958720;
      }
      goto L_0895871C;
    }
L_0895871C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7060)));
    goto L_08958720;
L_08958720:
    ctx.gpr[31] = (0x08958728u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 370u, 0x0898624Cu>(ctx, &aot_mem) && ctx.pc == 0x08958728u) goto L_08958728;
    return;
L_08958728:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] & 4096u);
      if (branch_taken) {
          goto L_08958794;
      }
      goto L_08958734;
    }
L_08958734:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958838;
      }
      goto L_0895873C;
    }
L_0895873C:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (0x08958754u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 420u, 0x08956F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08958754u) goto L_08958754;
    return;
L_08958754:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08958774;
      }
      goto L_08958764;
    }
L_08958764:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0895877C;
      }
      goto L_08958774;
    }
L_08958774:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0895877C;
L_0895877C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958838;
      }
      goto L_08958784;
    }
L_08958784:
    ctx.gpr[31] = (0x0895878Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 145u, 0x08A0D328u>(ctx, &aot_mem) && ctx.pc == 0x0895878Cu) goto L_0895878C;
    return;
L_0895878C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958838;
      }
      goto L_08958794;
    }
L_08958794:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958838;
      }
      goto L_0895879C;
    }
L_0895879C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08958838;
      }
      goto L_089587A8;
    }
L_089587A8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08958838;
      }
      goto L_089587B0;
    }
L_089587B0:
    ctx.gpr[31] = (0x089587B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x089587B8u) goto L_089587B8;
    return;
L_089587B8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_08958838;
      }
      goto L_089587C0;
    }
L_089587C0:
    ctx.gpr[31] = (0x089587C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x089587C8u) goto L_089587C8;
    return;
L_089587C8:
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_08958838;
      }
      goto L_089587D0;
    }
L_089587D0:
    ctx.gpr[31] = (0x089587D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x089587D8u) goto L_089587D8;
    return;
L_089587D8:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08958838;
      }
      goto L_089587E4;
    }
L_089587E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089587F4u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 420u, 0x08956F0Cu>(ctx, &aot_mem) && ctx.pc == 0x089587F4u) goto L_089587F4;
    return;
L_089587F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08958814;
      }
      goto L_08958804;
    }
L_08958804:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_0895881C;
      }
      goto L_08958814;
    }
L_08958814:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_0895881C;
L_0895881C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895882C;
      }
      goto L_08958824;
    }
L_08958824:
    ctx.gpr[31] = (0x0895882Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 157u, 0x08A0D3C0u>(ctx, &aot_mem) && ctx.pc == 0x0895882Cu) goto L_0895882C;
    return;
L_0895882C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08958838;
L_08958838:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958AB8;
      }
      goto L_08958840;
    }
L_08958840:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08958850u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08958850u) goto L_08958850;
    return;
L_08958850:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089589C8;
      }
      goto L_0895885C;
    }
L_0895885C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x08958868u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x08958868u) goto L_08958868;
    return;
L_08958868:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1924)));
      if (branch_taken) {
          goto L_08958878;
      }
      goto L_08958874;
    }
L_08958874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7060)));
    goto L_08958878;
L_08958878:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 4096u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895892C;
      }
      goto L_08958888;
    }
L_08958888:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089588C0;
      }
      goto L_08958890;
    }
L_08958890:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[7] & 2048u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_089588B0;
      }
      goto L_089588A0;
    }
L_089588A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_089588B8;
      }
      goto L_089588B0;
    }
L_089588B0:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    goto L_089588B8;
L_089588B8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089588D0;
      }
      goto L_089588C0;
    }
L_089588C0:
    ctx.gpr[31] = (0x089588C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 370u, 0x0898624Cu>(ctx, &aot_mem) && ctx.pc == 0x089588C8u) goto L_089588C8;
    return;
L_089588C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089589C8;
      }
      goto L_089588D0;
    }
L_089588D0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x089588E0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 420u, 0x08956F0Cu>(ctx, &aot_mem) && ctx.pc == 0x089588E0u) goto L_089588E0;
    return;
L_089588E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0895890C;
      }
      goto L_089588FC;
    }
L_089588FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08958914;
      }
      goto L_0895890C;
    }
L_0895890C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08958914;
L_08958914:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089589C8;
      }
      goto L_0895891C;
    }
L_0895891C:
    ctx.gpr[31] = (0x08958924u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 145u, 0x08A0D328u>(ctx, &aot_mem) && ctx.pc == 0x08958924u) goto L_08958924;
    return;
L_08958924:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089589C8;
      }
      goto L_0895892C;
    }
L_0895892C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958964;
      }
      goto L_08958934;
    }
L_08958934:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[7] = (ctx.gpr[7] & 2048u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08958954;
      }
      goto L_08958944;
    }
L_08958944:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_0895895C;
      }
      goto L_08958954;
    }
L_08958954:
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] & 255u);
    goto L_0895895C;
L_0895895C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089589C8;
      }
      goto L_08958964;
    }
L_08958964:
    ctx.gpr[31] = (0x0895896Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 370u, 0x0898624Cu>(ctx, &aot_mem) && ctx.pc == 0x0895896Cu) goto L_0895896C;
    return;
L_0895896C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_089589C8;
      }
      goto L_08958974;
    }
L_08958974:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08958984u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 420u, 0x08956F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08958984u) goto L_08958984;
    return;
L_08958984:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089589A4;
      }
      goto L_08958994;
    }
L_08958994:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_089589AC;
      }
      goto L_089589A4;
    }
L_089589A4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_089589AC;
L_089589AC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089589BC;
      }
      goto L_089589B4;
    }
L_089589B4:
    ctx.gpr[31] = (0x089589BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 157u, 0x08A0D3C0u>(ctx, &aot_mem) && ctx.pc == 0x089589BCu) goto L_089589BC;
    return;
L_089589BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_089589C8;
L_089589C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958AB8;
      }
      goto L_089589D0;
    }
L_089589D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x089589DCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089589DCu) goto L_089589DC;
    return;
L_089589DC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958AB0;
      }
      goto L_089589E8;
    }
L_089589E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x089589F4u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x089589F4u) goto L_089589F4;
    return;
L_089589F4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958A04;
      }
      goto L_08958A00;
    }
L_08958A00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-7060)));
    goto L_08958A04;
L_08958A04:
    ctx.gpr[31] = (0x08958A0Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 370u, 0x0898624Cu>(ctx, &aot_mem) && ctx.pc == 0x08958A0Cu) goto L_08958A0C;
    return;
L_08958A0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958A6C;
      }
      goto L_08958A14;
    }
L_08958A14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[4] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958AB0;
      }
      goto L_08958A24;
    }
L_08958A24:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08958A4C;
      }
      goto L_08958A3C;
    }
L_08958A3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08958A54;
      }
      goto L_08958A4C;
    }
L_08958A4C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08958A54;
L_08958A54:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958AB0;
      }
      goto L_08958A5C;
    }
L_08958A5C:
    ctx.gpr[31] = (0x08958A64u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 145u, 0x08A0D328u>(ctx, &aot_mem) && ctx.pc == 0x08958A64u) goto L_08958A64;
    return;
L_08958A64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958AB0;
      }
      goto L_08958A6C;
    }
L_08958A6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 2048u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08958A8C;
      }
      goto L_08958A7C;
    }
L_08958A7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08958A94;
      }
      goto L_08958A8C;
    }
L_08958A8C:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08958A94;
L_08958A94:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958AA4;
      }
      goto L_08958A9C;
    }
L_08958A9C:
    ctx.gpr[31] = (0x08958AA4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 157u, 0x08A0D3C0u>(ctx, &aot_mem) && ctx.pc == 0x08958AA4u) goto L_08958AA4;
    return;
L_08958AA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08958AB0;
L_08958AB0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958AB8;
      }
      goto L_08958AB8;
    }
L_08958AB8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089586A8;
      }
      goto L_08958AD0;
    }
L_08958AD0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08958B00:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[23] = (2229u << 16u);
    ctx.gpr[30] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    goto L_08958B50;
L_08958B50:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08958D08;
      }
      goto L_08958B5C;
    }
L_08958B5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08958D08;
      }
      goto L_08958B68;
    }
L_08958B68:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CF4;
      }
      goto L_08958B70;
    }
L_08958B70:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08958B90;
      }
      goto L_08958B7C;
    }
L_08958B7C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08958CF4;
      }
      goto L_08958B84;
    }
L_08958B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08958BAC;
      }
      goto L_08958B8C;
    }
L_08958B8C:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    goto L_08958B90;
L_08958B90:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08958C18;
      }
      goto L_08958B98;
    }
L_08958B98:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08958C88;
      }
      goto L_08958BA0;
    }
L_08958BA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CF4;
      }
      goto L_08958BA8;
    }
L_08958BA8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    goto L_08958BAC;
L_08958BAC:
    ctx.gpr[31] = (0x08958BB4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08958BB4u) goto L_08958BB4;
    return;
L_08958BB4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958C10;
      }
      goto L_08958BC0;
    }
L_08958BC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958C10;
      }
      goto L_08958BD0;
    }
L_08958BD0:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08958BF8;
      }
      goto L_08958BE8;
    }
L_08958BE8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 4096u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08958C00;
      }
      goto L_08958BF8;
    }
L_08958BF8:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08958C00;
L_08958C00:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958C10;
      }
      goto L_08958C08;
    }
L_08958C08:
    ctx.gpr[31] = (0x08958C10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 145u, 0x08A0D328u>(ctx, &aot_mem) && ctx.pc == 0x08958C10u) goto L_08958C10;
    return;
L_08958C10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CF4;
      }
      goto L_08958C18;
    }
L_08958C18:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08958C24u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08958C24u) goto L_08958C24;
    return;
L_08958C24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958C80;
      }
      goto L_08958C30;
    }
L_08958C30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958C80;
      }
      goto L_08958C40;
    }
L_08958C40:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08958C68;
      }
      goto L_08958C58;
    }
L_08958C58:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 4096u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08958C70;
      }
      goto L_08958C68;
    }
L_08958C68:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08958C70;
L_08958C70:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958C80;
      }
      goto L_08958C78;
    }
L_08958C78:
    ctx.gpr[31] = (0x08958C80u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 145u, 0x08A0D328u>(ctx, &aot_mem) && ctx.pc == 0x08958C80u) goto L_08958C80;
    return;
L_08958C80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CF4;
      }
      goto L_08958C88;
    }
L_08958C88:
    ctx.gpr[31] = (0x08958C90u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08958C90u) goto L_08958C90;
    return;
L_08958C90:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CEC;
      }
      goto L_08958C9C;
    }
L_08958C9C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[5] & 4096u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CEC;
      }
      goto L_08958CAC;
    }
L_08958CAC:
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (ctx.gpr[6] & 2048u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08958CD4;
      }
      goto L_08958CC4;
    }
L_08958CC4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[6] = (ctx.gpr[6] & 4096u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08958CDC;
      }
      goto L_08958CD4;
    }
L_08958CD4:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08958CDC;
L_08958CDC:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958CEC;
      }
      goto L_08958CE4;
    }
L_08958CE4:
    ctx.gpr[31] = (0x08958CECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 145u, 0x08A0D328u>(ctx, &aot_mem) && ctx.pc == 0x08958CECu) goto L_08958CEC;
    return;
L_08958CEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08958CF4;
      }
      goto L_08958CF4;
    }
L_08958CF4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(400)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(400), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08958D08;
L_08958D08:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[20] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08958B50;
      }
      goto L_08958D20;
    }
L_08958D20:
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
L_08958D50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-384));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 86u, 0x0895C758u>(ctx, &aot_mem); return;
      }
      goto L_08958D80;
    }
L_08958D80:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-31712)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08958D98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08958DA0;
    }
L_08958DA0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08958DBCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08958DBCu) goto L_08958DBC;
    return;
L_08958DBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(528), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(527), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08958DDC;
    }
L_08958DDC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08958DF4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08958DF4u) goto L_08958DF4;
    return;
L_08958DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08958E1C;
      }
      goto L_08958E00;
    }
L_08958E00:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08958E28;
      }
      goto L_08958E1C;
    }
L_08958E1C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08958E28;
L_08958E28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08958E30;
    }
L_08958E30:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08958E48u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08958E48u) goto L_08958E48;
    return;
L_08958E48:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (14979u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[31] = (0x08958E70u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0057_entry, 57u, 466u, 0x088EA940u>(ctx, &aot_mem) && ctx.pc == 0x08958E70u) goto L_08958E70;
    return;
L_08958E70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08958E78;
    }
L_08958E78:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08958E8Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08958E8Cu) goto L_08958E8C;
    return;
L_08958E8C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08958EA8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08958EA8u) goto L_08958EA8;
    return;
L_08958EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08958EB8;
    }
L_08958EB8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08958ECCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08958ECCu) goto L_08958ECC;
    return;
L_08958ECC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08958EE8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08958EE8u) goto L_08958EE8;
    return;
L_08958EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08958EF8;
    }
L_08958EF8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08958F0Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08958F0Cu) goto L_08958F0C;
    return;
L_08958F0C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08958F28u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08958F28u) goto L_08958F28;
    return;
L_08958F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08958F40;
    }
L_08958F40:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08958F54u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08958F54u) goto L_08958F54;
    return;
L_08958F54:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08958F70u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08958F70u) goto L_08958F70;
    return;
L_08958F70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08958F88;
    }
L_08958F88:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08958F9Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08958F9Cu) goto L_08958F9C;
    return;
L_08958F9C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08958FB8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08958FB8u) goto L_08958FB8;
    return;
L_08958FB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08958FD0;
    }
L_08958FD0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08958FE4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08958FE4u) goto L_08958FE4;
    return;
L_08958FE4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959000u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08959000u) goto L_08959000;
    return;
L_08959000:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959018;
    }
L_08959018:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895902Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895902Cu) goto L_0895902C;
    return;
L_0895902C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959048u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08959048u) goto L_08959048;
    return;
L_08959048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959060;
    }
L_08959060:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959074u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959074u) goto L_08959074;
    return;
L_08959074:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959090u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08959090u) goto L_08959090;
    return;
L_08959090:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_089590A8;
    }
L_089590A8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089590BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x089590BCu) goto L_089590BC;
    return;
L_089590BC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089590D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089590D8u) goto L_089590D8;
    return;
L_089590D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_089590F0;
    }
L_089590F0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959104u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959104u) goto L_08959104;
    return;
L_08959104:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959120u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08959120u) goto L_08959120;
    return;
L_08959120:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959138;
    }
L_08959138:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895914Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895914Cu) goto L_0895914C;
    return;
L_0895914C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959168u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08959168u) goto L_08959168;
    return;
L_08959168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959184;
    }
L_08959184:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959198u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959198u) goto L_08959198;
    return;
L_08959198:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089591B4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089591B4u) goto L_089591B4;
    return;
L_089591B4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_089591CC;
    }
L_089591CC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089591E0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x089591E0u) goto L_089591E0;
    return;
L_089591E0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089591FCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089591FCu) goto L_089591FC;
    return;
L_089591FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959218;
    }
L_08959218:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895922Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895922Cu) goto L_0895922C;
    return;
L_0895922C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959248u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08959248u) goto L_08959248;
    return;
L_08959248:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959260;
    }
L_08959260:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959274u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959274u) goto L_08959274;
    return;
L_08959274:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959290u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08959290u) goto L_08959290;
    return;
L_08959290:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_089592AC;
    }
L_089592AC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089592C0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x089592C0u) goto L_089592C0;
    return;
L_089592C0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089592DCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089592DCu) goto L_089592DC;
    return;
L_089592DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_089592F4;
    }
L_089592F4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959308u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959308u) goto L_08959308;
    return;
L_08959308:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959324u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08959324u) goto L_08959324;
    return;
L_08959324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959340;
    }
L_08959340:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959354u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959354u) goto L_08959354;
    return;
L_08959354:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959370u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08959370u) goto L_08959370;
    return;
L_08959370:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959388;
    }
L_08959388:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895939Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895939Cu) goto L_0895939C;
    return;
L_0895939C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089593B8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089593B8u) goto L_089593B8;
    return;
L_089593B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089593F0;
      }
      goto L_089593E8;
    }
L_089593E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959440;
      }
      goto L_089593F0;
    }
L_089593F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08959420;
    }
    goto L_0895940C;
L_0895940C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959440;
      }
      goto L_08959420;
    }
L_08959420:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959440;
      }
      goto L_0895943C;
    }
L_0895943C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08959440;
L_08959440:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959448;
    }
L_08959448:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895945Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895945Cu) goto L_0895945C;
    return;
L_0895945C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959478u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08959478u) goto L_08959478;
    return;
L_08959478:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089594B0;
      }
      goto L_089594A8;
    }
L_089594A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959500;
      }
      goto L_089594B0;
    }
L_089594B0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089594E0;
    }
    goto L_089594CC;
L_089594CC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959500;
      }
      goto L_089594E0;
    }
L_089594E0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959500;
      }
      goto L_089594FC;
    }
L_089594FC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08959500;
L_08959500:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959508;
    }
L_08959508:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959524u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08959524u) goto L_08959524;
    return;
L_08959524:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959534u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959534u) goto L_08959534;
    return;
L_08959534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895956C;
      }
      goto L_08959564;
    }
L_08959564:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089595BC;
      }
      goto L_0895956C;
    }
L_0895956C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895959C;
    }
    goto L_08959588;
L_08959588:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089595BC;
      }
      goto L_0895959C;
    }
L_0895959C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089595BC;
      }
      goto L_089595B8;
    }
L_089595B8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089595BC;
L_089595BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_089595C4;
    }
L_089595C4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089595E0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089595E0u) goto L_089595E0;
    return;
L_089595E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089595F0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x089595F0u) goto L_089595F0;
    return;
L_089595F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08959628;
      }
      goto L_08959620;
    }
L_08959620:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959678;
      }
      goto L_08959628;
    }
L_08959628:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08959658;
    }
    goto L_08959644;
L_08959644:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959678;
      }
      goto L_08959658;
    }
L_08959658:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959678;
      }
      goto L_08959674;
    }
L_08959674:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08959678;
L_08959678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959680;
    }
L_08959680:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959694u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959694u) goto L_08959694;
    return;
L_08959694:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089596A8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x089596A8u) goto L_089596A8;
    return;
L_089596A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089596E0;
      }
      goto L_089596D8;
    }
L_089596D8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959730;
      }
      goto L_089596E0;
    }
L_089596E0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08959710;
    }
    goto L_089596FC;
L_089596FC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959730;
      }
      goto L_08959710;
    }
L_08959710:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959730;
      }
      goto L_0895972C;
    }
L_0895972C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08959730;
L_08959730:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959738;
    }
L_08959738:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895974Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895974Cu) goto L_0895974C;
    return;
L_0895974C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959760u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959760u) goto L_08959760;
    return;
L_08959760:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08959798;
      }
      goto L_08959790;
    }
L_08959790:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089597E8;
      }
      goto L_08959798;
    }
L_08959798:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089597C8;
    }
    goto L_089597B4;
L_089597B4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089597E8;
      }
      goto L_089597C8;
    }
L_089597C8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089597E8;
      }
      goto L_089597E4;
    }
L_089597E4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089597E8;
L_089597E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_089597F0;
    }
L_089597F0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959804u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959804u) goto L_08959804;
    return;
L_08959804:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959818u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959818u) goto L_08959818;
    return;
L_08959818:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08959850;
      }
      goto L_08959848;
    }
L_08959848:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089598A0;
      }
      goto L_08959850;
    }
L_08959850:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08959880;
    }
    goto L_0895986C;
L_0895986C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089598A0;
      }
      goto L_08959880;
    }
L_08959880:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089598A0;
      }
      goto L_0895989C;
    }
L_0895989C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089598A0;
L_089598A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_089598A8;
    }
L_089598A8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089598BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x089598BCu) goto L_089598BC;
    return;
L_089598BC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089598D0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x089598D0u) goto L_089598D0;
    return;
L_089598D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08959908;
      }
      goto L_08959900;
    }
L_08959900:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959958;
      }
      goto L_08959908;
    }
L_08959908:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08959938;
    }
    goto L_08959924;
L_08959924:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959958;
      }
      goto L_08959938;
    }
L_08959938:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959958;
      }
      goto L_08959954;
    }
L_08959954:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08959958;
L_08959958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959960;
    }
L_08959960:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959974u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959974u) goto L_08959974;
    return;
L_08959974:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959990u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08959990u) goto L_08959990;
    return;
L_08959990:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_089599AC;
    }
    goto L_089599AC;
L_089599AC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089599DC;
      }
      goto L_089599D4;
    }
L_089599D4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959A2C;
      }
      goto L_089599DC;
    }
L_089599DC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08959A0C;
    }
    goto L_089599F8;
L_089599F8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959A2C;
      }
      goto L_08959A0C;
    }
L_08959A0C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959A2C;
      }
      goto L_08959A28;
    }
L_08959A28:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08959A2C;
L_08959A2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959A34;
    }
L_08959A34:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959A48u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959A48u) goto L_08959A48;
    return;
L_08959A48:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959A64u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08959A64u) goto L_08959A64;
    return;
L_08959A64:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08959A80;
    }
    goto L_08959A80;
L_08959A80:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08959AB0;
      }
      goto L_08959AA8;
    }
L_08959AA8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959B00;
      }
      goto L_08959AB0;
    }
L_08959AB0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08959AE0;
    }
    goto L_08959ACC;
L_08959ACC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959B00;
      }
      goto L_08959AE0;
    }
L_08959AE0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959B00;
      }
      goto L_08959AFC;
    }
L_08959AFC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08959B00;
L_08959B00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959B08;
    }
L_08959B08:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959B24u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08959B24u) goto L_08959B24;
    return;
L_08959B24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959B34u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959B34u) goto L_08959B34;
    return;
L_08959B34:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08959B50;
    }
    goto L_08959B50;
L_08959B50:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08959B80;
      }
      goto L_08959B78;
    }
L_08959B78:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959BD0;
      }
      goto L_08959B80;
    }
L_08959B80:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08959BB0;
    }
    goto L_08959B9C;
L_08959B9C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959BD0;
      }
      goto L_08959BB0;
    }
L_08959BB0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959BD0;
      }
      goto L_08959BCC;
    }
L_08959BCC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08959BD0;
L_08959BD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959BD8;
    }
L_08959BD8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959BF4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08959BF4u) goto L_08959BF4;
    return;
L_08959BF4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959C04u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959C04u) goto L_08959C04;
    return;
L_08959C04:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08959C20;
    }
    goto L_08959C20;
L_08959C20:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08959C50;
      }
      goto L_08959C48;
    }
L_08959C48:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959CA0;
      }
      goto L_08959C50;
    }
L_08959C50:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08959C80;
    }
    goto L_08959C6C;
L_08959C6C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959CA0;
      }
      goto L_08959C80;
    }
L_08959C80:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959CA0;
      }
      goto L_08959C9C;
    }
L_08959C9C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08959CA0;
L_08959CA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959CA8;
    }
L_08959CA8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959CBCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959CBCu) goto L_08959CBC;
    return;
L_08959CBC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959CD0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959CD0u) goto L_08959CD0;
    return;
L_08959CD0:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08959CEC;
    }
    goto L_08959CEC;
L_08959CEC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08959D1C;
      }
      goto L_08959D14;
    }
L_08959D14:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959D6C;
      }
      goto L_08959D1C;
    }
L_08959D1C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08959D4C;
    }
    goto L_08959D38;
L_08959D38:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959D6C;
      }
      goto L_08959D4C;
    }
L_08959D4C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959D6C;
      }
      goto L_08959D68;
    }
L_08959D68:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08959D6C;
L_08959D6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959D74;
    }
L_08959D74:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959D88u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959D88u) goto L_08959D88;
    return;
L_08959D88:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959D9Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959D9Cu) goto L_08959D9C;
    return;
L_08959D9C:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08959DB8;
    }
    goto L_08959DB8;
L_08959DB8:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08959DE8;
      }
      goto L_08959DE0;
    }
L_08959DE0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959E38;
      }
      goto L_08959DE8;
    }
L_08959DE8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08959E18;
    }
    goto L_08959E04;
L_08959E04:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959E38;
      }
      goto L_08959E18;
    }
L_08959E18:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959E38;
      }
      goto L_08959E34;
    }
L_08959E34:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08959E38;
L_08959E38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959E40;
    }
L_08959E40:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959E54u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959E54u) goto L_08959E54;
    return;
L_08959E54:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959E68u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959E68u) goto L_08959E68;
    return;
L_08959E68:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08959E84;
    }
    goto L_08959E84;
L_08959E84:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08959EB4;
      }
      goto L_08959EAC;
    }
L_08959EAC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959F04;
      }
      goto L_08959EB4;
    }
L_08959EB4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08959EE4;
    }
    goto L_08959ED0;
L_08959ED0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959F04;
      }
      goto L_08959EE4;
    }
L_08959EE4:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959F04;
      }
      goto L_08959F00;
    }
L_08959F00:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08959F04;
L_08959F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959F0C;
    }
L_08959F0C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959F20u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959F20u) goto L_08959F20;
    return;
L_08959F20:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959F34u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959F34u) goto L_08959F34;
    return;
L_08959F34:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_08959F50;
    }
    goto L_08959F50;
L_08959F50:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_08959F80;
      }
      goto L_08959F78;
    }
L_08959F78:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959FD0;
      }
      goto L_08959F80;
    }
L_08959F80:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08959FB0;
    }
    goto L_08959F9C;
L_08959F9C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08959FD0;
      }
      goto L_08959FB0;
    }
L_08959FB0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08959FD0;
      }
      goto L_08959FCC;
    }
L_08959FCC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08959FD0;
L_08959FD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_08959FD8;
    }
L_08959FD8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08959FECu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08959FECu) goto L_08959FEC;
    return;
L_08959FEC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A008u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895A008u) goto L_0895A008;
    return;
L_0895A008:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895A044;
      }
      goto L_0895A03C;
    }
L_0895A03C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A094;
      }
      goto L_0895A044;
    }
L_0895A044:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895A074;
    }
    goto L_0895A060;
L_0895A060:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A094;
      }
      goto L_0895A074;
    }
L_0895A074:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A094;
      }
      goto L_0895A090;
    }
L_0895A090:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895A094;
L_0895A094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895A09C;
    }
L_0895A09C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A0B0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A0B0u) goto L_0895A0B0;
    return;
L_0895A0B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A0CCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895A0CCu) goto L_0895A0CC;
    return;
L_0895A0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895A108;
      }
      goto L_0895A100;
    }
L_0895A100:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A158;
      }
      goto L_0895A108;
    }
L_0895A108:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895A138;
    }
    goto L_0895A124;
L_0895A124:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A158;
      }
      goto L_0895A138;
    }
L_0895A138:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A158;
      }
      goto L_0895A154;
    }
L_0895A154:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895A158;
L_0895A158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895A160;
    }
L_0895A160:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A17Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895A17Cu) goto L_0895A17C;
    return;
L_0895A17C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A18Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A18Cu) goto L_0895A18C;
    return;
L_0895A18C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895A1C8;
      }
      goto L_0895A1C0;
    }
L_0895A1C0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A218;
      }
      goto L_0895A1C8;
    }
L_0895A1C8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895A1F8;
    }
    goto L_0895A1E4;
L_0895A1E4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A218;
      }
      goto L_0895A1F8;
    }
L_0895A1F8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A218;
      }
      goto L_0895A214;
    }
L_0895A214:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895A218;
L_0895A218:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895A220;
    }
L_0895A220:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A23Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895A23Cu) goto L_0895A23C;
    return;
L_0895A23C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A24Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A24Cu) goto L_0895A24C;
    return;
L_0895A24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895A288;
      }
      goto L_0895A280;
    }
L_0895A280:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A2D8;
      }
      goto L_0895A288;
    }
L_0895A288:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895A2B8;
    }
    goto L_0895A2A4;
L_0895A2A4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A2D8;
      }
      goto L_0895A2B8;
    }
L_0895A2B8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A2D8;
      }
      goto L_0895A2D4;
    }
L_0895A2D4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895A2D8;
L_0895A2D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895A2E0;
    }
L_0895A2E0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A2F4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A2F4u) goto L_0895A2F4;
    return;
L_0895A2F4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A308u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A308u) goto L_0895A308;
    return;
L_0895A308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895A344;
      }
      goto L_0895A33C;
    }
L_0895A33C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A394;
      }
      goto L_0895A344;
    }
L_0895A344:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895A374;
    }
    goto L_0895A360;
L_0895A360:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A394;
      }
      goto L_0895A374;
    }
L_0895A374:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A394;
      }
      goto L_0895A390;
    }
L_0895A390:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895A394;
L_0895A394:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895A39C;
    }
L_0895A39C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A3B0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A3B0u) goto L_0895A3B0;
    return;
L_0895A3B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A3C4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A3C4u) goto L_0895A3C4;
    return;
L_0895A3C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895A400;
      }
      goto L_0895A3F8;
    }
L_0895A3F8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A450;
      }
      goto L_0895A400;
    }
L_0895A400:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895A430;
    }
    goto L_0895A41C;
L_0895A41C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A450;
      }
      goto L_0895A430;
    }
L_0895A430:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A450;
      }
      goto L_0895A44C;
    }
L_0895A44C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895A450;
L_0895A450:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895A458;
    }
L_0895A458:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A46Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A46Cu) goto L_0895A46C;
    return;
L_0895A46C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A480u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A480u) goto L_0895A480;
    return;
L_0895A480:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895A4BC;
      }
      goto L_0895A4B4;
    }
L_0895A4B4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A50C;
      }
      goto L_0895A4BC;
    }
L_0895A4BC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895A4EC;
    }
    goto L_0895A4D8;
L_0895A4D8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A50C;
      }
      goto L_0895A4EC;
    }
L_0895A4EC:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A50C;
      }
      goto L_0895A508;
    }
L_0895A508:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895A50C;
L_0895A50C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895A514;
    }
L_0895A514:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A528u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A528u) goto L_0895A528;
    return;
L_0895A528:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A53Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A53Cu) goto L_0895A53C;
    return;
L_0895A53C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895A578;
      }
      goto L_0895A570;
    }
L_0895A570:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A5C8;
      }
      goto L_0895A578;
    }
L_0895A578:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895A5A8;
    }
    goto L_0895A594;
L_0895A594:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A5C8;
      }
      goto L_0895A5A8;
    }
L_0895A5A8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A5C8;
      }
      goto L_0895A5C4;
    }
L_0895A5C4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895A5C8;
L_0895A5C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895A5D0;
    }
L_0895A5D0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A5E4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A5E4u) goto L_0895A5E4;
    return;
L_0895A5E4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A600u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895A600u) goto L_0895A600;
    return;
L_0895A600:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0895A61C;
    }
    goto L_0895A61C;
L_0895A61C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895A64C;
      }
      goto L_0895A644;
    }
L_0895A644:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A69C;
      }
      goto L_0895A64C;
    }
L_0895A64C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895A67C;
    }
    goto L_0895A668;
L_0895A668:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A69C;
      }
      goto L_0895A67C;
    }
L_0895A67C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A69C;
      }
      goto L_0895A698;
    }
L_0895A698:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895A69C;
L_0895A69C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895A6A4;
    }
L_0895A6A4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A6B8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A6B8u) goto L_0895A6B8;
    return;
L_0895A6B8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A6D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895A6D4u) goto L_0895A6D4;
    return;
L_0895A6D4:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0895A6F0;
    }
    goto L_0895A6F0;
L_0895A6F0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895A720;
      }
      goto L_0895A718;
    }
L_0895A718:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A770;
      }
      goto L_0895A720;
    }
L_0895A720:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895A750;
    }
    goto L_0895A73C;
L_0895A73C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A770;
      }
      goto L_0895A750;
    }
L_0895A750:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A770;
      }
      goto L_0895A76C;
    }
L_0895A76C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895A770;
L_0895A770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895A778;
    }
L_0895A778:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A794u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895A794u) goto L_0895A794;
    return;
L_0895A794:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A7A4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A7A4u) goto L_0895A7A4;
    return;
L_0895A7A4:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0895A7C0;
    }
    goto L_0895A7C0;
L_0895A7C0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895A7F0;
      }
      goto L_0895A7E8;
    }
L_0895A7E8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A840;
      }
      goto L_0895A7F0;
    }
L_0895A7F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895A820;
    }
    goto L_0895A80C;
L_0895A80C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A840;
      }
      goto L_0895A820;
    }
L_0895A820:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A840;
      }
      goto L_0895A83C;
    }
L_0895A83C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895A840;
L_0895A840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895A848;
    }
L_0895A848:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A864u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895A864u) goto L_0895A864;
    return;
L_0895A864:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A874u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A874u) goto L_0895A874;
    return;
L_0895A874:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0895A890;
    }
    goto L_0895A890;
L_0895A890:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895A8C0;
      }
      goto L_0895A8B8;
    }
L_0895A8B8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A910;
      }
      goto L_0895A8C0;
    }
L_0895A8C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895A8F0;
    }
    goto L_0895A8DC;
L_0895A8DC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A910;
      }
      goto L_0895A8F0;
    }
L_0895A8F0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A910;
      }
      goto L_0895A90C;
    }
L_0895A90C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895A910;
L_0895A910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895A918;
    }
L_0895A918:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A92Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A92Cu) goto L_0895A92C;
    return;
L_0895A92C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A940u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A940u) goto L_0895A940;
    return;
L_0895A940:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0895A95C;
    }
    goto L_0895A95C;
L_0895A95C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895A98C;
      }
      goto L_0895A984;
    }
L_0895A984:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A9DC;
      }
      goto L_0895A98C;
    }
L_0895A98C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895A9BC;
    }
    goto L_0895A9A8;
L_0895A9A8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895A9DC;
      }
      goto L_0895A9BC;
    }
L_0895A9BC:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895A9DC;
      }
      goto L_0895A9D8;
    }
L_0895A9D8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895A9DC;
L_0895A9DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895A9E4;
    }
L_0895A9E4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895A9F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895A9F8u) goto L_0895A9F8;
    return;
L_0895A9F8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895AA0Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895AA0Cu) goto L_0895AA0C;
    return;
L_0895AA0C:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0895AA28;
    }
    goto L_0895AA28;
L_0895AA28:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895AA58;
      }
      goto L_0895AA50;
    }
L_0895AA50:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895AAA8;
      }
      goto L_0895AA58;
    }
L_0895AA58:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895AA88;
    }
    goto L_0895AA74;
L_0895AA74:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895AAA8;
      }
      goto L_0895AA88;
    }
L_0895AA88:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AAA8;
      }
      goto L_0895AAA4;
    }
L_0895AAA4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895AAA8;
L_0895AAA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895AAB0;
    }
L_0895AAB0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895AAC4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895AAC4u) goto L_0895AAC4;
    return;
L_0895AAC4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895AAD8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895AAD8u) goto L_0895AAD8;
    return;
L_0895AAD8:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0895AAF4;
    }
    goto L_0895AAF4;
L_0895AAF4:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895AB24;
      }
      goto L_0895AB1C;
    }
L_0895AB1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895AB74;
      }
      goto L_0895AB24;
    }
L_0895AB24:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895AB54;
    }
    goto L_0895AB40;
L_0895AB40:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895AB74;
      }
      goto L_0895AB54;
    }
L_0895AB54:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AB74;
      }
      goto L_0895AB70;
    }
L_0895AB70:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895AB74;
L_0895AB74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895AB7C;
    }
L_0895AB7C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895AB90u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895AB90u) goto L_0895AB90;
    return;
L_0895AB90:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895ABA4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895ABA4u) goto L_0895ABA4;
    return;
L_0895ABA4:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0895ABC0;
    }
    goto L_0895ABC0;
L_0895ABC0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895ABF0;
      }
      goto L_0895ABE8;
    }
L_0895ABE8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895AC40;
      }
      goto L_0895ABF0;
    }
L_0895ABF0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895AC20;
    }
    goto L_0895AC0C;
L_0895AC0C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895AC40;
      }
      goto L_0895AC20;
    }
L_0895AC20:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AC40;
      }
      goto L_0895AC3C;
    }
L_0895AC3C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895AC40;
L_0895AC40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895AC48;
    }
L_0895AC48:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895AC5Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895AC5Cu) goto L_0895AC5C;
    return;
L_0895AC5C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895AC78u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895AC78u) goto L_0895AC78;
    return;
L_0895AC78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895ACB4;
      }
      goto L_0895ACAC;
    }
L_0895ACAC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895AD04;
      }
      goto L_0895ACB4;
    }
L_0895ACB4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895ACE4;
    }
    goto L_0895ACD0;
L_0895ACD0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895AD04;
      }
      goto L_0895ACE4;
    }
L_0895ACE4:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AD04;
      }
      goto L_0895AD00;
    }
L_0895AD00:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895AD04;
L_0895AD04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895AD0C;
    }
L_0895AD0C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895AD20u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895AD20u) goto L_0895AD20;
    return;
L_0895AD20:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895AD3Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895AD3Cu) goto L_0895AD3C;
    return;
L_0895AD3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895AD78;
      }
      goto L_0895AD70;
    }
L_0895AD70:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895ADC8;
      }
      goto L_0895AD78;
    }
L_0895AD78:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895ADA8;
    }
    goto L_0895AD94;
L_0895AD94:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895ADC8;
      }
      goto L_0895ADA8;
    }
L_0895ADA8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895ADC8;
      }
      goto L_0895ADC4;
    }
L_0895ADC4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895ADC8;
L_0895ADC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895ADD0;
    }
L_0895ADD0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895ADE4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895ADE4u) goto L_0895ADE4;
    return;
L_0895ADE4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895ADF8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895ADF8u) goto L_0895ADF8;
    return;
L_0895ADF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895AE34;
      }
      goto L_0895AE2C;
    }
L_0895AE2C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895AE84;
      }
      goto L_0895AE34;
    }
L_0895AE34:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895AE64;
    }
    goto L_0895AE50;
L_0895AE50:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895AE84;
      }
      goto L_0895AE64;
    }
L_0895AE64:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AE84;
      }
      goto L_0895AE80;
    }
L_0895AE80:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895AE84;
L_0895AE84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895AE8C;
    }
L_0895AE8C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895AEA0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895AEA0u) goto L_0895AEA0;
    return;
L_0895AEA0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895AEB4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895AEB4u) goto L_0895AEB4;
    return;
L_0895AEB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895AEF0;
      }
      goto L_0895AEE8;
    }
L_0895AEE8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895AF40;
      }
      goto L_0895AEF0;
    }
L_0895AEF0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895AF20;
    }
    goto L_0895AF0C;
L_0895AF0C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895AF40;
      }
      goto L_0895AF20;
    }
L_0895AF20:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AF40;
      }
      goto L_0895AF3C;
    }
L_0895AF3C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895AF40;
L_0895AF40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895AF48;
    }
L_0895AF48:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895AF5Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895AF5Cu) goto L_0895AF5C;
    return;
L_0895AF5C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895AF70u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895AF70u) goto L_0895AF70;
    return;
L_0895AF70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895AFAC;
      }
      goto L_0895AFA4;
    }
L_0895AFA4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895AFFC;
      }
      goto L_0895AFAC;
    }
L_0895AFAC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895AFDC;
    }
    goto L_0895AFC8;
L_0895AFC8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895AFFC;
      }
      goto L_0895AFDC;
    }
L_0895AFDC:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895AFFC;
      }
      goto L_0895AFF8;
    }
L_0895AFF8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895AFFC;
L_0895AFFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895B004;
    }
L_0895B004:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895B018u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895B018u) goto L_0895B018;
    return;
L_0895B018:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895B034u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895B034u) goto L_0895B034;
    return;
L_0895B034:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0895B050;
    }
    goto L_0895B050;
L_0895B050:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895B080;
      }
      goto L_0895B078;
    }
L_0895B078:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895B0D0;
      }
      goto L_0895B080;
    }
L_0895B080:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895B0B0;
    }
    goto L_0895B09C;
L_0895B09C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895B0D0;
      }
      goto L_0895B0B0;
    }
L_0895B0B0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B0D0;
      }
      goto L_0895B0CC;
    }
L_0895B0CC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895B0D0;
L_0895B0D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895B0D8;
    }
L_0895B0D8:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895B0ECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895B0ECu) goto L_0895B0EC;
    return;
L_0895B0EC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895B108u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895B108u) goto L_0895B108;
    return;
L_0895B108:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(-2736)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0895B124;
    }
    goto L_0895B124;
L_0895B124:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895B154;
      }
      goto L_0895B14C;
    }
L_0895B14C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895B1A4;
      }
      goto L_0895B154;
    }
L_0895B154:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895B184;
    }
    goto L_0895B170;
L_0895B170:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895B1A4;
      }
      goto L_0895B184;
    }
L_0895B184:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B1A4;
      }
      goto L_0895B1A0;
    }
L_0895B1A0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895B1A4;
L_0895B1A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895B1AC;
    }
L_0895B1AC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895B1C0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895B1C0u) goto L_0895B1C0;
    return;
L_0895B1C0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895B1D4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895B1D4u) goto L_0895B1D4;
    return;
L_0895B1D4:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0895B1F0;
    }
    goto L_0895B1F0;
L_0895B1F0:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895B220;
      }
      goto L_0895B218;
    }
L_0895B218:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895B270;
      }
      goto L_0895B220;
    }
L_0895B220:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895B250;
    }
    goto L_0895B23C;
L_0895B23C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895B270;
      }
      goto L_0895B250;
    }
L_0895B250:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B270;
      }
      goto L_0895B26C;
    }
L_0895B26C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895B270;
L_0895B270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895B278;
    }
L_0895B278:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895B28Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895B28Cu) goto L_0895B28C;
    return;
L_0895B28C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895B2A0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895B2A0u) goto L_0895B2A0;
    return;
L_0895B2A0:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0895B2BC;
    }
    goto L_0895B2BC;
L_0895B2BC:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895B2EC;
      }
      goto L_0895B2E4;
    }
L_0895B2E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895B33C;
      }
      goto L_0895B2EC;
    }
L_0895B2EC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895B31C;
    }
    goto L_0895B308;
L_0895B308:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895B33C;
      }
      goto L_0895B31C;
    }
L_0895B31C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B33C;
      }
      goto L_0895B338;
    }
L_0895B338:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895B33C;
L_0895B33C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895B344;
    }
L_0895B344:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895B358u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895B358u) goto L_0895B358;
    return;
L_0895B358:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0895B36Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0895B36Cu) goto L_0895B36C;
    return;
L_0895B36C:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_0895B388;
    }
    goto L_0895B388;
L_0895B388:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895B3B8;
      }
      goto L_0895B3B0;
    }
L_0895B3B0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895B408;
      }
      goto L_0895B3B8;
    }
L_0895B3B8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895B3E8;
    }
    goto L_0895B3D4;
L_0895B3D4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0895B408;
      }
      goto L_0895B3E8;
    }
L_0895B3E8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B408;
      }
      goto L_0895B404;
    }
L_0895B404:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0895B408;
L_0895B408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895B410;
    }
L_0895B410:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895B428u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895B428u) goto L_0895B428;
    return;
L_0895B428:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B46C;
      }
      goto L_0895B434;
    }
L_0895B434:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0895B460;
      }
      goto L_0895B444;
    }
L_0895B444:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0895B46C;
      }
      goto L_0895B460;
    }
L_0895B460:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_0895B46C;
L_0895B46C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895B474;
    }
L_0895B474:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895B48Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895B48Cu) goto L_0895B48C;
    return;
L_0895B48C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B4D0;
      }
      goto L_0895B498;
    }
L_0895B498:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0895B4C4;
      }
      goto L_0895B4A8;
    }
L_0895B4A8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0895B4D0;
      }
      goto L_0895B4C4;
    }
L_0895B4C4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_0895B4D0;
L_0895B4D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895B4D8;
    }
L_0895B4D8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(537)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B4EC;
      }
      goto L_0895B4E4;
    }
L_0895B4E4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6854), static_cast<std::uint8_t>(0u));
    goto L_0895B4EC;
L_0895B4EC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6992));
    ctx.gpr[31] = (0x0895B4FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 618u, 0x08957CCCu>(ctx, &aot_mem) && ctx.pc == 0x0895B4FCu) goto L_0895B4FC;
    return;
L_0895B4FC:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6852));
    ctx.gpr[31] = (0x0895B50Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 624u, 0x08957D04u>(ctx, &aot_mem) && ctx.pc == 0x0895B50Cu) goto L_0895B50C;
    return;
L_0895B50C:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(524), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895B518;
    }
L_0895B518:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895B530u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895B530u) goto L_0895B530;
    return;
L_0895B530:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_0895B544;
      }
      goto L_0895B53C;
    }
L_0895B53C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    goto L_0895B544;
L_0895B544:
    ctx.gpr[31] = (0x0895B54Cu);
    // nop
    goto L_0895815C;
L_0895B54C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (ctx.gpr[2] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895B560u);
    ctx.gpr[6] = (0u | 96u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895B560u) goto L_0895B560;
    return;
L_0895B560:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895B568;
    }
L_0895B568:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895B580u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895B580u) goto L_0895B580;
    return;
L_0895B580:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0895B5C8;
      }
      goto L_0895B5AC;
    }
L_0895B5AC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0895B5D4;
      }
      goto L_0895B5C8;
    }
L_0895B5C8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_0895B5D4;
L_0895B5D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895B5DC;
    }
L_0895B5DC:
    ctx.gpr[31] = (0x0895B5E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 645u, 0x08957F48u>(ctx, &aot_mem) && ctx.pc == 0x0895B5E4u) goto L_0895B5E4;
    return;
L_0895B5E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895B5EC;
    }
L_0895B5EC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895B604u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895B604u) goto L_0895B604;
    return;
L_0895B604:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895B60C;
    }
L_0895B60C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895B624u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895B624u) goto L_0895B624;
    return;
L_0895B624:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31876));
    ctx.gpr[31] = (0x0895B638u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x0895B638u) goto L_0895B638;
    return;
L_0895B638:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-28012)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895B674;
      }
      goto L_0895B658;
    }
L_0895B658:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31840));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0895B66Cu);
    ctx.gpr[6] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 660u, 0x089C6C8Cu>(ctx, &aot_mem) && ctx.pc == 0x0895B66Cu) goto L_0895B66C;
    return;
L_0895B66C:
    ctx.gpr[31] = (0x0895B674u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 711u, 0x089CAF64u>(ctx, &aot_mem) && ctx.pc == 0x0895B674u) goto L_0895B674;
    return;
L_0895B674:
    ctx.gpr[31] = (0x0895B67Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 630u, 0x08942DF8u>(ctx, &aot_mem) && ctx.pc == 0x0895B67Cu) goto L_0895B67C;
    return;
L_0895B67C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[17] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[17] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x0895B6B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 639u, 0x08942EE0u>(ctx, &aot_mem) && ctx.pc == 0x0895B6B0u) goto L_0895B6B0;
    return;
L_0895B6B0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895B6EC;
      }
      goto L_0895B6DC;
    }
L_0895B6DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x0895B6E8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x0895B6E8u) goto L_0895B6E8;
    return;
L_0895B6E8:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895B6EC;
L_0895B6EC:
    ctx.gpr[4] = (ctx.gpr[17] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[18] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0895B714u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x0895B714u) goto L_0895B714;
    return;
L_0895B714:
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[0];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0895B740u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895B740u) goto L_0895B740;
    return;
L_0895B740:
    ctx.gpr[31] = (0x0895B748u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0079_entry, 79u, 641u, 0x08942F1Cu>(ctx, &aot_mem) && ctx.pc == 0x0895B748u) goto L_0895B748;
    return;
L_0895B748:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895B760u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0895B760u) goto L_0895B760;
    return;
L_0895B760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895B768;
    }
L_0895B768:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895B780u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895B780u) goto L_0895B780;
    return;
L_0895B780:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
      if (branch_taken) {
          goto L_0895B820;
      }
      goto L_0895B7B4;
    }
L_0895B7B4:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B820;
      }
      goto L_0895B7E0;
    }
L_0895B7E0:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895B854;
      }
      goto L_0895B820;
    }
L_0895B820:
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    goto L_0895B854;
L_0895B854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895B884u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0895B884u) goto L_0895B884;
    return;
L_0895B884:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895B88C;
    }
L_0895B88C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0895B8A8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895B8A8u) goto L_0895B8A8;
    return;
L_0895B8A8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0895B8EC;
      }
      goto L_0895B8DC;
    }
L_0895B8DC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x0895B8E8u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x0895B8E8u) goto L_0895B8E8;
    return;
L_0895B8E8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0895B8EC;
L_0895B8EC:
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
      if (branch_taken) {
          goto L_0895BB14;
      }
      goto L_0895B91C;
    }
L_0895B91C:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BB14;
      }
      goto L_0895B948;
    }
L_0895B948:
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0895B974u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x0895B974u) goto L_0895B974;
    return;
L_0895B974:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895BA04;
      }
      goto L_0895B998;
    }
L_0895B998:
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895B9ECu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895B9ECu) goto L_0895B9EC;
    return;
L_0895B9EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0895B9FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895B9FCu) goto L_0895B9FC;
    return;
L_0895B9FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BE08;
      }
      goto L_0895BA04;
    }
L_0895BA04:
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895BAA8;
      }
      goto L_0895BA3C;
    }
L_0895BA3C:
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895BA90u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895BA90u) goto L_0895BA90;
    return;
L_0895BA90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0895BAA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895BAA0u) goto L_0895BAA0;
    return;
L_0895BAA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BE08;
      }
      goto L_0895BAA8;
    }
L_0895BAA8:
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895BAFCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895BAFCu) goto L_0895BAFC;
    return;
L_0895BAFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x0895BB0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895BB0Cu) goto L_0895BB0C;
    return;
L_0895BB0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BE08;
      }
      goto L_0895BB14;
    }
L_0895BB14:
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0895BB3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x0895BB3Cu) goto L_0895BB3C;
    return;
L_0895BB3C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895BB8Cu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895BB8Cu) goto L_0895BB8C;
    return;
L_0895BB8C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x0895BB98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895BB98u) goto L_0895BB98;
    return;
L_0895BB98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BE08;
      }
      goto L_0895BBA4;
    }
L_0895BBA4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BE08;
      }
      goto L_0895BBB8;
    }
L_0895BBB8:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BDF4;
      }
      goto L_0895BBCC;
    }
L_0895BBCC:
    ctx.gpr[31] = (0x0895BBD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 142u, 0x0899D2FCu>(ctx, &aot_mem) && ctx.pc == 0x0895BBD4u) goto L_0895BBD4;
    return;
L_0895BBD4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BDF4;
      }
      goto L_0895BBDC;
    }
L_0895BBDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0895BCC4;
      }
      goto L_0895BBE8;
    }
L_0895BBE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0895BCC4;
      }
      goto L_0895BBF8;
    }
L_0895BBF8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895BCC4;
      }
      goto L_0895BC08;
    }
L_0895BC08:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895BC18u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 606u, 0x0888718Cu>(ctx, &aot_mem) && ctx.pc == 0x0895BC18u) goto L_0895BC18;
    return;
L_0895BC18:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0895BC24u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895BC24u) goto L_0895BC24;
    return;
L_0895BC24:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(176), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x0895BC48u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x0895BC48u) goto L_0895BC48;
    return;
L_0895BC48:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BCBC;
      }
      goto L_0895BC58;
    }
L_0895BC58:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0895BC88u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x0895BC88u) goto L_0895BC88;
    return;
L_0895BC88:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BCBC;
      }
      goto L_0895BC90;
    }
L_0895BC90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895BCBCu);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895BCBCu) goto L_0895BCBC;
    return;
L_0895BCBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BDF4;
      }
      goto L_0895BCC4;
    }
L_0895BCC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_0895BDF4;
      }
      goto L_0895BCD0;
    }
L_0895BCD0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(323))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895BDF4;
      }
      goto L_0895BCE0;
    }
L_0895BCE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(632)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895BD34;
      }
      goto L_0895BCEC;
    }
L_0895BCEC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BD50;
      }
      goto L_0895BD34;
    }
L_0895BD34:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0895BD44u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 606u, 0x0888718Cu>(ctx, &aot_mem) && ctx.pc == 0x0895BD44u) goto L_0895BD44;
    return;
L_0895BD44:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    goto L_0895BD50;
L_0895BD50:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[31] = (0x0895BD5Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0895BD5Cu) goto L_0895BD5C;
    return;
L_0895BD5C:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(224), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x0895BD80u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x0895BD80u) goto L_0895BD80;
    return;
L_0895BD80:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BDF4;
      }
      goto L_0895BD90;
    }
L_0895BD90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 1u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x0895BDC0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x0895BDC0u) goto L_0895BDC0;
    return;
L_0895BDC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BDF4;
      }
      goto L_0895BDC8;
    }
L_0895BDC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0895BDF4u);
    // nop
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0895BDF4u) goto L_0895BDF4;
    return;
L_0895BDF4:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0895BBB8;
      }
      goto L_0895BE08;
    }
L_0895BE08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 87u, 0x0895C75Cu>(ctx, &aot_mem); return;
      }
      goto L_0895BE10;
    }
L_0895BE10:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0895BE28u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0895BE28u) goto L_0895BE28;
    return;
L_0895BE28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BFA0;
      }
      goto L_0895BE5C;
    }
L_0895BE5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BFA0;
      }
      goto L_0895BE6C;
    }
L_0895BE6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0895BE90u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A287F8u>(ctx, &aot_mem) && ctx.pc == 0x0895BE90u) goto L_0895BE90;
    return;
L_0895BE90:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0895BF1C;
      }
      goto L_0895BE98;
    }
L_0895BE98:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895BEC8;
      }
      goto L_0895BEC0;
    }
L_0895BEC0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 11u, 0x0895C0CCu>(ctx, &aot_mem); return;
      }
      goto L_0895BEC8;
    }
L_0895BEC8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895BEF8;
    }
    goto L_0895BEE4;
L_0895BEE4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 11u, 0x0895C0CCu>(ctx, &aot_mem); return;
      }
      goto L_0895BEF8;
    }
L_0895BEF8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 11u, 0x0895C0CCu>(ctx, &aot_mem); return;
      }
      goto L_0895BF14;
    }
L_0895BF14:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 11u, 0x0895C0CCu>(ctx, &aot_mem); return;
      }
      goto L_0895BF1C;
    }
L_0895BF1C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895BF4C;
      }
      goto L_0895BF44;
    }
L_0895BF44:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 11u, 0x0895C0CCu>(ctx, &aot_mem); return;
      }
      goto L_0895BF4C;
    }
L_0895BF4C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0895BF7C;
    }
    goto L_0895BF68;
L_0895BF68:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 11u, 0x0895C0CCu>(ctx, &aot_mem); return;
      }
      goto L_0895BF7C;
    }
L_0895BF7C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 11u, 0x0895C0CCu>(ctx, &aot_mem); return;
      }
      goto L_0895BF98;
    }
L_0895BF98:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 11u, 0x0895C0CCu>(ctx, &aot_mem); return;
      }
      goto L_0895BFA0;
    }
L_0895BFA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0895BFC0u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A287F8u>(ctx, &aot_mem) && ctx.pc == 0x0895BFC0u) goto L_0895BFC0;
    return;
L_0895BFC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 5u, 0x0895C04Cu>(ctx, &aot_mem); return;
      }
      goto L_0895BFC8;
    }
L_0895BFC8:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0895BFF8;
      }
      goto L_0895BFF0;
    }
L_0895BFF0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0086_entry, 86u, 11u, 0x0895C0CCu>(ctx, &aot_mem); return;
      }
      goto L_0895BFF8;
    }
L_0895BFF8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.pc = 0x0895C000u; return;
}

void recomp_unit_0085(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0085_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_85(Runtime &runtime) {
    runtime.register_generated_unit(85u, 0x08958000u, 16384u, &recomp_unit_0085, &recomp_unit_0085_entry);
    runtime.register_function(0x08958000u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958010u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958020u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895803Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958040u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958064u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958070u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958090u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089580FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958114u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895812Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958130u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895813Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895814Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958154u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895815Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958184u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089581F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958200u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958218u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958220u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958224u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895822Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958258u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958264u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089582DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089582E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089582F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958334u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895833Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958344u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895836Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958370u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895837Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958390u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958398u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895839Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089583E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958400u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958440u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958458u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958464u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958470u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958484u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958494u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089584C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089584D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089584E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089584F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958500u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958508u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958510u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895851Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958524u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895852Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958534u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958540u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958548u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958554u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895855Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958568u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958570u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895857Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958584u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958590u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958598u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089585A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089585B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089585C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089585D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089585ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089585F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958604u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895862Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089586F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958704u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958710u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895871Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958720u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958728u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958734u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895873Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958754u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958764u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958774u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895877Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958784u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895878Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958794u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895879Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089587F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958804u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958814u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895881Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958824u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895882Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958838u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958840u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958850u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895885Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958868u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958874u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958878u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958888u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958890u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089588FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895890Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958914u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895891Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958924u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895892Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958934u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958944u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958954u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895895Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958964u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895896Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958974u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958984u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958994u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089589F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A04u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A14u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A24u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A3Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A4Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A64u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A6Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A7Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A8Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A94u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958A9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958AA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958AB0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958AB8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958AD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B7Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B84u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B8Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B90u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958B98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BA0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BE8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958BF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C08u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C10u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C18u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C24u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C30u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C40u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C58u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C88u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C90u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958C9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958CACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958CC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958CD4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958CDCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958CE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958CECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958CF4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D08u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D20u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958D98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958DA0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958DBCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958DDCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958DF4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E28u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E30u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E48u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958E8Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958EA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958EB8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958ECCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958EE8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958EF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F28u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F40u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F88u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958F9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958FB8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958FD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08958FE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959000u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959018u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895902Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959048u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959060u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959074u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959090u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089590A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089590BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089590D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089590F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959104u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959120u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959138u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895914Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959168u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959184u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959198u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089591B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089591CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089591E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089591FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959218u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895922Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959248u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959260u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959274u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959290u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089592ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089592C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089592DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089592F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959308u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959324u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959340u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959354u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959370u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959388u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895939Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089593B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089593E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089593F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895940Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959420u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895943Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959440u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959448u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895945Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959478u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089594A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089594B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089594CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089594E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089594FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959500u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959508u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959524u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959534u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959564u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895956Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959588u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895959Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089595B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089595BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089595C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089595E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089595F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959620u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959628u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959644u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959658u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959674u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959678u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959680u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959694u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089596A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089596D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089596E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089596FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959710u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895972Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959730u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959738u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895974Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959760u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959790u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959798u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089597F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959804u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959818u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959848u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959850u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895986Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959880u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895989Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089598A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089598A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089598BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089598D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959900u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959908u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959924u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959938u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959954u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959958u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959960u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959974u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959990u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089599ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089599D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089599DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x089599F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A28u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A48u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A64u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959A80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959AA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959AB0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959ACCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959AE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959AFCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B08u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B24u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959B9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BB0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BCCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BD8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959BF4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C04u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C20u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C48u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C6Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959C9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CA0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CBCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959CECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D14u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D38u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D4Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D6Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D74u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D88u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959D9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959DB8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959DE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959DE8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E04u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E18u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E38u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E40u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959E84u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959EACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959EB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959ED0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959EE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F04u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F20u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959F9Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FB0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FCCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FD8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x08959FECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A008u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A03Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A044u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A060u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A074u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A090u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A094u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A09Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A0B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A0CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A100u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A108u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A124u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A138u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A154u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A158u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A160u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A17Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A18Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A1C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A1C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A1E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A1F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A214u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A218u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A220u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A23Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A24Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A280u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A288u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A2A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A2B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A2D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A2D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A2E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A2F4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A308u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A33Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A344u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A360u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A374u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A390u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A394u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A39Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A3B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A3C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A3F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A400u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A41Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A430u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A44Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A450u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A458u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A46Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A480u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A4B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A4BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A4D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A4ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A508u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A50Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A514u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A528u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A53Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A570u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A578u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A594u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A5A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A5C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A5C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A5D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A5E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A600u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A61Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A644u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A64Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A668u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A67Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A698u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A69Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A6A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A6B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A6D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A6F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A718u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A720u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A73Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A750u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A76Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A770u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A778u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A794u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A7A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A7C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A7E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A7F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A80Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A820u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A83Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A840u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A848u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A864u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A874u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A890u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A8B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A8C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A8DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A8F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A90Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A910u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A918u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A92Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A940u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A95Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A984u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A98Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A9A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A9BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A9D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A9DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A9E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895A9F8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA28u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA58u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA74u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AA88u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AAA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AAA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AAB0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AAC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AAD8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AAF4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB24u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB40u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB54u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB74u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB7Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AB90u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABE8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ABF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC20u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC3Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC40u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC48u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AC78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ACACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ACB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ACD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ACE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD00u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD04u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD20u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD3Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD78u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AD94u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ADA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ADC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ADC8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ADD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ADE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895ADF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE2Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE64u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE84u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AE8Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AEA0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AEB4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AEE8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AEF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF20u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF3Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF40u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF48u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AF70u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AFA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AFACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AFC8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AFDCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AFF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895AFFCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B004u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B018u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B034u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B050u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B078u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B080u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B09Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B0B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B0CCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B0D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B0D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B0ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B108u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B124u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B14Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B154u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B170u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B184u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B1A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B1A4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B1ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B1C0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B1D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B1F0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B218u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B220u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B23Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B250u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B26Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B270u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B278u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B28Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2A0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2BCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B2ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B308u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B31Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B338u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B33Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B344u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B358u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B36Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B388u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3B8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B3E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B404u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B408u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B410u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B428u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B434u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B444u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B460u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B46Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B474u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B48Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B498u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4C4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4D0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4D8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B4FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B50Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B518u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B530u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B53Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B544u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B54Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B560u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B568u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B580u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B5ACu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B5C8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B5D4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B5DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B5E4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B5ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B604u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B60Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B624u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B638u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B658u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B66Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B674u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B67Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B6B0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B6DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B6E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B6ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B714u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B740u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B748u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B760u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B768u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B780u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B7B4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B7E0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B820u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B854u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B884u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B88Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B8A8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B8DCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B8E8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B8ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B91Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B948u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B974u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B998u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B9ECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895B9FCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BA04u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BA3Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BA90u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BAA0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BAA8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BAFCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BB0Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BB14u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BB3Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BB8Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BB98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BBA4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BBB8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BBCCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BBD4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BBDCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BBE8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BBF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC08u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC18u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC24u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC48u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC58u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC88u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BC90u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCBCu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCC4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCD0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCE0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BCECu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD34u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD50u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD80u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BD90u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BDC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BDC8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BDF4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE08u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE10u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE28u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE5Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE6Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE90u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BE98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BEC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BEC8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BEE4u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BEF8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF14u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF1Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF44u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF4Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF68u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF7Cu, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BF98u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BFA0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BFC0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BFC8u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BFF0u, &recomp_unit_0085, "recomp_unit_0085");
    runtime.register_function(0x0895BFF8u, &recomp_unit_0085, "recomp_unit_0085");
}
} // namespace psprecomp
