#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0054[4094] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 5, 0, 6, 0, 7, 0, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9,
    0, 0, 10, 0, 11, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 12, 0, 0, 13, 0, 14, 0, 0, 0, 0, 0, 0, 0, 15, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 16, 0, 17, 0, 0, 18, 0, 19, 0, 0, 20, 0, 0, 21, 0, 22, 0, 0, 23, 0, 24, 0, 0, 25, 0, 0,
    26, 0, 0, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 0, 0, 30, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 31, 32, 0, 0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 0, 36, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 39, 0,
    0, 40, 0, 41, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 44, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 54, 0, 55,
    0, 56, 0, 57, 0, 0, 0, 58, 0, 59, 0, 60, 0, 61, 0, 0, 62, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0,
    0, 0, 0, 66, 0, 0, 0, 67, 0, 0, 0, 0, 68, 0, 69, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0,
    0, 74, 0, 75, 0, 0, 0, 0, 0, 0, 76, 0, 77, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0,
    82, 0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 86, 0, 87, 0, 88, 0, 0, 0, 89, 0, 0, 0, 0, 90, 0, 0, 0, 0,
    91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100,
    0, 0, 0, 0, 101, 0, 102, 0, 0, 103, 0, 104, 0, 0, 105, 0, 106, 0, 0, 107, 0, 108, 0, 0, 109, 0, 110, 111, 0, 0, 0, 0,
    0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 113, 0,
    0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 116, 117, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 119, 120, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    122, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 126, 0, 0, 127, 128, 0, 0, 129, 0, 0, 0, 0, 130, 0, 131, 0, 0, 132, 0, 133, 0,
    0, 0, 134, 0, 0, 0, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 137, 0, 138, 0, 139, 140, 0, 141, 142, 0, 143, 144, 0, 145,
    0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 147, 0, 0, 0, 148, 0, 0, 0, 0, 149, 0, 0, 0,
    0, 0, 150, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0,
    154, 155, 0, 156, 157, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 0, 0, 0, 0, 160, 0, 0, 0, 161, 0, 162, 0, 0, 0, 163, 0, 164,
    0, 165, 0, 166, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 0, 0, 0, 0, 169, 0, 170, 0, 171, 172, 0, 173, 0, 0, 174, 0, 0, 0,
    0, 0, 0, 175, 0, 0, 176, 0, 177, 0, 0, 178, 179, 0, 180, 0, 181, 0, 182, 0, 0, 0, 183, 0, 0, 0, 0, 184, 0, 0, 0, 185,
    0, 186, 0, 187, 0, 188, 0, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 191, 0, 0, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 0,
    0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 0, 0, 0, 0, 196, 0, 0, 197, 0, 198, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0,
    0, 0, 201, 0, 202, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 0, 0, 0, 0, 206, 0, 207, 0, 208,
    0, 0, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 0, 0, 0, 0, 210, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 213, 0,
    0, 0, 214, 0, 0, 0, 0, 0, 215, 0, 216, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 0,
    222, 0, 0, 0, 223, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0,
    0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 232, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 238, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 0, 0, 0, 240, 0, 241, 0, 0, 242, 0, 243, 244, 0, 0,
    0, 245, 0, 0, 0, 0, 246, 0, 247, 0, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0, 0, 0, 0, 0, 0, 251, 0, 252, 253, 0, 0, 254,
    0, 0, 0, 255, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 258, 0, 259, 0, 0, 0, 0, 260, 0, 0, 261, 0, 262, 0, 263, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 264, 0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 269, 0, 0, 0, 270, 0,
    0, 0, 0, 0, 271, 0, 272, 0, 0, 0, 273, 0, 0, 0, 0, 0, 274, 0, 275, 0, 276, 0, 0, 0, 277, 0, 0, 0, 278, 0, 279, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 283,
    0, 0, 0, 284, 0, 0, 0, 285, 286, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 292, 0, 293, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 294, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 297, 0, 0, 298, 0, 299, 300, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 301, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 302, 0, 0, 303, 0, 304,
    0, 0, 305, 0, 0, 306, 307, 0, 308, 0, 309, 0, 0, 0, 310, 0, 0, 311, 0, 0, 0, 312, 0, 313, 0, 314, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 315, 0, 0, 316, 0, 0, 0, 317, 0, 0, 318, 0, 0, 0, 319, 0, 320, 0, 0, 321, 0, 0, 0, 322, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 323, 0, 324, 0, 0, 325, 0, 0, 0, 0, 0, 326, 0, 327, 0, 0, 0, 0, 0, 328, 0, 0, 329, 0, 0, 0,
    0, 0, 330, 0, 0, 0, 0, 331, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 335, 0, 0, 336, 0, 337, 0, 338, 0,
    0, 0, 0, 339, 0, 0, 0, 0, 340, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 0, 0, 0, 0, 0, 0, 0, 0, 344, 345, 0, 0, 0, 346, 0, 347, 0, 348,
    0, 349, 0, 350, 0, 351, 0, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 353, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 355, 0,
    0, 0, 0, 0, 0, 356, 0, 0, 357, 0, 358, 0, 0, 0, 0, 0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 361, 0,
    0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 364, 0, 0, 365, 0, 366,
    0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 0, 0, 0, 369, 0, 0, 370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 372, 0, 0, 373, 0, 0,
    0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 378, 379, 380, 381, 0, 0, 0, 0, 0, 382, 0, 383,
    0, 384, 0, 0, 385, 0, 386, 0, 387, 0, 388, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 392, 0, 0, 0, 0, 393,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 398,
    0, 0, 0, 0, 0, 399, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    401, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 405, 0, 0, 406, 407, 0, 0, 408, 0, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 410,
    0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 0, 0, 0, 0,
    415, 0, 0, 0, 0, 0, 0, 0, 416, 0, 0, 417, 0, 418, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 419, 0,
    0, 420, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424,
    0, 425, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 427, 0, 0, 428, 429, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 430,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 431, 0, 432, 433, 0,
    0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 436, 0, 437, 0, 0, 0, 438, 439, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 443, 0, 0, 0, 444, 0, 0, 445, 0, 446, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 449, 0, 0, 450, 0, 451, 0, 452, 0, 0, 453, 0, 454, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0,
    457, 0, 458, 0, 459, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 462, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 463, 0, 0, 464, 0, 465, 0, 0, 466, 0, 0, 0, 467, 0, 0, 0, 468, 0, 0, 469, 470, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 474, 0, 475, 0, 476, 0, 0, 0, 0,
    0, 0, 0, 0, 477, 0, 0, 0, 0, 0, 0, 0, 0, 0, 478, 0, 479, 480, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 481, 0, 482,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 485, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 487, 0,
    0, 0, 488, 0, 489, 0, 0, 0, 490, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 495, 0, 0, 0, 496, 0, 0, 0, 497, 0, 498, 0, 499, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    501, 0, 502, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 0, 0, 506, 0, 507, 0, 508, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 509, 0, 0, 0, 0, 0, 0, 0, 0, 0, 510, 0, 511, 0, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 516, 0, 517, 0, 518, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 521, 0, 522, 0, 523, 0, 0, 0,
    524, 0, 0, 0, 525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0,
    0, 0, 0, 0, 0, 531, 0, 0, 0, 0, 0, 0, 0, 0, 0, 532, 0, 533, 0, 534, 535, 0, 0, 0, 536, 0, 0, 537, 0, 0, 0, 0,
    538, 0, 0, 0, 539, 0, 0, 0, 0, 0, 0, 540, 0, 0, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 544, 0,
    545, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0, 548, 0, 0, 0, 549, 0, 550, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 551, 0, 552, 0, 553, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 557, 558, 0,
    0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 0, 0, 0, 0, 0, 561, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 562, 0, 0, 0, 563, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 568, 0, 0,
    0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 578, 0, 579, 0, 0, 580, 0, 0, 581, 0, 0, 0, 0, 582, 0, 583, 0, 584, 0, 585,
    0, 586, 0, 587, 0, 0, 0, 0, 588, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 589, 0, 590, 0, 591, 0, 592, 0, 0, 593, 0, 594,
    0, 595, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 599, 0, 600, 0, 601, 0, 602, 603, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 604, 0, 605, 0, 0, 606, 0, 607, 0, 608, 0, 0, 0, 609, 0, 0, 0, 610, 0, 0, 611, 0, 612, 0, 613, 0, 0, 0,
    614, 0, 0, 0, 0, 0, 615, 0, 616, 0, 617, 0, 0, 618, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 621, 0, 622, 0, 623, 0, 624, 0,
    625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 631, 0, 0, 0, 0, 632, 0, 633, 0, 0, 634, 0, 0, 635, 0, 636, 0, 637, 0, 0,
    638, 0, 639, 0, 640, 0, 641, 0, 0, 642, 0, 0, 643, 0, 644, 0, 0, 645, 0, 646, 0, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 0,
    0, 0, 0, 649, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 652, 653,
    654, 0, 655, 0, 656, 0, 657, 0, 658, 0, 659, 0, 660, 0, 661, 0, 662, 0, 663, 0, 0, 0, 664, 0, 0, 0, 0, 665, 0, 666, 0, 0,
    667, 0, 0, 0, 668, 0, 669, 670, 0, 0, 0, 671, 0, 0, 0, 672, 0, 0, 673, 0, 0, 674, 0, 0, 0, 675, 0, 0, 0, 0, 0, 0,
    0, 676, 0, 677, 678, 0, 0, 679, 0, 680, 0, 0, 0, 0, 681, 0, 682, 683, 684, 0, 685, 0, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0,
    0, 0, 688, 0, 0, 0, 689, 0, 690, 0, 691, 0, 0, 0, 0, 692, 0, 693, 0, 0, 694, 0, 0, 695, 0, 696, 697, 0, 0, 0, 698, 0,
    699, 0, 0, 700, 0, 701, 0, 702, 0, 703, 0, 704, 0, 705, 0, 706, 0, 707, 0, 708, 709, 0, 710, 0, 0, 0, 0, 711, 0, 0, 712, 0,
    713, 0, 714, 0, 715, 0, 716, 0, 717, 0, 0, 0, 718, 0, 719, 0, 0, 0, 720, 0, 721, 0, 0, 722, 0, 723, 0, 0, 0, 724, 0, 725,
    0, 0, 726, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 729, 0, 0, 0, 0, 730, 0, 731, 0, 0, 732, 0, 0, 733, 0, 734, 735,
    0, 0, 0, 736, 0, 737, 0, 738, 0, 739, 0, 740, 0, 0, 741, 0, 742, 0, 743, 0, 744, 0, 745, 0, 0, 0, 746, 0, 747, 0, 0, 748,
    0, 749, 0, 750, 0, 751, 0, 752, 0, 753, 0, 754, 0, 755, 0, 756, 757, 0, 758, 0, 0, 0, 0, 759, 0, 760, 0, 761, 0, 762, 0, 763,
    0, 0, 764, 765, 0, 766, 0, 767, 0, 0, 768, 0, 769, 0, 770, 0, 771, 0, 772, 0, 773, 0, 0, 774, 0, 775, 0, 0, 776, 0, 777, 0,
    778, 0, 779, 0, 0, 780, 0, 0, 781, 0, 782, 0, 783, 0, 784, 0, 785, 0, 786, 0, 787, 0, 788, 0, 789, 790, 0, 791, 0, 0, 792, 0,
    0, 0, 0, 0, 793, 0, 0, 0, 0, 0, 794, 0, 0, 795, 0, 0, 796, 0, 0, 797, 0, 0, 798, 0, 0, 0, 0, 0, 799, 800, 0, 801,
    0, 0, 802, 0, 0, 0, 0, 0, 803, 804, 0, 805, 0, 0, 806, 0, 0, 0, 0, 0, 807, 808, 0, 809, 0, 0, 810, 0, 0, 0, 0, 0,
    811, 812, 0, 813, 0, 0, 0, 0, 814, 0, 815, 0, 816, 0, 0, 0, 0, 817, 0, 0, 0, 818, 0, 819, 0, 820, 0, 821, 0, 822, 0, 0,
    823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 824, 0, 825, 0, 0, 0, 826, 0, 0, 0, 0, 827, 0, 0, 828, 0, 0, 0, 0, 829, 0, 0,
    830, 0, 0, 0, 0, 831, 0, 0, 832, 0, 0, 0, 0, 833, 0, 0, 834, 0, 0, 0, 0, 835, 0, 0, 0, 0, 836, 837, 0, 0, 0, 0,
    838, 0, 0, 839, 0, 840, 0, 841, 0, 842, 0, 843, 0, 844, 0, 845, 0, 846, 0, 847, 0, 848, 0, 849, 850, 0, 851, 0, 852, 0, 0, 0,
    0, 0, 853, 0, 0, 0, 854, 0, 855, 0, 856, 0, 857, 0, 858, 0, 859, 0, 860, 0, 0, 861, 0, 862, 0, 0, 863, 0, 0, 864, 865, 0,
    866, 0, 867, 0, 868, 0, 0, 869, 0, 870, 0, 871, 0, 872, 0, 873, 874, 0, 875, 0, 0, 0, 876, 0, 877, 878, 0, 879, 0, 0, 880, 0,
    0, 881, 882, 0, 883, 0, 884, 0, 885, 0, 0, 886, 0, 887, 0, 888, 0, 889, 0, 890, 891, 0, 892, 0, 0, 0, 893, 0, 894, 895, 0, 896,
    0, 897, 0, 0, 898, 0, 0, 0, 0, 0, 0, 0, 0, 0, 899, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    900, 0, 0, 0, 0, 0, 901, 0, 0, 902, 903, 0, 0, 0, 904, 905, 0, 906, 0, 907, 0, 0, 0, 0, 908, 0, 0, 909, 0, 910, 0, 911,
    0, 912, 0, 913, 0, 914, 0, 915, 0, 916, 0, 917, 0, 918, 0, 919, 920, 0, 921, 0, 0, 0, 0, 0, 0, 922, 0, 0, 923, 0, 924, 0,
    925, 0, 926, 0, 927, 0, 928, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 929, 0, 0, 0, 0, 930, 0, 0, 0, 931, 0, 0, 0, 932,
    0, 0, 0, 933, 0, 934, 0, 935, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 936, 0, 937, 0, 938, 0, 0, 939, 0, 940, 0, 0, 0,
    0, 941, 0, 0, 0, 0, 0, 0, 0, 942, 0, 0, 0, 0, 943, 0, 0, 0, 944, 0, 945, 0, 946, 0, 947, 0, 948, 0, 0, 0, 0, 0,
    949, 0, 950, 0, 0, 0, 0, 0, 951, 0, 952, 0, 953, 0, 954, 0, 955, 0, 0, 956, 0, 0, 0, 0, 0, 957, 0, 958, 0, 959,
};
void recomp_unit_0054_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088DC004u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0054[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088DC004;
    case 2u: goto L_088DC00C;
    case 3u: goto L_088DC014;
    case 4u: goto L_088DC024;
    case 5u: goto L_088DC034;
    case 6u: goto L_088DC03C;
    case 7u: goto L_088DC044;
    case 8u: goto L_088DC050;
    case 9u: goto L_088DC080;
    case 10u: goto L_088DC08C;
    case 11u: goto L_088DC094;
    case 12u: goto L_088DC0C0;
    case 13u: goto L_088DC0CC;
    case 14u: goto L_088DC0D4;
    case 15u: goto L_088DC0F4;
    case 16u: goto L_088DC11C;
    case 17u: goto L_088DC124;
    case 18u: goto L_088DC130;
    case 19u: goto L_088DC138;
    case 20u: goto L_088DC144;
    case 21u: goto L_088DC150;
    case 22u: goto L_088DC158;
    case 23u: goto L_088DC164;
    case 24u: goto L_088DC16C;
    case 25u: goto L_088DC178;
    case 26u: goto L_088DC184;
    case 27u: goto L_088DC1AC;
    case 28u: goto L_088DC1B8;
    case 29u: goto L_088DC1C4;
    case 30u: goto L_088DC1E0;
    case 31u: goto L_088DC210;
    case 32u: goto L_088DC214;
    case 33u: goto L_088DC228;
    case 34u: goto L_088DC238;
    case 35u: goto L_088DC244;
    case 36u: goto L_088DC250;
    case 37u: goto L_088DC258;
    case 38u: goto L_088DC268;
    case 39u: goto L_088DC27C;
    case 40u: goto L_088DC288;
    case 41u: goto L_088DC290;
    case 42u: goto L_088DC2A4;
    case 43u: goto L_088DC2AC;
    case 44u: goto L_088DC2BC;
    case 45u: goto L_088DC2C8;
    case 46u: goto L_088DC2EC;
    case 47u: goto L_088DC334;
    case 48u: goto L_088DC33C;
    case 49u: goto L_088DC360;
    case 50u: goto L_088DC388;
    case 51u: goto L_088DC394;
    case 52u: goto L_088DC39C;
    case 53u: goto L_088DC3F0;
    case 54u: goto L_088DC3F8;
    case 55u: goto L_088DC400;
    case 56u: goto L_088DC408;
    case 57u: goto L_088DC410;
    case 58u: goto L_088DC420;
    case 59u: goto L_088DC428;
    case 60u: goto L_088DC430;
    case 61u: goto L_088DC438;
    case 62u: goto L_088DC444;
    case 63u: goto L_088DC454;
    case 64u: goto L_088DC468;
    case 65u: goto L_088DC47C;
    case 66u: goto L_088DC490;
    case 67u: goto L_088DC4A0;
    case 68u: goto L_088DC4B4;
    case 69u: goto L_088DC4BC;
    case 70u: goto L_088DC4C4;
    case 71u: goto L_088DC4D8;
    case 72u: goto L_088DC4E8;
    case 73u: goto L_088DC4F0;
    case 74u: goto L_088DC508;
    case 75u: goto L_088DC510;
    case 76u: goto L_088DC52C;
    case 77u: goto L_088DC534;
    case 78u: goto L_088DC53C;
    case 79u: goto L_088DC544;
    case 80u: goto L_088DC55C;
    case 81u: goto L_088DC56C;
    case 82u: goto L_088DC584;
    case 83u: goto L_088DC58C;
    case 84u: goto L_088DC59C;
    case 85u: goto L_088DC5B4;
    case 86u: goto L_088DC5BC;
    case 87u: goto L_088DC5C4;
    case 88u: goto L_088DC5CC;
    case 89u: goto L_088DC5DC;
    case 90u: goto L_088DC5F0;
    case 91u: goto L_088DC604;
    case 92u: goto L_088DC618;
    case 93u: goto L_088DC630;
    case 94u: goto L_088DC638;
    case 95u: goto L_088DC648;
    case 96u: goto L_088DC650;
    case 97u: goto L_088DC658;
    case 98u: goto L_088DC670;
    case 99u: goto L_088DC678;
    case 100u: goto L_088DC680;
    case 101u: goto L_088DC694;
    case 102u: goto L_088DC69C;
    case 103u: goto L_088DC6A8;
    case 104u: goto L_088DC6B0;
    case 105u: goto L_088DC6BC;
    case 106u: goto L_088DC6C4;
    case 107u: goto L_088DC6D0;
    case 108u: goto L_088DC6D8;
    case 109u: goto L_088DC6E4;
    case 110u: goto L_088DC6EC;
    case 111u: goto L_088DC6F0;
    case 112u: goto L_088DC710;
    case 113u: goto L_088DC77C;
    case 114u: goto L_088DC794;
    case 115u: goto L_088DC7A4;
    case 116u: goto L_088DC7D0;
    case 117u: goto L_088DC7D4;
    case 118u: goto L_088DC7D8;
    case 119u: goto L_088DC818;
    case 120u: goto L_088DC81C;
    case 121u: goto L_088DC828;
    case 122u: goto L_088DC884;
    case 123u: goto L_088DC88C;
    case 124u: goto L_088DC89C;
    case 125u: goto L_088DC8A4;
    case 126u: goto L_088DC8B0;
    case 127u: goto L_088DC8BC;
    case 128u: goto L_088DC8C0;
    case 129u: goto L_088DC8CC;
    case 130u: goto L_088DC8E0;
    case 131u: goto L_088DC8E8;
    case 132u: goto L_088DC8F4;
    case 133u: goto L_088DC8FC;
    case 134u: goto L_088DC90C;
    case 135u: goto L_088DC920;
    case 136u: goto L_088DC944;
    case 137u: goto L_088DC94C;
    case 138u: goto L_088DC954;
    case 139u: goto L_088DC95C;
    case 140u: goto L_088DC960;
    case 141u: goto L_088DC968;
    case 142u: goto L_088DC96C;
    case 143u: goto L_088DC974;
    case 144u: goto L_088DC978;
    case 145u: goto L_088DC980;
    case 146u: goto L_088DC9A4;
    case 147u: goto L_088DC9D0;
    case 148u: goto L_088DC9E0;
    case 149u: goto L_088DC9F4;
    case 150u: goto L_088DCA0C;
    case 151u: goto L_088DCA50;
    case 152u: goto L_088DCA6C;
    case 153u: goto L_088DCA7C;
    case 154u: goto L_088DCA84;
    case 155u: goto L_088DCA88;
    case 156u: goto L_088DCA90;
    case 157u: goto L_088DCA94;
    case 158u: goto L_088DCA9C;
    case 159u: goto L_088DCAA8;
    case 160u: goto L_088DCAD0;
    case 161u: goto L_088DCAE0;
    case 162u: goto L_088DCAE8;
    case 163u: goto L_088DCAF8;
    case 164u: goto L_088DCB00;
    case 165u: goto L_088DCB08;
    case 166u: goto L_088DCB10;
    case 167u: goto L_088DCB20;
    case 168u: goto L_088DCB34;
    case 169u: goto L_088DCB4C;
    case 170u: goto L_088DCB54;
    case 171u: goto L_088DCB5C;
    case 172u: goto L_088DCB60;
    case 173u: goto L_088DCB68;
    case 174u: goto L_088DCB74;
    case 175u: goto L_088DCB90;
    case 176u: goto L_088DCB9C;
    case 177u: goto L_088DCBA4;
    case 178u: goto L_088DCBB0;
    case 179u: goto L_088DCBB4;
    case 180u: goto L_088DCBBC;
    case 181u: goto L_088DCBC4;
    case 182u: goto L_088DCBCC;
    case 183u: goto L_088DCBDC;
    case 184u: goto L_088DCBF0;
    case 185u: goto L_088DCC00;
    case 186u: goto L_088DCC08;
    case 187u: goto L_088DCC10;
    case 188u: goto L_088DCC18;
    case 189u: goto L_088DCC34;
    case 190u: goto L_088DCC44;
    case 191u: goto L_088DCC4C;
    case 192u: goto L_088DCC5C;
    case 193u: goto L_088DCC78;
    case 194u: goto L_088DCC94;
    case 195u: goto L_088DCCA8;
    case 196u: goto L_088DCCC0;
    case 197u: goto L_088DCCCC;
    case 198u: goto L_088DCCD4;
    case 199u: goto L_088DCCE4;
    case 200u: goto L_088DCCEC;
    case 201u: goto L_088DCD0C;
    case 202u: goto L_088DCD14;
    case 203u: goto L_088DCD1C;
    case 204u: goto L_088DCD24;
    case 205u: goto L_088DCD4C;
    case 206u: goto L_088DCD70;
    case 207u: goto L_088DCD78;
    case 208u: goto L_088DCD80;
    case 209u: goto L_088DCDA4;
    case 210u: goto L_088DCDCC;
    case 211u: goto L_088DCDDC;
    case 212u: goto L_088DCDF4;
    case 213u: goto L_088DCDFC;
    case 214u: goto L_088DCE0C;
    case 215u: goto L_088DCE24;
    case 216u: goto L_088DCE2C;
    case 217u: goto L_088DCE34;
    case 218u: goto L_088DCE4C;
    case 219u: goto L_088DCE64;
    case 220u: goto L_088DCE6C;
    case 221u: goto L_088DCE74;
    case 222u: goto L_088DCE84;
    case 223u: goto L_088DCE94;
    case 224u: goto L_088DCEA0;
    case 225u: goto L_088DCED0;
    case 226u: goto L_088DCEFC;
    case 227u: goto L_088DCF10;
    case 228u: goto L_088DCF24;
    case 229u: goto L_088DCF34;
    case 230u: goto L_088DCF44;
    case 231u: goto L_088DCF74;
    case 232u: goto L_088DCF7C;
    case 233u: goto L_088DCFAC;
    case 234u: goto L_088DCFC0;
    case 235u: goto L_088DCFD4;
    case 236u: goto L_088DCFE0;
    case 237u: goto L_088DCFE8;
    case 238u: goto L_088DD018;
    case 239u: goto L_088DD044;
    case 240u: goto L_088DD058;
    case 241u: goto L_088DD060;
    case 242u: goto L_088DD06C;
    case 243u: goto L_088DD074;
    case 244u: goto L_088DD078;
    case 245u: goto L_088DD088;
    case 246u: goto L_088DD09C;
    case 247u: goto L_088DD0A4;
    case 248u: goto L_088DD0BC;
    case 249u: goto L_088DD0C4;
    case 250u: goto L_088DD0CC;
    case 251u: goto L_088DD0E8;
    case 252u: goto L_088DD0F0;
    case 253u: goto L_088DD0F4;
    case 254u: goto L_088DD100;
    case 255u: goto L_088DD110;
    case 256u: goto L_088DD11C;
    case 257u: goto L_088DD12C;
    case 258u: goto L_088DD140;
    case 259u: goto L_088DD148;
    case 260u: goto L_088DD15C;
    case 261u: goto L_088DD168;
    case 262u: goto L_088DD170;
    case 263u: goto L_088DD178;
    case 264u: goto L_088DD1A0;
    case 265u: goto L_088DD1AC;
    case 266u: goto L_088DD1B4;
    case 267u: goto L_088DD1BC;
    case 268u: goto L_088DD1E4;
    case 269u: goto L_088DD1EC;
    case 270u: goto L_088DD1FC;
    case 271u: goto L_088DD214;
    case 272u: goto L_088DD21C;
    case 273u: goto L_088DD22C;
    case 274u: goto L_088DD244;
    case 275u: goto L_088DD24C;
    case 276u: goto L_088DD254;
    case 277u: goto L_088DD264;
    case 278u: goto L_088DD274;
    case 279u: goto L_088DD27C;
    case 280u: goto L_088DD2AC;
    case 281u: goto L_088DD2D8;
    case 282u: goto L_088DD2EC;
    case 283u: goto L_088DD300;
    case 284u: goto L_088DD310;
    case 285u: goto L_088DD320;
    case 286u: goto L_088DD324;
    case 287u: goto L_088DD350;
    case 288u: goto L_088DD358;
    case 289u: goto L_088DD388;
    case 290u: goto L_088DD39C;
    case 291u: goto L_088DD3B0;
    case 292u: goto L_088DD3BC;
    case 293u: goto L_088DD3C4;
    case 294u: goto L_088DD3F4;
    case 295u: goto L_088DD420;
    case 296u: goto L_088DD434;
    case 297u: goto L_088DD43C;
    case 298u: goto L_088DD448;
    case 299u: goto L_088DD450;
    case 300u: goto L_088DD454;
    case 301u: goto L_088DD4A0;
    case 302u: goto L_088DD4EC;
    case 303u: goto L_088DD4F8;
    case 304u: goto L_088DD500;
    case 305u: goto L_088DD50C;
    case 306u: goto L_088DD518;
    case 307u: goto L_088DD51C;
    case 308u: goto L_088DD524;
    case 309u: goto L_088DD52C;
    case 310u: goto L_088DD53C;
    case 311u: goto L_088DD548;
    case 312u: goto L_088DD558;
    case 313u: goto L_088DD560;
    case 314u: goto L_088DD568;
    case 315u: goto L_088DD598;
    case 316u: goto L_088DD5A4;
    case 317u: goto L_088DD5B4;
    case 318u: goto L_088DD5C0;
    case 319u: goto L_088DD5D0;
    case 320u: goto L_088DD5D8;
    case 321u: goto L_088DD5E4;
    case 322u: goto L_088DD5F4;
    case 323u: goto L_088DD61C;
    case 324u: goto L_088DD624;
    case 325u: goto L_088DD630;
    case 326u: goto L_088DD648;
    case 327u: goto L_088DD650;
    case 328u: goto L_088DD668;
    case 329u: goto L_088DD674;
    case 330u: goto L_088DD68C;
    case 331u: goto L_088DD6A0;
    case 332u: goto L_088DD6AC;
    case 333u: goto L_088DD6C4;
    case 334u: goto L_088DD6D8;
    case 335u: goto L_088DD6E0;
    case 336u: goto L_088DD6EC;
    case 337u: goto L_088DD6F4;
    case 338u: goto L_088DD6FC;
    case 339u: goto L_088DD710;
    case 340u: goto L_088DD724;
    case 341u: goto L_088DD728;
    case 342u: goto L_088DD754;
    case 343u: goto L_088DD7B4;
    case 344u: goto L_088DD7DC;
    case 345u: goto L_088DD7E0;
    case 346u: goto L_088DD7F0;
    case 347u: goto L_088DD7F8;
    case 348u: goto L_088DD800;
    case 349u: goto L_088DD808;
    case 350u: goto L_088DD810;
    case 351u: goto L_088DD818;
    case 352u: goto L_088DD83C;
    case 353u: goto L_088DD850;
    case 354u: goto L_088DD86C;
    case 355u: goto L_088DD87C;
    case 356u: goto L_088DD898;
    case 357u: goto L_088DD8A4;
    case 358u: goto L_088DD8AC;
    case 359u: goto L_088DD8D0;
    case 360u: goto L_088DD8F8;
    case 361u: goto L_088DD8FC;
    case 362u: goto L_088DD920;
    case 363u: goto L_088DD950;
    case 364u: goto L_088DD96C;
    case 365u: goto L_088DD978;
    case 366u: goto L_088DD980;
    case 367u: goto L_088DD990;
    case 368u: goto L_088DD9A4;
    case 369u: goto L_088DD9B8;
    case 370u: goto L_088DD9C4;
    case 371u: goto L_088DD9DC;
    case 372u: goto L_088DD9EC;
    case 373u: goto L_088DD9F8;
    case 374u: goto L_088DDA10;
    case 375u: goto L_088DDA24;
    case 376u: goto L_088DDA30;
    case 377u: goto L_088DDA48;
    case 378u: goto L_088DDA54;
    case 379u: goto L_088DDA58;
    case 380u: goto L_088DDA5C;
    case 381u: goto L_088DDA60;
    case 382u: goto L_088DDA78;
    case 383u: goto L_088DDA80;
    case 384u: goto L_088DDA88;
    case 385u: goto L_088DDA94;
    case 386u: goto L_088DDA9C;
    case 387u: goto L_088DDAA4;
    case 388u: goto L_088DDAAC;
    case 389u: goto L_088DDAB4;
    case 390u: goto L_088DDACC;
    case 391u: goto L_088DDAE0;
    case 392u: goto L_088DDAEC;
    case 393u: goto L_088DDB00;
    case 394u: goto L_088DDB38;
    case 395u: goto L_088DDB4C;
    case 396u: goto L_088DDBC8;
    case 397u: goto L_088DDBF8;
    case 398u: goto L_088DDC00;
    case 399u: goto L_088DDC18;
    case 400u: goto L_088DDC24;
    case 401u: goto L_088DDC84;
    case 402u: goto L_088DDC94;
    case 403u: goto L_088DDCDC;
    case 404u: goto L_088DDCE4;
    case 405u: goto L_088DDD1C;
    case 406u: goto L_088DDD28;
    case 407u: goto L_088DDD2C;
    case 408u: goto L_088DDD38;
    case 409u: goto L_088DDD44;
    case 410u: goto L_088DDD80;
    case 411u: goto L_088DDD94;
    case 412u: goto L_088DDE34;
    case 413u: goto L_088DDE64;
    case 414u: goto L_088DDE6C;
    case 415u: goto L_088DDE84;
    case 416u: goto L_088DDEA4;
    case 417u: goto L_088DDEB0;
    case 418u: goto L_088DDEB8;
    case 419u: goto L_088DDEFC;
    case 420u: goto L_088DDF08;
    case 421u: goto L_088DDF14;
    case 422u: goto L_088DDF50;
    case 423u: goto L_088DDF68;
    case 424u: goto L_088DDF80;
    case 425u: goto L_088DDF88;
    case 426u: goto L_088DDFA0;
    case 427u: goto L_088DDFB8;
    case 428u: goto L_088DDFC4;
    case 429u: goto L_088DDFC8;
    case 430u: goto L_088DE000;
    case 431u: goto L_088DE070;
    case 432u: goto L_088DE078;
    case 433u: goto L_088DE07C;
    case 434u: goto L_088DE09C;
    case 435u: goto L_088DE0A4;
    case 436u: goto L_088DE0AC;
    case 437u: goto L_088DE0B4;
    case 438u: goto L_088DE0C4;
    case 439u: goto L_088DE0C8;
    case 440u: goto L_088DE0E8;
    case 441u: goto L_088DE120;
    case 442u: goto L_088DE128;
    case 443u: goto L_088DE130;
    case 444u: goto L_088DE140;
    case 445u: goto L_088DE14C;
    case 446u: goto L_088DE154;
    case 447u: goto L_088DE16C;
    case 448u: goto L_088DE17C;
    case 449u: goto L_088DE1A4;
    case 450u: goto L_088DE1B0;
    case 451u: goto L_088DE1B8;
    case 452u: goto L_088DE1C0;
    case 453u: goto L_088DE1CC;
    case 454u: goto L_088DE1D4;
    case 455u: goto L_088DE1DC;
    case 456u: goto L_088DE1FC;
    case 457u: goto L_088DE204;
    case 458u: goto L_088DE20C;
    case 459u: goto L_088DE214;
    case 460u: goto L_088DE224;
    case 461u: goto L_088DE234;
    case 462u: goto L_088DE240;
    case 463u: goto L_088DE2A4;
    case 464u: goto L_088DE2B0;
    case 465u: goto L_088DE2B8;
    case 466u: goto L_088DE2C4;
    case 467u: goto L_088DE2D4;
    case 468u: goto L_088DE2E4;
    case 469u: goto L_088DE2F0;
    case 470u: goto L_088DE2F4;
    case 471u: goto L_088DE324;
    case 472u: goto L_088DE34C;
    case 473u: goto L_088DE354;
    case 474u: goto L_088DE360;
    case 475u: goto L_088DE368;
    case 476u: goto L_088DE370;
    case 477u: goto L_088DE394;
    case 478u: goto L_088DE3BC;
    case 479u: goto L_088DE3C4;
    case 480u: goto L_088DE3C8;
    case 481u: goto L_088DE3F8;
    case 482u: goto L_088DE400;
    case 483u: goto L_088DE430;
    case 484u: goto L_088DE43C;
    case 485u: goto L_088DE440;
    case 486u: goto L_088DE470;
    case 487u: goto L_088DE47C;
    case 488u: goto L_088DE48C;
    case 489u: goto L_088DE494;
    case 490u: goto L_088DE4A4;
    case 491u: goto L_088DE4B4;
    case 492u: goto L_088DE4BC;
    case 493u: goto L_088DE4F4;
    case 494u: goto L_088DE4FC;
    case 495u: goto L_088DE528;
    case 496u: goto L_088DE538;
    case 497u: goto L_088DE548;
    case 498u: goto L_088DE550;
    case 499u: goto L_088DE558;
    case 500u: goto L_088DE5A0;
    case 501u: goto L_088DE604;
    case 502u: goto L_088DE60C;
    case 503u: goto L_088DE61C;
    case 504u: goto L_088DE688;
    case 505u: goto L_088DE6B8;
    case 506u: goto L_088DE6E0;
    case 507u: goto L_088DE6E8;
    case 508u: goto L_088DE6F0;
    case 509u: goto L_088DE720;
    case 510u: goto L_088DE748;
    case 511u: goto L_088DE750;
    case 512u: goto L_088DE760;
    case 513u: goto L_088DE794;
    case 514u: goto L_088DE79C;
    case 515u: goto L_088DE7C4;
    case 516u: goto L_088DE7CC;
    case 517u: goto L_088DE7D4;
    case 518u: goto L_088DE7DC;
    case 519u: goto L_088DE824;
    case 520u: goto L_088DE84C;
    case 521u: goto L_088DE864;
    case 522u: goto L_088DE86C;
    case 523u: goto L_088DE874;
    case 524u: goto L_088DE884;
    case 525u: goto L_088DE894;
    case 526u: goto L_088DE8A4;
    case 527u: goto L_088DE8BC;
    case 528u: goto L_088DE8D8;
    case 529u: goto L_088DE8EC;
    case 530u: goto L_088DE8F4;
    case 531u: goto L_088DE918;
    case 532u: goto L_088DE940;
    case 533u: goto L_088DE948;
    case 534u: goto L_088DE950;
    case 535u: goto L_088DE954;
    case 536u: goto L_088DE964;
    case 537u: goto L_088DE970;
    case 538u: goto L_088DE984;
    case 539u: goto L_088DE994;
    case 540u: goto L_088DE9B0;
    case 541u: goto L_088DE9C0;
    case 542u: goto L_088DE9D0;
    case 543u: goto L_088DEA4C;
    case 544u: goto L_088DEA7C;
    case 545u: goto L_088DEA84;
    case 546u: goto L_088DEA94;
    case 547u: goto L_088DEAC4;
    case 548u: goto L_088DEACC;
    case 549u: goto L_088DEADC;
    case 550u: goto L_088DEAE4;
    case 551u: goto L_088DEB10;
    case 552u: goto L_088DEB18;
    case 553u: goto L_088DEB20;
    case 554u: goto L_088DEB28;
    case 555u: goto L_088DEB40;
    case 556u: goto L_088DEB4C;
    case 557u: goto L_088DEB78;
    case 558u: goto L_088DEB7C;
    case 559u: goto L_088DEBA0;
    case 560u: goto L_088DEBC8;
    case 561u: goto L_088DEBF0;
    case 562u: goto L_088DEC18;
    case 563u: goto L_088DEC28;
    case 564u: goto L_088DEC40;
    case 565u: goto L_088DEC48;
    case 566u: goto L_088DEC60;
    case 567u: goto L_088DEC68;
    case 568u: goto L_088DEC78;
    case 569u: goto L_088DEC90;
    case 570u: goto L_088DEC98;
    case 571u: goto L_088DECB0;
    case 572u: goto L_088DECB8;
    case 573u: goto L_088DED10;
    case 574u: goto L_088DEDD4;
    case 575u: goto L_088DEE0C;
    case 576u: goto L_088DEE98;
    case 577u: goto L_088DEEA8;
    case 578u: goto L_088DEEB4;
    case 579u: goto L_088DEEBC;
    case 580u: goto L_088DEEC8;
    case 581u: goto L_088DEED4;
    case 582u: goto L_088DEEE8;
    case 583u: goto L_088DEEF0;
    case 584u: goto L_088DEEF8;
    case 585u: goto L_088DEF00;
    case 586u: goto L_088DEF08;
    case 587u: goto L_088DEF10;
    case 588u: goto L_088DEF24;
    case 589u: goto L_088DEF54;
    case 590u: goto L_088DEF5C;
    case 591u: goto L_088DEF64;
    case 592u: goto L_088DEF6C;
    case 593u: goto L_088DEF78;
    case 594u: goto L_088DEF80;
    case 595u: goto L_088DEF88;
    case 596u: goto L_088DEF90;
    case 597u: goto L_088DEFAC;
    case 598u: goto L_088DEFBC;
    case 599u: goto L_088DEFC8;
    case 600u: goto L_088DEFD0;
    case 601u: goto L_088DEFD8;
    case 602u: goto L_088DEFE0;
    case 603u: goto L_088DEFE4;
    case 604u: goto L_088DF014;
    case 605u: goto L_088DF01C;
    case 606u: goto L_088DF028;
    case 607u: goto L_088DF030;
    case 608u: goto L_088DF038;
    case 609u: goto L_088DF048;
    case 610u: goto L_088DF058;
    case 611u: goto L_088DF064;
    case 612u: goto L_088DF06C;
    case 613u: goto L_088DF074;
    case 614u: goto L_088DF084;
    case 615u: goto L_088DF09C;
    case 616u: goto L_088DF0A4;
    case 617u: goto L_088DF0AC;
    case 618u: goto L_088DF0B8;
    case 619u: goto L_088DF0C8;
    case 620u: goto L_088DF0D0;
    case 621u: goto L_088DF0E4;
    case 622u: goto L_088DF0EC;
    case 623u: goto L_088DF0F4;
    case 624u: goto L_088DF0FC;
    case 625u: goto L_088DF104;
    case 626u: goto L_088DF10C;
    case 627u: goto L_088DF114;
    case 628u: goto L_088DF11C;
    case 629u: goto L_088DF124;
    case 630u: goto L_088DF12C;
    case 631u: goto L_088DF134;
    case 632u: goto L_088DF148;
    case 633u: goto L_088DF150;
    case 634u: goto L_088DF15C;
    case 635u: goto L_088DF168;
    case 636u: goto L_088DF170;
    case 637u: goto L_088DF178;
    case 638u: goto L_088DF184;
    case 639u: goto L_088DF18C;
    case 640u: goto L_088DF194;
    case 641u: goto L_088DF19C;
    case 642u: goto L_088DF1A8;
    case 643u: goto L_088DF1B4;
    case 644u: goto L_088DF1BC;
    case 645u: goto L_088DF1C8;
    case 646u: goto L_088DF1D0;
    case 647u: goto L_088DF1DC;
    case 648u: goto L_088DF1F8;
    case 649u: goto L_088DF210;
    case 650u: goto L_088DF23C;
    case 651u: goto L_088DF260;
    case 652u: goto L_088DF27C;
    case 653u: goto L_088DF280;
    case 654u: goto L_088DF284;
    case 655u: goto L_088DF28C;
    case 656u: goto L_088DF294;
    case 657u: goto L_088DF29C;
    case 658u: goto L_088DF2A4;
    case 659u: goto L_088DF2AC;
    case 660u: goto L_088DF2B4;
    case 661u: goto L_088DF2BC;
    case 662u: goto L_088DF2C4;
    case 663u: goto L_088DF2CC;
    case 664u: goto L_088DF2DC;
    case 665u: goto L_088DF2F0;
    case 666u: goto L_088DF2F8;
    case 667u: goto L_088DF304;
    case 668u: goto L_088DF314;
    case 669u: goto L_088DF31C;
    case 670u: goto L_088DF320;
    case 671u: goto L_088DF330;
    case 672u: goto L_088DF340;
    case 673u: goto L_088DF34C;
    case 674u: goto L_088DF358;
    case 675u: goto L_088DF368;
    case 676u: goto L_088DF388;
    case 677u: goto L_088DF390;
    case 678u: goto L_088DF394;
    case 679u: goto L_088DF3A0;
    case 680u: goto L_088DF3A8;
    case 681u: goto L_088DF3BC;
    case 682u: goto L_088DF3C4;
    case 683u: goto L_088DF3C8;
    case 684u: goto L_088DF3CC;
    case 685u: goto L_088DF3D4;
    case 686u: goto L_088DF3E0;
    case 687u: goto L_088DF3F8;
    case 688u: goto L_088DF40C;
    case 689u: goto L_088DF41C;
    case 690u: goto L_088DF424;
    case 691u: goto L_088DF42C;
    case 692u: goto L_088DF440;
    case 693u: goto L_088DF448;
    case 694u: goto L_088DF454;
    case 695u: goto L_088DF460;
    case 696u: goto L_088DF468;
    case 697u: goto L_088DF46C;
    case 698u: goto L_088DF47C;
    case 699u: goto L_088DF484;
    case 700u: goto L_088DF490;
    case 701u: goto L_088DF498;
    case 702u: goto L_088DF4A0;
    case 703u: goto L_088DF4A8;
    case 704u: goto L_088DF4B0;
    case 705u: goto L_088DF4B8;
    case 706u: goto L_088DF4C0;
    case 707u: goto L_088DF4C8;
    case 708u: goto L_088DF4D0;
    case 709u: goto L_088DF4D4;
    case 710u: goto L_088DF4DC;
    case 711u: goto L_088DF4F0;
    case 712u: goto L_088DF4FC;
    case 713u: goto L_088DF504;
    case 714u: goto L_088DF50C;
    case 715u: goto L_088DF514;
    case 716u: goto L_088DF51C;
    case 717u: goto L_088DF524;
    case 718u: goto L_088DF534;
    case 719u: goto L_088DF53C;
    case 720u: goto L_088DF54C;
    case 721u: goto L_088DF554;
    case 722u: goto L_088DF560;
    case 723u: goto L_088DF568;
    case 724u: goto L_088DF578;
    case 725u: goto L_088DF580;
    case 726u: goto L_088DF58C;
    case 727u: goto L_088DF5A4;
    case 728u: goto L_088DF5B0;
    case 729u: goto L_088DF5C0;
    case 730u: goto L_088DF5D4;
    case 731u: goto L_088DF5DC;
    case 732u: goto L_088DF5E8;
    case 733u: goto L_088DF5F4;
    case 734u: goto L_088DF5FC;
    case 735u: goto L_088DF600;
    case 736u: goto L_088DF610;
    case 737u: goto L_088DF618;
    case 738u: goto L_088DF620;
    case 739u: goto L_088DF628;
    case 740u: goto L_088DF630;
    case 741u: goto L_088DF63C;
    case 742u: goto L_088DF644;
    case 743u: goto L_088DF64C;
    case 744u: goto L_088DF654;
    case 745u: goto L_088DF65C;
    case 746u: goto L_088DF66C;
    case 747u: goto L_088DF674;
    case 748u: goto L_088DF680;
    case 749u: goto L_088DF688;
    case 750u: goto L_088DF690;
    case 751u: goto L_088DF698;
    case 752u: goto L_088DF6A0;
    case 753u: goto L_088DF6A8;
    case 754u: goto L_088DF6B0;
    case 755u: goto L_088DF6B8;
    case 756u: goto L_088DF6C0;
    case 757u: goto L_088DF6C4;
    case 758u: goto L_088DF6CC;
    case 759u: goto L_088DF6E0;
    case 760u: goto L_088DF6E8;
    case 761u: goto L_088DF6F0;
    case 762u: goto L_088DF6F8;
    case 763u: goto L_088DF700;
    case 764u: goto L_088DF70C;
    case 765u: goto L_088DF710;
    case 766u: goto L_088DF718;
    case 767u: goto L_088DF720;
    case 768u: goto L_088DF72C;
    case 769u: goto L_088DF734;
    case 770u: goto L_088DF73C;
    case 771u: goto L_088DF744;
    case 772u: goto L_088DF74C;
    case 773u: goto L_088DF754;
    case 774u: goto L_088DF760;
    case 775u: goto L_088DF768;
    case 776u: goto L_088DF774;
    case 777u: goto L_088DF77C;
    case 778u: goto L_088DF784;
    case 779u: goto L_088DF78C;
    case 780u: goto L_088DF798;
    case 781u: goto L_088DF7A4;
    case 782u: goto L_088DF7AC;
    case 783u: goto L_088DF7B4;
    case 784u: goto L_088DF7BC;
    case 785u: goto L_088DF7C4;
    case 786u: goto L_088DF7CC;
    case 787u: goto L_088DF7D4;
    case 788u: goto L_088DF7DC;
    case 789u: goto L_088DF7E4;
    case 790u: goto L_088DF7E8;
    case 791u: goto L_088DF7F0;
    case 792u: goto L_088DF7FC;
    case 793u: goto L_088DF814;
    case 794u: goto L_088DF82C;
    case 795u: goto L_088DF838;
    case 796u: goto L_088DF844;
    case 797u: goto L_088DF850;
    case 798u: goto L_088DF85C;
    case 799u: goto L_088DF874;
    case 800u: goto L_088DF878;
    case 801u: goto L_088DF880;
    case 802u: goto L_088DF88C;
    case 803u: goto L_088DF8A4;
    case 804u: goto L_088DF8A8;
    case 805u: goto L_088DF8B0;
    case 806u: goto L_088DF8BC;
    case 807u: goto L_088DF8D4;
    case 808u: goto L_088DF8D8;
    case 809u: goto L_088DF8E0;
    case 810u: goto L_088DF8EC;
    case 811u: goto L_088DF904;
    case 812u: goto L_088DF908;
    case 813u: goto L_088DF910;
    case 814u: goto L_088DF924;
    case 815u: goto L_088DF92C;
    case 816u: goto L_088DF934;
    case 817u: goto L_088DF948;
    case 818u: goto L_088DF958;
    case 819u: goto L_088DF960;
    case 820u: goto L_088DF968;
    case 821u: goto L_088DF970;
    case 822u: goto L_088DF978;
    case 823u: goto L_088DF984;
    case 824u: goto L_088DF9AC;
    case 825u: goto L_088DF9B4;
    case 826u: goto L_088DF9C4;
    case 827u: goto L_088DF9D8;
    case 828u: goto L_088DF9E4;
    case 829u: goto L_088DF9F8;
    case 830u: goto L_088DFA04;
    case 831u: goto L_088DFA18;
    case 832u: goto L_088DFA24;
    case 833u: goto L_088DFA38;
    case 834u: goto L_088DFA44;
    case 835u: goto L_088DFA58;
    case 836u: goto L_088DFA6C;
    case 837u: goto L_088DFA70;
    case 838u: goto L_088DFA84;
    case 839u: goto L_088DFA90;
    case 840u: goto L_088DFA98;
    case 841u: goto L_088DFAA0;
    case 842u: goto L_088DFAA8;
    case 843u: goto L_088DFAB0;
    case 844u: goto L_088DFAB8;
    case 845u: goto L_088DFAC0;
    case 846u: goto L_088DFAC8;
    case 847u: goto L_088DFAD0;
    case 848u: goto L_088DFAD8;
    case 849u: goto L_088DFAE0;
    case 850u: goto L_088DFAE4;
    case 851u: goto L_088DFAEC;
    case 852u: goto L_088DFAF4;
    case 853u: goto L_088DFB0C;
    case 854u: goto L_088DFB1C;
    case 855u: goto L_088DFB24;
    case 856u: goto L_088DFB2C;
    case 857u: goto L_088DFB34;
    case 858u: goto L_088DFB3C;
    case 859u: goto L_088DFB44;
    case 860u: goto L_088DFB4C;
    case 861u: goto L_088DFB58;
    case 862u: goto L_088DFB60;
    case 863u: goto L_088DFB6C;
    case 864u: goto L_088DFB78;
    case 865u: goto L_088DFB7C;
    case 866u: goto L_088DFB84;
    case 867u: goto L_088DFB8C;
    case 868u: goto L_088DFB94;
    case 869u: goto L_088DFBA0;
    case 870u: goto L_088DFBA8;
    case 871u: goto L_088DFBB0;
    case 872u: goto L_088DFBB8;
    case 873u: goto L_088DFBC0;
    case 874u: goto L_088DFBC4;
    case 875u: goto L_088DFBCC;
    case 876u: goto L_088DFBDC;
    case 877u: goto L_088DFBE4;
    case 878u: goto L_088DFBE8;
    case 879u: goto L_088DFBF0;
    case 880u: goto L_088DFBFC;
    case 881u: goto L_088DFC08;
    case 882u: goto L_088DFC0C;
    case 883u: goto L_088DFC14;
    case 884u: goto L_088DFC1C;
    case 885u: goto L_088DFC24;
    case 886u: goto L_088DFC30;
    case 887u: goto L_088DFC38;
    case 888u: goto L_088DFC40;
    case 889u: goto L_088DFC48;
    case 890u: goto L_088DFC50;
    case 891u: goto L_088DFC54;
    case 892u: goto L_088DFC5C;
    case 893u: goto L_088DFC6C;
    case 894u: goto L_088DFC74;
    case 895u: goto L_088DFC78;
    case 896u: goto L_088DFC80;
    case 897u: goto L_088DFC88;
    case 898u: goto L_088DFC94;
    case 899u: goto L_088DFCBC;
    case 900u: goto L_088DFD04;
    case 901u: goto L_088DFD1C;
    case 902u: goto L_088DFD28;
    case 903u: goto L_088DFD2C;
    case 904u: goto L_088DFD3C;
    case 905u: goto L_088DFD40;
    case 906u: goto L_088DFD48;
    case 907u: goto L_088DFD50;
    case 908u: goto L_088DFD64;
    case 909u: goto L_088DFD70;
    case 910u: goto L_088DFD78;
    case 911u: goto L_088DFD80;
    case 912u: goto L_088DFD88;
    case 913u: goto L_088DFD90;
    case 914u: goto L_088DFD98;
    case 915u: goto L_088DFDA0;
    case 916u: goto L_088DFDA8;
    case 917u: goto L_088DFDB0;
    case 918u: goto L_088DFDB8;
    case 919u: goto L_088DFDC0;
    case 920u: goto L_088DFDC4;
    case 921u: goto L_088DFDCC;
    case 922u: goto L_088DFDE8;
    case 923u: goto L_088DFDF4;
    case 924u: goto L_088DFDFC;
    case 925u: goto L_088DFE04;
    case 926u: goto L_088DFE0C;
    case 927u: goto L_088DFE14;
    case 928u: goto L_088DFE1C;
    case 929u: goto L_088DFE4C;
    case 930u: goto L_088DFE60;
    case 931u: goto L_088DFE70;
    case 932u: goto L_088DFE80;
    case 933u: goto L_088DFE90;
    case 934u: goto L_088DFE98;
    case 935u: goto L_088DFEA0;
    case 936u: goto L_088DFED0;
    case 937u: goto L_088DFED8;
    case 938u: goto L_088DFEE0;
    case 939u: goto L_088DFEEC;
    case 940u: goto L_088DFEF4;
    case 941u: goto L_088DFF08;
    case 942u: goto L_088DFF28;
    case 943u: goto L_088DFF3C;
    case 944u: goto L_088DFF4C;
    case 945u: goto L_088DFF54;
    case 946u: goto L_088DFF5C;
    case 947u: goto L_088DFF64;
    case 948u: goto L_088DFF6C;
    case 949u: goto L_088DFF84;
    case 950u: goto L_088DFF8C;
    case 951u: goto L_088DFFA4;
    case 952u: goto L_088DFFAC;
    case 953u: goto L_088DFFB4;
    case 954u: goto L_088DFFBC;
    case 955u: goto L_088DFFC4;
    case 956u: goto L_088DFFD0;
    case 957u: goto L_088DFFE8;
    case 958u: goto L_088DFFF0;
    case 959u: goto L_088DFFF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088DC004:
    ctx.gpr[31] = (0x088DC00Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DC00Cu) goto L_088DC00C;
    return;
L_088DC00C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC024;
      }
      goto L_088DC014;
    }
