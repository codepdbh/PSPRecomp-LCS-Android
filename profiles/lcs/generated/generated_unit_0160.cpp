#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0160[4095] = {
    1, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 0,
    0, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 11, 0, 0, 0, 0, 12, 0, 0, 0, 13, 0,
    14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 0, 0, 18, 0,
    19, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 24, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 25, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 28, 0, 29, 0, 0, 0, 30, 0, 31, 0, 0, 0, 0, 0, 32, 0,
    33, 0, 0, 0, 34, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0,
    0, 0, 41, 0, 0, 0, 42, 0, 0, 0, 0, 0, 43, 0, 44, 0, 0, 45, 0, 46, 0, 0, 47, 0, 0, 0, 0, 48, 0, 0, 0, 0,
    0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 54,
    0, 55, 0, 0, 0, 0, 0, 0, 0, 56, 0, 0, 57, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0,
    0, 0, 60, 0, 0, 0, 0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 0, 64, 0, 65, 0, 0, 0, 66, 0, 67, 0, 68, 0, 69, 0, 0,
    0, 0, 70, 0, 0, 0, 0, 71, 0, 0, 0, 72, 0, 73, 0, 0, 74, 75, 0, 0, 76, 0, 0, 77, 0, 78, 0, 79, 0, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 83, 0, 0, 0, 84, 0, 85, 0, 0, 86, 87, 0, 0, 88, 0, 0, 89,
    0, 90, 0, 0, 0, 0, 0, 91, 0, 92, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0, 0, 0, 95, 0, 0, 0, 0, 96, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 98, 0, 0, 99, 0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0,
    0, 103, 0, 0, 0, 0, 104, 0, 105, 0, 0, 106, 0, 0, 0, 0, 107, 0, 108, 0, 109, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 112,
    0, 113, 0, 0, 114, 0, 115, 0, 116, 0, 0, 117, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 122, 0, 0,
    0, 0, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 125, 0, 0, 126, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 129, 0, 0,
    130, 0, 0, 0, 0, 0, 0, 131, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 136, 0, 0, 137, 0, 0, 0, 0, 0, 138, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 139,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 143, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 146, 0, 0, 147, 0, 148, 0,
    149, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 150, 0, 151, 0, 0, 0, 152, 0, 0,
    0, 0, 0, 0, 153, 0, 0, 154, 0, 0, 155, 0, 156, 157, 158, 0, 0, 159, 0, 0, 0, 0, 160, 0, 161, 0, 0, 162, 0, 0, 0, 0,
    163, 0, 0, 164, 0, 0, 165, 0, 166, 167, 168, 0, 0, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 171, 0, 172, 0, 0, 0, 0, 173,
    0, 0, 0, 174, 0, 175, 0, 176, 0, 0, 177, 0, 0, 178, 0, 0, 179, 0, 180, 181, 0, 182, 0, 0, 183, 0, 0, 0, 0, 184, 0, 185,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 187, 0, 0,
    188, 0, 0, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 0, 193, 194, 0, 195, 0, 0, 196, 0, 0, 0, 0, 197, 0, 198, 0, 0, 0,
    199, 0, 0, 0, 200, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 204, 205, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 208, 0, 0, 209, 0, 210,
    0, 0, 211, 0, 212, 0, 213, 0, 214, 0, 0, 0, 215, 0, 216, 0, 0, 217, 0, 0, 218, 0, 219, 220, 0, 221, 0, 0, 0, 222, 0, 223,
    0, 0, 224, 0, 0, 0, 225, 0, 226, 227, 0, 228, 0, 0, 0, 0, 0, 229, 0, 230, 0, 0, 231, 0, 0, 0, 232, 0, 233, 0, 0, 0,
    234, 0, 235, 0, 0, 236, 0, 0, 237, 0, 0, 0, 238, 0, 239, 0, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 242, 0, 243, 0, 244, 0, 0, 0, 0, 0, 0, 0,
    0, 245, 0, 246, 0, 0, 247, 0, 248, 0, 0, 0, 0, 249, 0, 250, 0, 0, 251, 0, 0, 252, 0, 253, 0, 0, 0, 0, 254, 0, 0, 255,
    0, 256, 0, 0, 0, 0, 257, 0, 258, 0, 0, 0, 0, 259, 0, 260, 261, 0, 0, 0, 0, 0, 0, 0, 0, 0, 262, 0, 0, 263, 0, 264,
    0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 272, 0, 273, 0, 274, 0, 275, 0, 276, 0, 277, 0, 0,
    0, 278, 0, 0, 0, 279, 0, 0, 0, 280, 0, 0, 0, 0, 0, 281, 0, 282, 0, 283, 0, 0, 0, 284, 0, 0, 285, 0, 0, 0, 0, 286,
    0, 287, 0, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 290, 0, 0, 0, 0, 291, 0, 0, 292, 0, 0, 0, 0, 293, 0, 0, 0, 0,
    294, 0, 0, 0, 295, 0, 0, 0, 0, 296, 0, 0, 297, 0, 0, 0, 0, 298, 0, 0, 299, 0, 0, 0, 0, 300, 0, 0, 301, 0, 0, 0,
    0, 302, 0, 0, 303, 0, 0, 0, 0, 304, 0, 0, 0, 305, 0, 0, 0, 0, 306, 0, 0, 0, 307, 0, 0, 0, 0, 308, 0, 0, 0, 309,
    0, 0, 0, 0, 310, 0, 0, 0, 311, 0, 0, 0, 0, 312, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 315, 0, 316, 0, 317, 0, 0, 0,
    318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 321, 0, 322, 0, 0, 0, 323, 324, 0, 0, 0, 0, 325, 0, 326, 0, 0, 327,
    0, 328, 0, 0, 0, 329, 330, 0, 0, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 335, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 341, 0, 342, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 343, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 345,
    0, 0, 0, 346, 0, 0, 0, 347, 0, 0, 348, 0, 0, 349, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 351, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 0, 0, 0, 358, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 359, 360, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 361, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0,
    0, 0, 364, 0, 365, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 369, 370, 0, 0, 0, 0, 0, 371, 0, 0, 372, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 373, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 375, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 0, 377, 0, 0, 378, 0, 0, 0, 379, 0, 0, 380, 0, 381, 0, 0, 0, 382,
    0, 0, 383, 0, 384, 385, 0, 0, 386, 0, 0, 387, 0, 388, 0, 389, 0, 0, 0, 0, 0, 0, 0, 0, 390, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 391, 0, 0, 0, 392, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397,
    0, 0, 0, 398, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 402,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 0, 0,
    0, 404, 0, 0, 405, 0, 0, 406, 0, 407, 0, 0, 0, 408, 0, 0, 0, 0, 0, 409, 0, 0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 413,
    0, 0, 414, 0, 0, 415, 0, 0, 416, 0, 417, 418, 0, 419, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 422, 0, 0, 423, 424, 0, 425, 0,
    0, 426, 0, 0, 427, 0, 0, 428, 0, 429, 430, 0, 431, 0, 432, 0, 433, 0, 0, 434, 0, 0, 435, 0, 0, 436, 0, 437, 438, 0, 439, 0,
    440, 0, 441, 0, 0, 442, 0, 0, 443, 0, 0, 444, 0, 445, 446, 0, 447, 0, 448, 0, 449, 0, 0, 450, 0, 0, 451, 0, 0, 452, 0, 453,
    454, 0, 455, 0, 456, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 460, 0, 461, 462, 0, 463, 0, 464, 0, 465, 0, 0, 466, 0, 0, 467, 0,
    0, 468, 0, 469, 470, 0, 471, 0, 472, 0, 473, 0, 0, 474, 0, 0, 475, 0, 0, 476, 0, 477, 478, 0, 479, 0, 480, 0, 481, 0, 0, 482,
    0, 0, 483, 0, 0, 484, 0, 485, 486, 0, 487, 0, 488, 0, 489, 0, 0, 490, 0, 0, 491, 0, 0, 492, 0, 493, 494, 0, 495, 0, 496, 0,
    497, 0, 0, 498, 0, 0, 499, 0, 0, 500, 0, 501, 502, 0, 503, 0, 504, 0, 505, 0, 0, 506, 0, 0, 507, 0, 0, 508, 0, 509, 510, 0,
    511, 0, 512, 0, 513, 0, 0, 514, 0, 0, 515, 0, 0, 516, 0, 517, 518, 0, 519, 0, 520, 0, 521, 0, 0, 522, 0, 0, 523, 0, 0, 524,
    0, 525, 526, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0, 0, 533, 0, 0, 0, 0, 0, 534, 0, 535, 0, 536, 0,
    0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 539, 0, 540, 0, 541, 0, 542, 0, 0, 0, 0, 543, 0, 0, 0, 0, 0, 0, 544, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0, 0, 0, 0, 0, 0, 547, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 552, 0, 0,
    0, 0, 553, 0, 0, 0, 0, 554, 0, 555, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    558, 0, 559, 0, 0, 0, 0, 560, 0, 561, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 566, 0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 571,
    0, 0, 0, 0, 572, 0, 573, 0, 0, 0, 0, 574, 0, 575, 0, 576, 0, 0, 577, 0, 0, 578, 0, 0, 579, 0, 0, 0, 580, 0, 0, 581,
    0, 0, 582, 0, 583, 584, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 0,
    0, 589, 590, 0, 0, 0, 0, 591, 0, 0, 0, 592, 593, 0, 594, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0, 596, 597, 0, 0, 598, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 601, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 0, 603,
    0, 604, 0, 0, 0, 0, 605, 0, 0, 606, 0, 0, 607, 0, 0, 0, 608, 0, 0, 609, 0, 0, 610, 0, 611, 612, 0, 0, 613, 0, 0, 0,
    614, 0, 0, 0, 615, 0, 616, 0, 0, 617, 0, 618, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    621, 0, 0, 0, 622, 0, 623, 0, 624, 0, 625, 0, 626, 0, 627, 0, 628, 0, 629, 0, 630, 0, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 632, 0, 0, 0, 633, 0, 0, 634, 0, 635,
    636, 0, 0, 0, 0, 637, 0, 0, 638, 0, 639, 0, 640, 0, 641, 0, 642, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 0, 644, 0,
    0, 0, 0, 645, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 650, 651, 0, 0, 0, 0, 0,
    652, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 653, 0, 654, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 655, 0, 0, 0, 0, 0, 0, 656, 0, 0, 657, 0, 0, 658, 0, 659, 0, 660, 0, 0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 0, 667, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 0, 0, 0,
    674, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 0, 676, 0, 0, 0, 0, 0, 677, 0,
    0, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 680, 0, 681, 0, 0, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 684, 0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 687, 0, 688, 689, 0, 0, 0, 0, 0,
    0, 0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 692, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 0, 0, 695, 0, 0, 696, 0, 0, 697, 0, 0, 0, 0, 698, 0, 0, 0, 0,
    0, 0, 699, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 702, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 703,
    0, 0, 0, 0, 704, 0, 705, 0, 0, 706, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 709, 0, 710, 0, 711, 0, 0, 712, 0, 713, 0, 0,
    0, 0, 714, 0, 715, 0, 716, 0, 717, 0, 0, 718, 0, 0, 719, 0, 0, 0, 0, 720, 0, 0, 721, 0, 0, 0, 722, 0, 723, 0, 0, 0,
    0, 724, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 727, 0, 0, 0, 0, 0,
    728, 0, 0, 0, 729, 0, 0, 0, 730, 0, 0, 0, 731, 0, 0, 0, 732, 0, 733, 0, 0, 0, 734, 0, 735, 0, 0, 0, 736, 0, 737, 0,
    0, 0, 738, 0, 0, 0, 739, 0, 740, 0, 0, 0, 741, 0, 0, 742, 0, 0, 743, 0, 0, 0, 744, 745, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 750, 0, 0, 0, 0, 751,
    0, 0, 752, 0, 0, 753, 0, 0, 754, 0, 755, 0, 0, 0, 0, 756, 0, 757, 0, 758, 759, 0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 0,
    0, 0, 0, 0, 761, 0, 0, 0, 0, 0, 762, 0, 763, 0, 0, 0, 0, 764, 0, 765, 0, 0, 766, 0, 0, 767, 0, 0, 0, 0, 768, 0,
    0, 769, 770, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 0, 0, 0, 0, 772, 0, 0, 0, 0, 0, 773, 0, 0, 774, 0, 775, 0, 776, 0,
    0, 0, 777, 0, 778, 0, 779, 0, 0, 780, 781, 0, 782, 0, 783, 0, 0, 784, 0, 0, 0, 785, 786, 0, 0, 0, 0, 0, 787, 0, 0, 0,
    788, 0, 0, 789, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 0, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 795,
    0, 0, 796, 0, 0, 0, 0, 0, 0, 0, 797, 0, 0, 798, 0, 0, 0, 799, 0, 800, 0, 801, 0, 0, 0, 802, 0, 803, 0, 0, 804, 0,
    0, 0, 0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 807, 808, 0, 0, 809, 0, 810, 811, 0, 0, 812, 0, 813, 814, 0, 815, 816,
    0, 0, 0, 0, 0, 0, 817, 0, 0, 818, 0, 0, 819, 0, 0, 820, 0, 0, 0, 821, 0, 0, 822, 0, 0, 0, 823, 0, 0, 0, 824,
};
void recomp_unit_0160_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A84000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0160[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A84000;
    case 2u: goto L_08A84018;
    case 3u: goto L_08A84020;
    case 4u: goto L_08A84028;
    case 5u: goto L_08A84074;
    case 6u: goto L_08A84088;
    case 7u: goto L_08A84090;
    case 8u: goto L_08A84098;
    case 9u: goto L_08A84130;
    case 10u: goto L_08A84144;
    case 11u: goto L_08A84154;
    case 12u: goto L_08A84168;
    case 13u: goto L_08A84178;
    case 14u: goto L_08A84180;
    case 15u: goto L_08A84194;
    case 16u: goto L_08A841AC;
    case 17u: goto L_08A841E4;
    case 18u: goto L_08A841F8;
    case 19u: goto L_08A84200;
    case 20u: goto L_08A84220;
    case 21u: goto L_08A84228;
    case 22u: goto L_08A84230;
    case 23u: goto L_08A8425C;
    case 24u: goto L_08A84298;
    case 25u: goto L_08A842CC;
    case 26u: goto L_08A84318;
    case 27u: goto L_08A84324;
    case 28u: goto L_08A84340;
    case 29u: goto L_08A84348;
    case 30u: goto L_08A84358;
    case 31u: goto L_08A84360;
    case 32u: goto L_08A84378;
    case 33u: goto L_08A84380;
    case 34u: goto L_08A84390;
    case 35u: goto L_08A843A8;
    case 36u: goto L_08A843C0;
    case 37u: goto L_08A843D0;
    case 38u: goto L_08A843E0;
    case 39u: goto L_08A843EC;
    case 40u: goto L_08A843F8;
    case 41u: goto L_08A84408;
    case 42u: goto L_08A84418;
    case 43u: goto L_08A84430;
    case 44u: goto L_08A84438;
    case 45u: goto L_08A84444;
    case 46u: goto L_08A8444C;
    case 47u: goto L_08A84458;
    case 48u: goto L_08A8446C;
    case 49u: goto L_08A84484;
    case 50u: goto L_08A844C8;
    case 51u: goto L_08A844DC;
    case 52u: goto L_08A844E4;
    case 53u: goto L_08A844F4;
    case 54u: goto L_08A844FC;
    case 55u: goto L_08A84504;
    case 56u: goto L_08A84524;
    case 57u: goto L_08A84530;
    case 58u: goto L_08A84550;
    case 59u: goto L_08A8456C;
    case 60u: goto L_08A84588;
    case 61u: goto L_08A845A0;
    case 62u: goto L_08A845A8;
    case 63u: goto L_08A845B0;
    case 64u: goto L_08A845C4;
    case 65u: goto L_08A845CC;
    case 66u: goto L_08A845DC;
    case 67u: goto L_08A845E4;
    case 68u: goto L_08A845EC;
    case 69u: goto L_08A845F4;
    case 70u: goto L_08A84608;
    case 71u: goto L_08A8461C;
    case 72u: goto L_08A8462C;
    case 73u: goto L_08A84634;
    case 74u: goto L_08A84640;
    case 75u: goto L_08A84644;
    case 76u: goto L_08A84650;
    case 77u: goto L_08A8465C;
    case 78u: goto L_08A84664;
    case 79u: goto L_08A8466C;
    case 80u: goto L_08A8467C;
    case 81u: goto L_08A846A0;
    case 82u: goto L_08A846A8;
    case 83u: goto L_08A846BC;
    case 84u: goto L_08A846CC;
    case 85u: goto L_08A846D4;
    case 86u: goto L_08A846E0;
    case 87u: goto L_08A846E4;
    case 88u: goto L_08A846F0;
    case 89u: goto L_08A846FC;
    case 90u: goto L_08A84704;
    case 91u: goto L_08A8471C;
    case 92u: goto L_08A84724;
    case 93u: goto L_08A8473C;
    case 94u: goto L_08A84744;
    case 95u: goto L_08A84758;
    case 96u: goto L_08A8476C;
    case 97u: goto L_08A8479C;
    case 98u: goto L_08A847AC;
    case 99u: goto L_08A847B8;
    case 100u: goto L_08A847CC;
    case 101u: goto L_08A847D4;
    case 102u: goto L_08A847EC;
    case 103u: goto L_08A84804;
    case 104u: goto L_08A84818;
    case 105u: goto L_08A84820;
    case 106u: goto L_08A8482C;
    case 107u: goto L_08A84840;
    case 108u: goto L_08A84848;
    case 109u: goto L_08A84850;
    case 110u: goto L_08A84864;
    case 111u: goto L_08A8486C;
    case 112u: goto L_08A8487C;
    case 113u: goto L_08A84884;
    case 114u: goto L_08A84890;
    case 115u: goto L_08A84898;
    case 116u: goto L_08A848A0;
    case 117u: goto L_08A848AC;
    case 118u: goto L_08A848C0;
    case 119u: goto L_08A848C8;
    case 120u: goto L_08A848D8;
    case 121u: goto L_08A848EC;
    case 122u: goto L_08A848F4;
    case 123u: goto L_08A84918;
    case 124u: goto L_08A84928;
    case 125u: goto L_08A84930;
    case 126u: goto L_08A8493C;
    case 127u: goto L_08A84940;
    case 128u: goto L_08A84958;
    case 129u: goto L_08A84974;
    case 130u: goto L_08A84980;
    case 131u: goto L_08A8499C;
    case 132u: goto L_08A849A8;
    case 133u: goto L_08A849C8;
    case 134u: goto L_08A849D0;
    case 135u: goto L_08A849D8;
    case 136u: goto L_08A84A24;
    case 137u: goto L_08A84A30;
    case 138u: goto L_08A84A48;
    case 139u: goto L_08A84A7C;
    case 140u: goto L_08A84AC0;
    case 141u: goto L_08A84ACC;
    case 142u: goto L_08A84AE8;
    case 143u: goto L_08A84AF0;
    case 144u: goto L_08A84B38;
    case 145u: goto L_08A84B44;
    case 146u: goto L_08A84B64;
    case 147u: goto L_08A84B70;
    case 148u: goto L_08A84B78;
    case 149u: goto L_08A84B80;
    case 150u: goto L_08A84BDC;
    case 151u: goto L_08A84BE4;
    case 152u: goto L_08A84BF4;
    case 153u: goto L_08A84C10;
    case 154u: goto L_08A84C1C;
    case 155u: goto L_08A84C28;
    case 156u: goto L_08A84C30;
    case 157u: goto L_08A84C34;
    case 158u: goto L_08A84C38;
    case 159u: goto L_08A84C44;
    case 160u: goto L_08A84C58;
    case 161u: goto L_08A84C60;
    case 162u: goto L_08A84C6C;
    case 163u: goto L_08A84C80;
    case 164u: goto L_08A84C8C;
    case 165u: goto L_08A84C98;
    case 166u: goto L_08A84CA0;
    case 167u: goto L_08A84CA4;
    case 168u: goto L_08A84CA8;
    case 169u: goto L_08A84CB4;
    case 170u: goto L_08A84CD8;
    case 171u: goto L_08A84CE0;
    case 172u: goto L_08A84CE8;
    case 173u: goto L_08A84CFC;
    case 174u: goto L_08A84D0C;
    case 175u: goto L_08A84D14;
    case 176u: goto L_08A84D1C;
    case 177u: goto L_08A84D28;
    case 178u: goto L_08A84D34;
    case 179u: goto L_08A84D40;
    case 180u: goto L_08A84D48;
    case 181u: goto L_08A84D4C;
    case 182u: goto L_08A84D54;
    case 183u: goto L_08A84D60;
    case 184u: goto L_08A84D74;
    case 185u: goto L_08A84D7C;
    case 186u: goto L_08A84DB4;
    case 187u: goto L_08A84DF4;
    case 188u: goto L_08A84E00;
    case 189u: goto L_08A84E10;
    case 190u: goto L_08A84E1C;
    case 191u: goto L_08A84E28;
    case 192u: goto L_08A84E34;
    case 193u: goto L_08A84E3C;
    case 194u: goto L_08A84E40;
    case 195u: goto L_08A84E48;
    case 196u: goto L_08A84E54;
    case 197u: goto L_08A84E68;
    case 198u: goto L_08A84E70;
    case 199u: goto L_08A84E80;
    case 200u: goto L_08A84E90;
    case 201u: goto L_08A84EA8;
    case 202u: goto L_08A84EC8;
    case 203u: goto L_08A84ED0;
    case 204u: goto L_08A84ED8;
    case 205u: goto L_08A84EDC;
    case 206u: goto L_08A84F08;
    case 207u: goto L_08A84F5C;
    case 208u: goto L_08A84F68;
    case 209u: goto L_08A84F74;
    case 210u: goto L_08A84F7C;
    case 211u: goto L_08A84F88;
    case 212u: goto L_08A84F90;
    case 213u: goto L_08A84F98;
    case 214u: goto L_08A84FA0;
    case 215u: goto L_08A84FB0;
    case 216u: goto L_08A84FB8;
    case 217u: goto L_08A84FC4;
    case 218u: goto L_08A84FD0;
    case 219u: goto L_08A84FD8;
    case 220u: goto L_08A84FDC;
    case 221u: goto L_08A84FE4;
    case 222u: goto L_08A84FF4;
    case 223u: goto L_08A84FFC;
    case 224u: goto L_08A85008;
    case 225u: goto L_08A85018;
    case 226u: goto L_08A85020;
    case 227u: goto L_08A85024;
    case 228u: goto L_08A8502C;
    case 229u: goto L_08A85044;
    case 230u: goto L_08A8504C;
    case 231u: goto L_08A85058;
    case 232u: goto L_08A85068;
    case 233u: goto L_08A85070;
    case 234u: goto L_08A85080;
    case 235u: goto L_08A85088;
    case 236u: goto L_08A85094;
    case 237u: goto L_08A850A0;
    case 238u: goto L_08A850B0;
    case 239u: goto L_08A850B8;
    case 240u: goto L_08A850C4;
    case 241u: goto L_08A85148;
    case 242u: goto L_08A85150;
    case 243u: goto L_08A85158;
    case 244u: goto L_08A85160;
    case 245u: goto L_08A85184;
    case 246u: goto L_08A8518C;
    case 247u: goto L_08A85198;
    case 248u: goto L_08A851A0;
    case 249u: goto L_08A851B4;
    case 250u: goto L_08A851BC;
    case 251u: goto L_08A851C8;
    case 252u: goto L_08A851D4;
    case 253u: goto L_08A851DC;
    case 254u: goto L_08A851F0;
    case 255u: goto L_08A851FC;
    case 256u: goto L_08A85204;
    case 257u: goto L_08A85218;
    case 258u: goto L_08A85220;
    case 259u: goto L_08A85234;
    case 260u: goto L_08A8523C;
    case 261u: goto L_08A85240;
    case 262u: goto L_08A85268;
    case 263u: goto L_08A85274;
    case 264u: goto L_08A8527C;
    case 265u: goto L_08A85288;
    case 266u: goto L_08A85290;
    case 267u: goto L_08A85298;
    case 268u: goto L_08A852C8;
    case 269u: goto L_08A85320;
    case 270u: goto L_08A8532C;
    case 271u: goto L_08A85344;
    case 272u: goto L_08A8534C;
    case 273u: goto L_08A85354;
    case 274u: goto L_08A8535C;
    case 275u: goto L_08A85364;
    case 276u: goto L_08A8536C;
    case 277u: goto L_08A85374;
    case 278u: goto L_08A85384;
    case 279u: goto L_08A85394;
    case 280u: goto L_08A853A4;
    case 281u: goto L_08A853BC;
    case 282u: goto L_08A853C4;
    case 283u: goto L_08A853CC;
    case 284u: goto L_08A853DC;
    case 285u: goto L_08A853E8;
    case 286u: goto L_08A853FC;
    case 287u: goto L_08A85404;
    case 288u: goto L_08A85418;
    case 289u: goto L_08A85424;
    case 290u: goto L_08A85438;
    case 291u: goto L_08A8544C;
    case 292u: goto L_08A85458;
    case 293u: goto L_08A8546C;
    case 294u: goto L_08A85480;
    case 295u: goto L_08A85490;
    case 296u: goto L_08A854A4;
    case 297u: goto L_08A854B0;
    case 298u: goto L_08A854C4;
    case 299u: goto L_08A854D0;
    case 300u: goto L_08A854E4;
    case 301u: goto L_08A854F0;
    case 302u: goto L_08A85504;
    case 303u: goto L_08A85510;
    case 304u: goto L_08A85524;
    case 305u: goto L_08A85534;
    case 306u: goto L_08A85548;
    case 307u: goto L_08A85558;
    case 308u: goto L_08A8556C;
    case 309u: goto L_08A8557C;
    case 310u: goto L_08A85590;
    case 311u: goto L_08A855A0;
    case 312u: goto L_08A855B4;
    case 313u: goto L_08A855C0;
    case 314u: goto L_08A855D4;
    case 315u: goto L_08A855E0;
    case 316u: goto L_08A855E8;
    case 317u: goto L_08A855F0;
    case 318u: goto L_08A85600;
    case 319u: goto L_08A85624;
    case 320u: goto L_08A8562C;
    case 321u: goto L_08A85638;
    case 322u: goto L_08A85640;
    case 323u: goto L_08A85650;
    case 324u: goto L_08A85654;
    case 325u: goto L_08A85668;
    case 326u: goto L_08A85670;
    case 327u: goto L_08A8567C;
    case 328u: goto L_08A85684;
    case 329u: goto L_08A85694;
    case 330u: goto L_08A85698;
    case 331u: goto L_08A856A8;
    case 332u: goto L_08A856B0;
    case 333u: goto L_08A856B8;
    case 334u: goto L_08A85778;
    case 335u: goto L_08A85834;
    case 336u: goto L_08A85850;
    case 337u: goto L_08A858CC;
    case 338u: goto L_08A858D8;
    case 339u: goto L_08A85928;
    case 340u: goto L_08A85930;
    case 341u: goto L_08A859E4;
    case 342u: goto L_08A859EC;
    case 343u: goto L_08A85AA4;
    case 344u: goto L_08A85AAC;
    case 345u: goto L_08A85AFC;
    case 346u: goto L_08A85B0C;
    case 347u: goto L_08A85B1C;
    case 348u: goto L_08A85B28;
    case 349u: goto L_08A85B34;
    case 350u: goto L_08A85B38;
    case 351u: goto L_08A85B84;
    case 352u: goto L_08A85B98;
    case 353u: goto L_08A85BD8;
    case 354u: goto L_08A85BE0;
    case 355u: goto L_08A85C24;
    case 356u: goto L_08A85C9C;
    case 357u: goto L_08A85CC0;
    case 358u: goto L_08A85CE0;
    case 359u: goto L_08A85D0C;
    case 360u: goto L_08A85D10;
    case 361u: goto L_08A85DC4;
    case 362u: goto L_08A85DD4;
    case 363u: goto L_08A85DE4;
    case 364u: goto L_08A85E08;
    case 365u: goto L_08A85E10;
    case 366u: goto L_08A85E18;
    case 367u: goto L_08A85E20;
    case 368u: goto L_08A85E40;
    case 369u: goto L_08A85E4C;
    case 370u: goto L_08A85E50;
    case 371u: goto L_08A85E68;
    case 372u: goto L_08A85E74;
    case 373u: goto L_08A85EF8;
    case 374u: goto L_08A85F44;
    case 375u: goto L_08A85F70;
    case 376u: goto L_08A85FA8;
    case 377u: goto L_08A85FBC;
    case 378u: goto L_08A85FC8;
    case 379u: goto L_08A85FD8;
    case 380u: goto L_08A85FE4;
    case 381u: goto L_08A85FEC;
    case 382u: goto L_08A85FFC;
    case 383u: goto L_08A86008;
    case 384u: goto L_08A86010;
    case 385u: goto L_08A86014;
    case 386u: goto L_08A86020;
    case 387u: goto L_08A8602C;
    case 388u: goto L_08A86034;
    case 389u: goto L_08A8603C;
    case 390u: goto L_08A86060;
    case 391u: goto L_08A860BC;
    case 392u: goto L_08A860CC;
    case 393u: goto L_08A86128;
    case 394u: goto L_08A86180;
    case 395u: goto L_08A861B0;
    case 396u: goto L_08A861E8;
    case 397u: goto L_08A8627C;
    case 398u: goto L_08A8628C;
    case 399u: goto L_08A86294;
    case 400u: goto L_08A862E8;
    case 401u: goto L_08A86330;
    case 402u: goto L_08A8637C;
    case 403u: goto L_08A86464;
    case 404u: goto L_08A86484;
    case 405u: goto L_08A86490;
    case 406u: goto L_08A8649C;
    case 407u: goto L_08A864A4;
    case 408u: goto L_08A864B4;
    case 409u: goto L_08A864CC;
    case 410u: goto L_08A864DC;
    case 411u: goto L_08A864E4;
    case 412u: goto L_08A864EC;
    case 413u: goto L_08A864FC;
    case 414u: goto L_08A86508;
    case 415u: goto L_08A86514;
    case 416u: goto L_08A86520;
    case 417u: goto L_08A86528;
    case 418u: goto L_08A8652C;
    case 419u: goto L_08A86534;
    case 420u: goto L_08A8653C;
    case 421u: goto L_08A86544;
    case 422u: goto L_08A86560;
    case 423u: goto L_08A8656C;
    case 424u: goto L_08A86570;
    case 425u: goto L_08A86578;
    case 426u: goto L_08A86584;
    case 427u: goto L_08A86590;
    case 428u: goto L_08A8659C;
    case 429u: goto L_08A865A4;
    case 430u: goto L_08A865A8;
    case 431u: goto L_08A865B0;
    case 432u: goto L_08A865B8;
    case 433u: goto L_08A865C0;
    case 434u: goto L_08A865CC;
    case 435u: goto L_08A865D8;
    case 436u: goto L_08A865E4;
    case 437u: goto L_08A865EC;
    case 438u: goto L_08A865F0;
    case 439u: goto L_08A865F8;
    case 440u: goto L_08A86600;
    case 441u: goto L_08A86608;
    case 442u: goto L_08A86614;
    case 443u: goto L_08A86620;
    case 444u: goto L_08A8662C;
    case 445u: goto L_08A86634;
    case 446u: goto L_08A86638;
    case 447u: goto L_08A86640;
    case 448u: goto L_08A86648;
    case 449u: goto L_08A86650;
    case 450u: goto L_08A8665C;
    case 451u: goto L_08A86668;
    case 452u: goto L_08A86674;
    case 453u: goto L_08A8667C;
    case 454u: goto L_08A86680;
    case 455u: goto L_08A86688;
    case 456u: goto L_08A86690;
    case 457u: goto L_08A86698;
    case 458u: goto L_08A866A4;
    case 459u: goto L_08A866B0;
    case 460u: goto L_08A866BC;
    case 461u: goto L_08A866C4;
    case 462u: goto L_08A866C8;
    case 463u: goto L_08A866D0;
    case 464u: goto L_08A866D8;
    case 465u: goto L_08A866E0;
    case 466u: goto L_08A866EC;
    case 467u: goto L_08A866F8;
    case 468u: goto L_08A86704;
    case 469u: goto L_08A8670C;
    case 470u: goto L_08A86710;
    case 471u: goto L_08A86718;
    case 472u: goto L_08A86720;
    case 473u: goto L_08A86728;
    case 474u: goto L_08A86734;
    case 475u: goto L_08A86740;
    case 476u: goto L_08A8674C;
    case 477u: goto L_08A86754;
    case 478u: goto L_08A86758;
    case 479u: goto L_08A86760;
    case 480u: goto L_08A86768;
    case 481u: goto L_08A86770;
    case 482u: goto L_08A8677C;
    case 483u: goto L_08A86788;
    case 484u: goto L_08A86794;
    case 485u: goto L_08A8679C;
    case 486u: goto L_08A867A0;
    case 487u: goto L_08A867A8;
    case 488u: goto L_08A867B0;
    case 489u: goto L_08A867B8;
    case 490u: goto L_08A867C4;
    case 491u: goto L_08A867D0;
    case 492u: goto L_08A867DC;
    case 493u: goto L_08A867E4;
    case 494u: goto L_08A867E8;
    case 495u: goto L_08A867F0;
    case 496u: goto L_08A867F8;
    case 497u: goto L_08A86800;
    case 498u: goto L_08A8680C;
    case 499u: goto L_08A86818;
    case 500u: goto L_08A86824;
    case 501u: goto L_08A8682C;
    case 502u: goto L_08A86830;
    case 503u: goto L_08A86838;
    case 504u: goto L_08A86840;
    case 505u: goto L_08A86848;
    case 506u: goto L_08A86854;
    case 507u: goto L_08A86860;
    case 508u: goto L_08A8686C;
    case 509u: goto L_08A86874;
    case 510u: goto L_08A86878;
    case 511u: goto L_08A86880;
    case 512u: goto L_08A86888;
    case 513u: goto L_08A86890;
    case 514u: goto L_08A8689C;
    case 515u: goto L_08A868A8;
    case 516u: goto L_08A868B4;
    case 517u: goto L_08A868BC;
    case 518u: goto L_08A868C0;
    case 519u: goto L_08A868C8;
    case 520u: goto L_08A868D0;
    case 521u: goto L_08A868D8;
    case 522u: goto L_08A868E4;
    case 523u: goto L_08A868F0;
    case 524u: goto L_08A868FC;
    case 525u: goto L_08A86904;
    case 526u: goto L_08A86908;
    case 527u: goto L_08A86910;
    case 528u: goto L_08A86918;
    case 529u: goto L_08A86920;
    case 530u: goto L_08A86928;
    case 531u: goto L_08A86930;
    case 532u: goto L_08A86938;
    case 533u: goto L_08A86950;
    case 534u: goto L_08A86968;
    case 535u: goto L_08A86970;
    case 536u: goto L_08A86978;
    case 537u: goto L_08A8698C;
    case 538u: goto L_08A86994;
    case 539u: goto L_08A869AC;
    case 540u: goto L_08A869B4;
    case 541u: goto L_08A869BC;
    case 542u: goto L_08A869C4;
    case 543u: goto L_08A869D8;
    case 544u: goto L_08A869F4;
    case 545u: goto L_08A86A30;
    case 546u: goto L_08A86A50;
    case 547u: goto L_08A86A78;
    case 548u: goto L_08A86AA4;
    case 549u: goto L_08A86AB8;
    case 550u: goto L_08A86ACC;
    case 551u: goto L_08A86AE0;
    case 552u: goto L_08A86AF4;
    case 553u: goto L_08A86B08;
    case 554u: goto L_08A86B1C;
    case 555u: goto L_08A86B24;
    case 556u: goto L_08A86B38;
    case 557u: goto L_08A86B40;
    case 558u: goto L_08A86B80;
    case 559u: goto L_08A86B88;
    case 560u: goto L_08A86B9C;
    case 561u: goto L_08A86BA4;
    case 562u: goto L_08A86BE4;
    case 563u: goto L_08A86BEC;
    case 564u: goto L_08A86C1C;
    case 565u: goto L_08A86C24;
    case 566u: goto L_08A86C2C;
    case 567u: goto L_08A86C40;
    case 568u: goto L_08A86C4C;
    case 569u: goto L_08A86C60;
    case 570u: goto L_08A86C68;
    case 571u: goto L_08A86C7C;
    case 572u: goto L_08A86C90;
    case 573u: goto L_08A86C98;
    case 574u: goto L_08A86CAC;
    case 575u: goto L_08A86CB4;
    case 576u: goto L_08A86CBC;
    case 577u: goto L_08A86CC8;
    case 578u: goto L_08A86CD4;
    case 579u: goto L_08A86CE0;
    case 580u: goto L_08A86CF0;
    case 581u: goto L_08A86CFC;
    case 582u: goto L_08A86D08;
    case 583u: goto L_08A86D10;
    case 584u: goto L_08A86D14;
    case 585u: goto L_08A86D20;
    case 586u: goto L_08A86D30;
    case 587u: goto L_08A86D40;
    case 588u: goto L_08A86D70;
    case 589u: goto L_08A86D84;
    case 590u: goto L_08A86D88;
    case 591u: goto L_08A86D9C;
    case 592u: goto L_08A86DAC;
    case 593u: goto L_08A86DB0;
    case 594u: goto L_08A86DB8;
    case 595u: goto L_08A86DCC;
    case 596u: goto L_08A86DE4;
    case 597u: goto L_08A86DE8;
    case 598u: goto L_08A86DF4;
    case 599u: goto L_08A86E30;
    case 600u: goto L_08A86E38;
    case 601u: goto L_08A86E3C;
    case 602u: goto L_08A86E60;
    case 603u: goto L_08A86E7C;
    case 604u: goto L_08A86E84;
    case 605u: goto L_08A86E98;
    case 606u: goto L_08A86EA4;
    case 607u: goto L_08A86EB0;
    case 608u: goto L_08A86EC0;
    case 609u: goto L_08A86ECC;
    case 610u: goto L_08A86ED8;
    case 611u: goto L_08A86EE0;
    case 612u: goto L_08A86EE4;
    case 613u: goto L_08A86EF0;
    case 614u: goto L_08A86F00;
    case 615u: goto L_08A86F10;
    case 616u: goto L_08A86F18;
    case 617u: goto L_08A86F24;
    case 618u: goto L_08A86F2C;
    case 619u: goto L_08A86F30;
    case 620u: goto L_08A86F44;
    case 621u: goto L_08A86F80;
    case 622u: goto L_08A86F90;
    case 623u: goto L_08A86F98;
    case 624u: goto L_08A86FA0;
    case 625u: goto L_08A86FA8;
    case 626u: goto L_08A86FB0;
    case 627u: goto L_08A86FB8;
    case 628u: goto L_08A86FC0;
    case 629u: goto L_08A86FC8;
    case 630u: goto L_08A86FD0;
    case 631u: goto L_08A86FE8;
    case 632u: goto L_08A87058;
    case 633u: goto L_08A87068;
    case 634u: goto L_08A87074;
    case 635u: goto L_08A8707C;
    case 636u: goto L_08A87080;
    case 637u: goto L_08A87094;
    case 638u: goto L_08A870A0;
    case 639u: goto L_08A870A8;
    case 640u: goto L_08A870B0;
    case 641u: goto L_08A870B8;
    case 642u: goto L_08A870C0;
    case 643u: goto L_08A870D8;
    case 644u: goto L_08A870F8;
    case 645u: goto L_08A8710C;
    case 646u: goto L_08A87114;
    case 647u: goto L_08A87138;
    case 648u: goto L_08A87150;
    case 649u: goto L_08A87158;
    case 650u: goto L_08A87164;
    case 651u: goto L_08A87168;
    case 652u: goto L_08A87180;
    case 653u: goto L_08A871D8;
    case 654u: goto L_08A871E0;
    case 655u: goto L_08A87208;
    case 656u: goto L_08A87224;
    case 657u: goto L_08A87230;
    case 658u: goto L_08A8723C;
    case 659u: goto L_08A87244;
    case 660u: goto L_08A8724C;
    case 661u: goto L_08A87260;
    case 662u: goto L_08A872B4;
    case 663u: goto L_08A872C8;
    case 664u: goto L_08A872D0;
    case 665u: goto L_08A87314;
    case 666u: goto L_08A87330;
    case 667u: goto L_08A87348;
    case 668u: goto L_08A87350;
    case 669u: goto L_08A87384;
    case 670u: goto L_08A87440;
    case 671u: goto L_08A87454;
    case 672u: goto L_08A87498;
    case 673u: goto L_08A874E4;
    case 674u: goto L_08A87500;
    case 675u: goto L_08A875CC;
    case 676u: goto L_08A875E0;
    case 677u: goto L_08A875F8;
    case 678u: goto L_08A8760C;
    case 679u: goto L_08A87638;
    case 680u: goto L_08A87640;
    case 681u: goto L_08A87648;
    case 682u: goto L_08A8765C;
    case 683u: goto L_08A87664;
    case 684u: goto L_08A87694;
    case 685u: goto L_08A8769C;
    case 686u: goto L_08A876A4;
    case 687u: goto L_08A876DC;
    case 688u: goto L_08A876E4;
    case 689u: goto L_08A876E8;
    case 690u: goto L_08A8770C;
    case 691u: goto L_08A8771C;
    case 692u: goto L_08A87748;
    case 693u: goto L_08A87790;
    case 694u: goto L_08A87824;
    case 695u: goto L_08A87840;
    case 696u: goto L_08A8784C;
    case 697u: goto L_08A87858;
    case 698u: goto L_08A8786C;
    case 699u: goto L_08A87888;
    case 700u: goto L_08A87898;
    case 701u: goto L_08A878A4;
    case 702u: goto L_08A878B8;
    case 703u: goto L_08A878FC;
    case 704u: goto L_08A87910;
    case 705u: goto L_08A87918;
    case 706u: goto L_08A87924;
    case 707u: goto L_08A87938;
    case 708u: goto L_08A87940;
    case 709u: goto L_08A87950;
    case 710u: goto L_08A87958;
    case 711u: goto L_08A87960;
    case 712u: goto L_08A8796C;
    case 713u: goto L_08A87974;
    case 714u: goto L_08A87988;
    case 715u: goto L_08A87990;
    case 716u: goto L_08A87998;
    case 717u: goto L_08A879A0;
    case 718u: goto L_08A879AC;
    case 719u: goto L_08A879B8;
    case 720u: goto L_08A879CC;
    case 721u: goto L_08A879D8;
    case 722u: goto L_08A879E8;
    case 723u: goto L_08A879F0;
    case 724u: goto L_08A87A04;
    case 725u: goto L_08A87A0C;
    case 726u: goto L_08A87A58;
    case 727u: goto L_08A87A68;
    case 728u: goto L_08A87A80;
    case 729u: goto L_08A87A90;
    case 730u: goto L_08A87AA0;
    case 731u: goto L_08A87AB0;
    case 732u: goto L_08A87AC0;
    case 733u: goto L_08A87AC8;
    case 734u: goto L_08A87AD8;
    case 735u: goto L_08A87AE0;
    case 736u: goto L_08A87AF0;
    case 737u: goto L_08A87AF8;
    case 738u: goto L_08A87B08;
    case 739u: goto L_08A87B18;
    case 740u: goto L_08A87B20;
    case 741u: goto L_08A87B30;
    case 742u: goto L_08A87B3C;
    case 743u: goto L_08A87B48;
    case 744u: goto L_08A87B58;
    case 745u: goto L_08A87B5C;
    case 746u: goto L_08A87B8C;
    case 747u: goto L_08A87BB4;
    case 748u: goto L_08A87BCC;
    case 749u: goto L_08A87BD4;
    case 750u: goto L_08A87BE8;
    case 751u: goto L_08A87BFC;
    case 752u: goto L_08A87C08;
    case 753u: goto L_08A87C14;
    case 754u: goto L_08A87C20;
    case 755u: goto L_08A87C28;
    case 756u: goto L_08A87C3C;
    case 757u: goto L_08A87C44;
    case 758u: goto L_08A87C4C;
    case 759u: goto L_08A87C50;
    case 760u: goto L_08A87C6C;
    case 761u: goto L_08A87C90;
    case 762u: goto L_08A87CA8;
    case 763u: goto L_08A87CB0;
    case 764u: goto L_08A87CC4;
    case 765u: goto L_08A87CCC;
    case 766u: goto L_08A87CD8;
    case 767u: goto L_08A87CE4;
    case 768u: goto L_08A87CF8;
    case 769u: goto L_08A87D04;
    case 770u: goto L_08A87D08;
    case 771u: goto L_08A87D20;
    case 772u: goto L_08A87D44;
    case 773u: goto L_08A87D5C;
    case 774u: goto L_08A87D68;
    case 775u: goto L_08A87D70;
    case 776u: goto L_08A87D78;
    case 777u: goto L_08A87D88;
    case 778u: goto L_08A87D90;
    case 779u: goto L_08A87D98;
    case 780u: goto L_08A87DA4;
    case 781u: goto L_08A87DA8;
    case 782u: goto L_08A87DB0;
    case 783u: goto L_08A87DB8;
    case 784u: goto L_08A87DC4;
    case 785u: goto L_08A87DD4;
    case 786u: goto L_08A87DD8;
    case 787u: goto L_08A87DF0;
    case 788u: goto L_08A87E00;
    case 789u: goto L_08A87E0C;
    case 790u: goto L_08A87E24;
    case 791u: goto L_08A87E30;
    case 792u: goto L_08A87E40;
    case 793u: goto L_08A87E64;
    case 794u: goto L_08A87E70;
    case 795u: goto L_08A87E7C;
    case 796u: goto L_08A87E88;
    case 797u: goto L_08A87EA8;
    case 798u: goto L_08A87EB4;
    case 799u: goto L_08A87EC4;
    case 800u: goto L_08A87ECC;
    case 801u: goto L_08A87ED4;
    case 802u: goto L_08A87EE4;
    case 803u: goto L_08A87EEC;
    case 804u: goto L_08A87EF8;
    case 805u: goto L_08A87F0C;
    case 806u: goto L_08A87F34;
    case 807u: goto L_08A87F3C;
    case 808u: goto L_08A87F40;
    case 809u: goto L_08A87F4C;
    case 810u: goto L_08A87F54;
    case 811u: goto L_08A87F58;
    case 812u: goto L_08A87F64;
    case 813u: goto L_08A87F6C;
    case 814u: goto L_08A87F70;
    case 815u: goto L_08A87F78;
    case 816u: goto L_08A87F7C;
    case 817u: goto L_08A87F98;
    case 818u: goto L_08A87FA4;
    case 819u: goto L_08A87FB0;
    case 820u: goto L_08A87FBC;
    case 821u: goto L_08A87FCC;
    case 822u: goto L_08A87FD8;
    case 823u: goto L_08A87FE8;
    case 824u: goto L_08A87FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A84000:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[23] = (2228u << 16u);
      if (branch_taken) {
          goto L_08A84028;
      }
      goto L_08A84018;
    }