L_088DC014:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DC034;
      }
      goto L_088DC024;
    }
L_088DC024:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DC034;
L_088DC034:
    ctx.gpr[31] = (0x088DC03Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DC03Cu) goto L_088DC03C;
    return;
L_088DC03C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC2C8;
      }
      goto L_088DC044;
    }
L_088DC044:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1752)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC2C8;
      }
      goto L_088DC050;
    }
L_088DC050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC2C8;
      }
      goto L_088DC080;
    }
L_088DC080:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DC08Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088DD4A0;
L_088DC08C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC2C8;
      }
      goto L_088DC094;
    }
L_088DC094:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC2C8;
      }
      goto L_088DC0C0;
    }
L_088DC0C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088DC2C8;
      }
      goto L_088DC0CC;
    }
L_088DC0CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC2C8;
      }
      goto L_088DC0D4;
    }
L_088DC0D4:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC138;
      }
      goto L_088DC0F4;
    }
L_088DC0F4:
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
          goto L_088DC138;
      }
      goto L_088DC11C;
    }
L_088DC11C:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC138;
      }
      goto L_088DC124;
    }
L_088DC124:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DC130u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 230u, 0x088D514Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC130u) goto L_088DC130;
    return;
L_088DC130:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC2C8;
      }
      goto L_088DC138;
    }
L_088DC138:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1752)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC158;
      }
      goto L_088DC144;
    }
L_088DC144:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DC150u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088DD4A0;
L_088DC150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC2C8;
      }
      goto L_088DC158;
    }
L_088DC158:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1754))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088DC238;
      }
      goto L_088DC164;
    }
L_088DC164:
    ctx.gpr[31] = (0x088DC16Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 489u, 0x088D6508u>(ctx, &aot_mem) && ctx.pc == 0x088DC16Cu) goto L_088DC16C;
    return;
L_088DC16C:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DC238;
      }
      goto L_088DC178;
    }
L_088DC178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088DC238;
      }
      goto L_088DC184;
    }
L_088DC184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(56));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088DC1ACu);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DC1ACu) goto L_088DC1AC;
    return;
L_088DC1AC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[21] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
        goto L_088DC1E0;
    }
    goto L_088DC1B8;
L_088DC1B8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[31] = (0x088DC1C4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088DC1C4u) goto L_088DC1C4;
    return;
L_088DC1C4:
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088DC214;
      }
      goto L_088DC1E0;
    }
L_088DC1E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[7] = (16896u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DC210u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DC210u) goto L_088DC210;
    return;
L_088DC210:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_088DC214;
L_088DC214:
    ctx.gpr[5] = (2189u << 16u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DC228u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23432));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x088DC228u) goto L_088DC228;
    return;
L_088DC228:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1752), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1754), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_088DC2C8;
      }
      goto L_088DC238;
    }
L_088DC238:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1754))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC258;
      }
      goto L_088DC244;
    }
L_088DC244:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DC250u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 230u, 0x088D514Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC250u) goto L_088DC250;
    return;
L_088DC250:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC2C8;
      }
      goto L_088DC258;
    }
L_088DC258:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DC290;
      }
      goto L_088DC268;
    }
L_088DC268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC2C8;
      }
      goto L_088DC27C;
    }
L_088DC27C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DC288u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 230u, 0x088D514Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC288u) goto L_088DC288;
    return;
L_088DC288:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC2C8;
      }
      goto L_088DC290;
    }
L_088DC290:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), ctx.gpr[5]);
    ctx.gpr[31] = (0x088DC2A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DC2A4u) goto L_088DC2A4;
    return;
L_088DC2A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC2BC;
      }
      goto L_088DC2AC;
    }
L_088DC2AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(500));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DC2C8;
      }
      goto L_088DC2BC;
    }
L_088DC2BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(868), ctx.gpr[4]);
    goto L_088DC2C8;
L_088DC2C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC2EC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DC334u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC334u) goto L_088DC334;
    return;
L_088DC334:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DC388;
      }
      goto L_088DC33C;
    }