L_08A84018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84130;
      }
      goto L_08A84020;
    }
L_08A84020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84298;
      }
      goto L_08A84028;
    }
L_08A84028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[19]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A84074u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A84074u) goto L_08A84074;
    return;
L_08A84074:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08A84088u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A84088u) goto L_08A84088;
    return;
L_08A84088:
    ctx.gpr[31] = (0x08A84090u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A84090u) goto L_08A84090;
    return;
L_08A84090:
    ctx.gpr[31] = (0x08A84098u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08A84098u) goto L_08A84098;
    return;
L_08A84098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[20]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[21]);
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[5] | 2u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (ctx.gpr[5] | 32768u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(423), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A84130;
L_08A84130:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(290)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A84154;
      }
      goto L_08A84144;
    }
L_08A84144:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(423), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A84180;
      }
      goto L_08A84154;
    }
L_08A84154:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(306)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A84178;
      }
      goto L_08A84168;
    }
L_08A84168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(423), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A84180;
      }
      goto L_08A84178;
    }
L_08A84178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(423), static_cast<std::uint8_t>(0u));
    goto L_08A84180;
L_08A84180:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84298;
      }
      goto L_08A84194;
    }
L_08A84194:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-22896)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A841AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[5] | 4u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A84220;
      }
      goto L_08A841E4;
    }