L_088DC33C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC388;
      }
      goto L_088DC360;
    }
L_088DC360:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC408;
      }
      goto L_088DC388;
    }
L_088DC388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC400;
      }
      goto L_088DC394;
    }
L_088DC394:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC3F8;
      }
      goto L_088DC39C;
    }
L_088DC39C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[14]) || std::isnan(ctx.fpr[12])) && ctx.fpr[14] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[19] = (0u | 42u);
      if (branch_taken) {
          goto L_088DC410;
      }
      goto L_088DC3F0;
    }
L_088DC3F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC420;
      }
      goto L_088DC3F8;
    }
L_088DC3F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC400;
    }
L_088DC400:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC408;
    }
L_088DC408:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 3u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC410;
    }
L_088DC410:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[12])) && ctx.fpr[13] == ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC430;
      }
      goto L_088DC420;
    }
L_088DC420:
    ctx.gpr[31] = (0x088DC428u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC428u) goto L_088DC428;
    return;
L_088DC428:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088DC430;
      }
      goto L_088DC430;
    }
L_088DC430:
    ctx.gpr[31] = (0x088DC438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x088DC438u) goto L_088DC438;
    return;
L_088DC438:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_088DC5CC;
      }
      goto L_088DC444;
    }
L_088DC444:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088DC490;
      }
      goto L_088DC454;
    }
L_088DC454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 43u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC490;
      }
      goto L_088DC468;
    }
L_088DC468:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC490;
      }
      goto L_088DC47C;
    }
L_088DC47C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC544;
      }
      goto L_088DC490;
    }
L_088DC490:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DC53C;
      }
      goto L_088DC4A0;
    }
L_088DC4A0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21388)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC53C;
      }
      goto L_088DC4B4;
    }
L_088DC4B4:
    ctx.gpr[31] = (0x088DC4BCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DC4BCu) goto L_088DC4BC;
    return;
L_088DC4BC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC53C;
      }
      goto L_088DC4C4;
    }
L_088DC4C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (48793u << 16u);
      if (branch_taken) {
          goto L_088DC4F0;
      }
      goto L_088DC4D8;
    }
L_088DC4D8:
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[31] = (0x088DC4E8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 418u, 0x088D5DA8u>(ctx, &aot_mem) && ctx.pc == 0x088DC4E8u) goto L_088DC4E8;
    return;
L_088DC4E8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC53C;
      }
      goto L_088DC4F0;
    }
L_088DC4F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 8192u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC510;
      }
      goto L_088DC508;
    }
L_088DC508:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC510;
    }
L_088DC510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC534;
      }
      goto L_088DC52C;
    }
L_088DC52C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC534;
    }
L_088DC534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 12u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC53C;
    }
L_088DC53C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC544;
    }
L_088DC544:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21392)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC5C4;
      }
      goto L_088DC55C;
    }
L_088DC55C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC58C;
      }
      goto L_088DC56C;
    }
L_088DC56C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC58C;
      }
      goto L_088DC584;
    }
L_088DC584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 10u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC58C;
    }
L_088DC58C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC5BC;
      }
      goto L_088DC59C;
    }
L_088DC59C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC5BC;
      }
      goto L_088DC5B4;
    }
L_088DC5B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 11u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC5BC;
    }
L_088DC5BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 9u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC5C4;
    }
L_088DC5C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC5CC;
    }
L_088DC5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088DC618;
      }
      goto L_088DC5DC;
    }
L_088DC5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 43u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC618;
      }
      goto L_088DC5F0;
    }
L_088DC5F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC618;
      }
      goto L_088DC604;
    }
L_088DC604:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (0u | 55u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC658;
      }
      goto L_088DC618;
    }
L_088DC618:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21388)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC638;
      }
      goto L_088DC630;
    }
L_088DC630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC638;
    }
L_088DC638:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC650;
      }
      goto L_088DC648;
    }
L_088DC648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 12u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC650;
    }
L_088DC650:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC658;
    }
L_088DC658:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21392)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC678;
      }
      goto L_088DC670;
    }
L_088DC670:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 2u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC678;
    }
L_088DC678:
    ctx.gpr[31] = (0x088DC680u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DC680u) goto L_088DC680;
    return;
L_088DC680:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 15 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC69C;
      }
      goto L_088DC694;
    }
L_088DC694:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 8u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC69C;
    }
L_088DC69C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 13 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC6B0;
      }
      goto L_088DC6A8;
    }
L_088DC6A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC6B0;
    }
L_088DC6B0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 11 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC6C4;
      }
      goto L_088DC6BC;
    }
L_088DC6BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 7u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC6C4;
    }
L_088DC6C4:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC6D8;
      }
      goto L_088DC6D0;
    }
L_088DC6D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 4u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC6D8;
    }
L_088DC6D8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC6EC;
      }
      goto L_088DC6E4;
    }
L_088DC6E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 6u);
      if (branch_taken) {
          goto L_088DC6F0;
      }
      goto L_088DC6EC;
    }
L_088DC6EC:
    ctx.gpr[2] = (0u | 3u);
    goto L_088DC6F0;
L_088DC6F0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DC710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[22]);
    ctx.gpr[22] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DC77Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088DC77Cu) goto L_088DC77C;
    return;
L_088DC77C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DC7D4;
      }
      goto L_088DC794;
    }
L_088DC794:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088DC7D8;
      }
      goto L_088DC7A4;
    }
L_088DC7A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[31] = (0x088DC7D0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DC7D0u) goto L_088DC7D0;
    return;
L_088DC7D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[2]);
    goto L_088DC7D4;
L_088DC7D4:
    ctx.gpr[4] = (0u | 0u);
    goto L_088DC7D8;
L_088DC7D8:
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21396)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21392)));
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DC81C;
      }
      goto L_088DC818;
    }
L_088DC818:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    goto L_088DC81C;
L_088DC81C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1724)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC980;
      }
      goto L_088DC828;
    }
L_088DC828:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1724)));
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
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC978;
      }
      goto L_088DC884;
    }
L_088DC884:
    ctx.gpr[31] = (0x088DC88Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 49u, 0x088D44FCu>(ctx, &aot_mem) && ctx.pc == 0x088DC88Cu) goto L_088DC88C;
    return;
L_088DC88C:
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DC8A4;
      }
      goto L_088DC89C;
    }
L_088DC89C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088DC978;
      }
      goto L_088DC8A4;
    }
L_088DC8A4:
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DC8C0;
      }
      goto L_088DC8B0;
    }
L_088DC8B0:
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC8E8;
      }
      goto L_088DC8BC;
    }
L_088DC8BC:
    ctx.gpr[5] = (2230u << 16u);
    goto L_088DC8C0;
L_088DC8C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DC8E8;
      }
      goto L_088DC8CC;
    }
L_088DC8CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21388)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC8E8;
      }
      goto L_088DC8E0;
    }
L_088DC8E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088DC978;
      }
      goto L_088DC8E8;
    }
L_088DC8E8:
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 43u);
      if (branch_taken) {
          goto L_088DC8FC;
      }
      goto L_088DC8F4;
    }
L_088DC8F4:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DC974;
      }
      goto L_088DC8FC;
    }
L_088DC8FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DC974;
      }
      goto L_088DC90C;
    }
L_088DC90C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21388)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DC974;
      }
      goto L_088DC920;
    }
L_088DC920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088DC954;
      }
      goto L_088DC944;
    }
L_088DC944:
    ctx.gpr[31] = (0x088DC94Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 418u, 0x088D5DA8u>(ctx, &aot_mem) && ctx.pc == 0x088DC94Cu) goto L_088DC94C;
    return;
L_088DC94C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088DC960;
      }
      goto L_088DC954;
    }
L_088DC954:
    ctx.gpr[31] = (0x088DC95Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 123u, 0x089808D0u>(ctx, &aot_mem) && ctx.pc == 0x088DC95Cu) goto L_088DC95C;
    return;
L_088DC95C:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_088DC960;
L_088DC960:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC96C;
      }
      goto L_088DC968;
    }
L_088DC968:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    goto L_088DC96C;
L_088DC96C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DC978;
      }
      goto L_088DC974;
    }
L_088DC974:
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    goto L_088DC978;
L_088DC978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCD14;
      }
      goto L_088DC980;
    }
L_088DC980:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088DCD0C;
      }
      goto L_088DC9A4;
    }
L_088DC9A4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (16134u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2706u);
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (0u | 54u);
    ctx.gpr[22] = (0u | 55u);
    goto L_088DC9D0;
L_088DC9D0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1868)));
        goto L_088DC9F4;
    }
    goto L_088DC9E0;
L_088DC9E0:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_088DCA0C;
      }
      goto L_088DC9F4;
    }
L_088DC9F4:
    ctx.gpr[4] = (ctx.gpr[17] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1872)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    goto L_088DCA0C;
L_088DCA0C:
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCCEC;
      }
      goto L_088DCA50;
    }
L_088DCA50:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[13])) && ctx.fpr[24] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088DCA84;
      }
      goto L_088DCA6C;
    }
L_088DCA6C:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088DCA88;
    }
    goto L_088DCA7C;
L_088DCA7C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_088DCA94;
      }
      goto L_088DCA84;
    }
L_088DCA84:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DCA88;
L_088DCA88:
    ctx.gpr[31] = (0x088DCA90u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x088DCA90u) goto L_088DCA90;
    return;
L_088DCA90:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088DCA94;
L_088DCA94:
    ctx.gpr[31] = (0x088DCA9Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x088DCA9Cu) goto L_088DCA9C;
    return;
L_088DCA9C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[31] = (0x088DCAA8u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 253u, 0x08A1D3ECu>(ctx, &aot_mem) && ctx.pc == 0x088DCAA8u) goto L_088DCAA8;
    return;
L_088DCAA8:
    ctx.fpr[20] = ctx.fpr[24] - ctx.fpr[0];
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCAE0;
      }
      goto L_088DCAD0;
    }
L_088DCAD0:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    goto L_088DCAE0;
L_088DCAE0:
    ctx.gpr[31] = (0x088DCAE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 49u, 0x088D44FCu>(ctx, &aot_mem) && ctx.pc == 0x088DCAE8u) goto L_088DCAE8;
    return;
L_088DCAE8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 43u);
      if (branch_taken) {
          goto L_088DCB10;
      }
      goto L_088DCAF8;
    }
L_088DCAF8:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DCB10;
      }
      goto L_088DCB00;
    }
L_088DCB00:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088DCB10;
      }
      goto L_088DCB08;
    }
L_088DCB08:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088DCC18;
      }
      goto L_088DCB10;
    }
L_088DCB10:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DCBCC;
      }
      goto L_088DCB20;
    }
L_088DCB20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21388)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[5] = (16245u << 16u);
      if (branch_taken) {
          goto L_088DCBCC;
      }
      goto L_088DCB34;
    }
L_088DCB34:
    ctx.gpr[5] = (ctx.gpr[5] | 48651u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCBCC;
      }
      goto L_088DCB4C;
    }
L_088DCB4C:
    if (ctx.gpr[4] == ctx.gpr[22]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
        goto L_088DCB60;
    }
    goto L_088DCB54;
L_088DCB54:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[23];
    // nop
      if (branch_taken) {
          goto L_088DCB74;
      }
      goto L_088DCB5C;
    }
L_088DCB5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    goto L_088DCB60;
L_088DCB60:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCB74;
      }
      goto L_088DCB68;
    }
L_088DCB68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
      if (branch_taken) {
          goto L_088DCBC4;
      }
      goto L_088DCB74;
    }
L_088DCB74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCBA4;
      }
      goto L_088DCB90;
    }
L_088DCB90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DCB9Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 418u, 0x088D5DA8u>(ctx, &aot_mem) && ctx.pc == 0x088DCB9Cu) goto L_088DCB9C;
    return;
L_088DCB9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
      if (branch_taken) {
          goto L_088DCBB4;
      }
      goto L_088DCBA4;
    }
L_088DCBA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[31] = (0x088DCBB0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 123u, 0x089808D0u>(ctx, &aot_mem) && ctx.pc == 0x088DCBB0u) goto L_088DCBB0;
    return;
L_088DCBB0:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    goto L_088DCBB4;
L_088DCBB4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCBC4;
      }
      goto L_088DCBBC;
    }
L_088DCBBC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_088DCBC4;
L_088DCBC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCCEC;
      }
      goto L_088DCBCC;
    }
L_088DCBCC:
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCCEC;
      }
      goto L_088DCBDC;
    }
L_088DCBDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCCEC;
      }
      goto L_088DCBF0;
    }
L_088DCBF0:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCCEC;
      }
      goto L_088DCC00;
    }
L_088DCC00:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCC10;
      }
      goto L_088DCC08;
    }
L_088DCC08:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_088DCC10;
L_088DCC10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCCEC;
      }
      goto L_088DCC18;
    }
L_088DCC18:
    ctx.gpr[4] = (16201u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCCEC;
      }
      goto L_088DCC34;
    }
L_088DCC34:
    ctx.set_fpu_condition((ctx.fpr[30] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCCD4;
      }
      goto L_088DCC44;
    }
L_088DCC44:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DCC5C;
      }
      goto L_088DCC4C;
    }
L_088DCC4C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088DCCCC;
      }
      goto L_088DCC5C;
    }
L_088DCC5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCCC0;
      }
      goto L_088DCC78;
    }
L_088DCC78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCCC0;
      }
      goto L_088DCC94;
    }
L_088DCC94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DCCCC;
      }
      goto L_088DCCA8;
    }
L_088DCCA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1788)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-100));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCCCC;
      }
      goto L_088DCCC0;
    }
L_088DCCC0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[19] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088DCCCC;
L_088DCCCC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCCEC;
      }
      goto L_088DCCD4;
    }
L_088DCCD4:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCCEC;
      }
      goto L_088DCCE4;
    }
L_088DCCE4:
    ctx.gpr[20] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    goto L_088DCCEC;
L_088DCCEC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DC9D0;
      }
      goto L_088DCD0C;
    }
L_088DCD0C:
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    goto L_088DCD14;
L_088DCD14:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088DD088;
      }
      goto L_088DCD1C;
    }
L_088DCD1C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCE74;
      }
      goto L_088DCD24;
    }
L_088DCD24:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (16217u << 16u);
      if (branch_taken) {
          goto L_088DCD80;
      }
      goto L_088DCD4C;
    }
L_088DCD4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCD78;
      }
      goto L_088DCD70;
    }
L_088DCD70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 9u);
      if (branch_taken) {
          goto L_088DD078;
      }
      goto L_088DCD78;
    }
L_088DCD78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_088DD078;
      }
      goto L_088DCD80;
    }
L_088DCD80:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCE34;
      }
      goto L_088DCDA4;
    }
L_088DCDA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DCE34;
      }
      goto L_088DCDCC;
    }
L_088DCDCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1748)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DCDFC;
      }
      goto L_088DCDDC;
    }
L_088DCDDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCDFC;
      }
      goto L_088DCDF4;
    }
L_088DCDF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 10u);
      if (branch_taken) {
          goto L_088DD078;
      }
      goto L_088DCDFC;
    }
L_088DCDFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1748)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DCE2C;
      }
      goto L_088DCE0C;
    }
L_088DCE0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCE2C;
      }
      goto L_088DCE24;
    }
L_088DCE24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 11u);
      if (branch_taken) {
          goto L_088DD078;
      }
      goto L_088DCE2C;
    }
L_088DCE2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 9u);
      if (branch_taken) {
          goto L_088DD078;
      }
      goto L_088DCE34;
    }
L_088DCE34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCE6C;
      }
      goto L_088DCE4C;
    }
L_088DCE4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCE6C;
      }
      goto L_088DCE64;
    }
L_088DCE64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 11u);
      if (branch_taken) {
          goto L_088DD078;
      }
      goto L_088DCE6C;
    }
L_088DCE6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 2u);
      if (branch_taken) {
          goto L_088DD078;
      }
      goto L_088DCE74;
    }
L_088DCE74:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DCE94;
      }
      goto L_088DCE84;
    }
L_088DCE84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DCF24;
      }
      goto L_088DCE94;
    }
L_088DCE94:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DCED0;
      }
      goto L_088DCEA0;
    }
L_088DCEA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCF10;
      }
      goto L_088DCED0;
    }
L_088DCED0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCF10;
      }
      goto L_088DCEFC;
    }
L_088DCEFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD078;
      }
      goto L_088DCF10;
    }
L_088DCF10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD078;
      }
      goto L_088DCF24;
    }
L_088DCF24:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[7] == ctx.gpr[4];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_088DCF44;
      }
      goto L_088DCF34;
    }
L_088DCF34:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[8] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088DCFD4;
      }
      goto L_088DCF44;
    }
L_088DCF44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCFC0;
      }
      goto L_088DCF74;
    }
L_088DCF74:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DCFC0;
      }
      goto L_088DCF7C;
    }
L_088DCF7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DCFC0;
      }
      goto L_088DCFAC;
    }
L_088DCFAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD078;
      }
      goto L_088DCFC0;
    }
L_088DCFC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD078;
      }
      goto L_088DCFD4;
    }
L_088DCFD4:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD060;
      }
      goto L_088DCFE0;
    }
L_088DCFE0:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DD018;
      }
      goto L_088DCFE8;
    }
L_088DCFE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD058;
      }
      goto L_088DD018;
    }
L_088DD018:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD058;
      }
      goto L_088DD044;
    }
L_088DD044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD078;
      }
      goto L_088DD058;
    }
L_088DD058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088DD078;
      }
      goto L_088DD060;
    }
L_088DD060:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DD074;
      }
      goto L_088DD06C;
    }
L_088DD06C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088DD078;
      }
      goto L_088DD074;
    }
L_088DD074:
    ctx.gpr[16] = (0u | 3u);
    goto L_088DD078;
L_088DD078:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DD454;
      }
      goto L_088DD088;
    }
L_088DD088:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
      if (branch_taken) {
          goto L_088DD170;
      }
      goto L_088DD09C;
    }
L_088DD09C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD0C4;
      }
      goto L_088DD0A4;
    }
L_088DD0A4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[5] & 8192u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD0C4;
      }
      goto L_088DD0BC;
    }
L_088DD0BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 10u);
      if (branch_taken) {
          goto L_088DD0F4;
      }
      goto L_088DD0C4;
    }
L_088DD0C4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD0F0;
      }
      goto L_088DD0CC;
    }
L_088DD0CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD0F0;
      }
      goto L_088DD0E8;
    }
L_088DD0E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 11u);
      if (branch_taken) {
          goto L_088DD0F4;
      }
      goto L_088DD0F0;
    }
L_088DD0F0:
    ctx.gpr[16] = (0u | 12u);
    goto L_088DD0F4;
L_088DD0F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD110;
      }
      goto L_088DD100;
    }
L_088DD100:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088DD11C;
      }
      goto L_088DD110;
    }
L_088DD110:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DD11C;
L_088DD11C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1780), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD148;
      }
      goto L_088DD12C;
    }
L_088DD12C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088DD140u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x088DD140u) goto L_088DD140;
    return;
L_088DD140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD15C;
      }
      goto L_088DD148;
    }
L_088DD148:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088DD15Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x088DD15Cu) goto L_088DD15C;
    return;
L_088DD15C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DD168u);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x088DD168u) goto L_088DD168;
    return;
L_088DD168:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD454;
      }
      goto L_088DD170;
    }
L_088DD170:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD1B4;
      }
      goto L_088DD178;
    }
L_088DD178:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(1780), 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088DD1A0u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x088DD1A0u) goto L_088DD1A0;
    return;
L_088DD1A0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DD1ACu);
    ctx.gpr[5] = (0u | 1500u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x088DD1ACu) goto L_088DD1AC;
    return;
L_088DD1AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD454;
      }
      goto L_088DD1B4;
    }
L_088DD1B4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD254;
      }
      goto L_088DD1BC;
    }
L_088DD1BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD1EC;
      }
      goto L_088DD1E4;
    }
L_088DD1E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 11u);
      if (branch_taken) {
          goto L_088DD454;
      }
      goto L_088DD1EC;
    }
L_088DD1EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1748)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD21C;
      }
      goto L_088DD1FC;
    }
L_088DD1FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD21C;
      }
      goto L_088DD214;
    }
L_088DD214:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 10u);
      if (branch_taken) {
          goto L_088DD454;
      }
      goto L_088DD21C;
    }
L_088DD21C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1748)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD24C;
      }
      goto L_088DD22C;
    }
L_088DD22C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] & 16384u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD24C;
      }
      goto L_088DD244;
    }
L_088DD244:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 11u);
      if (branch_taken) {
          goto L_088DD454;
      }
      goto L_088DD24C;
    }
L_088DD24C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 9u);
      if (branch_taken) {
          goto L_088DD454;
      }
      goto L_088DD254;
    }
L_088DD254:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DD274;
      }
      goto L_088DD264;
    }
L_088DD264:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[7] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_088DD300;
      }
      goto L_088DD274;
    }
L_088DD274:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DD2AC;
      }
      goto L_088DD27C;
    }
L_088DD27C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD2EC;
      }
      goto L_088DD2AC;
    }
L_088DD2AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD2EC;
      }
      goto L_088DD2D8;
    }
L_088DD2D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD454;
      }
      goto L_088DD2EC;
    }
L_088DD2EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD454;
      }
      goto L_088DD300;
    }
L_088DD300:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 6u);
    if (ctx.gpr[7] == ctx.gpr[5]) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
        goto L_088DD324;
    }
    goto L_088DD310;
L_088DD310:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[8] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_088DD3B0;
      }
      goto L_088DD320;
    }
L_088DD320:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    goto L_088DD324;
L_088DD324:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD39C;
      }
      goto L_088DD350;
    }
L_088DD350:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD39C;
      }
      goto L_088DD358;
    }
L_088DD358:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD39C;
      }
      goto L_088DD388;
    }
L_088DD388:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-3));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD454;
      }
      goto L_088DD39C;
    }
L_088DD39C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD454;
      }
      goto L_088DD3B0;
    }
L_088DD3B0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DD43C;
      }
      goto L_088DD3BC;
    }
L_088DD3BC:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_088DD3F4;
      }
      goto L_088DD3C4;
    }
L_088DD3C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD434;
      }
      goto L_088DD3F4;
    }
L_088DD3F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD434;
      }
      goto L_088DD420;
    }
L_088DD420:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
      if (branch_taken) {
          goto L_088DD454;
      }
      goto L_088DD434;
    }
L_088DD434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088DD454;
      }
      goto L_088DD43C;
    }
L_088DD43C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD450;
      }
      goto L_088DD448;
    }
L_088DD448:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088DD454;
      }
      goto L_088DD450;
    }
L_088DD450:
    ctx.gpr[16] = (0u | 4u);
    goto L_088DD454;
L_088DD454:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD4A0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DD4ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD4ECu) goto L_088DD4EC;
    return;
L_088DD4EC:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DD4F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DD4F8u) goto L_088DD4F8;
    return;
L_088DD4F8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088DD50C;
      }
      goto L_088DD500;
    }
L_088DD500:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DD50Cu);
    ctx.gpr[5] = (0u | 138u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD50Cu) goto L_088DD50C;
    return;
L_088DD50C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088DD51C;
      }
      goto L_088DD518;
    }
L_088DD518:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1748), ctx.gpr[4]);
    goto L_088DD51C;
L_088DD51C:
    ctx.gpr[31] = (0x088DD524u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DD524u) goto L_088DD524;
    return;
L_088DD524:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1752)));
      if (branch_taken) {
          goto L_088DD548;
      }
      goto L_088DD52C;
    }
L_088DD52C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DD53Cu);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088DC710;
L_088DD53C:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[2]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DD560;
      }
      goto L_088DD548;
    }
L_088DD548:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DD558u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_088DC2EC;
L_088DD558:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1744), ctx.gpr[2]);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    goto L_088DD560;
L_088DD560:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_088DD728;
      }
      goto L_088DD568;
    }
L_088DD568:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[17]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_088DD5C0;
      }
      goto L_088DD598;
    }
L_088DD598:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < 12 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD5C0;
      }
      goto L_088DD5A4;
    }
L_088DD5A4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088DD5B4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DD5B4u) goto L_088DD5B4;
    return;
L_088DD5B4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
      if (branch_taken) {
          goto L_088DD5D8;
      }
      goto L_088DD5C0;
    }
L_088DD5C0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DD5D0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088DD5D0u) goto L_088DD5D0;
    return;
L_088DD5D0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(64)));
    goto L_088DD5D8;
L_088DD5D8:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DD68C;
      }
      goto L_088DD5E4;
    }
L_088DD5E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD68C;
      }
      goto L_088DD5F4;
    }
L_088DD5F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DD668;
      }
      goto L_088DD61C;
    }
L_088DD61C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 5u);
      if (branch_taken) {
          goto L_088DD648;
      }
      goto L_088DD624;
    }
L_088DD624:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD650;
      }
      goto L_088DD630;
    }
L_088DD630:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1753))))));
      if (branch_taken) {
          goto L_088DD6A0;
      }
      goto L_088DD648;
    }
L_088DD648:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD630;
      }
      goto L_088DD650;
    }
L_088DD650:
    ctx.gpr[4] = (16262u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1753))))));
      if (branch_taken) {
          goto L_088DD6A0;
      }
      goto L_088DD668;
    }
L_088DD668:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD630;
      }
      goto L_088DD674;
    }
L_088DD674:
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1753))))));
      if (branch_taken) {
          goto L_088DD6A0;
      }
      goto L_088DD68C;
    }
L_088DD68C:
    ctx.gpr[4] = (16204u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1753))))));
    goto L_088DD6A0;
L_088DD6A0:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD6EC;
      }
      goto L_088DD6AC;
    }
L_088DD6AC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[20])) && ctx.fpr[12] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DD6EC;
      }
      goto L_088DD6C4;
    }
L_088DD6C4:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    ctx.gpr[31] = (0x088DD6D8u);
    aot_mem.aot_store16(ctx.gpr[18] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[5]));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DD6D8u) goto L_088DD6D8;
    return;
L_088DD6D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD6EC;
      }
      goto L_088DD6E0;
    }
L_088DD6E0:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DD6ECu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088DD6ECu) goto L_088DD6EC;
    return;
L_088DD6EC:
    ctx.gpr[31] = (0x088DD6F4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DD6F4u) goto L_088DD6F4;
    return;
L_088DD6F4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD710;
      }
      goto L_088DD6FC;
    }
L_088DD6FC:
    ctx.gpr[5] = (15779u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55050u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DD710u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088DD710u) goto L_088DD710;
    return;
L_088DD710:
    ctx.gpr[5] = (2189u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DD724u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23432));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x088DD724u) goto L_088DD724;
    return;
L_088DD724:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1752), static_cast<std::uint8_t>(0u));
    goto L_088DD728;
L_088DD728:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DD754:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-448));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[30] = (ctx.gpr[6] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(400), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[31]);
    ctx.gpr[31] = (0x088DD7B4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088DD7B4u) goto L_088DD7B4;
    return;
L_088DD7B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_088DD7E0;
      }
      goto L_088DD7DC;
    }
L_088DD7DC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    goto L_088DD7E0;
L_088DD7E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1753))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DD808;
      }
      goto L_088DD7F0;
    }
L_088DD7F0:
    ctx.gpr[31] = (0x088DD7F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DD7F8u) goto L_088DD7F8;
    return;
L_088DD7F8:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DD810;
      }
      goto L_088DD800;
    }
L_088DD800:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD850;
      }
      goto L_088DD808;
    }
L_088DD808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_088DDFC8;
      }
      goto L_088DD810;
    }
L_088DD810:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD850;
      }
      goto L_088DD818;
    }
L_088DD818:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD850;
      }
      goto L_088DD83C;
    }
L_088DD83C:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x088DD850u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 189u, 0x08809F14u>(ctx, &aot_mem) && ctx.pc == 0x088DD850u) goto L_088DD850;
    return;
L_088DD850:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDEA4;
      }
      goto L_088DD86C;
    }
L_088DD86C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_088DD898;
      }
      goto L_088DD87C;
    }
L_088DD87C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[4] = (ctx.gpr[21] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1872)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
      if (branch_taken) {
          goto L_088DD8A4;
      }
      goto L_088DD898;
    }
L_088DD898:
    ctx.gpr[4] = (ctx.gpr[21] << 2u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1828)));
    goto L_088DD8A4;
L_088DD8A4:
    if (ctx.gpr[30] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
        goto L_088DD8FC;
    }
    goto L_088DD8AC;
L_088DD8AC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
        goto L_088DD8FC;
    }
    goto L_088DD8D0;
L_088DD8D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
        goto L_088DD920;
    }
    goto L_088DD8F8;
L_088DD8F8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    goto L_088DD8FC;
L_088DD8FC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[22];
      if (branch_taken) {
          goto L_088DD950;
      }
      goto L_088DD920;
    }
L_088DD920:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[22] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[13];
    goto L_088DD950;
L_088DD950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DD990;
      }
      goto L_088DD96C;
    }
L_088DD96C:
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
      if (branch_taken) {
          goto L_088DDA60;
      }
      goto L_088DD978;
    }
L_088DD978:
    ctx.gpr[31] = (0x088DD980u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x088DD980u) goto L_088DD980;
    return;
L_088DD980:
    ctx.gpr[4] = (ctx.gpr[2] ^ 2u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088DDA60;
      }
      goto L_088DD990;
    }
L_088DD990:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD9C4;
      }
      goto L_088DD9A4;
    }
L_088DD9A4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[18]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[31] = (0x088DD9B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088DD9B8u) goto L_088DD9B8;
    return;
L_088DD9B8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088DD9C4;
L_088DD9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(336)));
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(180)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088DD9F8;
      }
      goto L_088DD9DC;
    }
L_088DD9DC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(257));
    ctx.gpr[31] = (0x088DD9ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088DD9ECu) goto L_088DD9EC;
    return;
L_088DD9EC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(257)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088DD9F8;
L_088DD9F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[16] = (ctx.gpr[4] ^ 65535u);
    ctx.gpr[16] = (0u < ctx.gpr[16] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDA5C;
      }
      goto L_088DDA10;
    }
L_088DDA10:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x088DDA24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x088DDA24u) goto L_088DDA24;
    return;
L_088DDA24:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDA54;
      }
      goto L_088DDA30;
    }
L_088DDA30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x088DDA48u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x088DDA48u) goto L_088DDA48;
    return;
L_088DDA48:
    ctx.gpr[4] = (ctx.gpr[2] ^ 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
      if (branch_taken) {
          goto L_088DDA58;
      }
      goto L_088DDA54;
    }
L_088DDA54:
    ctx.gpr[4] = (0u | 0u);
    goto L_088DDA58;
L_088DDA58:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(388), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088DDA5C;
L_088DDA5C:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    goto L_088DDA60;
L_088DDA60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (0u | 55u);
      if (branch_taken) {
          goto L_088DDA94;
      }
      goto L_088DDA78;
    }
L_088DDA78:
    { const bool branch_taken = ctx.gpr[20] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DDA94;
      }
      goto L_088DDA80;
    }
L_088DDA80:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDE84;
      }
      goto L_088DDA88;
    }
L_088DDA88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDE84;
      }
      goto L_088DDA94;
    }
L_088DDA94:
    ctx.gpr[31] = (0x088DDA9Cu);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DDA9Cu) goto L_088DDA9C;
    return;
L_088DDA9C:
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DDAB4;
      }
      goto L_088DDAA4;
    }
L_088DDAA4:
    ctx.gpr[31] = (0x088DDAACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DDAACu) goto L_088DDAAC;
    return;
L_088DDAAC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DDE84;
      }
      goto L_088DDAB4;
    }
L_088DDAB4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_088DDAE0;
      }
      goto L_088DDACC;
    }
L_088DDACC:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_088DDAE0;
L_088DDAE0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DDAECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 84u, 0x0899CB80u>(ctx, &aot_mem) && ctx.pc == 0x088DDAECu) goto L_088DDAEC;
    return;
L_088DDAEC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DDB00u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 64u, 0x088D4628u>(ctx, &aot_mem) && ctx.pc == 0x088DDB00u) goto L_088DDB00;
    return;
L_088DDB00:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DDC18;
      }
      goto L_088DDB38;
    }
L_088DDB38:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDC18;
      }
      goto L_088DDB4C;
    }
L_088DDB4C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[22] = ctx.fpr[22] + ctx.fpr[20];
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DDC00;
      }
      goto L_088DDBC8;
    }
L_088DDBC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DDBF8u);
    ctx.gpr[6] = (ctx.gpr[23] | 0u);
    goto L_088DE000;
L_088DDBF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088DDC18;
      }
      goto L_088DDC00;
    }
L_088DDC00:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDB4C;
      }
      goto L_088DDC18;
    }
L_088DDC18:
    ctx.gpr[4] = (ctx.gpr[22] | ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDD2C;
      }
      goto L_088DDC24;
    }
L_088DDC24:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DDD2C;
      }
      goto L_088DDC84;
    }
L_088DDC84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 12u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DDCE4;
    }
    goto L_088DDC94;
L_088DDC94:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088DDCDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x088DDCDCu) goto L_088DDCDC;
    return;
L_088DDCDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDD1C;
      }
      goto L_088DDCE4;
    }
L_088DDCE4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DDD1C;
L_088DDD1C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x088DDD28u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x088DDD28u) goto L_088DDD28;
    return;
L_088DDD28:
    ctx.gpr[22] = (0u | 255u);
    goto L_088DDD2C;
L_088DDD2C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[4];
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_088DDE84;
      }
      goto L_088DDD38;
    }
L_088DDD38:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DDD44u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 64u, 0x088D4628u>(ctx, &aot_mem) && ctx.pc == 0x088DDD44u) goto L_088DDD44;
    return;
L_088DDD44:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DDE84;
      }
      goto L_088DDD80;
    }
L_088DDD80:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDE84;
      }
      goto L_088DDD94;
    }
L_088DDD94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[7] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DDE6C;
      }
      goto L_088DDE34;
    }
L_088DDE34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(17)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] << 16u);
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DDE64u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_088DE000;
L_088DDE64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDE84;
      }
      goto L_088DDE6C;
    }
L_088DDE6C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDD94;
      }
      goto L_088DDE84;
    }
L_088DDE84:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1868)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1912)));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DD86C;
      }
      goto L_088DDEA4;
    }
L_088DDEA4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1753))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDEB8;
      }
      goto L_088DDEB0;
    }
L_088DDEB0:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088DDEB8;
L_088DDEB8:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1728));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x088DDEFCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x088DDEFCu) goto L_088DDEFC;
    return;
L_088DDEFC:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[23] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DDFC4;
      }
      goto L_088DDF08;
    }
L_088DDF08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DDFC4;
      }
      goto L_088DDF14;
    }
L_088DDF14:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u | 45u);
    ctx.gpr[4] = (ctx.gpr[4] << 8u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[31] = (0x088DDF50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088DDF50u) goto L_088DDF50;
    return;
L_088DDF50:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-4272));
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(31)));
    ctx.gpr[31] = (0x088DDF68u);
    ctx.gpr[16] = (ctx.gpr[16] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 283u, 0x08A89E94u>(ctx, &aot_mem) && ctx.pc == 0x088DDF68u) goto L_088DDF68;
    return;
L_088DDF68:
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
      if (branch_taken) {
          goto L_088DDF88;
      }
      goto L_088DDF80;
    }
L_088DDF80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088DDFA0;
      }
      goto L_088DDF88;
    }
L_088DDF88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_088DDFA0;
    }
    goto L_088DDFA0;
L_088DDFA0:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088DDFB8u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0007_entry, 7u, 170u, 0x088214F4u>(ctx, &aot_mem) && ctx.pc == 0x088DDFB8u) goto L_088DDFB8;
    return;
L_088DDFB8:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x088DDFC4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 194u, 0x088A576Cu>(ctx, &aot_mem) && ctx.pc == 0x088DDFC4u) goto L_088DDFC4;
    return;
L_088DDFC4:
    ctx.gpr[2] = (0u | 0u);
    goto L_088DDFC8;
L_088DDFC8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(400)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(408)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DE000:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-544));
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(470), static_cast<std::uint16_t>(ctx.gpr[8]));
    ctx.gpr[8] = (ctx.gpr[9] & 14u);
    ctx.gpr[8] = (ctx.gpr[8] ^ 12u);
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(524), ctx.gpr[30]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[30] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(508), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088DE078;
      }
      goto L_088DE070;
    }
L_088DE070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
      if (branch_taken) {
          goto L_088DE07C;
      }
      goto L_088DE078;
    }
L_088DE078:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_088DE07C;
L_088DE07C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088DE09Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE09Cu) goto L_088DE09C;
    return;
L_088DE09C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088DE0C4;
      }
      goto L_088DE0A4;
    }
L_088DE0A4:
    ctx.gpr[31] = (0x088DE0ACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DE0ACu) goto L_088DE0AC;
    return;
L_088DE0AC:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE0C8;
    }
    goto L_088DE0B4;
L_088DE0B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE128;
      }
      goto L_088DE0C4;
    }
L_088DE0C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    goto L_088DE0C8;
L_088DE0C8:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088DE0E8u);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DE0E8u) goto L_088DE0E8;
    return;
L_088DE0E8:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[20])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (1u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[20] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_088DE130;
      }
      goto L_088DE120;
    }
L_088DE120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE1B0;
      }
      goto L_088DE128;
    }
L_088DE128:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEDD4;
      }
      goto L_088DE130;
    }
L_088DE130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_088DE1B0;
      }
      goto L_088DE140;
    }
L_088DE140:
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE154;
      }
      goto L_088DE14C;
    }
L_088DE14C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_088DE16C;
      }
      goto L_088DE154;
    }
L_088DE154:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (0u | 255u);
    ctx.gpr[20] = (ctx.gpr[20] << 2u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[20]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
        goto L_088DE16C;
    }
    goto L_088DE16C;
L_088DE16C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_088DE1B0;
      }
      goto L_088DE17C;
    }
L_088DE17C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE1B0;
      }
      goto L_088DE1A4;
    }
L_088DE1A4:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    goto L_088DE1B0;
L_088DE1B0:
    ctx.gpr[31] = (0x088DE1B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DE1B8u) goto L_088DE1B8;
    return;
L_088DE1B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE1D4;
      }
      goto L_088DE1C0;
    }
L_088DE1C0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2995)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE1FC;
      }
      goto L_088DE1CC;
    }
L_088DE1CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 20u);
      if (branch_taken) {
          goto L_088DE1FC;
      }
      goto L_088DE1D4;
    }
L_088DE1D4:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE1FC;
      }
      goto L_088DE1DC;
    }
L_088DE1DC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    goto L_088DE1FC;
L_088DE1FC:
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_088DE20C;
    }
    goto L_088DE204;
L_088DE204:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1208)));
      if (branch_taken) {
          goto L_088DE240;
      }
      goto L_088DE20C;
    }
L_088DE20C:
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_088DE234;
    }
    goto L_088DE214;
L_088DE214:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(285));
    ctx.gpr[31] = (0x088DE224u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088DE224u) goto L_088DE224;
    return;
L_088DE224:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(285)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_088DE234;
L_088DE234:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(178)));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[20])));
    goto L_088DE240;