L_08A841E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(282)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A84220;
      }
      goto L_08A841F8;
    }
L_08A841F8:
    ctx.gpr[31] = (0x08A84200u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 140u, 0x08A81728u>(ctx, &aot_mem) && ctx.pc == 0x08A84200u) goto L_08A84200;
    return;
L_08A84200:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23288));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(426), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A84228;
      }
      goto L_08A84220;
    }
L_08A84220:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(426), static_cast<std::uint16_t>(0u));
    goto L_08A84228;
L_08A84228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84298;
      }
      goto L_08A84230;
    }
L_08A84230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A84298;
      }
      goto L_08A8425C;
    }
L_08A8425C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[5] = (ctx.gpr[5] | 8u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(421), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A84298;
      }
      goto L_08A84298;
    }
L_08A84298:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A842CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] & 255u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A84318u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23316));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 9u, 0x08A80CC0u>(ctx, &aot_mem) && ctx.pc == 0x08A84318u) goto L_08A84318;
    return;
L_08A84318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84348;
      }
      goto L_08A84324;
    }
L_08A84324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[22] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(302)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_08A84360;
      }
      goto L_08A84340;
    }
L_08A84340:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84390;
      }
      goto L_08A84348;
    }
L_08A84348:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A84358u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23280));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 9u, 0x08A80CC0u>(ctx, &aot_mem) && ctx.pc == 0x08A84358u) goto L_08A84358;
    return;
L_08A84358:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A84EDC;
      }
      goto L_08A84360;
    }
L_08A84360:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A84390;
      }
      goto L_08A84378;
    }
L_08A84378:
    ctx.gpr[31] = (0x08A84380u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A84380u) goto L_08A84380;
    return;
L_08A84380:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 120u);
    ctx.gpr[31] = (0x08A84390u);
    ctx.gpr[6] = (0u | 100u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 645u, 0x08A96C48u>(ctx, &aot_mem) && ctx.pc == 0x08A84390u) goto L_08A84390;
    return;
L_08A84390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A843C0;
      }
      goto L_08A843A8;
    }
L_08A843A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8444C;
      }
      goto L_08A843C0;
    }
L_08A843C0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8444C;
      }
      goto L_08A843D0;
    }
L_08A843D0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A843E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 650u, 0x088A7DE8u>(ctx, &aot_mem) && ctx.pc == 0x08A843E0u) goto L_08A843E0;
    return;
L_08A843E0:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84430;
      }
      goto L_08A843EC;
    }
L_08A843EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
        goto L_08A84418;
    }
    goto L_08A843F8;
L_08A843F8:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08A84408u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08A84408u) goto L_08A84408;
    return;
L_08A84408:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(96)));
    goto L_08A84418;
L_08A84418:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(176)));
    ctx.gpr[4] = (ctx.gpr[4] ^ 65535u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84444;
      }
      goto L_08A84430;
    }
L_08A84430:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8444C;
      }
      goto L_08A84438;
    }
L_08A84438:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8444C;
      }
      goto L_08A84444;
    }
L_08A84444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A84EDC;
      }
      goto L_08A8444C;
    }
L_08A8444C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08A84458u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 140u, 0x08A81728u>(ctx, &aot_mem) && ctx.pc == 0x08A84458u) goto L_08A84458;
    return;
L_08A84458:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(20) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A84ED8;
      }
      goto L_08A8446C;
    }
L_08A8446C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-22816)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84484:
    ctx.gpr[4] = (ctx.gpr[19] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[18] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[22] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[23] = (ctx.gpr[4] + static_cast<std::uint32_t>(23288));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.gpr[23] = (ctx.gpr[22] + ctx.gpr[23]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84588;
      }
      goto L_08A844C8;
    }
L_08A844C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x08A844DCu);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    goto L_08A86A30;
L_08A844DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84550;
      }
      goto L_08A844E4;
    }
L_08A844E4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A844F4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 26u, 0x089441E4u>(ctx, &aot_mem) && ctx.pc == 0x08A844F4u) goto L_08A844F4;
    return;
L_08A844F4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84504;
      }
      goto L_08A844FC;
    }
L_08A844FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED8;
      }
      goto L_08A84504;
    }
L_08A84504:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23140));
    ctx.gpr[4] = (ctx.gpr[22] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A84524u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A84524u) goto L_08A84524;
    return;
L_08A84524:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A84530u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x08A84530u) goto L_08A84530;
    return;
L_08A84530:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x08A84550u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-270));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08A84550u) goto L_08A84550;
    return;
L_08A84550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(188), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8456Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80DACu>(ctx, &aot_mem) && ctx.pc == 0x08A8456Cu) goto L_08A8456C;
    return;
L_08A8456C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A845A0;
      }
      goto L_08A84588;
    }
L_08A84588:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 6000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A845A0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23228));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x08A845A0u) goto L_08A845A0;
    return;
L_08A845A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED8;
      }
      goto L_08A845A8;
    }
L_08A845A8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A8479C;
      }
      goto L_08A845B0;
    }
L_08A845B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x08A845C4u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    goto L_08A86A30;
L_08A845C4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8479C;
      }
      goto L_08A845CC;
    }
L_08A845CC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A845DCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 26u, 0x089441E4u>(ctx, &aot_mem) && ctx.pc == 0x08A845DCu) goto L_08A845DC;
    return;
L_08A845DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A845EC;
      }
      goto L_08A845E4;
    }
L_08A845E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED8;
      }
      goto L_08A845EC;
    }
L_08A845EC:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84724;
      }
      goto L_08A845F4;
    }
L_08A845F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7827));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A8466C;
      }
      goto L_08A84608;
    }
L_08A84608:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8461Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A8461Cu) goto L_08A8461C;
    return;
L_08A8461C:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8462Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x08A8462Cu) goto L_08A8462C;
    return;
L_08A8462C:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A84644;
      }
      goto L_08A84634;
    }
L_08A84634:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A84640u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x08A84640u) goto L_08A84640;
    return;
L_08A84640:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A84644;
L_08A84644:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84704;
      }
      goto L_08A84650;
    }
L_08A84650:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84704;
      }
      goto L_08A8465C;
    }
L_08A8465C:
    ctx.gpr[31] = (0x08A84664u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 687u, 0x0899F8B4u>(ctx, &aot_mem) && ctx.pc == 0x08A84664u) goto L_08A84664;
    return;
L_08A84664:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84704;
      }
      goto L_08A8466C;
    }
L_08A8466C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A846A8;
      }
      goto L_08A8467C;
    }
L_08A8467C:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23214));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A846A0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A846A0u) goto L_08A846A0;
    return;
L_08A846A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A846BC;
      }
      goto L_08A846A8;
    }
L_08A846A8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A846BCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A846BCu) goto L_08A846BC;
    return;
L_08A846BC:
    ctx.gpr[21] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A846CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x08A846CCu) goto L_08A846CC;
    return;
L_08A846CC:
    { const bool branch_taken = ctx.gpr[21] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A846E4;
      }
      goto L_08A846D4;
    }
L_08A846D4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A846E0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x08A846E0u) goto L_08A846E0;
    return;
L_08A846E0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A846E4;
L_08A846E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84704;
      }
      goto L_08A846F0;
    }
L_08A846F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84704;
      }
      goto L_08A846FC;
    }
L_08A846FC:
    ctx.gpr[31] = (0x08A84704u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 687u, 0x0899F8B4u>(ctx, &aot_mem) && ctx.pc == 0x08A84704u) goto L_08A84704;
    return;
L_08A84704:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 78u);
    ctx.gpr[31] = (0x08A8471Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-270));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08A8471Cu) goto L_08A8471C;
    return;
L_08A8471C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8479C;
      }
      goto L_08A84724;
    }
L_08A84724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A8479C;
      }
      goto L_08A8473C;
    }
L_08A8473C:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8479C;
      }
      goto L_08A84744;
    }
L_08A84744:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (0u | 84u);
    ctx.gpr[31] = (0x08A84758u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08A84758u) goto L_08A84758;
    return;
L_08A84758:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-5896), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A8476Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x08A8476Cu) goto L_08A8476C;
    return;
L_08A8476C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-5892), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23504));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-5888), ctx.gpr[4]);
    goto L_08A8479C;
L_08A8479C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 15u);
      if (branch_taken) {
          goto L_08A847CC;
      }
      goto L_08A847AC;
    }
L_08A847AC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84820;
      }
      goto L_08A847B8;
    }
L_08A847B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(30000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A84820;
      }
      goto L_08A847CC;
    }
L_08A847CC:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A84820;
      }
      goto L_08A847D4;
    }
L_08A847D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A84804;
      }
      goto L_08A847EC;
    }
L_08A847EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (5u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-27680));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A84818;
      }
      goto L_08A84804;
    }
L_08A84804:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (5u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32320));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A84818;
L_08A84818:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84820;
      }
      goto L_08A84820;
    }
L_08A84820:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08A8482Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80DACu>(ctx, &aot_mem) && ctx.pc == 0x08A8482Cu) goto L_08A8482C;
    return;
L_08A8482C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A84840u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23220));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 9u, 0x08A80CC0u>(ctx, &aot_mem) && ctx.pc == 0x08A84840u) goto L_08A84840;
    return;
L_08A84840:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED8;
      }
      goto L_08A84848;
    }
L_08A84848:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A84974;
      }
      goto L_08A84850;
    }
L_08A84850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[31] = (0x08A84864u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    goto L_08A86A30;
L_08A84864:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84974;
      }
      goto L_08A8486C;
    }
L_08A8486C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A8487Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 26u, 0x089441E4u>(ctx, &aot_mem) && ctx.pc == 0x08A8487Cu) goto L_08A8487C;
    return;
L_08A8487C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84898;
      }
      goto L_08A84884;
    }
L_08A84884:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A84890u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 34u, 0x08A80E4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84890u) goto L_08A84890;
    return;
L_08A84890:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED8;
      }
      goto L_08A84898;
    }
L_08A84898:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84940;
      }
      goto L_08A848A0;
    }
L_08A848A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A848C8;
      }
      goto L_08A848AC;
    }
L_08A848AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A848C0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A848C0u) goto L_08A848C0;
    return;
L_08A848C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84918;
      }
      goto L_08A848C8;
    }
L_08A848C8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A848F4;
      }
      goto L_08A848D8;
    }
L_08A848D8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A848ECu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A848ECu) goto L_08A848EC;
    return;
L_08A848EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84918;
      }
      goto L_08A848F4;
    }
L_08A848F4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23140));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08A84918u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x08A84918u) goto L_08A84918;
    return;
L_08A84918:
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(2948))))));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A84928u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x08A84928u) goto L_08A84928;
    return;
L_08A84928:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_08A84940;
      }
      goto L_08A84930;
    }
L_08A84930:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A8493Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 652u, 0x0899F648u>(ctx, &aot_mem) && ctx.pc == 0x08A8493Cu) goto L_08A8493C;
    return;
L_08A8493C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[2]));
    goto L_08A84940;
L_08A84940:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A84974;
      }
      goto L_08A84958;
    }
L_08A84958:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (0u | 78u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x08A84974u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-270));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08A84974u) goto L_08A84974;
    return;
L_08A84974:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08A84980u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80DACu>(ctx, &aot_mem) && ctx.pc == 0x08A84980u) goto L_08A84980;
    return;
L_08A84980:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A849D0;
      }
      goto L_08A8499C;
    }
L_08A8499C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A849D0;
      }
      goto L_08A849A8;
    }
L_08A849A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A849D0;
      }
      goto L_08A849C8;
    }
L_08A849C8:
    ctx.gpr[31] = (0x08A849D0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 473u, 0x08919E04u>(ctx, &aot_mem) && ctx.pc == 0x08A849D0u) goto L_08A849D0;
    return;
L_08A849D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED8;
      }
      goto L_08A849D8;
    }
L_08A849D8:
    ctx.gpr[4] = (ctx.gpr[19] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[18] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(100));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[19] = (2230u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-7827));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A84A7C;
      }
      goto L_08A84A24;
    }
L_08A84A24:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A84A30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23192));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A84A30u) goto L_08A84A30;
    return;
L_08A84A30:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (0u | 5000u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A84A48u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23152));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x08A84A48u) goto L_08A84A48;
    return;
L_08A84A48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08A84AC0;
      }
      goto L_08A84A7C;
    }
L_08A84A7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(196)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(200)));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[6] = (0u | 5000u);
    ctx.gpr[31] = (0x08A84AC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23144));
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 760u, 0x0893BC78u>(ctx, &aot_mem) && ctx.pc == 0x08A84AC0u) goto L_08A84AC0;
    return;
L_08A84AC0:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08A84ACCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80DACu>(ctx, &aot_mem) && ctx.pc == 0x08A84ACCu) goto L_08A84ACC;
    return;
L_08A84ACC:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 86u);
    ctx.gpr[31] = (0x08A84AE8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08A84AE8u) goto L_08A84AE8;
    return;
L_08A84AE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED8;
      }
      goto L_08A84AF0;
    }
L_08A84AF0:
    ctx.gpr[4] = (ctx.gpr[19] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9432));
    ctx.gpr[31] = (0x08A84B38u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23136));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A84B38u) goto L_08A84B38;
    return;
L_08A84B38:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08A84B44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80DACu>(ctx, &aot_mem) && ctx.pc == 0x08A84B44u) goto L_08A84B44;
    return;
L_08A84B44:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 85u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A84B64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08A84B64u) goto L_08A84B64;
    return;
L_08A84B64:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A84B70u);
    ctx.gpr[5] = (0u | 122u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A84B70u) goto L_08A84B70;
    return;
L_08A84B70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED8;
      }
      goto L_08A84B78;
    }
L_08A84B78:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED8;
      }
      goto L_08A84B80;
    }
L_08A84B80:
    ctx.gpr[4] = (ctx.gpr[19] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[19] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(188)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[5] = (0u | 85u);
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[8] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(188), ctx.gpr[8]);
    ctx.gpr[31] = (0x08A84BDCu);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08A84BDCu) goto L_08A84BDC;
    return;
L_08A84BDC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED8;
      }
      goto L_08A84BE4;
    }
L_08A84BE4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84C58;
      }
      goto L_08A84BF4;
    }
L_08A84BF4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(42));
      if (branch_taken) {
          goto L_08A84C38;
      }
      goto L_08A84C10;
    }
L_08A84C10:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A84C1Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A84C1Cu) goto L_08A84C1C;
    return;
L_08A84C1C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84C34;
      }
      goto L_08A84C28;
    }
L_08A84C28:
    ctx.gpr[31] = (0x08A84C30u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A84C30u) goto L_08A84C30;
    return;
L_08A84C30:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A84C34;
L_08A84C34:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[18]);
    goto L_08A84C38;
L_08A84C38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A84C44u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A84C44u) goto L_08A84C44;
    return;
L_08A84C44:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A84C58u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A84C58u) goto L_08A84C58;
    return;
L_08A84C58:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED8;
      }
      goto L_08A84C60;
    }
L_08A84C60:
    ctx.gpr[18] = (ctx.gpr[16] + static_cast<std::uint32_t>(42));
    ctx.gpr[31] = (0x08A84C6Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 11u, 0x08A80D14u>(ctx, &aot_mem) && ctx.pc == 0x08A84C6Cu) goto L_08A84C6C;
    return;
L_08A84C6C:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[22] = (2269u << 16u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-5136));
      if (branch_taken) {
          goto L_08A84CA8;
      }
      goto L_08A84C80;
    }
L_08A84C80:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[31] = (0x08A84C8Cu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A84C8Cu) goto L_08A84C8C;
    return;
L_08A84C8C:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84CA4;
      }
      goto L_08A84C98;
    }
L_08A84C98:
    ctx.gpr[31] = (0x08A84CA0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A84CA0u) goto L_08A84CA0;
    return;
L_08A84CA0:
    ctx.gpr[19] = (ctx.gpr[20] | 0u);
    goto L_08A84CA4;
L_08A84CA4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[19]);
    goto L_08A84CA8;
L_08A84CA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A84CB4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A84CB4u) goto L_08A84CB4;
    return;
L_08A84CB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A84CD8u);
    ctx.gpr[11] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 517u, 0x0887B1ACu>(ctx, &aot_mem) && ctx.pc == 0x08A84CD8u) goto L_08A84CD8;
    return;
L_08A84CD8:
    ctx.gpr[31] = (0x08A84CE0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 463u, 0x08986CA0u>(ctx, &aot_mem) && ctx.pc == 0x08A84CE0u) goto L_08A84CE0;
    return;
L_08A84CE0:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84CFC;
      }
      goto L_08A84CE8;
    }
L_08A84CE8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A84CFCu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A84CFCu) goto L_08A84CFC;
    return;
L_08A84CFC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84E68;
      }
      goto L_08A84D0C;
    }
L_08A84D0C:
    ctx.gpr[31] = (0x08A84D14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 30u, 0x089581F0u>(ctx, &aot_mem) && ctx.pc == 0x08A84D14u) goto L_08A84D14;
    return;
L_08A84D14:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A84D7C;
      }
      goto L_08A84D1C;
    }
L_08A84D1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A84D54;
      }
      goto L_08A84D28;
    }
L_08A84D28:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A84D34u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A84D34u) goto L_08A84D34;
    return;
L_08A84D34:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84D4C;
      }
      goto L_08A84D40;
    }
L_08A84D40:
    ctx.gpr[31] = (0x08A84D48u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A84D48u) goto L_08A84D48;
    return;
L_08A84D48:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08A84D4C;
L_08A84D4C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A84D54;
L_08A84D54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A84D60u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23132));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A84D60u) goto L_08A84D60;
    return;
L_08A84D60:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A84D74u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A84D74u) goto L_08A84D74;
    return;
L_08A84D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84E68;
      }
      goto L_08A84D7C;
    }
L_08A84D7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(188)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A84E10;
      }
      goto L_08A84DB4;
    }
L_08A84DB4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(188)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(188), ctx.gpr[6]);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A84DF4u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A84DF4u) goto L_08A84DF4;
    return;
L_08A84DF4:
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08A84E00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80DACu>(ctx, &aot_mem) && ctx.pc == 0x08A84E00u) goto L_08A84E00;
    return;
L_08A84E00:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A84E68;
      }
      goto L_08A84E10;
    }
L_08A84E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A84E48;
      }
      goto L_08A84E1C;
    }
L_08A84E1C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08A84E28u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A84E28u) goto L_08A84E28;
    return;
L_08A84E28:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84E40;
      }
      goto L_08A84E34;
    }
L_08A84E34:
    ctx.gpr[31] = (0x08A84E3Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A84E3Cu) goto L_08A84E3C;
    return;
L_08A84E3C:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08A84E40;
L_08A84E40:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24700), ctx.gpr[16]);
    ctx.gpr[5] = (2227u << 16u);
    goto L_08A84E48;
L_08A84E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A84E54u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23124));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A84E54u) goto L_08A84E54;
    return;
L_08A84E54:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A84E68u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x08A84E68u) goto L_08A84E68;
    return;
L_08A84E68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED8;
      }
      goto L_08A84E70;
    }
L_08A84E70:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED0;
      }
      goto L_08A84E80;
    }
L_08A84E80:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[31] = (0x08A84E90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 23u, 0x08A80DACu>(ctx, &aot_mem) && ctx.pc == 0x08A84E90u) goto L_08A84E90;
    return;
L_08A84E90:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED0;
      }
      goto L_08A84EA8;
    }
L_08A84EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A84ED0;
      }
      goto L_08A84EC8;
    }
L_08A84EC8:
    ctx.gpr[31] = (0x08A84ED0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 473u, 0x08919E04u>(ctx, &aot_mem) && ctx.pc == 0x08A84ED0u) goto L_08A84ED0;
    return;
L_08A84ED0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84ED8;
      }
      goto L_08A84ED8;
    }
L_08A84ED8:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    goto L_08A84EDC;
L_08A84EDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A84F08:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[23]);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[30]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[22] = (ctx.gpr[10] | 0u);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    ctx.gpr[21] = (ctx.gpr[7] | 0u);
    ctx.gpr[30] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] & 255u);
    ctx.gpr[19] = (ctx.gpr[9] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A84F5Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0193_entry, 193u, 21u, 0x08B081C0u>(ctx, &aot_mem) && ctx.pc == 0x08A84F5Cu) goto L_08A84F5C;
    return;
L_08A84F5C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A84F7C;
      }
      goto L_08A84F68;
    }
L_08A84F68:
    ctx.gpr[5] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A84FA0;
      }
      goto L_08A84F74;
    }
L_08A84F74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 11u);
      if (branch_taken) {
          goto L_08A84F90;
      }
      goto L_08A84F7C;
    }
L_08A84F7C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A84F88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23116));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 9u, 0x08A80CC0u>(ctx, &aot_mem) && ctx.pc == 0x08A84F88u) goto L_08A84F88;
    return;
L_08A84F88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A85298;
      }
      goto L_08A84F90;
    }
L_08A84F90:
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A84FA0;
      }
      goto L_08A84F98;
    }
L_08A84F98:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84FDC;
      }
      goto L_08A84FA0;
    }
L_08A84FA0:
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[16] = (0u | 335u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32160));
    goto L_08A84FB0;
L_08A84FB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A84FD0;
      }
      goto L_08A84FB8;
    }
L_08A84FB8:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A84FD0;
      }
      goto L_08A84FC4;
    }
L_08A84FC4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-96));
      if (branch_taken) {
          goto L_08A84FB0;
      }
      goto L_08A84FD0;
    }
L_08A84FD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A84FDC;
      }
      goto L_08A84FD8;
    }
L_08A84FD8:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A84FDC;
L_08A84FDC:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A85024;
      }
      goto L_08A84FE4;
    }