L_088DE240:
    ctx.gpr[4] = (16128u << 16u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE2B8;
      }
      goto L_088DE2A4;
    }
L_088DE2A4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x088DE2B0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 338u, 0x0899E180u>(ctx, &aot_mem) && ctx.pc == 0x088DE2B0u) goto L_088DE2B0;
    return;
L_088DE2B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[30] = (ctx.gpr[2] & 255u);
      if (branch_taken) {
          goto L_088DE2F4;
      }
      goto L_088DE2B8;
    }
L_088DE2B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
        goto L_088DE2E4;
    }
    goto L_088DE2C4;
L_088DE2C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    ctx.gpr[31] = (0x088DE2D4u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088DE2D4u) goto L_088DE2D4;
    return;
L_088DE2D4:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(96)));
    goto L_088DE2E4;
L_088DE2E4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x088DE2F0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(184)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 326u, 0x0899E0A0u>(ctx, &aot_mem) && ctx.pc == 0x088DE2F0u) goto L_088DE2F0;
    return;
L_088DE2F0:
    ctx.gpr[30] = (ctx.gpr[2] & 255u);
    goto L_088DE2F4;
L_088DE2F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(468), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE34C;
      }
      goto L_088DE324;
    }
L_088DE324:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(468), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[20] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[20] = (ctx.gpr[20] & 255u);
    goto L_088DE34C;
L_088DE34C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_088DE440;
      }
      goto L_088DE354;
    }
L_088DE354:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088DE360u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 319u, 0x0889942Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE360u) goto L_088DE360;
    return;
L_088DE360:
    ctx.gpr[31] = (0x088DE368u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DE368u) goto L_088DE368;
    return;
L_088DE368:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE3C8;
    }
    goto L_088DE370;
L_088DE370:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE3C8;
    }
    goto L_088DE394;
L_088DE394:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE3C8;
    }
    goto L_088DE3BC;
L_088DE3BC:
    if (ctx.gpr[22] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE400;
    }
    goto L_088DE3C4;
L_088DE3C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    goto L_088DE3C8;
L_088DE3C8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088DE3F8u);
    ctx.gpr[8] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 674u, 0x088DAF3Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE3F8u) goto L_088DE3F8;
    return;
L_088DE3F8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE430;
      }
      goto L_088DE400;
    }
L_088DE400:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[30] | 0u);
    ctx.gpr[31] = (0x088DE430u);
    ctx.gpr[8] = (0u | 101u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 674u, 0x088DAF3Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE430u) goto L_088DE430;
    return;
L_088DE430:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DE43Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 65u, 0x088D4688u>(ctx, &aot_mem) && ctx.pc == 0x088DE43Cu) goto L_088DE43C;
    return;
L_088DE43C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    goto L_088DE440;
L_088DE440:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1753), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[6]);
    ctx.gpr[31] = (0x088DE470u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DE470u) goto L_088DE470;
    return;
L_088DE470:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE48C;
      }
      goto L_088DE47C;
    }
L_088DE47C:
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088DE48C;
L_088DE48C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE528;
      }
      goto L_088DE494;
    }
L_088DE494:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE528;
      }
      goto L_088DE4A4;
    }
L_088DE4A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE528;
      }
      goto L_088DE4B4;
    }
L_088DE4B4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE4FC;
      }
      goto L_088DE4BC;
    }
L_088DE4BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DE4F4u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(470))))));
    goto L_088DEE0C;
L_088DE4F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE528;
      }
      goto L_088DE4FC;
    }
L_088DE4FC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.gpr[5] = (16448u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(470))))));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088DE528u);
    ctx.gpr[8] = (ctx.gpr[30] | 0u);
    goto L_088DEE0C;
L_088DE528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 9u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE79C;
    }
    goto L_088DE538;
L_088DE538:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE79C;
    }
    goto L_088DE548;
L_088DE548:
    ctx.gpr[31] = (0x088DE550u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE550u) goto L_088DE550;
    return;
L_088DE550:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
        goto L_088DE79C;
    }
    goto L_088DE558;
L_088DE558:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE60C;
      }
      goto L_088DE5A0;
    }
L_088DE5A0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21812)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
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
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21816)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088DE604u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x088DE604u) goto L_088DE604;
    return;
L_088DE604:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE688;
      }
      goto L_088DE60C;
    }
L_088DE60C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE688;
      }
      goto L_088DE61C;
    }
L_088DE61C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21812)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (2227u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21816)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(32));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x088DE688u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x088DE688u) goto L_088DE688;
    return;
L_088DE688:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088DE6B8u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088DE6B8u) goto L_088DE6B8;
    return;
L_088DE6B8:
    ctx.gpr[4] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088DE6E0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088DE6E0u) goto L_088DE6E0;
    return;
L_088DE6E0:
    ctx.gpr[31] = (0x088DE6E8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DE6E8u) goto L_088DE6E8;
    return;
L_088DE6E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE748;
      }
      goto L_088DE6F0;
    }
L_088DE6F0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088DE720u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088DE720u) goto L_088DE720;
    return;
L_088DE720:
    ctx.gpr[4] = (0u | 8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088DE748u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088DE748u) goto L_088DE748;
    return;
L_088DE748:
    ctx.gpr[31] = (0x088DE750u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DE750u) goto L_088DE750;
    return;
L_088DE750:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE794;
      }
      goto L_088DE760;
    }
L_088DE760:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[4] = (0u | 74u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088DE794u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088DE794u) goto L_088DE794;
    return;
L_088DE794:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE864;
      }
      goto L_088DE79C;
    }
L_088DE79C:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(21404)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE7CC;
      }
      goto L_088DE7C4;
    }
L_088DE7C4:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE864;
      }
      goto L_088DE7CC;
    }
L_088DE7CC:
    ctx.gpr[31] = (0x088DE7D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x088DE7D4u) goto L_088DE7D4;
    return;
L_088DE7D4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE864;
      }
      goto L_088DE7DC;
    }
L_088DE7DC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.set_vfpu_scalar_bits_ct<1u>(ctx.gpr[4]);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = 1.0f / vfpu_s[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<1u, 1u>(vfpu_d); }
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 1u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE864;
      }
      goto L_088DE824;
    }
L_088DE824:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x088DE84Cu);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x088DE84Cu) goto L_088DE84C;
    return;
L_088DE84C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE824;
      }
      goto L_088DE864;
    }
L_088DE864:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DECB0;
      }
      goto L_088DE86C;
    }
L_088DE86C:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE9B0;
      }
      goto L_088DE874;
    }
L_088DE874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE9B0;
      }
      goto L_088DE884;
    }
L_088DE884:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE9B0;
      }
      goto L_088DE894;
    }
L_088DE894:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE9B0;
      }
      goto L_088DE8A4;
    }
L_088DE8A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DE9B0;
      }
      goto L_088DE8BC;
    }
L_088DE8BC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (16880u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16880u << 16u);
      if (branch_taken) {
          goto L_088DE8EC;
      }
      goto L_088DE8D8;
    }
L_088DE8D8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DE970;
      }
      goto L_088DE8EC;
    }
L_088DE8EC:
    if (ctx.gpr[22] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1380)));
        goto L_088DE954;
    }
    goto L_088DE8F4;
L_088DE8F4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1380)));
        goto L_088DE954;
    }
    goto L_088DE918;
L_088DE918:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 1u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1380)));
        goto L_088DE954;
    }
    goto L_088DE940;
L_088DE940:
    ctx.gpr[31] = (0x088DE948u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DE948u) goto L_088DE948;
    return;
L_088DE948:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE970;
      }
      goto L_088DE950;
    }
L_088DE950:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1380)));
    goto L_088DE954;
L_088DE954:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DE970;
      }
      goto L_088DE964;
    }
L_088DE964:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DE9B0;
      }
      goto L_088DE970;
    }
L_088DE970:
    ctx.gpr[6] = (ctx.gpr[30] + static_cast<std::uint32_t>(25));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088DE984u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x088DE984u) goto L_088DE984;
    return;
L_088DE984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE9B0;
      }
      goto L_088DE994;
    }
L_088DE994:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_088DE9B0;
L_088DE9B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DE9D0;
      }
      goto L_088DE9C0;
    }
L_088DE9C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
        goto L_088DEB7C;
    }
    goto L_088DE9D0;
L_088DE9D0:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEA84;
      }
      goto L_088DEA4C;
    }
L_088DEA4C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.gpr[4] = (15523u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088DEA7C;
    }
    goto L_088DEA7C;
L_088DEA7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEB20;
      }
      goto L_088DEA84;
    }
L_088DEA84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEACC;
      }
      goto L_088DEA94;
    }
L_088DEA94:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088DEAC4;
    }
    goto L_088DEAC4;
L_088DEAC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEB20;
      }
      goto L_088DEACC;
    }
L_088DEACC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 20 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DEB18;
      }
      goto L_088DEADC;
    }
L_088DEADC:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEB18;
      }
      goto L_088DEAE4;
    }
L_088DEAE4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[5] = (16736u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_088DEB10;
    }
    goto L_088DEB10;
L_088DEB10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEB20;
      }
      goto L_088DEB18;
    }
L_088DEB18:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[20]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    goto L_088DEB20;
L_088DEB20:
    ctx.gpr[31] = (0x088DEB28u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088DEB28u) goto L_088DEB28;
    return;
L_088DEB28:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21764)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21760)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088DEB40u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x088DEB40u) goto L_088DEB40;
    return;
L_088DEB40:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088DEB4Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x088DEB4Cu) goto L_088DEB4C;
    return;
L_088DEB4C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (0x088DEB78u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x088DEB78u) goto L_088DEB78;
    return;
L_088DEB78:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    goto L_088DEB7C;
L_088DEB7C:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEC18;
      }
      goto L_088DEBA0;
    }
L_088DEBA0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEC18;
      }
      goto L_088DEBC8;
    }
L_088DEBC8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEC18;
      }
      goto L_088DEBF0;
    }
L_088DEBF0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEC68;
      }
      goto L_088DEC18;
    }
L_088DEC18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEC48;
      }
      goto L_088DEC28;
    }
L_088DEC28:
    ctx.gpr[4] = (0u | 18u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DEC40u);
    ctx.gpr[8] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x088DEC40u) goto L_088DEC40;
    return;
L_088DEC40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DECB0;
      }
      goto L_088DEC48;
    }
L_088DEC48:
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DEC60u);
    ctx.gpr[8] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x088DEC60u) goto L_088DEC60;
    return;
L_088DEC60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DECB0;
      }
      goto L_088DEC68;
    }
L_088DEC68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEC98;
      }
      goto L_088DEC78;
    }
L_088DEC78:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DEC90u);
    ctx.gpr[8] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x088DEC90u) goto L_088DEC90;
    return;
L_088DEC90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DECB0;
      }
      goto L_088DEC98;
    }
L_088DEC98:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088DECB0u);
    ctx.gpr[8] = (0u | 2000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x088DECB0u) goto L_088DECB0;
    return;
L_088DECB0:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEDD4;
      }
      goto L_088DECB8;
    }
L_088DECB8:
    ctx.gpr[4] = (0u | 37u);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(248), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6936)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(250), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(261));
    ctx.gpr[22] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(8));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(273));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(476), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(257), static_cast<std::uint8_t>(ctx.gpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(251), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(252), static_cast<std::uint8_t>(ctx.gpr[1]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[20] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DED10u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 475u, 0x088D6448u>(ctx, &aot_mem) && ctx.pc == 0x088DED10u) goto L_088DED10;
    return;
L_088DED10:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(470))))));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(253), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(254), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(255), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[1] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 8u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(256), static_cast<std::uint8_t>(ctx.gpr[1]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(258), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1744)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(259), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(260), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[18] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[18] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[22] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[22] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(476)));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(273));
    rt.memory().aot_store_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    rt.memory().aot_store_word_left(ctx.gpr[23] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[23] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    rt.memory().aot_store_word_left(ctx.gpr[16] + static_cast<std::uint32_t>(3), ctx.gpr[4]);
    rt.memory().aot_store_word_right(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[21] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088DEDD4u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(248));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x088DEDD4u) goto L_088DEDD4;
    return;
L_088DEDD4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(484)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(488)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(492)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(496)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(500)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(504)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(508)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(512)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DEE0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[21]);
    ctx.gpr[21] = (ctx.gpr[8] & 255u);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (16512u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[17]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[17] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[23]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[18] = (0u | 0u);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[20] = (0u | 13u);
    ctx.gpr[22] = (ctx.gpr[5] | 0u);
    ctx.gpr[23] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_088DEEE8;
      }
      goto L_088DEE98;
    }
L_088DEE98:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
    ctx.gpr[31] = (0x088DEEA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x088DEEA8u) goto L_088DEEA8;
    return;
L_088DEEA8:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    ctx.gpr[4] = (0u | 43u);
      if (branch_taken) {
          goto L_088DEEE8;
      }
      goto L_088DEEB4;
    }
L_088DEEB4:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DEEE8;
      }
      goto L_088DEEBC;
    }
L_088DEEBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEEE8;
      }
      goto L_088DEEC8;
    }
L_088DEEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEEE8;
      }
      goto L_088DEED4;
    }
L_088DEED4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEF00;
      }
      goto L_088DEEE8;
    }
L_088DEEE8:
    ctx.gpr[31] = (0x088DEEF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DEEF0u) goto L_088DEEF0;
    return;
L_088DEEF0:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DEF08;
      }
      goto L_088DEEF8;
    }
L_088DEEF8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEF54;
      }
      goto L_088DEF00;
    }
L_088DEF00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DEF08;
    }
L_088DEF08:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[19];
    ctx.gpr[4] = (16448u << 16u);
      if (branch_taken) {
          goto L_088DEF54;
      }
      goto L_088DEF10;
    }
L_088DEF10:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DEF54;
      }
      goto L_088DEF24;
    }
L_088DEF24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), ctx.gpr[5]);
    goto L_088DEF54;
L_088DEF54:
    ctx.gpr[31] = (0x088DEF5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DEF5Cu) goto L_088DEF5C;
    return;
L_088DEF5C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DF038;
      }
      goto L_088DEF64;
    }
L_088DEF64:
    ctx.gpr[31] = (0x088DEF6Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DEF6Cu) goto L_088DEF6C;
    return;
L_088DEF6C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2997)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEF88;
      }
      goto L_088DEF78;
    }
L_088DEF78:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DEF90;
      }
      goto L_088DEF80;
    }
L_088DEF80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEFBC;
      }
      goto L_088DEF88;
    }
L_088DEF88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DEF90;
    }
L_088DEF90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 6u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DEFBC;
      }
      goto L_088DEFAC;
    }
L_088DEFAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DEFD0;
      }
      goto L_088DEFBC;
    }
L_088DEFBC:
    ctx.gpr[4] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DEFE4;
      }
      goto L_088DEFC8;
    }
L_088DEFC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 31u);
      if (branch_taken) {
          goto L_088DEFD8;
      }
      goto L_088DEFD0;
    }
L_088DEFD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DEFD8;
    }
L_088DEFD8:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF014;
      }
      goto L_088DEFE0;
    }
L_088DEFE0:
    ctx.gpr[4] = (2230u << 16u);
    goto L_088DEFE4;
L_088DEFE4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(358)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF030;
      }
      goto L_088DF014;
    }
L_088DF014:
    ctx.gpr[31] = (0x088DF01Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DF01Cu) goto L_088DF01C;
    return;
L_088DF01C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DF028u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 264u, 0x08945234u>(ctx, &aot_mem) && ctx.pc == 0x088DF028u) goto L_088DF028;
    return;
L_088DF028:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF038;
      }
      goto L_088DF030;
    }
L_088DF030:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DF038;
    }
L_088DF038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF06C;
      }
      goto L_088DF048;
    }
L_088DF048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF06C;
      }
      goto L_088DF058;
    }
L_088DF058:
    ctx.gpr[16] = (0u | 43u);
    if (ctx.gpr[23] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
        goto L_088DF074;
    }
    goto L_088DF064;
L_088DF064:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF084;
      }
      goto L_088DF06C;
    }
L_088DF06C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DF074;
    }
L_088DF074:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF0A4;
      }
      goto L_088DF084;
    }
L_088DF084:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF0AC;
      }
      goto L_088DF09C;
    }
L_088DF09C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF0D0;
      }
      goto L_088DF0A4;
    }
L_088DF0A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DF0AC;
    }
L_088DF0AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF0C8;
      }
      goto L_088DF0B8;
    }
L_088DF0B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF0D0;
      }
      goto L_088DF0C8;
    }
L_088DF0C8:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088DF0EC;
      }
      goto L_088DF0D0;
    }
L_088DF0D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF0F4;
      }
      goto L_088DF0E4;
    }
L_088DF0E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF124;
      }
      goto L_088DF0EC;
    }
L_088DF0EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DF0F4;
    }
L_088DF0F4:
    ctx.gpr[31] = (0x088DF0FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DF0FCu) goto L_088DF0FC;
    return;
L_088DF0FC:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DF124;
      }
      goto L_088DF104;
    }
L_088DF104:
    ctx.gpr[31] = (0x088DF10Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088DF10Cu) goto L_088DF10C;
    return;
L_088DF10C:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DF124;
      }
      goto L_088DF114;
    }
L_088DF114:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[16];
    ctx.gpr[4] = (0u | 41u);
      if (branch_taken) {
          goto L_088DF124;
      }
      goto L_088DF11C;
    }
L_088DF11C:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF148;
      }
      goto L_088DF124;
    }
L_088DF124:
    ctx.gpr[31] = (0x088DF12Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DF12Cu) goto L_088DF12C;
    return;
L_088DF12C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF150;
      }
      goto L_088DF134;
    }
L_088DF134:
    ctx.gpr[4] = (16040u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 62915u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
      if (branch_taken) {
          goto L_088DF15C;
      }
      goto L_088DF148;
    }
L_088DF148:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DF150;
    }
L_088DF150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1380)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_088DF15C;
L_088DF15C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 28u);
      if (branch_taken) {
          goto L_088DF178;
      }
      goto L_088DF168;
    }
L_088DF168:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF178;
      }
      goto L_088DF170;
    }
L_088DF170:
    ctx.gpr[4] = (17098u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_088DF178;
L_088DF178:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF284;
      }
      goto L_088DF184;
    }
L_088DF184:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF284;
      }
      goto L_088DF18C;
    }
L_088DF18C:
    ctx.gpr[31] = (0x088DF194u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DF194u) goto L_088DF194;
    return;
L_088DF194:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF284;
      }
      goto L_088DF19C;
    }
L_088DF19C:
    ctx.gpr[17] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088DF1A8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF1A8u) goto L_088DF1A8;
    return;
L_088DF1A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088DF1B4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 751u, 0x08A2F74Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF1B4u) goto L_088DF1B4;
    return;
L_088DF1B4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF1DC;
      }
      goto L_088DF1BC;
    }
L_088DF1BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 17u);
      if (branch_taken) {
          goto L_088DF1D0;
      }
      goto L_088DF1C8;
    }
L_088DF1C8:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF1DC;
      }
      goto L_088DF1D0;
    }
L_088DF1D0:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    goto L_088DF1DC;
L_088DF1DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF280;
      }
      goto L_088DF1F8;
    }
L_088DF1F8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF27C;
      }
      goto L_088DF210;
    }
L_088DF210:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6926)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[16] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088DF23Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 475u, 0x088D6448u>(ctx, &aot_mem) && ctx.pc == 0x088DF23Cu) goto L_088DF23C;
    return;
L_088DF23C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3))))));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (17279u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(43), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088DF260;
    }
    goto L_088DF260;
L_088DF260:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[31] = (0x088DF27Cu);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x088DF27Cu) goto L_088DF27C;
    return;
L_088DF27C:
    ctx.gpr[18] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_088DF280;