L_08A84FE4:
    ctx.gpr[6] = (2275u << 16u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30336));
    goto L_08A84FF4;
L_08A84FF4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85018;
      }
      goto L_08A84FFC;
    }
L_08A84FFC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85018;
      }
      goto L_08A85008;
    }
L_08A85008:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 320 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A84FF4;
      }
      goto L_08A85018;
    }
L_08A85018:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85024;
      }
      goto L_08A85020;
    }
L_08A85020:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A85024;
L_08A85024:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A850B8;
      }
      goto L_08A8502C;
    }
L_08A8502C:
    ctx.gpr[7] = (2275u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A85044;
L_08A85044:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85068;
      }
      goto L_08A8504C;
    }
L_08A8504C:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85068;
      }
      goto L_08A85058;
    }
L_08A85058:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < 320 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A85044;
      }
      goto L_08A85068;
    }
L_08A85068:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A850B8;
      }
      goto L_08A85070;
    }
L_08A85070:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (0u | 1u);
    goto L_08A85080;
L_08A85080:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A850B0;
      }
      goto L_08A85088;
    }
L_08A85088:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A850B0;
      }
      goto L_08A85094;
    }
L_08A85094:
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A850B0;
      }
      goto L_08A850A0;
    }
L_08A850A0:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(96));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 320 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A85080;
      }
      goto L_08A850B0;
    }
L_08A850B0:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85158;
      }
      goto L_08A850B8;
    }
L_08A850B8:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 336 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08A85150;
      }
      goto L_08A850C4;
    }
L_08A850C4:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[20] = (ctx.gpr[16] << 5u);
    ctx.gpr[7] = (ctx.gpr[20] + ctx.gpr[20]);
    ctx.gpr[19] = (2275u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[7]);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-30336));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[17] = (ctx.gpr[20] + ctx.gpr[19]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[18]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(28), ctx.gpr[21]);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(36), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[7] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(52))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(80), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.gpr[8] = (0u | 20u);
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[8];
    ctx.gpr[6] = (0u | 5u);
      if (branch_taken) {
          goto L_08A85160;
      }
      goto L_08A85148;
    }
L_08A85148:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85184;
      }
      goto L_08A85150;
    }
L_08A85150:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A85298;
      }
      goto L_08A85158;
    }
L_08A85158:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A85298;
      }
      goto L_08A85160;
    }
L_08A85160:
    ctx.gpr[8] = (ctx.gpr[21] << 3u);
    ctx.gpr[9] = (0u + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] - ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] << 5u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[8] = (ctx.gpr[9] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[10] + ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[8]);
    goto L_08A85184;
L_08A85184:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A85198;
      }
      goto L_08A8518C;
    }
L_08A8518C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    goto L_08A85198;
L_08A85198:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A851B4;
      }
      goto L_08A851A0;
    }
L_08A851A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (2u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-11072));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    goto L_08A851B4;
L_08A851B4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A851C8;
      }
      goto L_08A851BC;
    }
L_08A851BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A851C8;
L_08A851C8:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 10u);
      if (branch_taken) {
          goto L_08A851DC;
      }
      goto L_08A851D4;
    }
L_08A851D4:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A851F0;
      }
      goto L_08A851DC;
    }
L_08A851DC:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1500));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A851F0;
L_08A851F0:
    ctx.gpr[4] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[18] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 12u);
      if (branch_taken) {
          goto L_08A85204;
      }
      goto L_08A851FC;
    }
L_08A851FC:
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85218;
      }
      goto L_08A85204;
    }
L_08A85204:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(50), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(1500));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    goto L_08A85218;
L_08A85218:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(38), static_cast<std::uint16_t>(ctx.gpr[30]));
      if (branch_taken) {
          goto L_08A8523C;
      }
      goto L_08A85220;
    }
L_08A85220:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(42));
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A85234u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08A85234u) goto L_08A85234;
    return;
L_08A85234:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85240;
      }
      goto L_08A8523C;
    }
L_08A8523C:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(42), static_cast<std::uint8_t>(0u));
    goto L_08A85240;
L_08A85240:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[19] + static_cast<std::uint32_t>(20));
    ctx.gpr[5] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (ctx.gpr[20] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A85268u);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 604u, 0x08A83CF0u>(ctx, &aot_mem) && ctx.pc == 0x08A85268u) goto L_08A85268;
    return;
L_08A85268:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8527C;
      }
      goto L_08A85274;
    }
L_08A85274:
    ctx.gpr[31] = (0x08A8527Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A8527Cu) goto L_08A8527C;
    return;
L_08A8527C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85290;
      }
      goto L_08A85288;
    }
L_08A85288:
    ctx.gpr[31] = (0x08A85290u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A85290u) goto L_08A85290;
    return;
L_08A85290:
    ctx.gpr[31] = (0x08A85298u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 223u, 0x08A8224Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85298u) goto L_08A85298;
    return;
L_08A85298:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A852C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-656));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(636), ctx.gpr[23]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[23] = (0u | 0u);
    ctx.gpr[19] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(584), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(588), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(600), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(604), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(640), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(644), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A85320u);
    ctx.gpr[22] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 268u, 0x08A82680u>(ctx, &aot_mem) && ctx.pc == 0x08A85320u) goto L_08A85320;
    return;
L_08A85320:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8534C;
      }
      goto L_08A8532C;
    }
L_08A8532C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(294)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A85354;
      }
      goto L_08A85344;
    }
L_08A85344:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85394;
      }
      goto L_08A8534C;
    }
L_08A8534C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A862E8;
      }
      goto L_08A85354;
    }
L_08A85354:
    ctx.gpr[31] = (0x08A8535Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 30u, 0x089581F0u>(ctx, &aot_mem) && ctx.pc == 0x08A8535Cu) goto L_08A8535C;
    return;
L_08A8535C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A85374;
      }
      goto L_08A85364;
    }
L_08A85364:
    ctx.gpr[31] = (0x08A8536Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 78u, 0x089184E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8536Cu) goto L_08A8536C;
    return;
L_08A8536C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85384;
      }
      goto L_08A85374;
    }
L_08A85374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] | 128u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A85394;
      }
      goto L_08A85384;
    }
L_08A85384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-129));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    goto L_08A85394;
L_08A85394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A853C4;
      }
      goto L_08A853A4;
    }
L_08A853A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(282)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08A853DC;
      }
      goto L_08A853BC;
    }
L_08A853BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
      if (branch_taken) {
          goto L_08A853CC;
      }
      goto L_08A853C4;
    }
L_08A853C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A862E8;
      }
      goto L_08A853CC;
    }
L_08A853CC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A853E8;
      }
      goto L_08A853DC;
    }
L_08A853DC:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 37u);
      if (branch_taken) {
          goto L_08A855F0;
      }
      goto L_08A853E8;
    }
L_08A853E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85404;
      }
      goto L_08A853FC;
    }
L_08A853FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 38u);
      if (branch_taken) {
          goto L_08A855F0;
      }
      goto L_08A85404;
    }
L_08A85404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85424;
      }
      goto L_08A85418;
    }
L_08A85418:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A855F0;
      }
      goto L_08A85424;
    }
L_08A85424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(286)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8544C;
      }
      goto L_08A85438;
    }
L_08A85438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(294)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85458;
      }
      goto L_08A8544C;
    }
L_08A8544C:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A855F0;
      }
      goto L_08A85458;
    }
L_08A85458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85480;
      }
      goto L_08A8546C;
    }
L_08A8546C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(290)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85490;
      }
      goto L_08A85480;
    }
L_08A85480:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 37u);
      if (branch_taken) {
          goto L_08A855F0;
      }
      goto L_08A85490;
    }
L_08A85490:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(302)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A854B0;
      }
      goto L_08A854A4;
    }
L_08A854A4:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A855F0;
      }
      goto L_08A854B0;
    }
L_08A854B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(304)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A854D0;
      }
      goto L_08A854C4;
    }
L_08A854C4:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A855F0;
      }
      goto L_08A854D0;
    }
L_08A854D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(298)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A854F0;
      }
      goto L_08A854E4;
    }
L_08A854E4:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A855F0;
      }
      goto L_08A854F0;
    }
L_08A854F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(300)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85510;
      }
      goto L_08A85504;
    }
L_08A85504:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A855F0;
      }
      goto L_08A85510;
    }
L_08A85510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(306)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85534;
      }
      goto L_08A85524;
    }
L_08A85524:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 37u);
      if (branch_taken) {
          goto L_08A855F0;
      }
      goto L_08A85534;
    }
L_08A85534:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(272)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85558;
      }
      goto L_08A85548;
    }
L_08A85548:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 37u);
      if (branch_taken) {
          goto L_08A855F0;
      }
      goto L_08A85558;
    }
L_08A85558:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(274)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A8557C;
      }
      goto L_08A8556C;
    }
L_08A8556C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 37u);
      if (branch_taken) {
          goto L_08A855F0;
      }
      goto L_08A8557C;
    }
L_08A8557C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(276)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A855A0;
      }
      goto L_08A85590;
    }
L_08A85590:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[22] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (0u | 37u);
      if (branch_taken) {
          goto L_08A855F0;
      }
      goto L_08A855A0;
    }
L_08A855A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A855C0;
      }
      goto L_08A855B4;
    }
L_08A855B4:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A855F0;
      }
      goto L_08A855C0;
    }
L_08A855C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A855E0;
      }
      goto L_08A855D4;
    }
L_08A855D4:
    ctx.gpr[19] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[22] = (0u | 1u);
      if (branch_taken) {
          goto L_08A855F0;
      }
      goto L_08A855E0;
    }
L_08A855E0:
    ctx.gpr[31] = (0x08A855E8u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 140u, 0x08A81728u>(ctx, &aot_mem) && ctx.pc == 0x08A855E8u) goto L_08A855E8;
    return;
L_08A855E8:
    ctx.gpr[23] = (ctx.gpr[2] << 16u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[23]) >> 16u));
    goto L_08A855F0;
L_08A855F0:
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85AFC;
      }
      goto L_08A85600;
    }
L_08A85600:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (17026u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] >> 9u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[16] & 7u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A8562C;
      }
      goto L_08A85624;
    }
L_08A85624:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_08A85654;
      }
      goto L_08A8562C;
    }
L_08A8562C:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85650;
      }
      goto L_08A85638;
    }
L_08A85638:
    ctx.gpr[31] = (0x08A85640u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A85640u) goto L_08A85640;
    return;
L_08A85640:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[18] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A85654;
      }
      goto L_08A85650;
    }
L_08A85650:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A85654;
L_08A85654:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
    ctx.gpr[16] = (ctx.gpr[16] & 7u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85670;
      }
      goto L_08A85668;
    }
L_08A85668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A85698;
      }
      goto L_08A85670;
    }
L_08A85670:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85694;
      }
      goto L_08A8567C;
    }
L_08A8567C:
    ctx.gpr[31] = (0x08A85684u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A85684u) goto L_08A85684;
    return;
L_08A85684:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[16] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u < ctx.gpr[16] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A85698;
      }
      goto L_08A85694;
    }
L_08A85694:
    ctx.gpr[16] = (0u | 1u);
    goto L_08A85698;
L_08A85698:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A856B0;
      }
      goto L_08A856A8;
    }
L_08A856A8:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    goto L_08A856B0;
L_08A856B0:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A858D8;
      }
      goto L_08A856B8;
    }
L_08A856B8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(580), static_cast<std::uint8_t>(ctx.gpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[23] << 3u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23372));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16102u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[4] = (48962u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 36700u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48844u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A85778u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A85778u) goto L_08A85778;
    return;
L_08A85778:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27924)));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (49152u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[16]));
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[31] = (0x08A85834u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 323u, 0x0892A980u>(ctx, &aot_mem) && ctx.pc == 0x08A85834u) goto L_08A85834;
    return;
L_08A85834:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A85850u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A85850u) goto L_08A85850;
    return;
L_08A85850:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 15u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    ctx.gpr[4] = (15232u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(2)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[16])));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08A858CCu);
    ctx.gpr[8] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 333u, 0x08AE5D44u>(ctx, &aot_mem) && ctx.pc == 0x08A858CCu) goto L_08A858CC;
    return;
L_08A858CC:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(576)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(580)));
      if (branch_taken) {
          goto L_08A85928;
      }
      goto L_08A858D8;
    }
L_08A858D8:
    ctx.gpr[2] = (48913u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (ctx.gpr[2] | 60293u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A85928u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A85928u) goto L_08A85928;
    return;
L_08A85928:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A85AAC;
      }
      goto L_08A85930;
    }
L_08A85930:
    ctx.gpr[16] = (ctx.gpr[23] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23372));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16140u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[15] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[2] = (48921u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[2] = (48844u << 16u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[2] = (ctx.gpr[2] | 52429u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[8] = (0u | 255u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A859E4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A859E4u) goto L_08A859E4;
    return;
L_08A859E4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A85AFC;
      }
      goto L_08A859EC;
    }
L_08A859EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[16] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[15])));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (16384u << 16u);
    ctx.gpr[6] = (16928u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (2227u << 16u);
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(27924)));
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (49152u << 16u);
    ctx.gpr[9] = (std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.gpr[10] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[11] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (ctx.gpr[21] | 0u);
    ctx.fpr[19] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A85AA4u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 323u, 0x0892A980u>(ctx, &aot_mem) && ctx.pc == 0x08A85AA4u) goto L_08A85AA4;
    return;
L_08A85AA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85AFC;
      }
      goto L_08A85AAC;
    }
L_08A85AAC:
    ctx.gpr[2] = (48870u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (ctx.gpr[2] | 26214u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[21] | 0u);
    ctx.gpr[10] = (0u | 7u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A85AFCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A85AFCu) goto L_08A85AFC;
    return;
L_08A85AFC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A85B38;
      }
      goto L_08A85B0C;
    }
L_08A85B0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A85B38;
      }
      goto L_08A85B1C;
    }
L_08A85B1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(423)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A85B38;
      }
      goto L_08A85B28;
    }
L_08A85B28:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(426)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_08A85D10;
    }
    goto L_08A85B34;
L_08A85B34:
    ctx.gpr[5] = (2232u << 16u);
    goto L_08A85B38;
L_08A85B38:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[5] = (16736u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_08A85D10;
    }
    goto L_08A85B84;
L_08A85B84:
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-5900)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
        goto L_08A85D10;
    }
    goto L_08A85B98;
L_08A85B98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (16179u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(196));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x08A85BD8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 277u, 0x08A25970u>(ctx, &aot_mem) && ctx.pc == 0x08A85BD8u) goto L_08A85BD8;
    return;
L_08A85BD8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85D0C;
      }
      goto L_08A85BE0;
    }
L_08A85BE0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-5900)));
    ctx.gpr[18] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(22976));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x08A85C24u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 140u, 0x08A81728u>(ctx, &aot_mem) && ctx.pc == 0x08A85C24u) goto L_08A85C24;
    return;
L_08A85C24:
    ctx.fpr[12] = ctx.fpr[20] / ctx.fpr[24];
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-5900)));
    ctx.gpr[7] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[23] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(23372));
    ctx.gpr[5] = (16256u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(ctx.gpr[7]));
    ctx.gpr[7] = (17279u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(21), static_cast<std::uint8_t>(ctx.gpr[8]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(22), static_cast<std::uint8_t>(ctx.gpr[6]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(23), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(421))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-5900)));
        goto L_08A85CC0;
    }
    goto L_08A85C9C;
L_08A85C9C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-5900)));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (ctx.gpr[5] | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A85CE0;
      }
      goto L_08A85CC0;
    }
L_08A85CC0:
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(24), static_cast<std::uint8_t>(ctx.gpr[5]));
    goto L_08A85CE0;
L_08A85CE0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(-5900)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(423)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[6] + static_cast<std::uint32_t>(25), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(426)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[6] + static_cast<std::uint32_t>(26), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(-5900), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_08A85D0C;
L_08A85D0C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    goto L_08A85D10;
L_08A85D10:
    ctx.gpr[18] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[8]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (ctx.gpr[4] << 2u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(32));
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(16));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = ctx.fpr[24] - ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = ctx.fpr[26] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_08A85DC4;
    }
    goto L_08A85DC4;
L_08A85DC4:
    ctx.set_fpu_condition((ctx.fpr[26] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A85DD4;
    }
    goto L_08A85DD4;
L_08A85DD4:
    ctx.set_fpu_condition((ctx.fpr[26] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16281u << 16u);
      if (branch_taken) {
          goto L_08A85E10;
      }
      goto L_08A85DE4;
    }
L_08A85DE4:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[26];
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (0u | 294u);
      if (branch_taken) {
          goto L_08A85E18;
      }
      goto L_08A85E08;
    }
L_08A85E08:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08A85E20;
      }
      goto L_08A85E10;
    }
L_08A85E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A862E8;
      }
      goto L_08A85E18;
    }
L_08A85E18:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[12];
    goto L_08A85E20;
L_08A85E20:
    ctx.gpr[5] = (16153u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[6] = (0u | 290u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
      if (branch_taken) {
          goto L_08A85E4C;
      }
      goto L_08A85E40;
    }
L_08A85E40:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A85E50;
      }
      goto L_08A85E4C;
    }
L_08A85E4C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A85E50;
L_08A85E50:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] & 2047u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
      if (branch_taken) {
          goto L_08A85E74;
      }
      goto L_08A85E68;
    }
L_08A85E68:
    ctx.gpr[5] = (20352u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_08A85E74;
L_08A85E74:
    ctx.gpr[5] = (15176u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 20972u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A86034;
      }
      goto L_08A85EF8;
    }