L_088DF280:
    ctx.gpr[17] = (2229u << 16u);
    goto L_088DF284;
L_088DF284:
    ctx.gpr[31] = (0x088DF28Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DF28Cu) goto L_088DF28C;
    return;
L_088DF28C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (0u | 2u);
      if (branch_taken) {
          goto L_088DF2CC;
      }
      goto L_088DF294;
    }
L_088DF294:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 5u);
      if (branch_taken) {
          goto L_088DF2C4;
      }
      goto L_088DF29C;
    }
L_088DF29C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 8u);
      if (branch_taken) {
          goto L_088DF2C4;
      }
      goto L_088DF2A4;
    }
L_088DF2A4:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 9u);
      if (branch_taken) {
          goto L_088DF2C4;
      }
      goto L_088DF2AC;
    }
L_088DF2AC:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_088DF2C4;
      }
      goto L_088DF2B4;
    }
L_088DF2B4:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 11u);
      if (branch_taken) {
          goto L_088DF2C4;
      }
      goto L_088DF2BC;
    }
L_088DF2BC:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF2CC;
      }
      goto L_088DF2C4;
    }
L_088DF2C4:
    ctx.gpr[4] = (0u | 200u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1755), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088DF2CC;
L_088DF2CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088DF330;
      }
      goto L_088DF2DC;
    }
L_088DF2DC:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088DF2F0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 418u, 0x088D5DA8u>(ctx, &aot_mem) && ctx.pc == 0x088DF2F0u) goto L_088DF2F0;
    return;
L_088DF2F0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF3CC;
      }
      goto L_088DF2F8;
    }
L_088DF2F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DF304u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 336u, 0x08865854u>(ctx, &aot_mem) && ctx.pc == 0x088DF304u) goto L_088DF304;
    return;
L_088DF304:
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088DF31C;
      }
      goto L_088DF314;
    }
L_088DF314:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 39u);
      if (branch_taken) {
          goto L_088DF320;
      }
      goto L_088DF31C;
    }
L_088DF31C:
    ctx.gpr[20] = (0u | 37u);
    goto L_088DF320;
L_088DF320:
    ctx.gpr[4] = (16128u << 16u);
    ctx.gpr[16] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DF3CC;
      }
      goto L_088DF330;
    }
L_088DF330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF3CC;
      }
      goto L_088DF340;
    }
L_088DF340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DF34Cu);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 336u, 0x08865854u>(ctx, &aot_mem) && ctx.pc == 0x088DF34Cu) goto L_088DF34C;
    return;
L_088DF34C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF3A0;
      }
      goto L_088DF358;
    }
L_088DF358:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF3A0;
      }
      goto L_088DF368;
    }
L_088DF368:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 4096u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088DF390;
      }
      goto L_088DF388;
    }
L_088DF388:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 39u);
      if (branch_taken) {
          goto L_088DF394;
      }
      goto L_088DF390;
    }
L_088DF390:
    ctx.gpr[20] = (0u | 37u);
    goto L_088DF394;
L_088DF394:
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DF3C8;
      }
      goto L_088DF3A0;
    }
L_088DF3A0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF3C4;
      }
      goto L_088DF3A8;
    }
L_088DF3A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DF3C4;
      }
      goto L_088DF3BC;
    }
L_088DF3BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 169u);
      if (branch_taken) {
          goto L_088DF3C8;
      }
      goto L_088DF3C4;
    }
L_088DF3C4:
    ctx.gpr[20] = (0u | 13u);
    goto L_088DF3C8;
L_088DF3C8:
    ctx.gpr[16] = (0u | 0u);
    goto L_088DF3CC;
L_088DF3CC:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DF3D4;
    }
L_088DF3D4:
    ctx.gpr[4] = (ctx.gpr[23] < static_cast<std::uint32_t>(45) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DF3E0;
    }
L_088DF3E0:
    ctx.gpr[23] = (ctx.gpr[23] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[23]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(13928)));
    jump_target = ctx.gpr[1];
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF3F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF424;
      }
      goto L_088DF40C;
    }
L_088DF40C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF42C;
      }
      goto L_088DF41C;
    }
L_088DF41C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF484;
      }
      goto L_088DF424;
    }
L_088DF424:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DF42C;
    }
L_088DF42C:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088DF440u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 418u, 0x088D5DA8u>(ctx, &aot_mem) && ctx.pc == 0x088DF440u) goto L_088DF440;
    return;
L_088DF440:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF47C;
      }
      goto L_088DF448;
    }
L_088DF448:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DF454u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 336u, 0x08865854u>(ctx, &aot_mem) && ctx.pc == 0x088DF454u) goto L_088DF454;
    return;
L_088DF454:
    ctx.gpr[4] = (16384u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DF468;
      }
      goto L_088DF460;
    }
L_088DF460:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 39u);
      if (branch_taken) {
          goto L_088DF46C;
      }
      goto L_088DF468;
    }
L_088DF468:
    ctx.gpr[20] = (0u | 37u);
    goto L_088DF46C;
L_088DF46C:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DF4D4;
      }
      goto L_088DF47C;
    }
L_088DF47C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 169u);
      if (branch_taken) {
          goto L_088DF4D4;
      }
      goto L_088DF484;
    }
L_088DF484:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DF4A8;
      }
      goto L_088DF490;
    }
L_088DF490:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DF4D4;
      }
      goto L_088DF498;
    }
L_088DF498:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_088DF4C0;
      }
      goto L_088DF4A0;
    }
L_088DF4A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 25u);
      if (branch_taken) {
          goto L_088DF4D4;
      }
      goto L_088DF4A8;
    }
L_088DF4A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DF4C8;
      }
      goto L_088DF4B0;
    }
L_088DF4B0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF4D0;
      }
      goto L_088DF4B8;
    }
L_088DF4B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF4D4;
      }
      goto L_088DF4C0;
    }
L_088DF4C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 26u);
      if (branch_taken) {
          goto L_088DF4D4;
      }
      goto L_088DF4C8;
    }
L_088DF4C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 27u);
      if (branch_taken) {
          goto L_088DF4D4;
      }
      goto L_088DF4D0;
    }
L_088DF4D0:
    ctx.gpr[20] = (0u | 28u);
    goto L_088DF4D4;
L_088DF4D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DF4DC;
    }
L_088DF4DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF504;
      }
      goto L_088DF4F0;
    }
L_088DF4F0:
    ctx.gpr[16] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088DF50C;
      }
      goto L_088DF4FC;
    }
L_088DF4FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF5B0;
      }
      goto L_088DF504;
    }
L_088DF504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DF50C;
    }
L_088DF50C:
    ctx.gpr[31] = (0x088DF514u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DF514u) goto L_088DF514;
    return;
L_088DF514:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DF5B0;
      }
      goto L_088DF51C;
    }
L_088DF51C:
    ctx.gpr[31] = (0x088DF524u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DF524u) goto L_088DF524;
    return;
L_088DF524:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF5B0;
      }
      goto L_088DF534;
    }
L_088DF534:
    ctx.gpr[31] = (0x088DF53Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DF53Cu) goto L_088DF53C;
    return;
L_088DF53C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF560;
      }
      goto L_088DF54C;
    }
L_088DF54C:
    ctx.gpr[31] = (0x088DF554u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DF554u) goto L_088DF554;
    return;
L_088DF554:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088DF5B0;
      }
      goto L_088DF560;
    }
L_088DF560:
    ctx.gpr[31] = (0x088DF568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DF568u) goto L_088DF568;
    return;
L_088DF568:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF58C;
      }
      goto L_088DF578;
    }
L_088DF578:
    ctx.gpr[31] = (0x088DF580u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DF580u) goto L_088DF580;
    return;
L_088DF580:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2999)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF5B0;
      }
      goto L_088DF58C;
    }
L_088DF58C:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[20] = (0u | 17u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DF5A4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 401u, 0x088D5C20u>(ctx, &aot_mem) && ctx.pc == 0x088DF5A4u) goto L_088DF5A4;
    return;
L_088DF5A4:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088DF6C4;
      }
      goto L_088DF5B0;
    }
L_088DF5B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 42u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF618;
      }
      goto L_088DF5C0;
    }
L_088DF5C0:
    ctx.gpr[4] = (48793u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088DF5D4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 418u, 0x088D5DA8u>(ctx, &aot_mem) && ctx.pc == 0x088DF5D4u) goto L_088DF5D4;
    return;
L_088DF5D4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF610;
      }
      goto L_088DF5DC;
    }
L_088DF5DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DF5E8u);
    ctx.gpr[5] = (0u | 4096u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 336u, 0x08865854u>(ctx, &aot_mem) && ctx.pc == 0x088DF5E8u) goto L_088DF5E8;
    return;
L_088DF5E8:
    ctx.gpr[4] = (16384u << 16u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DF5FC;
      }
      goto L_088DF5F4;
    }
L_088DF5F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 39u);
      if (branch_taken) {
          goto L_088DF600;
      }
      goto L_088DF5FC;
    }
L_088DF5FC:
    ctx.gpr[20] = (0u | 37u);
    goto L_088DF600;
L_088DF600:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[28]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.gpr[4] = (16128u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DF6C4;
      }
      goto L_088DF610;
    }
L_088DF610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 169u);
      if (branch_taken) {
          goto L_088DF6C4;
      }
      goto L_088DF618;
    }
L_088DF618:
    ctx.gpr[31] = (0x088DF620u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DF620u) goto L_088DF620;
    return;
L_088DF620:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DF644;
      }
      goto L_088DF628;
    }
L_088DF628:
    ctx.gpr[31] = (0x088DF630u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DF630u) goto L_088DF630;
    return;
L_088DF630:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1744)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088DF644;
      }
      goto L_088DF63C;
    }
L_088DF63C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 17u);
      if (branch_taken) {
          goto L_088DF6C4;
      }
      goto L_088DF644;
    }
L_088DF644:
    ctx.gpr[31] = (0x088DF64Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DF64Cu) goto L_088DF64C;
    return;
L_088DF64C:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DF674;
      }
      goto L_088DF654;
    }
L_088DF654:
    ctx.gpr[31] = (0x088DF65Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DF65Cu) goto L_088DF65C;
    return;
L_088DF65C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1744)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DF674;
      }
      goto L_088DF66C;
    }
L_088DF66C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 18u);
      if (branch_taken) {
          goto L_088DF6C4;
      }
      goto L_088DF674;
    }
L_088DF674:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DF698;
      }
      goto L_088DF680;
    }
L_088DF680:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DF6C4;
      }
      goto L_088DF688;
    }
L_088DF688:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_088DF6B0;
      }
      goto L_088DF690;
    }
L_088DF690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 25u);
      if (branch_taken) {
          goto L_088DF6C4;
      }
      goto L_088DF698;
    }
L_088DF698:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DF6B8;
      }
      goto L_088DF6A0;
    }
L_088DF6A0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF6C0;
      }
      goto L_088DF6A8;
    }
L_088DF6A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF6C4;
      }
      goto L_088DF6B0;
    }
L_088DF6B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 26u);
      if (branch_taken) {
          goto L_088DF6C4;
      }
      goto L_088DF6B8;
    }
L_088DF6B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 27u);
      if (branch_taken) {
          goto L_088DF6C4;
      }
      goto L_088DF6C0;
    }
L_088DF6C0:
    ctx.gpr[20] = (0u | 28u);
    goto L_088DF6C4;
L_088DF6C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DF6CC;
    }
L_088DF6CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF6F8;
      }
      goto L_088DF6E0;
    }
L_088DF6E0:
    ctx.gpr[31] = (0x088DF6E8u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DF6E8u) goto L_088DF6E8;
    return;
L_088DF6E8:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
        goto L_088DF710;
    }
    goto L_088DF6F0;
L_088DF6F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
      if (branch_taken) {
          goto L_088DF700;
      }
      goto L_088DF6F8;
    }
L_088DF6F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DF700;
    }
L_088DF700:
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF720;
      }
      goto L_088DF70C;
    }
L_088DF70C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    goto L_088DF710;
L_088DF710:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF720;
      }
      goto L_088DF718;
    }
L_088DF718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088DF784;
      }
      goto L_088DF720;
    }
L_088DF720:
    ctx.gpr[4] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 29u);
      if (branch_taken) {
          goto L_088DF74C;
      }
      goto L_088DF72C;
    }
L_088DF72C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 27u);
      if (branch_taken) {
          goto L_088DF74C;
      }
      goto L_088DF734;
    }
L_088DF734:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 26u);
      if (branch_taken) {
          goto L_088DF74C;
      }
      goto L_088DF73C;
    }
L_088DF73C:
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 32u);
      if (branch_taken) {
          goto L_088DF74C;
      }
      goto L_088DF744;
    }
L_088DF744:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF754;
      }
      goto L_088DF74C;
    }
L_088DF74C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088DF784;
      }
      goto L_088DF754;
    }
L_088DF754:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF774;
      }
      goto L_088DF760;
    }
L_088DF760:
    ctx.gpr[31] = (0x088DF768u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DF768u) goto L_088DF768;
    return;
L_088DF768:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 7u);
      if (branch_taken) {
          goto L_088DF784;
      }
      goto L_088DF774;
    }
L_088DF774:
    ctx.gpr[31] = (0x088DF77Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DF77Cu) goto L_088DF77C;
    return;
L_088DF77C:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    goto L_088DF784;
L_088DF784:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF7F0;
      }
      goto L_088DF78C;
    }
L_088DF78C:
    ctx.gpr[4] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DF7E4;
      }
      goto L_088DF798;
    }
L_088DF798:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DF7BC;
      }
      goto L_088DF7A4;
    }
L_088DF7A4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DF7E8;
      }
      goto L_088DF7AC;
    }
L_088DF7AC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_088DF7D4;
      }
      goto L_088DF7B4;
    }
L_088DF7B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 25u);
      if (branch_taken) {
          goto L_088DF7E8;
      }
      goto L_088DF7BC;
    }
L_088DF7BC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DF7DC;
      }
      goto L_088DF7C4;
    }
L_088DF7C4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF7E8;
      }
      goto L_088DF7CC;
    }
L_088DF7CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 28u);
      if (branch_taken) {
          goto L_088DF7E8;
      }
      goto L_088DF7D4;
    }
L_088DF7D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 26u);
      if (branch_taken) {
          goto L_088DF7E8;
      }
      goto L_088DF7DC;
    }
L_088DF7DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 27u);
      if (branch_taken) {
          goto L_088DF7E8;
      }
      goto L_088DF7E4;
    }
L_088DF7E4:
    ctx.gpr[20] = (0u | 13u);
    goto L_088DF7E8;
L_088DF7E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088DF908;
      }
      goto L_088DF7F0;
    }
L_088DF7F0:
    ctx.gpr[4] = (ctx.gpr[30] < static_cast<std::uint32_t>(7) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF908;
      }
      goto L_088DF7FC;
    }
L_088DF7FC:
    ctx.gpr[30] = (ctx.gpr[30] << 2u);
    ctx.gpr[1] = (2225u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[30]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(14112)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088DF814:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[20] = (0u | 17u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DF82Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 401u, 0x088D5C20u>(ctx, &aot_mem) && ctx.pc == 0x088DF82Cu) goto L_088DF82C;
    return;
L_088DF82C:
    ctx.gpr[18] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(57), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_088DF908;
      }
      goto L_088DF838;
    }
L_088DF838:
    ctx.gpr[20] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088DF908;
      }
      goto L_088DF844;
    }
L_088DF844:
    ctx.gpr[20] = (0u | 18u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088DF908;
      }
      goto L_088DF850;
    }
L_088DF850:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF878;
      }
      goto L_088DF85C;
    }
L_088DF85C:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[20] = (0u | 19u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DF874u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 401u, 0x088D5C20u>(ctx, &aot_mem) && ctx.pc == 0x088DF874u) goto L_088DF874;
    return;
L_088DF874:
    ctx.gpr[18] = (0u | 1u);
    goto L_088DF878;
L_088DF878:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF908;
      }
      goto L_088DF880;
    }
L_088DF880:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF8A8;
      }
      goto L_088DF88C;
    }
L_088DF88C:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[20] = (0u | 20u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DF8A4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 401u, 0x088D5C20u>(ctx, &aot_mem) && ctx.pc == 0x088DF8A4u) goto L_088DF8A4;
    return;
L_088DF8A4:
    ctx.gpr[18] = (0u | 1u);
    goto L_088DF8A8;
L_088DF8A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF908;
      }
      goto L_088DF8B0;
    }
L_088DF8B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF8D8;
      }
      goto L_088DF8BC;
    }
L_088DF8BC:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[20] = (0u | 21u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DF8D4u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 401u, 0x088D5C20u>(ctx, &aot_mem) && ctx.pc == 0x088DF8D4u) goto L_088DF8D4;
    return;
L_088DF8D4:
    ctx.gpr[18] = (0u | 1u);
    goto L_088DF8D8;
L_088DF8D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF908;
      }
      goto L_088DF8E0;
    }
L_088DF8E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF908;
      }
      goto L_088DF8EC;
    }
L_088DF8EC:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[20] = (0u | 22u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DF904u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 401u, 0x088D5C20u>(ctx, &aot_mem) && ctx.pc == 0x088DF904u) goto L_088DF904;
    return;
L_088DF904:
    ctx.gpr[18] = (0u | 1u);
    goto L_088DF908;
L_088DF908:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DF910;
    }
L_088DF910:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF92C;
      }
      goto L_088DF924;
    }
L_088DF924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 13u);
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DF92C;
    }
L_088DF92C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DF934;
    }
L_088DF934:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF960;
      }
      goto L_088DF948;
    }
L_088DF948:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DF968;
      }
      goto L_088DF958;
    }
L_088DF958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFA70;
      }
      goto L_088DF960;
    }
L_088DF960:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DF968;
    }
L_088DF968:
    ctx.gpr[31] = (0x088DF970u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088DF970u) goto L_088DF970;
    return;
L_088DF970:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFA70;
      }
      goto L_088DF978;
    }
L_088DF978:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFA70;
      }
      goto L_088DF984;
    }
L_088DF984:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1212)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DFA70;
      }
      goto L_088DF9AC;
    }
L_088DF9AC:
    ctx.gpr[31] = (0x088DF9B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DF9B4u) goto L_088DF9B4;
    return;
L_088DF9B4:
    ctx.gpr[16] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF9D8;
      }
      goto L_088DF9C4;
    }
L_088DF9C4:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DF9D8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 401u, 0x088D5C20u>(ctx, &aot_mem) && ctx.pc == 0x088DF9D8u) goto L_088DF9D8;
    return;
L_088DF9D8:
    ctx.gpr[4] = (ctx.gpr[16] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DF9F8;
      }
      goto L_088DF9E4;
    }
L_088DF9E4:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DF9F8u);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 401u, 0x088D5C20u>(ctx, &aot_mem) && ctx.pc == 0x088DF9F8u) goto L_088DF9F8;
    return;
L_088DF9F8:
    ctx.gpr[4] = (ctx.gpr[16] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFA18;
      }
      goto L_088DFA04;
    }
L_088DFA04:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DFA18u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 401u, 0x088D5C20u>(ctx, &aot_mem) && ctx.pc == 0x088DFA18u) goto L_088DFA18;
    return;
L_088DFA18:
    ctx.gpr[4] = (ctx.gpr[16] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFA38;
      }
      goto L_088DFA24;
    }
L_088DFA24:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DFA38u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 401u, 0x088D5C20u>(ctx, &aot_mem) && ctx.pc == 0x088DFA38u) goto L_088DFA38;
    return;
L_088DFA38:
    ctx.gpr[4] = (ctx.gpr[16] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFA58;
      }
      goto L_088DFA44;
    }