L_08A85EF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), 0u);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(452), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A85F44u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x08A85F44u) goto L_08A85F44;
    return;
L_08A85F44:
    ctx.gpr[5] = (15776u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 1798u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (48900u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 55010u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (48280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 8384u);
    ctx.gpr[31] = (0x08A85F70u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 516u, 0x08A06698u>(ctx, &aot_mem) && ctx.pc == 0x08A85F70u) goto L_08A85F70;
    return;
L_08A85F70:
    ctx.gpr[4] = (16212u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14680u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (47747u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4719u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15975u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 27787u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[31] = (0x08A85FA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A85FA8u) goto L_08A85FA8;
    return;
L_08A85FA8:
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A85FBCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 504u, 0x08A0649Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85FBCu) goto L_08A85FBC;
    return;
L_08A85FBC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A85FC8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x08A85FC8u) goto L_08A85FC8;
    return;
L_08A85FC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85FEC;
      }
      goto L_08A85FD8;
    }
L_08A85FD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A85FEC;
      }
      goto L_08A85FE4;
    }
L_08A85FE4:
    ctx.gpr[31] = (0x08A85FECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A85FECu) goto L_08A85FEC;
    return;
L_08A85FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
        goto L_08A86014;
    }
    goto L_08A85FFC;
L_08A85FFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
        goto L_08A86014;
    }
    goto L_08A86008;
L_08A86008:
    ctx.gpr[31] = (0x08A86010u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A86010u) goto L_08A86010;
    return;
L_08A86010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    goto L_08A86014;
L_08A86014:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86034;
      }
      goto L_08A86020;
    }
L_08A86020:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86034;
      }
      goto L_08A8602C;
    }
L_08A8602C:
    ctx.gpr[31] = (0x08A86034u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x08A86034u) goto L_08A86034;
    return;
L_08A86034:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8628C;
      }
      goto L_08A8603C;
    }
L_08A8603C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[26]) || std::isnan(ctx.fpr[20])) && ctx.fpr[26] == ctx.fpr[20]));
    ctx.gpr[23] = (ctx.gpr[23] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(23372));
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[4] = (17026u << 16u);
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A860BC;
      }
      goto L_08A86060;
    }
L_08A86060:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(500), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(504), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
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
    ctx.gpr[4] = (15897u << 16u);
      if (branch_taken) {
          goto L_08A86180;
      }
      goto L_08A860BC;
    }
L_08A860BC:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[26]) || std::isnan(ctx.fpr[24])) && ctx.fpr[26] == ctx.fpr[24]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A86128;
      }
      goto L_08A860CC;
    }
L_08A860CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(520), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(512));
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
    ctx.gpr[4] = (15897u << 16u);
      if (branch_taken) {
          goto L_08A86180;
      }
      goto L_08A86128;
    }
L_08A86128:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(528), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(532), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(528));
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
    ctx.gpr[4] = (15897u << 16u);
    goto L_08A86180;
L_08A86180:
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(544));
    ctx.gpr[4] = (49024u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    ctx.gpr[4] = (48896u << 16u);
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    goto L_08A861B0;
L_08A861B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[18]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[24];
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
      const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A861E8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 10u, 0x08A80CECu>(ctx, &aot_mem) && ctx.pc == 0x08A861E8u) goto L_08A861E8;
    return;
L_08A861E8:
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(2)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[26]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[20] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08A8627Cu);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A8627Cu) goto L_08A8627C;
    return;
L_08A8627C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A861B0;
      }
      goto L_08A8628C;
    }
L_08A8628C:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A862E8;
      }
      goto L_08A86294;
    }
L_08A86294:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[2]);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[2] = (49049u << 16u);
    ctx.gpr[2] = (ctx.gpr[2] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(9));
    ctx.gpr[2] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[9] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[2] = (16320u << 16u);
    ctx.gpr[5] = (0u | 82u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[2]);
    ctx.gpr[6] = (0u | 94u);
    ctx.gpr[7] = (0u | 150u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A862E8u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A862E8u) goto L_08A862E8;
    return;
L_08A862E8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(584)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(588)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(592)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(596)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(600)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(604)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(636)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(640)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(644)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86330:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[30]);
    ctx.gpr[30] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(-5900)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2277u << 16u);
      if (branch_taken) {
          goto L_08A869F4;
      }
      goto L_08A8637C;
    }
L_08A8637C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(22976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23064));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23288));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23056));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23048));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23040));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23032));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23024));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23016));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23008));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-23000));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22992));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22984));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22976));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22968));
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22960));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[22] = (2233u << 16u);
    ctx.gpr[23] = (2227u << 16u);
    ctx.gpr[21] = (2269u << 16u);
    ctx.gpr[4] = (16880u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(9432));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-23136));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-5136));
    ctx.gpr[18] = (2227u << 16u);
    goto L_08A86464;
L_08A86464:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[20] << 5u);
    ctx.gpr[5] = (ctx.gpr[20] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(26)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A864A4;
      }
      goto L_08A86484;
    }
L_08A86484:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A86490u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A86490u) goto L_08A86490;
    return;
L_08A86490:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8649Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8649Cu) goto L_08A8649C;
    return;
L_08A8649C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A864A4;
    }
L_08A864A4:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(25)));
    ctx.gpr[4] = (ctx.gpr[6] < static_cast<std::uint32_t>(14) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A864B4;
    }
L_08A864B4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-22736)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A864CC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (0u | 37u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 38u);
      if (branch_taken) {
          goto L_08A864E4;
      }
      goto L_08A864DC;
    }
L_08A864DC:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A864EC;
      }
      goto L_08A864E4;
    }
L_08A864E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u | 0u);
      if (branch_taken) {
          goto L_08A86570;
      }
      goto L_08A864EC;
    }
L_08A864EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(24))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86544;
      }
      goto L_08A864FC;
    }
L_08A864FC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
        goto L_08A86534;
    }
    goto L_08A86508;
L_08A86508:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86514u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A86514u) goto L_08A86514;
    return;
L_08A86514:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8652C;
      }
      goto L_08A86520;
    }
L_08A86520:
    ctx.gpr[31] = (0x08A86528u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A86528u) goto L_08A86528;
    return;
L_08A86528:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A8652C;
L_08A8652C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    goto L_08A86534;
L_08A86534:
    ctx.gpr[31] = (0x08A8653Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A8653Cu) goto L_08A8653C;
    return;
L_08A8653C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A86570;
      }
      goto L_08A86544;
    }
L_08A86544:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A86560u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x08A86560u) goto L_08A86560;
    return;
L_08A86560:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08A8656Cu);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 14u, 0x08A541B8u>(ctx, &aot_mem) && ctx.pc == 0x08A8656Cu) goto L_08A8656C;
    return;
L_08A8656C:
    ctx.gpr[16] = (ctx.gpr[21] | 0u);
    goto L_08A86570;
L_08A86570:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A86578;
    }
L_08A86578:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
        goto L_08A865B0;
    }
    goto L_08A86584;
L_08A86584:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86590u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A86590u) goto L_08A86590;
    return;
L_08A86590:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A865A8;
      }
      goto L_08A8659C;
    }
L_08A8659C:
    ctx.gpr[31] = (0x08A865A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A865A4u) goto L_08A865A4;
    return;
L_08A865A4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A865A8;
L_08A865A8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    goto L_08A865B0;
L_08A865B0:
    ctx.gpr[31] = (0x08A865B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A865B8u) goto L_08A865B8;
    return;
L_08A865B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A865C0;
    }
L_08A865C0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
        goto L_08A865F8;
    }
    goto L_08A865CC;
L_08A865CC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A865D8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A865D8u) goto L_08A865D8;
    return;
L_08A865D8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A865F0;
      }
      goto L_08A865E4;
    }
L_08A865E4:
    ctx.gpr[31] = (0x08A865ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A865ECu) goto L_08A865EC;
    return;
L_08A865EC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A865F0;
L_08A865F0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    goto L_08A865F8;
L_08A865F8:
    ctx.gpr[31] = (0x08A86600u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A86600u) goto L_08A86600;
    return;
L_08A86600:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A86608;
    }
L_08A86608:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
        goto L_08A86640;
    }
    goto L_08A86614;
L_08A86614:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86620u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A86620u) goto L_08A86620;
    return;
L_08A86620:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86638;
      }
      goto L_08A8662C;
    }
L_08A8662C:
    ctx.gpr[31] = (0x08A86634u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A86634u) goto L_08A86634;
    return;
L_08A86634:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86638;
L_08A86638:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    goto L_08A86640;
L_08A86640:
    ctx.gpr[31] = (0x08A86648u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A86648u) goto L_08A86648;
    return;
L_08A86648:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A86650;
    }
L_08A86650:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
        goto L_08A86688;
    }
    goto L_08A8665C;
L_08A8665C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86668u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A86668u) goto L_08A86668;
    return;
L_08A86668:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86680;
      }
      goto L_08A86674;
    }
L_08A86674:
    ctx.gpr[31] = (0x08A8667Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A8667Cu) goto L_08A8667C;
    return;
L_08A8667C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86680;
L_08A86680:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_08A86688;
L_08A86688:
    ctx.gpr[31] = (0x08A86690u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A86690u) goto L_08A86690;
    return;
L_08A86690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A86698;
    }
L_08A86698:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
        goto L_08A866D0;
    }
    goto L_08A866A4;
L_08A866A4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A866B0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A866B0u) goto L_08A866B0;
    return;
L_08A866B0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A866C8;
      }
      goto L_08A866BC;
    }
L_08A866BC:
    ctx.gpr[31] = (0x08A866C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A866C4u) goto L_08A866C4;
    return;
L_08A866C4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A866C8;
L_08A866C8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    goto L_08A866D0;
L_08A866D0:
    ctx.gpr[31] = (0x08A866D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A866D8u) goto L_08A866D8;
    return;
L_08A866D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A866E0;
    }
L_08A866E0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
        goto L_08A86718;
    }
    goto L_08A866EC;
L_08A866EC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A866F8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A866F8u) goto L_08A866F8;
    return;
L_08A866F8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86710;
      }
      goto L_08A86704;
    }
L_08A86704:
    ctx.gpr[31] = (0x08A8670Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A8670Cu) goto L_08A8670C;
    return;
L_08A8670C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86710;
L_08A86710:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    goto L_08A86718;
L_08A86718:
    ctx.gpr[31] = (0x08A86720u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A86720u) goto L_08A86720;
    return;
L_08A86720:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A86728;
    }
L_08A86728:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
        goto L_08A86760;
    }
    goto L_08A86734;
L_08A86734:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86740u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A86740u) goto L_08A86740;
    return;
L_08A86740:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86758;
      }
      goto L_08A8674C;
    }
L_08A8674C:
    ctx.gpr[31] = (0x08A86754u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A86754u) goto L_08A86754;
    return;
L_08A86754:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86758;
L_08A86758:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    goto L_08A86760;
L_08A86760:
    ctx.gpr[31] = (0x08A86768u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A86768u) goto L_08A86768;
    return;
L_08A86768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A86770;
    }
L_08A86770:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
        goto L_08A867A8;
    }
    goto L_08A8677C;
L_08A8677C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86788u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A86788u) goto L_08A86788;
    return;
L_08A86788:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A867A0;
      }
      goto L_08A86794;
    }
L_08A86794:
    ctx.gpr[31] = (0x08A8679Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A8679Cu) goto L_08A8679C;
    return;
L_08A8679C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A867A0;
L_08A867A0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    goto L_08A867A8;
L_08A867A8:
    ctx.gpr[31] = (0x08A867B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A867B0u) goto L_08A867B0;
    return;
L_08A867B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A867B8;
    }
L_08A867B8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
        goto L_08A867F0;
    }
    goto L_08A867C4;
L_08A867C4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A867D0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A867D0u) goto L_08A867D0;
    return;
L_08A867D0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A867E8;
      }
      goto L_08A867DC;
    }
L_08A867DC:
    ctx.gpr[31] = (0x08A867E4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A867E4u) goto L_08A867E4;
    return;
L_08A867E4:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A867E8;
L_08A867E8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    goto L_08A867F0;
L_08A867F0:
    ctx.gpr[31] = (0x08A867F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A867F8u) goto L_08A867F8;
    return;
L_08A867F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A86800;
    }
L_08A86800:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_08A86838;
    }
    goto L_08A8680C;
L_08A8680C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86818u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A86818u) goto L_08A86818;
    return;
L_08A86818:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86830;
      }
      goto L_08A86824;
    }
L_08A86824:
    ctx.gpr[31] = (0x08A8682Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A8682Cu) goto L_08A8682C;
    return;
L_08A8682C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86830;
L_08A86830:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_08A86838;
L_08A86838:
    ctx.gpr[31] = (0x08A86840u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A86840u) goto L_08A86840;
    return;
L_08A86840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A86848;
    }
L_08A86848:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08A86880;
    }
    goto L_08A86854;
L_08A86854:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86860u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A86860u) goto L_08A86860;
    return;
L_08A86860:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86878;
      }
      goto L_08A8686C;
    }
L_08A8686C:
    ctx.gpr[31] = (0x08A86874u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A86874u) goto L_08A86874;
    return;
L_08A86874:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86878;
L_08A86878:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    goto L_08A86880;
L_08A86880:
    ctx.gpr[31] = (0x08A86888u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A86888u) goto L_08A86888;
    return;
L_08A86888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A86890;
    }
L_08A86890:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
        goto L_08A868C8;
    }
    goto L_08A8689C;
L_08A8689C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A868A8u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A868A8u) goto L_08A868A8;
    return;
L_08A868A8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A868C0;
      }
      goto L_08A868B4;
    }
L_08A868B4:
    ctx.gpr[31] = (0x08A868BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A868BCu) goto L_08A868BC;
    return;
L_08A868BC:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A868C0;
L_08A868C0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    goto L_08A868C8;
L_08A868C8:
    ctx.gpr[31] = (0x08A868D0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A868D0u) goto L_08A868D0;
    return;
L_08A868D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A868D8;
    }
L_08A868D8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[17] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
        goto L_08A86910;
    }
    goto L_08A868E4;
L_08A868E4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A868F0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A868F0u) goto L_08A868F0;
    return;
L_08A868F0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86908;
      }
      goto L_08A868FC;
    }
L_08A868FC:
    ctx.gpr[31] = (0x08A86904u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A86904u) goto L_08A86904;
    return;
L_08A86904:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86908;
L_08A86908:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    goto L_08A86910;
L_08A86910:
    ctx.gpr[31] = (0x08A86918u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A86918u) goto L_08A86918;
    return;
L_08A86918:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A86920;
      }
      goto L_08A86920;
    }
L_08A86920:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A869D8;
      }
      goto L_08A86928;
    }
L_08A86928:
    ctx.gpr[31] = (0x08A86930u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 225u, 0x08A55030u>(ctx, &aot_mem) && ctx.pc == 0x08A86930u) goto L_08A86930;
    return;
L_08A86930:
    ctx.gpr[31] = (0x08A86938u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 221u, 0x08A54FD0u>(ctx, &aot_mem) && ctx.pc == 0x08A86938u) goto L_08A86938;
    return;
L_08A86938:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A86950;
    }
    goto L_08A86950;
L_08A86950:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A86968;
    }
    goto L_08A86968;
L_08A86968:
    ctx.gpr[31] = (0x08A86970u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 197u, 0x08A54DF8u>(ctx, &aot_mem) && ctx.pc == 0x08A86970u) goto L_08A86970;
    return;
L_08A86970:
    ctx.gpr[31] = (0x08A86978u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 205u, 0x08A54ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A86978u) goto L_08A86978;
    return;
L_08A86978:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27340)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08A8698Cu);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 219u, 0x08A54FACu>(ctx, &aot_mem) && ctx.pc == 0x08A8698Cu) goto L_08A8698C;
    return;
L_08A8698C:
    ctx.gpr[31] = (0x08A86994u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 204u, 0x08A54EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A86994u) goto L_08A86994;
    return;
L_08A86994:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(21)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(22)));
    ctx.gpr[8] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(23)));
    ctx.gpr[31] = (0x08A869ACu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08A869ACu) goto L_08A869AC;
    return;
L_08A869AC:
    ctx.gpr[31] = (0x08A869B4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 200u, 0x08A54E30u>(ctx, &aot_mem) && ctx.pc == 0x08A869B4u) goto L_08A869B4;
    return;
L_08A869B4:
    ctx.gpr[31] = (0x08A869BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 224u, 0x08A55020u>(ctx, &aot_mem) && ctx.pc == 0x08A869BCu) goto L_08A869BC;
    return;
L_08A869BC:
    ctx.gpr[31] = (0x08A869C4u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 227u, 0x08A55054u>(ctx, &aot_mem) && ctx.pc == 0x08A869C4u) goto L_08A869C4;
    return;
L_08A869C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A869D8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0148_entry, 148u, 520u, 0x08A56AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A869D8u) goto L_08A869D8;
    return;
L_08A869D8:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[20] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[30] + static_cast<std::uint32_t>(-5900)));
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A86464;
      }
      goto L_08A869F4;
    }
L_08A869F4:
    aot_mem.aot_store16(ctx.gpr[30] + static_cast<std::uint32_t>(-5900), static_cast<std::uint16_t>(0u));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86A30:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-112));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[31]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) <= 0;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A86A78;
      }
      goto L_08A86A50;
    }
L_08A86A50:
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A86AA4;
      }
      goto L_08A86A78;
    }
L_08A86A78:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[7] = (ctx.gpr[6] << 7u);
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[7]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[6] = (ctx.gpr[6] << 4u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[7] = (2233u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_08A86AA4;
L_08A86AA4:
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(282)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86BEC;
      }
      goto L_08A86AB8;
    }