L_088DFA44:
    ctx.gpr[6] = (ctx.gpr[21] << 24u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 24u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088DFA58u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 401u, 0x088D5C20u>(ctx, &aot_mem) && ctx.pc == 0x088DFA58u) goto L_088DFA58;
    return;
L_088DFA58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFA70;
      }
      goto L_088DFA6C;
    }
L_088DFA6C:
    ctx.gpr[18] = (0u | 1u);
    goto L_088DFA70;
L_088DFA70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFA98;
      }
      goto L_088DFA84;
    }
L_088DFA84:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFAA0;
      }
      goto L_088DFA90;
    }
L_088DFA90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFAB8;
      }
      goto L_088DFA98;
    }
L_088DFA98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DFAA0;
    }
L_088DFAA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DFAE4;
      }
      goto L_088DFAA8;
    }
L_088DFAA8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_088DFAD0;
      }
      goto L_088DFAB0;
    }
L_088DFAB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 25u);
      if (branch_taken) {
          goto L_088DFAE4;
      }
      goto L_088DFAB8;
    }
L_088DFAB8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFAD8;
      }
      goto L_088DFAC0;
    }
L_088DFAC0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFAE0;
      }
      goto L_088DFAC8;
    }
L_088DFAC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFAE4;
      }
      goto L_088DFAD0;
    }
L_088DFAD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 26u);
      if (branch_taken) {
          goto L_088DFAE4;
      }
      goto L_088DFAD8;
    }
L_088DFAD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 27u);
      if (branch_taken) {
          goto L_088DFAE4;
      }
      goto L_088DFAE0;
    }
L_088DFAE0:
    ctx.gpr[20] = (0u | 28u);
    goto L_088DFAE4;
L_088DFAE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DFAEC;
    }
L_088DFAEC:
    ctx.gpr[31] = (0x088DFAF4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088DFAF4u) goto L_088DFAF4;
    return;
L_088DFAF4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
      if (branch_taken) {
          goto L_088DFB24;
      }
      goto L_088DFB0C;
    }
L_088DFB0C:
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[6]);
      if (branch_taken) {
          goto L_088DFB2C;
      }
      goto L_088DFB1C;
    }
L_088DFB1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFB44;
      }
      goto L_088DFB24;
    }
L_088DFB24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DFB2C;
    }
L_088DFB2C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DFC78;
      }
      goto L_088DFB34;
    }
L_088DFB34:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088DFB60;
      }
      goto L_088DFB3C;
    }
L_088DFB3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFBCC;
      }
      goto L_088DFB44;
    }
L_088DFB44:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFBF0;
      }
      goto L_088DFB4C;
    }
L_088DFB4C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFC5C;
      }
      goto L_088DFB58;
    }
L_088DFB58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFC78;
      }
      goto L_088DFB60;
    }
L_088DFB60:
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[6];
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_088DFB7C;
      }
      goto L_088DFB6C;
    }
L_088DFB6C:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFB8C;
      }
      goto L_088DFB78;
    }
L_088DFB78:
    ctx.gpr[5] = (0u | 1u);
    goto L_088DFB7C;
L_088DFB7C:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DFB94;
      }
      goto L_088DFB84;
    }
L_088DFB84:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DFB94;
      }
      goto L_088DFB8C;
    }
L_088DFB8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 26u);
      if (branch_taken) {
          goto L_088DFBC4;
      }
      goto L_088DFB94;
    }
L_088DFB94:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[7];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFBA8;
      }
      goto L_088DFBA0;
    }
L_088DFBA0:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFBB8;
      }
      goto L_088DFBA8;
    }
L_088DFBA8:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DFBC0;
      }
      goto L_088DFBB0;
    }
L_088DFBB0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DFBC0;
      }
      goto L_088DFBB8;
    }
L_088DFBB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 28u);
      if (branch_taken) {
          goto L_088DFBC4;
      }
      goto L_088DFBC0;
    }
L_088DFBC0:
    ctx.gpr[20] = (0u | 25u);
    goto L_088DFBC4;
L_088DFBC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFC78;
      }
      goto L_088DFBCC;
    }
L_088DFBCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DFBE4;
      }
      goto L_088DFBDC;
    }
L_088DFBDC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 23u);
      if (branch_taken) {
          goto L_088DFBE8;
      }
      goto L_088DFBE4;
    }
L_088DFBE4:
    ctx.gpr[20] = (0u | 26u);
    goto L_088DFBE8;
L_088DFBE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFC78;
      }
      goto L_088DFBF0;
    }
L_088DFBF0:
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[5];
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_088DFC0C;
      }
      goto L_088DFBFC;
    }
L_088DFBFC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFC1C;
      }
      goto L_088DFC08;
    }
L_088DFC08:
    ctx.gpr[6] = (0u | 1u);
    goto L_088DFC0C;
L_088DFC0C:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DFC24;
      }
      goto L_088DFC14;
    }
L_088DFC14:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DFC24;
      }
      goto L_088DFC1C;
    }
L_088DFC1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 23u);
      if (branch_taken) {
          goto L_088DFC54;
      }
      goto L_088DFC24;
    }
L_088DFC24:
    ctx.gpr[7] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[7];
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFC38;
      }
      goto L_088DFC30;
    }
L_088DFC30:
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFC48;
      }
      goto L_088DFC38;
    }
L_088DFC38:
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088DFC50;
      }
      goto L_088DFC40;
    }
L_088DFC40:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DFC50;
      }
      goto L_088DFC48;
    }
L_088DFC48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 24u);
      if (branch_taken) {
          goto L_088DFC54;
      }
      goto L_088DFC50;
    }
L_088DFC50:
    ctx.gpr[20] = (0u | 27u);
    goto L_088DFC54;
L_088DFC54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFC78;
      }
      goto L_088DFC5C;
    }
L_088DFC5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 45u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088DFC74;
      }
      goto L_088DFC6C;
    }
L_088DFC6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 24u);
      if (branch_taken) {
          goto L_088DFC78;
      }
      goto L_088DFC74;
    }
L_088DFC74:
    ctx.gpr[20] = (0u | 28u);
    goto L_088DFC78;
L_088DFC78:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFD2C;
      }
      goto L_088DFC80;
    }
L_088DFC80:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFD2C;
      }
      goto L_088DFC88;
    }
L_088DFC88:
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_088DFCBC;
      }
      goto L_088DFC94;
    }
L_088DFC94:
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
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[22];
      if (branch_taken) {
          goto L_088DFD2C;
      }
      goto L_088DFCBC;
    }
L_088DFCBC:
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
    ctx.gpr[5] = (16704u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[22];
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
    ctx.gpr[4] = (16768u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x088DFD04u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088DFD04u) goto L_088DFD04;
    return;
L_088DFD04:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21828)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21824)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088DFD1Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x088DFD1Cu) goto L_088DFD1C;
    return;
L_088DFD1C:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088DFD28u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x088DFD28u) goto L_088DFD28;
    return;
L_088DFD28:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_088DFD2C;
L_088DFD2C:
    ctx.set_fpu_condition((ctx.fpr[28] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DFD40;
      }
      goto L_088DFD3C;
    }
L_088DFD3C:
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_088DFD40;
L_088DFD40:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DFD48;
    }
L_088DFD48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 152u);
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DFD50;
    }
L_088DFD50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFD78;
      }
      goto L_088DFD64;
    }
L_088DFD64:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFD80;
      }
      goto L_088DFD70;
    }
L_088DFD70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFD98;
      }
      goto L_088DFD78;
    }
L_088DFD78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 104u, 0x088E05C4u>(ctx, &aot_mem); return;
      }
      goto L_088DFD80;
    }
L_088DFD80:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) < 0;
    // nop
      if (branch_taken) {
          goto L_088DFDC4;
      }
      goto L_088DFD88;
    }
L_088DFD88:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[21]) > 0;
    // nop
      if (branch_taken) {
          goto L_088DFDB0;
      }
      goto L_088DFD90;
    }
L_088DFD90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 25u);
      if (branch_taken) {
          goto L_088DFDC4;
      }
      goto L_088DFD98;
    }
L_088DFD98:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[21]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_088DFDB8;
      }
      goto L_088DFDA0;
    }
L_088DFDA0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFDC0;
      }
      goto L_088DFDA8;
    }
L_088DFDA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFDC4;
      }
      goto L_088DFDB0;
    }
L_088DFDB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 26u);
      if (branch_taken) {
          goto L_088DFDC4;
      }
      goto L_088DFDB8;
    }
L_088DFDB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 27u);
      if (branch_taken) {
          goto L_088DFDC4;
      }
      goto L_088DFDC0;
    }
L_088DFDC0:
    ctx.gpr[20] = (0u | 28u);
    goto L_088DFDC4;
L_088DFDC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFDCC;
      }
      goto L_088DFDCC;
    }
L_088DFDCC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1212)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[16] = (0u | 44u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[26])) && ctx.fpr[12] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088DFE80;
      }
      goto L_088DFDE8;
    }
L_088DFDE8:
    ctx.gpr[4] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[23] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088DFDFC;
      }
      goto L_088DFDF4;
    }
L_088DFDF4:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[16];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_088DFE04;
      }
      goto L_088DFDFC;
    }
L_088DFDFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088DFE04;
      }
      goto L_088DFE04;
    }
L_088DFE04:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFE80;
      }
      goto L_088DFE0C;
    }
L_088DFE0C:
    ctx.gpr[31] = (0x088DFE14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DFE14u) goto L_088DFE14;
    return;
L_088DFE14:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DFE4C;
      }
      goto L_088DFE1C;
    }
L_088DFE1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(252), ctx.gpr[5]);
    goto L_088DFE4C;
L_088DFE4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1212)));
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DFE70;
      }
      goto L_088DFE60;
    }
L_088DFE60:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1212)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
      if (branch_taken) {
          goto L_088DFE80;
      }
      goto L_088DFE70;
    }
L_088DFE70:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1212)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088DFE80;
L_088DFE80:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[20]) || std::isnan(ctx.fpr[26])) && ctx.fpr[20] == ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DFED8;
      }
      goto L_088DFE90;
    }
L_088DFE90:
    ctx.gpr[31] = (0x088DFE98u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DFE98u) goto L_088DFE98;
    return;
L_088DFE98:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088DFED0;
      }
      goto L_088DFEA0;
    }
L_088DFEA0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(248), ctx.gpr[5]);
    goto L_088DFED0;
L_088DFED0:
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1918), static_cast<std::uint8_t>(ctx.gpr[23]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1920), ctx.gpr[22]);
    goto L_088DFED8;
L_088DFED8:
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088DFF6C;
      }
      goto L_088DFEE0;
    }
L_088DFEE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088DFEECu);
    ctx.gpr[5] = (0u | 130u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088DFEECu) goto L_088DFEEC;
    return;
L_088DFEEC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFF6C;
      }
      goto L_088DFEF4;
    }
L_088DFEF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DFF6C;
      }
      goto L_088DFF08;
    }
L_088DFF08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[20];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DFF6C;
      }
      goto L_088DFF28;
    }
L_088DFF28:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
        goto L_088DFF3C;
    }
    goto L_088DFF3C;
L_088DFF3C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088DFF64;
      }
      goto L_088DFF4C;
    }
L_088DFF4C:
    ctx.gpr[31] = (0x088DFF54u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DFF54u) goto L_088DFF54;
    return;
L_088DFF54:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088DFF64;
      }
      goto L_088DFF5C;
    }
L_088DFF5C:
    ctx.gpr[31] = (0x088DFF64u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 161u, 0x08868FC8u>(ctx, &aot_mem) && ctx.pc == 0x088DFF64u) goto L_088DFF64;
    return;
L_088DFF64:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 103u, 0x088E05C0u>(ctx, &aot_mem); return;
      }
      goto L_088DFF6C;
    }
L_088DFF6C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088DFFC4;
      }
      goto L_088DFF84;
    }
L_088DFF84:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088DFFC4;
      }
      goto L_088DFF8C;
    }
L_088DFF8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 103u, 0x088E05C0u>(ctx, &aot_mem); return;
      }
      goto L_088DFFA4;
    }
L_088DFFA4:
    ctx.gpr[31] = (0x088DFFACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DFFACu) goto L_088DFFAC;
    return;
L_088DFFAC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 103u, 0x088E05C0u>(ctx, &aot_mem); return;
      }
      goto L_088DFFB4;
    }
L_088DFFB4:
    ctx.gpr[31] = (0x088DFFBCu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 161u, 0x08868FC8u>(ctx, &aot_mem) && ctx.pc == 0x088DFFBCu) goto L_088DFFBC;
    return;
L_088DFFBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 103u, 0x088E05C0u>(ctx, &aot_mem); return;
      }
      goto L_088DFFC4;
    }
L_088DFFC4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 38u, 0x088E0248u>(ctx, &aot_mem); return;
      }
      goto L_088DFFD0;
    }
L_088DFFD0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[31] = (0x088DFFE8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 144u, 0x089B07D0u>(ctx, &aot_mem) && ctx.pc == 0x088DFFE8u) goto L_088DFFE8;
    return;
L_088DFFE8:
    ctx.gpr[31] = (0x088DFFF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088DFFF0u) goto L_088DFFF0;
    return;
L_088DFFF0:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 3u, 0x088E0010u>(ctx, &aot_mem); return;
      }
      goto L_088DFFF8;
    }
L_088DFFF8:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 6u, 0x088E0074u>(ctx, &aot_mem); return;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0055_entry, 55u, 1u, 0x088E0000u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0054(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0054_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_54(Runtime &runtime) {
    runtime.register_generated_unit(54u, 0x088DC000u, 16384u, &recomp_unit_0054, &recomp_unit_0054_entry);
    runtime.register_function(0x088DC004u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC00Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC014u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC024u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC034u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC03Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC044u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC050u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC080u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC08Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC094u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC0F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC11Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC124u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC130u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC138u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC144u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC150u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC158u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC164u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC16Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC178u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC184u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC1E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC210u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC214u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC228u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC238u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC244u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC250u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC258u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC268u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC27Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC288u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC290u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC2ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC334u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC33Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC360u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC388u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC394u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC39Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC3F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC3F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC400u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC408u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC410u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC420u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC428u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC430u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC438u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC444u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC454u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC468u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC47Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC490u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC4F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC508u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC510u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC52Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC534u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC53Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC544u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC55Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC56Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC584u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC58Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC59Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC5F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC604u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC618u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC630u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC638u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC648u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC650u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC658u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC670u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC678u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC680u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC694u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC69Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC6F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC710u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC77Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC794u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC7A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC7D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC7D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC7D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC818u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC81Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC828u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC884u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC88Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC89Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC8FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC90Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC920u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC944u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC94Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC954u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC95Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC960u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC968u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC96Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC974u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC978u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC980u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DC9F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA50u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCA9Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCAA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCAD0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCAE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCAE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCAF8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB20u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCB9Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBA4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBBCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBC4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBCCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCBF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCC94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCCCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCCECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD14u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCD80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDA4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDCCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCDFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCE94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCEA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCED0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCEFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCF7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCFACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCFC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCFD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCFE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DCFE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD018u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD044u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD058u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD060u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD06Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD074u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD078u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD088u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD09Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD0F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD100u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD110u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD11Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD12Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD140u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD148u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD15Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD168u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD170u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD178u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD1FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD214u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD21Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD22Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD244u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD24Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD254u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD264u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD274u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD27Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD2ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD300u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD310u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD320u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD324u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD350u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD358u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD388u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD39Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD3F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD420u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD434u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD43Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD448u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD450u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD454u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD4F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD500u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD50Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD518u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD51Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD524u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD52Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD53Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD548u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD558u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD560u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD568u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD598u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD5F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD61Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD624u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD630u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD648u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD650u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD668u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD674u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD68Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD6FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD710u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD724u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD728u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD754u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD7F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD800u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD808u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD810u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD818u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD83Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD850u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD86Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD87Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD898u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD8FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD920u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD950u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD96Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD978u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD980u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD990u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DD9F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA30u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA48u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDA9Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAA4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDACCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDAECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDB4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDBC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDBF8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDC94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDCE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDD94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDE84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEA4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDEFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF14u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF50u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDF88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDFA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDFB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDFC4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DDFC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE000u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE070u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE078u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE07Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE09Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE0E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE120u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE128u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE130u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE140u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE14Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE154u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE16Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE17Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE1FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE204u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE20Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE214u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE224u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE234u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE240u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE2F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE324u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE34Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE354u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE360u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE368u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE370u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE394u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE3BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE3C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE3C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE3F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE400u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE430u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE43Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE440u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE470u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE47Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE48Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE494u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE4FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE528u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE538u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE548u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE550u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE558u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE5A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE604u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE60Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE61Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE688u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE6B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE6E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE6E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE6F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE720u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE748u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE750u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE760u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE794u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE79Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE7DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE824u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE84Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE864u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE86Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE874u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE884u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE894u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE8F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE918u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE940u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE948u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE950u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE954u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE964u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE970u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE984u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE994u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DE9D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEA94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEAC4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEACCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEADCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEAE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB20u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEB7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEBA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEBC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEBF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC48u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC68u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEC98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DECB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DECB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DED10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEDD4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEE0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEE98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEEA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEEB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEEBCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEEC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEED4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEEE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEEF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEEF8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF00u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF10u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEF90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFBCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFD0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFD8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DEFE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF014u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF01Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF028u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF030u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF038u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF048u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF058u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF064u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF06Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF074u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF084u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF09Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF0FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF104u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF10Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF114u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF11Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF124u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF12Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF134u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF148u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF150u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF15Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF168u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF170u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF178u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF184u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF18Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF194u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF19Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF1F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF210u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF23Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF260u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF27Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF280u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF284u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF28Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF294u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF29Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF2A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF2ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF2B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF2BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF2C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF2CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF2DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF2F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF2F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF304u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF314u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF31Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF320u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF330u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF340u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF34Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF358u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF368u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF388u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF390u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF394u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF3F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF40Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF41Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF424u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF42Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF440u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF448u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF454u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF460u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF468u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF46Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF47Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF484u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF490u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF498u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4C8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4D0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF4FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF504u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF50Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF514u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF51Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF524u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF534u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF53Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF54Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF554u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF560u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF568u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF578u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF580u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF58Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5F4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF5FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF600u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF610u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF618u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF620u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF628u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF630u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF63Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF644u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF64Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF654u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF65Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF66Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF674u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF680u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF688u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF690u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF698u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6A0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6B8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6C0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF6F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF700u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF70Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF710u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF718u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF720u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF72Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF734u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF73Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF744u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF74Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF754u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF760u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF768u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF774u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF77Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF784u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF78Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF798u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7CCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7DCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7E8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7F0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF7FCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF814u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF82Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF838u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF844u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF850u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF85Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF874u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF878u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF880u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF88Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8A4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8A8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8B0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8BCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8D4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8E0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF8ECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF904u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF908u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF910u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF924u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF92Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF934u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF948u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF958u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF960u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF968u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF970u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF978u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF984u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9ACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9B4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9C4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9D8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9E4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DF9F8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA04u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA18u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFA98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAC8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAD0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAD8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFAF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB34u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB44u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB58u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB7Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB8Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFB94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBC4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBCCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBDCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBE4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFBFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC14u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC24u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC30u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC38u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC48u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC50u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC74u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFC94u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFCBCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD04u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD2Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD40u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD48u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD50u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD78u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD88u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFD98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDA8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDB0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDB8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDC0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDC4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDCCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFDFCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE04u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE0Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE14u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE1Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE60u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE70u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE80u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE90u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFE98u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFEA0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFED0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFED8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFEE0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFEECu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFEF4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF08u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF28u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF3Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF4Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF54u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF5Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF64u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF6Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF84u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFF8Cu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFA4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFACu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFB4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFBCu, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFC4u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFD0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFE8u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFF0u, &recomp_unit_0054, "recomp_unit_0054");
    runtime.register_function(0x088DFFF8u, &recomp_unit_0054, "recomp_unit_0054");
}
} // namespace psprecomp