L_08A86AB8:
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(284)));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
        goto L_08A86BA4;
    }
    goto L_08A86ACC;
L_08A86ACC:
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(286)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A86B88;
      }
      goto L_08A86AE0;
    }
L_08A86AE0:
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(288)));
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
        goto L_08A86B40;
    }
    goto L_08A86AF4;
L_08A86AF4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(290)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A86B24;
      }
      goto L_08A86B08;
    }
L_08A86B08:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A86C24;
      }
      goto L_08A86B1C;
    }
L_08A86B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86C68;
      }
      goto L_08A86B24;
    }
L_08A86B24:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 84u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A86B38u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08A86B38u) goto L_08A86B38;
    return;
L_08A86B38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86F30;
      }
      goto L_08A86B40;
    }
L_08A86B40:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(359)));
    ctx.gpr[5] = (0u | 79u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x08A86B80u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08A86B80u) goto L_08A86B80;
    return;
L_08A86B80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86F30;
      }
      goto L_08A86B88;
    }
L_08A86B88:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 84u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A86B9Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08A86B9Cu) goto L_08A86B9C;
    return;
L_08A86B9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86F30;
      }
      goto L_08A86BA4;
    }
L_08A86BA4:
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(360)));
    ctx.gpr[5] = (0u | 83u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[6] = (0u | 0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    ctx.gpr[31] = (0x08A86BE4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08A86BE4u) goto L_08A86BE4;
    return;
L_08A86BE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86F30;
      }
      goto L_08A86BEC;
    }
L_08A86BEC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2995), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2940)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(20000));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2988), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(2936), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 82u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A86C1Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08A86C1Cu) goto L_08A86C1C;
    return;
L_08A86C1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A86F30;
      }
      goto L_08A86C24;
    }
L_08A86C24:
    ctx.gpr[31] = (0x08A86C2Cu);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A86C2Cu) goto L_08A86C2C;
    return;
L_08A86C2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
        goto L_08A86C40;
    }
    goto L_08A86C40;
L_08A86C40:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A86C4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 204u, 0x08944DF4u>(ctx, &aot_mem) && ctx.pc == 0x08A86C4Cu) goto L_08A86C4C;
    return;
L_08A86C4C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 84u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A86C60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08A86C60u) goto L_08A86C60;
    return;
L_08A86C60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86F30;
      }
      goto L_08A86C68;
    }
L_08A86C68:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(294)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A86C98;
      }
      goto L_08A86C7C;
    }
L_08A86C7C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A86CB4;
      }
      goto L_08A86C90;
    }
L_08A86C90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86E84;
      }
      goto L_08A86C98;
    }
L_08A86C98:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 84u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A86CACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x08A86CACu) goto L_08A86CAC;
    return;
L_08A86CAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86F30;
      }
      goto L_08A86CB4;
    }
L_08A86CB4:
    ctx.gpr[31] = (0x08A86CBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A86CBCu) goto L_08A86CBC;
    return;
L_08A86CBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86E7C;
      }
      goto L_08A86CC8;
    }
L_08A86CC8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86E7C;
      }
      goto L_08A86CD4;
    }
L_08A86CD4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A86CE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22952));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 9u, 0x08A80CC0u>(ctx, &aot_mem) && ctx.pc == 0x08A86CE0u) goto L_08A86CE0;
    return;
L_08A86CE0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A86D20;
      }
      goto L_08A86CF0;
    }
L_08A86CF0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86CFCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A86CFCu) goto L_08A86CFC;
    return;
L_08A86CFC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86D14;
      }
      goto L_08A86D08;
    }
L_08A86D08:
    ctx.gpr[31] = (0x08A86D10u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A86D10u) goto L_08A86D10;
    return;
L_08A86D10:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86D14;
L_08A86D14:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A86D20;
L_08A86D20:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A86D30u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22932));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A86D30u) goto L_08A86D30;
    return;
L_08A86D30:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x08A86D40u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A48u>(ctx, &aot_mem) && ctx.pc == 0x08A86D40u) goto L_08A86D40;
    return;
L_08A86D40:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6960)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(42), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(45), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A86D70u);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A86D70u) goto L_08A86D70;
    return;
L_08A86D70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_08A86DB8;
      }
      goto L_08A86D84;
    }
L_08A86D84:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    goto L_08A86D88;
L_08A86D88:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
        goto L_08A86DAC;
    }
    goto L_08A86D9C;
L_08A86D9C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08A86DB0;
      }
      goto L_08A86DAC;
    }
L_08A86DAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08A86DB0;
L_08A86DB0:
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
        goto L_08A86D88;
    }
    goto L_08A86DB8;
L_08A86DB8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A86DE8;
      }
      goto L_08A86DCC;
    }
L_08A86DCC:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[6] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_08A86DF4;
      }
      goto L_08A86DE4;
    }
L_08A86DE4:
    ctx.gpr[4] = (2232u << 16u);
    goto L_08A86DE8;
L_08A86DE8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (2232u << 16u);
    goto L_08A86DF4;
L_08A86DF4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
        goto L_08A86E38;
    }
    goto L_08A86E30;
L_08A86E30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08A86E3C;
      }
      goto L_08A86E38;
    }
L_08A86E38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    goto L_08A86E3C;
L_08A86E3C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(42));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(49), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A86E60u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08A86E60u) goto L_08A86E60;
    return;
L_08A86E60:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(45), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[5]));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(40))))));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A86E7Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 809u, 0x088AB920u>(ctx, &aot_mem) && ctx.pc == 0x08A86E7Cu) goto L_08A86E7C;
    return;
L_08A86E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86F30;
      }
      goto L_08A86E84;
    }
L_08A86E84:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A86F2C;
      }
      goto L_08A86E98;
    }
L_08A86E98:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86F24;
      }
      goto L_08A86EA4;
    }
L_08A86EA4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[31] = (0x08A86EB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22924));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 9u, 0x08A80CC0u>(ctx, &aot_mem) && ctx.pc == 0x08A86EB0u) goto L_08A86EB0;
    return;
L_08A86EB0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A86EF0;
      }
      goto L_08A86EC0;
    }
L_08A86EC0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A86ECCu);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A86ECCu) goto L_08A86ECC;
    return;
L_08A86ECC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A86EE4;
      }
      goto L_08A86ED8;
    }
L_08A86ED8:
    ctx.gpr[31] = (0x08A86EE0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A86EE0u) goto L_08A86EE0;
    return;
L_08A86EE0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    goto L_08A86EE4;
L_08A86EE4:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A86EF0;
L_08A86EF0:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[31] = (0x08A86F00u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22904));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A86F00u) goto L_08A86F00;
    return;
L_08A86F00:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x08A86F10u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 286u, 0x08879A48u>(ctx, &aot_mem) && ctx.pc == 0x08A86F10u) goto L_08A86F10;
    return;
L_08A86F10:
    ctx.gpr[31] = (0x08A86F18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A86F18u) goto L_08A86F18;
    return;
L_08A86F18:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A86F24u);
    ctx.gpr[5] = (0u | 30000u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 340u, 0x089456B0u>(ctx, &aot_mem) && ctx.pc == 0x08A86F24u) goto L_08A86F24;
    return;
L_08A86F24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A86F30;
      }
      goto L_08A86F2C;
    }
L_08A86F2C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A86F30;
L_08A86F30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A86F44:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A86F98;
      }
      goto L_08A86F80;
    }
L_08A86F80:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A86FA0;
      }
      goto L_08A86F90;
    }
L_08A86F90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A871E0;
      }
      goto L_08A86F98;
    }
L_08A86F98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87350;
      }
      goto L_08A86FA0;
    }
L_08A86FA0:
    ctx.gpr[31] = (0x08A86FA8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08A86FA8u) goto L_08A86FA8;
    return;
L_08A86FA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87348;
      }
      goto L_08A86FB0;
    }
L_08A86FB0:
    ctx.gpr[31] = (0x08A86FB8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 78u, 0x089184E0u>(ctx, &aot_mem) && ctx.pc == 0x08A86FB8u) goto L_08A86FB8;
    return;
L_08A86FB8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A870A8;
      }
      goto L_08A86FC0;
    }
L_08A86FC0:
    ctx.gpr[31] = (0x08A86FC8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A86FC8u) goto L_08A86FC8;
    return;
L_08A86FC8:
    ctx.gpr[31] = (0x08A86FD0u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 352u, 0x089457ACu>(ctx, &aot_mem) && ctx.pc == 0x08A86FD0u) goto L_08A86FD0;
    return;
L_08A86FD0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A86FE8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A87384;
L_08A86FE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6764)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-6756)));
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (0u | 1000u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[7] = (ctx.lo);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(294)));
    ctx.gpr[6] = (0u | 20u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A87058u);
    ctx.gpr[10] = (0u | 0u);
    goto L_08A84F08;
L_08A87058:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A87068u);
    ctx.gpr[4] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A87068u) goto L_08A87068;
    return;
L_08A87068:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A87080;
      }
      goto L_08A87074;
    }
L_08A87074:
    ctx.gpr[31] = (0x08A8707Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 414u, 0x089198E0u>(ctx, &aot_mem) && ctx.pc == 0x08A8707Cu) goto L_08A8707C;
    return;
L_08A8707C:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_08A87080;
L_08A87080:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08A87094u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 57u, 0x089C0478u>(ctx, &aot_mem) && ctx.pc == 0x08A87094u) goto L_08A87094;
    return;
L_08A87094:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08A870A0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 426u, 0x08A5A2CCu>(ctx, &aot_mem) && ctx.pc == 0x08A870A0u) goto L_08A870A0;
    return;
L_08A870A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87348;
      }
      goto L_08A870A8;
    }
L_08A870A8:
    ctx.gpr[31] = (0x08A870B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A870B0u) goto L_08A870B0;
    return;
L_08A870B0:
    ctx.gpr[31] = (0x08A870B8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 310u, 0x089454F4u>(ctx, &aot_mem) && ctx.pc == 0x08A870B8u) goto L_08A870B8;
    return;
L_08A870B8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1720))))));
        goto L_08A87114;
    }
    goto L_08A870C0;
L_08A870C0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A870D8u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A87384;
L_08A870D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16153u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A870F8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A870F8u) goto L_08A870F8;
    return;
L_08A870F8:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08A8710Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 362u, 0x08945824u>(ctx, &aot_mem) && ctx.pc == 0x08A8710Cu) goto L_08A8710C;
    return;
L_08A8710C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87348;
      }
      goto L_08A87114;
    }
L_08A87114:
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] < static_cast<std::uint32_t>(48) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87158;
      }
      goto L_08A87138;
    }
L_08A87138:
    ctx.gpr[16] = (ctx.gpr[16] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[16]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-22680)));
    jump_target = ctx.gpr[1];
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 2u));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A871D8;
      }
      goto L_08A87158;
    }
L_08A87158:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[16] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A87168;
      }
      goto L_08A87164;
    }
L_08A87164:
    ctx.gpr[16] = (0u | 34u);
    goto L_08A87168;
L_08A87168:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08A87180u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08A87384;
L_08A87180:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[23] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[23] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[7] & 65535u);
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A871D8u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 119u, 0x08A8155Cu>(ctx, &aot_mem) && ctx.pc == 0x08A871D8u) goto L_08A871D8;
    return;
L_08A871D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87348;
      }
      goto L_08A871E0;
    }
L_08A871E0:
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.gpr[18] = (2229u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[30] = (0u | 34u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(23214));
    goto L_08A87208;
L_08A87208:
    ctx.gpr[4] = (ctx.gpr[19] << 5u);
    ctx.gpr[5] = (ctx.gpr[19] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[16] = (ctx.gpr[23] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87330;
      }
      goto L_08A87224;
    }
L_08A87224:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1428)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[30];
    // nop
      if (branch_taken) {
          goto L_08A87330;
      }
      goto L_08A87230;
    }
L_08A87230:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1440)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8724C;
      }
      goto L_08A8723C;
    }
L_08A8723C:
    ctx.gpr[31] = (0x08A87244u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850D9Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87244u) goto L_08A87244;
    return;
L_08A87244:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87330;
      }
      goto L_08A8724C;
    }
L_08A8724C:
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(36));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(40));
    ctx.gpr[31] = (0x08A87260u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A87384;
L_08A87260:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(1440));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A872B4;
    }
    goto L_08A872B4;
L_08A872B4:
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A872C8u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 129u, 0x08A81638u>(ctx, &aot_mem) && ctx.pc == 0x08A872C8u) goto L_08A872C8;
    return;
L_08A872C8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87330;
      }
      goto L_08A872D0;
    }
L_08A872D0:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[18]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[7] + ctx.gpr[18]);
    ctx.gpr[7] = (aot_mem.aot_load16(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 1u));
    ctx.gpr[7] = (ctx.gpr[7] >> 31u);
    ctx.gpr[16] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 1u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
        goto L_08A87314;
    }
    goto L_08A87314;
L_08A87314:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[7] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[31] = (0x08A87330u);
    ctx.gpr[9] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 119u, 0x08A8155Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87330u) goto L_08A87330;
    return;
L_08A87330:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 10 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87208;
      }
      goto L_08A87348;
    }
L_08A87348:
    ctx.gpr[31] = (0x08A87350u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 682u, 0x0899F844u>(ctx, &aot_mem) && ctx.pc == 0x08A87350u) goto L_08A87350;
    return;
L_08A87350:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87384:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    ctx.gpr[4] = (15561u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16076u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16294u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16281u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (16320u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[7]);
    ctx.gpr[4] = (16384u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[30]);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[31]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_08A87440;
L_08A87440:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
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
    ctx.gpr[31] = (0x08A87454u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A87454u) goto L_08A87454;
    return;
L_08A87454:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[26] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A87498u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08A87498u) goto L_08A87498;
    return;
L_08A87498:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[26] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08A874E4u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A874E4u) goto L_08A874E4;
    return;
L_08A874E4:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
      if (branch_taken) {
          goto L_08A8770C;
      }
      goto L_08A87500;
    }
L_08A87500:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
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
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 3u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[30] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
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
      const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08A875CCu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A875CCu) goto L_08A875CC;
    return;
L_08A875CC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[26] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[31] = (0x08A875E0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A875E0u) goto L_08A875E0;
    return;
L_08A875E0:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[31] = (0x08A875F8u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A875F8u) goto L_08A875F8;
    return;
L_08A875F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[28] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[31] = (0x08A8760Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A8760Cu) goto L_08A8760C;
    return;
L_08A8760C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = ctx.fpr[15] - ctx.fpr[14];
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[26] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[13]);
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[19]) < 17 ? 1u : 0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[30]));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
      if (branch_taken) {
          goto L_08A87640;
      }
      goto L_08A87638;
    }
L_08A87638:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8770C;
      }
      goto L_08A87640;
    }
L_08A87640:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87664;
      }
      goto L_08A87648;
    }
L_08A87648:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[31] = (0x08A8765Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 206u, 0x08A82110u>(ctx, &aot_mem) && ctx.pc == 0x08A8765Cu) goto L_08A8765C;
    return;
L_08A8765C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8770C;
      }
      goto L_08A87664;
    }
L_08A87664:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[19]) < 16 ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (ctx.gpr[7] | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x08A87694u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x08A87694u) goto L_08A87694;
    return;
L_08A87694:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A8770C;
      }
      goto L_08A8769C;
    }
L_08A8769C:
    if (ctx.gpr[16] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
        goto L_08A876E8;
    }
    goto L_08A876A4;
L_08A876A4:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08A876DCu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0049_entry, 49u, 65u, 0x088C83A8u>(ctx, &aot_mem) && ctx.pc == 0x08A876DCu) goto L_08A876DC;
    return;
L_08A876DC:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A8770C;
      }
      goto L_08A876E4;
    }
L_08A876E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    goto L_08A876E8;
L_08A876E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A87748;
      }
      goto L_08A8770C;
    }
L_08A8770C:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 32 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
        goto L_08A87440;
    }
    goto L_08A8771C;
L_08A8771C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[24];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A87748;
L_08A87748:
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
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87790:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(23108)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(23104)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(23132)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(23112), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(23120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(23116), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(23124), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(23128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(23136), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87824:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87840u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08A87840u) goto L_08A87840;
    return;
L_08A87840:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A8784Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08A8784Cu) goto L_08A8784C;
    return;
L_08A8784C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87858u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 23u, 0x0890C1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A87858u) goto L_08A87858;
    return;
L_08A87858:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A8786C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87888u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08A87888u) goto L_08A87888;
    return;
L_08A87888:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87898u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87898u) goto L_08A87898;
    return;
L_08A87898:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A878A4u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 23u, 0x0890C1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A878A4u) goto L_08A878A4;
    return;
L_08A878A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A878B8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[16]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[7] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A878FCu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22396));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 430u, 0x08A4B5D0u>(ctx, &aot_mem) && ctx.pc == 0x08A878FCu) goto L_08A878FC;
    return;
L_08A878FC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87910u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08A87910u) goto L_08A87910;
    return;
L_08A87910:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A879A0;
      }
      goto L_08A87918;
    }
L_08A87918:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87924u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08A87924u) goto L_08A87924;
    return;
L_08A87924:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87938u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 154u, 0x08A00A80u>(ctx, &aot_mem) && ctx.pc == 0x08A87938u) goto L_08A87938;
    return;
L_08A87938:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87990;
      }
      goto L_08A87940;
    }
L_08A87940:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87950u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 229u, 0x08A01008u>(ctx, &aot_mem) && ctx.pc == 0x08A87950u) goto L_08A87950;
    return;
L_08A87950:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87974;
      }
      goto L_08A87958;
    }
L_08A87958:
    ctx.gpr[31] = (0x08A87960u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 712u, 0x0890BFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A87960u) goto L_08A87960;
    return;
L_08A87960:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A87A0C;
      }
      goto L_08A8796C;
    }
L_08A8796C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87B58;
      }
      goto L_08A87974;
    }
L_08A87974:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A87988u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22356));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x08A87988u) goto L_08A87988;
    return;
L_08A87988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87B5C;
      }
      goto L_08A87990;
    }
L_08A87990:
    ctx.gpr[31] = (0x08A87998u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BB54u>(ctx, &aot_mem) && ctx.pc == 0x08A87998u) goto L_08A87998;
    return;
L_08A87998:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A87B5C;
      }
      goto L_08A879A0;
    }
L_08A879A0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A879ACu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08A879ACu) goto L_08A879AC;
    return;
L_08A879AC:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A879F0;
      }
      goto L_08A879B8;
    }
L_08A879B8:
    ctx.gpr[5] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A879CCu);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22388));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 690u, 0x0890BCD0u>(ctx, &aot_mem) && ctx.pc == 0x08A879CCu) goto L_08A879CC;
    return;
L_08A879CC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A879D8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 625u, 0x0890B8D8u>(ctx, &aot_mem) && ctx.pc == 0x08A879D8u) goto L_08A879D8;
    return;
L_08A879D8:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A879E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08A879E8u) goto L_08A879E8;
    return;
L_08A879E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87940;
      }
      goto L_08A879F0;
    }
L_08A879F0:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A87A04u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22384));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x08A87A04u) goto L_08A87A04;
    return;
L_08A87A04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87B5C;
      }
      goto L_08A87A0C;
    }
L_08A87A0C:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22340));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22332));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[5]);
    ctx.gpr[30] = (2227u << 16u);
    ctx.gpr[23] = (2227u << 16u);
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[21] = (2227u << 16u);
    ctx.gpr[20] = (2227u << 16u);
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[18] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[6]);
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-22320));
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(-22308));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-22300));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-22288));
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-22280));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-22272));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-22260));
    goto L_08A87A58;
L_08A87A58:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-83));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(35) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87B48;
      }
      goto L_08A87A68;
    }
L_08A87A68:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-22024)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87A80:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (0x08A87A90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A87824;
L_08A87A90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A87AA0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A87824;
L_08A87AA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87AB0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    goto L_08A8786C;
L_08A87AB0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87AC0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    goto L_08A87824;
L_08A87AC0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87B48;
      }
      goto L_08A87AC8;
    }
L_08A87AC8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87AD8u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    goto L_08A8786C;
L_08A87AD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87B48;
      }
      goto L_08A87AE0;
    }
L_08A87AE0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87AF0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    goto L_08A8786C;
L_08A87AF0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87B48;
      }
      goto L_08A87AF8;
    }
L_08A87AF8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87B08u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    goto L_08A87824;
L_08A87B08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87B18u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08A87824;
L_08A87B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87B48;
      }
      goto L_08A87B20;
    }
L_08A87B20:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A87B30u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 676u, 0x0890BB8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87B30u) goto L_08A87B30;
    return;
L_08A87B30:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87B3Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08A87B3Cu) goto L_08A87B3C;
    return;
L_08A87B3C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87B48u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 23u, 0x0890C1BCu>(ctx, &aot_mem) && ctx.pc == 0x08A87B48u) goto L_08A87B48;
    return;
L_08A87B48:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(0))))));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87A58;
      }
      goto L_08A87B58;
    }
L_08A87B58:
    ctx.gpr[2] = (0u | 1u);
    goto L_08A87B5C;
L_08A87B5C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87B8C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87BB4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08A87BB4u) goto L_08A87BB4;
    return;
L_08A87BB4:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87BCCu);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 154u, 0x08A00A80u>(ctx, &aot_mem) && ctx.pc == 0x08A87BCCu) goto L_08A87BCC;
    return;
L_08A87BCC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87C28;
      }
      goto L_08A87BD4;
    }
L_08A87BD4:
    ctx.gpr[19] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (0u | 2u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87BE8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08A87BE8u) goto L_08A87BE8;
    return;
L_08A87BE8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A87BFCu);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 170u, 0x08A00B24u>(ctx, &aot_mem) && ctx.pc == 0x08A87BFCu) goto L_08A87BFC;
    return;
L_08A87BFC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87C44;
      }
      goto L_08A87C08;
    }
L_08A87C08:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A87C14u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08A87C14u) goto L_08A87C14;
    return;
L_08A87C14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87C20u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 572u, 0x0890B5D4u>(ctx, &aot_mem) && ctx.pc == 0x08A87C20u) goto L_08A87C20;
    return;
L_08A87C20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A87C50;
      }
      goto L_08A87C28;
    }
L_08A87C28:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A87C3Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22252));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x08A87C3Cu) goto L_08A87C3C;
    return;
L_08A87C3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87C50;
      }
      goto L_08A87C44;
    }
L_08A87C44:
    ctx.gpr[31] = (0x08A87C4Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BB54u>(ctx, &aot_mem) && ctx.pc == 0x08A87C4Cu) goto L_08A87C4C;
    return;
L_08A87C4C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A87C50;
L_08A87C50:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87C6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87C90u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08A87C90u) goto L_08A87C90;
    return;
L_08A87C90:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87CA8u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 154u, 0x08A00A80u>(ctx, &aot_mem) && ctx.pc == 0x08A87CA8u) goto L_08A87CA8;
    return;
L_08A87CA8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87CCC;
      }
      goto L_08A87CB0;
    }
L_08A87CB0:
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A87CC4u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22252));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 347u, 0x08A4B014u>(ctx, &aot_mem) && ctx.pc == 0x08A87CC4u) goto L_08A87CC4;
    return;
L_08A87CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87D08;
      }
      goto L_08A87CCC;
    }
L_08A87CCC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87CD8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 419u, 0x08A4B504u>(ctx, &aot_mem) && ctx.pc == 0x08A87CD8u) goto L_08A87CD8;
    return;
L_08A87CD8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87CE4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08A87CE4u) goto L_08A87CE4;
    return;
L_08A87CE4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87CF8u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0127_entry, 127u, 177u, 0x08A00BD8u>(ctx, &aot_mem) && ctx.pc == 0x08A87CF8u) goto L_08A87CF8;
    return;
L_08A87CF8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87D04u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08A87D04u) goto L_08A87D04;
    return;
L_08A87D04:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08A87D08;
L_08A87D08:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87D20:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87D44u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08A87D44u) goto L_08A87D44;
    return;
L_08A87D44:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A87D5Cu);
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 415u, 0x08A4B4B0u>(ctx, &aot_mem) && ctx.pc == 0x08A87D5Cu) goto L_08A87D5C;
    return;
L_08A87D5C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87D68u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 581u, 0x0890B68Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87D68u) goto L_08A87D68;
    return;
L_08A87D68:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87D90;
      }
      goto L_08A87D70;
    }
L_08A87D70:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A87D98;
      }
      goto L_08A87D78;
    }
L_08A87D78:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A87D88u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 108u, 0x0890C8D8u>(ctx, &aot_mem) && ctx.pc == 0x08A87D88u) goto L_08A87D88;
    return;
L_08A87D88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08A87DA8;
      }
      goto L_08A87D90;
    }
L_08A87D90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A87DD8;
      }
      goto L_08A87D98;
    }
L_08A87D98:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x08A87DA4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 112u, 0x0890C938u>(ctx, &aot_mem) && ctx.pc == 0x08A87DA4u) goto L_08A87DA4;
    return;
L_08A87DA4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_08A87DA8;
L_08A87DA8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A87DB8;
      }
      goto L_08A87DB0;
    }
L_08A87DB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A87DD8;
      }
      goto L_08A87DB8;
    }
L_08A87DB8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87DC4u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08A87DC4u) goto L_08A87DC4;
    return;
L_08A87DC4:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (0u - ctx.gpr[16]);
    ctx.gpr[31] = (0x08A87DD4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 565u, 0x0890B4E4u>(ctx, &aot_mem) && ctx.pc == 0x08A87DD4u) goto L_08A87DD4;
    return;
L_08A87DD4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    goto L_08A87DD8;
L_08A87DD8:
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
L_08A87DF0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87E00u);
    ctx.gpr[5] = (0u | 1u);
    goto L_08A87D20;
L_08A87E00:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87E0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87E24u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 419u, 0x08A4B504u>(ctx, &aot_mem) && ctx.pc == 0x08A87E24u) goto L_08A87E24;
    return;
L_08A87E24:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A87E30u);
    ctx.gpr[5] = (0u | 0u);
    goto L_08A87D20;
L_08A87E30:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87E40:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87E64u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23744));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 702u, 0x0890BE64u>(ctx, &aot_mem) && ctx.pc == 0x08A87E64u) goto L_08A87E64;
    return;
L_08A87E64:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87E70u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-10000));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 706u, 0x0890BEF0u>(ctx, &aot_mem) && ctx.pc == 0x08A87E70u) goto L_08A87E70;
    return;
L_08A87E70:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87E7Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08A87E7Cu) goto L_08A87E7C;
    return;
L_08A87E7C:
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A87EEC;
      }
      goto L_08A87E88;
    }
L_08A87E88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(23828));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08A87EA8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 680u, 0x0890BC14u>(ctx, &aot_mem) && ctx.pc == 0x08A87EA8u) goto L_08A87EA8;
    return;
L_08A87EA8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_08A87ECC;
      }
      goto L_08A87EB4;
    }
L_08A87EB4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87EC4u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08A87EC4u) goto L_08A87EC4;
    return;
L_08A87EC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87ED4;
      }
      goto L_08A87ECC;
    }
L_08A87ECC:
    ctx.gpr[31] = (0x08A87ED4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 674u, 0x0890BB54u>(ctx, &aot_mem) && ctx.pc == 0x08A87ED4u) goto L_08A87ED4;
    return;
L_08A87ED4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[31] = (0x08A87EE4u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 45u, 0x0890C3ECu>(ctx, &aot_mem) && ctx.pc == 0x08A87EE4u) goto L_08A87EE4;
    return;
L_08A87EE4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87EF8;
      }
      goto L_08A87EEC;
    }
L_08A87EEC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87EF8u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 553u, 0x0890B3FCu>(ctx, &aot_mem) && ctx.pc == 0x08A87EF8u) goto L_08A87EF8;
    return;
L_08A87EF8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87F0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A87F34u);
    ctx.gpr[5] = (0u | 99u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x08A87F34u) goto L_08A87F34;
    return;
L_08A87F34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87F40;
      }
      goto L_08A87F3C;
    }
L_08A87F3C:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A87F40;
L_08A87F40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87F4Cu);
    ctx.gpr[5] = (0u | 114u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x08A87F4Cu) goto L_08A87F4C;
    return;
L_08A87F4C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87F58;
      }
      goto L_08A87F54;
    }
L_08A87F54:
    ctx.gpr[18] = (ctx.gpr[18] | 2u);
    goto L_08A87F58;
L_08A87F58:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A87F64u);
    ctx.gpr[5] = (0u | 108u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 398u, 0x08AED634u>(ctx, &aot_mem) && ctx.pc == 0x08A87F64u) goto L_08A87F64;
    return;
L_08A87F64:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87F70;
      }
      goto L_08A87F6C;
    }
L_08A87F6C:
    ctx.gpr[18] = (ctx.gpr[18] | 4u);
    goto L_08A87F70;
L_08A87F70:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A87F7C;
      }
      goto L_08A87F78;
    }
L_08A87F78:
    ctx.gpr[18] = (ctx.gpr[18] | 8u);
    goto L_08A87F7C;
L_08A87F7C:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
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
L_08A87F98:
    ctx.gpr[7] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08A87FB0;
      }
      goto L_08A87FA4;
    }
L_08A87FA4:
    ctx.gpr[7] = (0u | 99u);
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08A87FB0;
L_08A87FB0:
    ctx.gpr[7] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87FCC;
      }
      goto L_08A87FBC;
    }
L_08A87FBC:
    ctx.gpr[7] = (0u | 114u);
    ctx.gpr[8] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[7]));
    goto L_08A87FCC;
L_08A87FCC:
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A87FE8;
      }
      goto L_08A87FD8;
    }
L_08A87FD8:
    ctx.gpr[4] = (0u | 108u);
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A87FE8;
L_08A87FE8:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[5] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A87FF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.pc = 0x08A88000u; return;
}

void recomp_unit_0160(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0160_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_160(Runtime &runtime) {
    runtime.register_generated_unit(160u, 0x08A84000u, 16384u, &recomp_unit_0160, &recomp_unit_0160_entry);
    runtime.register_function(0x08A84000u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84018u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84020u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84028u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84074u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84088u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84090u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84098u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84130u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84144u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84154u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84168u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84178u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84180u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84194u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A841F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84200u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84220u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84228u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84230u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8425Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84298u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A842CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84318u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84324u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84340u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84348u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84358u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84360u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84378u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84380u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84390u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A843F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84408u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84418u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84430u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84438u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84444u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8444Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84458u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8446Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84484u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A844FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84504u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84524u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84530u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84550u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8456Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84588u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A845F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84608u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8461Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8462Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84634u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84640u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84644u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84650u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8465Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84664u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8466Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8467Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A846FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84704u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8471Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84724u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8473Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84744u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84758u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8476Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8479Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A847ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84804u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84818u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84820u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8482Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84840u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84848u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84850u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84864u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8486Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8487Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84884u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84890u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84898u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A848F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84918u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84928u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84930u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8493Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84940u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84958u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84974u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84980u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8499Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A849D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84A7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84AC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84ACCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84AE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84AF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84B80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84BF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84C98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84CFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84D7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84DF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84E90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84EA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84EC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84ED0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84ED8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84EDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84F98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FDCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A84FFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85008u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85018u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85020u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85024u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8502Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85044u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8504Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85058u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85068u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85070u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85080u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85088u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85094u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A850C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85148u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85150u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85158u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85160u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85184u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8518Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85198u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A851FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85204u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85218u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85220u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85234u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8523Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85240u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85268u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85274u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8527Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85288u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85290u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85298u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A852C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85320u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8532Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85344u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8534Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85354u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8535Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85364u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8536Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85374u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85384u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85394u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A853FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85404u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85418u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85424u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85438u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8544Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85458u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8546Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85480u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85490u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A854F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85504u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85510u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85524u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85534u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85548u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85558u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8556Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8557Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85590u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855D4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A855F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85600u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85624u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8562Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85638u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85640u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85650u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85654u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85668u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85670u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8567Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85684u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85694u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85698u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A856B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85778u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85834u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85850u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A858D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85928u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85930u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A859ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85AFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B84u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85B98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85BD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85BE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85C9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85CE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85D0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85D10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85DC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85DD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85DE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85E74u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85EF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85F70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A85FFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86008u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86010u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86014u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86020u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8602Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86034u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8603Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86060u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A860CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86128u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86180u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A861E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8627Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8628Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86294u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A862E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86330u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8637Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86464u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86484u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86490u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8649Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A864FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86508u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86514u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86520u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86528u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8652Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86534u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8653Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86544u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86560u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8656Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86570u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86578u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86584u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86590u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8659Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A865F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86600u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86608u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86614u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86620u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8662Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86634u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86638u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86640u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86648u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86650u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8665Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86668u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86674u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8667Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86680u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86688u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86690u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86698u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866ECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A866F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86704u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8670Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86710u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86718u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86720u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86728u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86734u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86740u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8674Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86754u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86758u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86760u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86768u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86770u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8677Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86788u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86794u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8679Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A867F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86800u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8680Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86818u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86824u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8682Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86830u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86838u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86840u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86848u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86854u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86860u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8686Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86874u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86878u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86880u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86888u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86890u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8689Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A868FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86904u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86908u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86910u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86918u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86920u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86928u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86930u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86938u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86950u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86968u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86970u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86978u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8698Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86994u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869BCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869C4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A869F4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86A78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86ACCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86AF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86B9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86BECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C1Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86C98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86CFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D84u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86D9Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86DF4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E38u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E60u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E84u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86E98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86ECCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86ED8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86EF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F10u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F2Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86F98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FD0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A86FE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87058u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87068u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87074u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8707Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87080u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87094u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870A8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870B0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870C0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A870F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8710Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87114u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87138u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87150u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87158u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87164u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87168u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87180u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A871E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87208u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87224u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87230u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8723Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87244u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8724Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87260u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872B4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872C8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A872D0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87314u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87330u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87348u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87350u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87384u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87440u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87454u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87498u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A874E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87500u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A875CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A875E0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A875F8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8760Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87638u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87640u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87648u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8765Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87664u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87694u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8769Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876DCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876E4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A876E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8770Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8771Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87748u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87790u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87824u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87840u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8784Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87858u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8786Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87888u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87898u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A878A4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A878B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A878FCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87910u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87918u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87924u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87938u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87940u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87950u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87958u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87960u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A8796Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87974u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87988u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87990u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87998u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879A0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879ACu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879B8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879CCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879D8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879E8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A879F0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A80u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87A90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AA0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AC0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AC8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AE0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87AF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B18u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B48u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87B8Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87BFCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C14u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C28u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C50u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87C90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87CF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D04u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D08u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D20u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D44u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D5Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D68u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D90u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87D98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DB8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DD4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87DF0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E00u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E24u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E30u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87E88u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EA8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EB4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EC4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87ECCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87ED4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EE4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EECu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87EF8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F0Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F34u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F3Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F40u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F4Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F54u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F58u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F64u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F6Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F70u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F78u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F7Cu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87F98u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FA4u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FB0u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FBCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FCCu, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FD8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FE8u, &recomp_unit_0160, "recomp_unit_0160");
    runtime.register_function(0x08A87FF8u, &recomp_unit_0160, "recomp_unit_0160");
}
} // namespace psprecomp
