#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0151[4096] = {
    1, 2, 0, 0, 3, 0, 0, 0, 4, 0, 5, 0, 0, 6, 0, 0, 0, 7, 0, 8, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 11, 0, 12, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 0, 0,
    0, 15, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0, 17, 0, 0, 18, 0, 19, 0, 20, 0, 21, 0, 0, 22, 0, 23, 0, 24, 0, 25,
    0, 0, 26, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 29, 0, 30, 0, 31, 0, 0, 0, 0, 32, 0, 0, 0, 0, 0, 33, 0,
    34, 0, 0, 35, 0, 36, 0, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 42, 0, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0,
    0, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 49, 0, 0, 0, 0,
    0, 50, 0, 0, 0, 51, 0, 0, 0, 52, 0, 0, 0, 53, 0, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 0, 0, 56,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 57, 0, 58, 0, 0,
    0, 0, 0, 0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 0, 63, 0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 65,
    0, 66, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 69, 0, 70, 0, 0, 0, 0, 0, 0, 0, 0, 0, 71, 0, 72, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74,
    0, 0, 0, 75, 0, 0, 0, 0, 76, 0, 0, 0, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 0, 0, 0, 79,
    0, 80, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 84, 0, 0, 0, 85, 0, 0, 0, 0, 0, 86, 0, 0, 87, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 92, 0, 0, 0, 0, 93, 0, 0, 0, 94, 0, 0, 0, 0, 0, 0, 0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    96, 0, 97, 98, 0, 0, 0, 0, 0, 99, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 0, 0, 0,
    102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 104, 105, 0, 0, 0, 0, 0, 0, 106,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 0,
    109, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 112, 0, 0, 0, 0, 0, 0, 113,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 0, 115, 0, 0, 0, 116, 0, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 120, 0, 0, 0, 0, 0, 121, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 122, 0, 0, 0, 0, 123, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 127, 0, 128, 129, 0, 0, 0, 0, 0, 0, 0, 130, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 131, 0, 0, 0, 132, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 135, 0, 0, 0, 0, 136, 0, 0, 0, 0, 0, 137, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 138, 0, 0, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 141, 0, 0, 142, 0, 0, 0, 0, 143, 0, 144, 0, 145, 146, 0, 147, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 148, 0, 149, 0, 0, 150, 0, 0, 0, 151, 0, 0, 152, 0, 153, 0, 154, 0, 0, 155, 0, 0, 156, 0, 0,
    0, 0, 157, 0, 0, 158, 0, 0, 0, 0, 0, 159, 0, 0, 160, 0, 161, 0, 162, 163, 0, 0, 0, 0, 164, 0, 165, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 168, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0, 171, 0, 0, 0, 0,
    0, 172, 0, 0, 0, 0, 0, 0, 173, 174, 0, 175, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 0, 0, 0, 178, 0, 179, 0, 0,
    0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 184, 0, 185, 0, 0, 0, 0, 0, 0, 186,
    0, 187, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 0, 0, 0, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 193, 0, 0, 0,
    0, 0, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0,
    201, 0, 0, 0, 0, 0, 0, 202, 0, 203, 0, 0, 0, 0, 0, 0, 204, 0, 205, 0, 0, 0, 0, 206, 0, 0, 207, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 208, 0, 0, 0, 0, 0, 0, 209, 0, 0, 0, 0, 0, 210, 211, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 212, 0, 213,
    0, 214, 0, 0, 215, 0, 0, 0, 0, 0, 216, 0, 217, 0, 218, 0, 219, 0, 0, 0, 0, 220, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0,
    0, 0, 0, 223, 0, 224, 0, 225, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 231, 0, 232, 0, 233,
    0, 0, 0, 234, 0, 0, 0, 0, 0, 0, 0, 235, 0, 236, 0, 0, 0, 0, 237, 0, 238, 0, 239, 0, 240, 0, 241, 0, 0, 0, 0, 0,
    242, 0, 243, 0, 0, 0, 244, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 0, 0, 0, 246, 0, 247, 0, 248, 0, 0, 0, 0, 0, 249, 0,
    0, 250, 0, 251, 0, 0, 0, 0, 0, 252, 0, 0, 253, 0, 0, 0, 254, 0, 255, 0, 256, 0, 257, 0, 0, 0, 258, 0, 0, 0, 259, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 261, 0, 262, 0, 263, 0, 264, 0, 265, 0, 0, 0, 0, 0, 266, 0, 0, 267,
    0, 268, 0, 0, 269, 0, 270, 0, 0, 0, 0, 271, 0, 0, 0, 272, 0, 0, 0, 273, 0, 0, 274, 0, 0, 0, 0, 0, 0, 0, 0, 275,
    0, 0, 276, 0, 0, 0, 0, 0, 277, 0, 0, 278, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0, 0, 0, 0, 282, 0, 283, 0, 284, 0, 285,
    0, 0, 286, 0, 0, 0, 287, 0, 0, 0, 288, 0, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 290, 0, 0, 0, 0, 0, 291, 0, 0, 0,
    0, 0, 0, 292, 293, 0, 294, 0, 0, 0, 0, 0, 0, 295, 0, 296, 0, 0, 0, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 299,
    0, 300, 0, 0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 306, 0, 0, 0,
    0, 0, 0, 307, 0, 308, 0, 0, 0, 0, 0, 0, 309, 0, 310, 0, 0, 0, 0, 0, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0,
    314, 0, 0, 0, 0, 0, 0, 315, 0, 316, 0, 0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0,
    321, 0, 0, 322, 0, 0, 0, 0, 0, 0, 0, 0, 323, 0, 0, 0, 0, 0, 324, 0, 0, 0, 0, 0, 0, 325, 326, 0, 327, 0, 0, 0,
    0, 0, 0, 328, 0, 329, 0, 0, 0, 0, 0, 0, 330, 0, 331, 0, 0, 0, 0, 0, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 334, 0,
    335, 0, 0, 0, 0, 0, 0, 336, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 339, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0,
    0, 0, 342, 0, 343, 0, 0, 0, 0, 0, 0, 344, 0, 345, 0, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 348, 0, 0, 0, 0, 0,
    0, 349, 0, 350, 0, 0, 0, 351, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 0, 0, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0,
    0, 0, 0, 0, 0, 356, 357, 0, 358, 0, 0, 0, 0, 0, 0, 359, 0, 360, 0, 0, 0, 0, 0, 0, 361, 0, 362, 0, 0, 0, 0, 0,
    0, 363, 0, 364, 0, 0, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 0, 0, 0, 367, 0, 368, 0, 0, 0, 0, 0, 0, 369, 0, 370, 0,
    0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 377, 0, 0,
    0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 383, 0, 0, 0, 0, 0, 0, 384,
    0, 385, 0, 0, 0, 386, 0, 0, 0, 0, 387, 0, 0, 388, 0, 0, 0, 0, 0, 0, 0, 0, 389, 0, 0, 0, 0, 0, 390, 0, 0, 0,
    0, 0, 0, 391, 392, 0, 393, 0, 0, 0, 0, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 0, 396, 0, 397, 0, 0, 0, 0, 0, 0, 398,
    0, 399, 0, 0, 0, 0, 0, 0, 400, 0, 401, 0, 0, 0, 0, 0, 0, 402, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 405, 0, 0, 0,
    0, 0, 0, 406, 0, 407, 0, 0, 0, 0, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 411, 0, 0, 0, 0, 0, 0, 412, 0,
    413, 0, 0, 0, 0, 0, 0, 414, 0, 415, 0, 0, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 0, 0, 420,
    0, 0, 0, 0, 421, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0, 0, 0, 424, 0, 0, 0, 0, 0, 0, 425, 426, 0,
    427, 0, 0, 0, 0, 0, 0, 428, 0, 429, 0, 0, 0, 0, 0, 0, 430, 0, 431, 0, 0, 0, 0, 0, 0, 432, 0, 433, 0, 0, 0, 0,
    0, 0, 434, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 439, 0, 0, 0, 0, 0, 0, 440, 0, 441,
    0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 445, 0, 0, 0, 0, 0, 0, 446, 0, 447, 0, 0, 0, 0, 0,
    0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 453, 0, 454, 0, 0, 0, 455, 0, 0,
    0, 0, 456, 0, 0, 457, 0, 0, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 460, 461, 0, 462, 0,
    0, 0, 0, 0, 0, 463, 0, 464, 0, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0,
    469, 0, 470, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 474, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0,
    0, 0, 0, 0, 477, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 482, 0, 0, 483, 0, 0, 0, 0,
    0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 485, 0, 0, 0, 0, 0, 0, 486, 487, 0, 488, 0, 0, 0, 0, 0, 0, 489, 0, 490, 0, 0,
    0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 0, 0, 495, 0, 496, 0, 0, 0, 0, 0, 0, 497,
    0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 501, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 504, 0, 0, 0,
    0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 0, 511, 0,
    512, 0, 0, 0, 0, 0, 0, 513, 0, 514, 0, 0, 0, 0, 515, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0,
    518, 0, 0, 0, 0, 0, 0, 519, 520, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 523, 0, 0, 0, 0, 0, 0, 524, 0, 525, 0, 0, 0,
    0, 0, 0, 526, 0, 527, 0, 0, 0, 0, 0, 0, 528, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 0, 532, 0,
    533, 0, 0, 0, 0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 539, 0, 0, 0, 0,
    0, 0, 540, 0, 541, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 546,
    0, 0, 0, 0, 0, 0, 547, 548, 0, 549, 0, 0, 0, 0, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 552, 0, 553, 0, 0, 0, 0,
    0, 0, 554, 0, 555, 0, 0, 0, 0, 0, 0, 556, 0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 561,
    0, 0, 0, 0, 0, 0, 562, 0, 563, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0,
    0, 568, 0, 569, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 572, 0, 0, 0, 0, 0, 0, 573, 0, 574, 0, 0, 0, 0, 575, 0,
    0, 576, 0, 0, 0, 0, 0, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 580, 0, 581, 0, 0, 0, 0, 0,
    0, 582, 0, 583, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 0, 0, 0, 588, 0, 589, 0,
    0, 0, 0, 0, 0, 590, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 593, 0, 0, 0, 0, 0, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0,
    596, 0, 597, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 602, 0, 603, 0, 0,
    0, 604, 0, 0, 0, 0, 0, 0, 605, 0, 606, 0, 0, 0, 607, 0, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 0, 0, 0, 610,
    0, 0, 0, 0, 0, 611, 0, 0, 0, 0, 0, 0, 612, 613, 0, 614, 0, 0, 0, 0, 0, 0, 615, 0, 616, 0, 0, 0, 0, 0, 0, 617,
    0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0,
    0, 0, 0, 625, 0, 626, 0, 0, 0, 0, 0, 0, 627, 0, 628, 0, 0, 0, 0, 0, 0, 629, 0, 630, 0, 0, 0, 0, 0, 0, 631, 0,
    632, 0, 0, 0, 0, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 0, 635, 0, 636, 0, 0, 0, 0, 0, 0, 637, 0, 638, 0, 0, 0, 639,
    0, 0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 642, 0, 0, 0, 0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0,
    0, 645, 646, 0, 647, 0, 0, 0, 0, 0, 0, 648, 0, 649, 0, 0, 0, 0, 0, 0, 650, 0, 651, 0, 0, 0, 0, 0, 0, 652, 0, 653,
    0, 0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 656, 0, 657, 0, 0, 0, 0, 0, 0, 658, 0, 659, 0, 0, 0, 0, 0,
    0, 660, 0, 661, 0, 0, 0, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 0, 664, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 667, 0,
    0, 0, 0, 0, 0, 668, 0, 669, 0, 0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0,
    0, 0, 674, 0, 0, 0, 0, 0, 0, 675, 676, 0, 677, 0, 0, 0, 0, 0, 0, 678, 0, 679, 0, 0, 0, 0, 0, 0, 680, 0, 681, 0,
    0, 0, 0, 0, 0, 682, 0, 683, 0, 0, 0, 0, 0, 0, 684, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 687, 0, 0, 0, 0, 0, 0,
    688, 0, 689, 0, 0, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0, 0, 0, 0, 692, 0, 693, 0, 0, 0, 0, 0, 0, 694, 0, 695, 0, 0,
    0, 696, 0, 0, 0, 0, 0, 0, 697, 0, 698, 0, 0, 0, 699, 0, 0, 0, 0, 700, 0, 0, 701, 0, 0, 0, 0, 0, 0, 0, 0, 702,
    0, 0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 0, 704, 705, 0, 706, 0, 0, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0, 0, 0, 0, 709,
    0, 710, 0, 0, 0, 0, 0, 0, 711, 0, 712, 0, 0, 0, 0, 0, 0, 713, 0, 714, 0, 0, 0, 0, 0, 0, 715, 0, 716, 0, 0, 0,
    0, 0, 0, 717, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 720, 0, 0, 0, 0, 0, 0, 721, 0, 722, 0, 0, 0, 0, 0, 0, 723, 0,
    724, 0, 0, 0, 0, 0, 0, 725, 0, 726, 0, 0, 0, 0, 0, 0, 727, 0, 728, 0, 0, 0, 729, 0, 0, 0, 0, 0, 0, 730, 0, 731,
    0, 0, 0, 732, 0, 0, 0, 0, 733, 0, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0,
    0, 737, 738, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 741, 0, 0, 0, 0, 0, 0, 742, 0, 743, 0, 0, 0, 0, 0, 0, 744, 0, 745,
    0, 0, 0, 0, 0, 0, 746, 0, 747, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 750, 0, 751, 0, 0, 0, 0, 0,
    0, 752, 0, 753, 0, 0, 0, 0, 0, 0, 754, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 757, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0,
    759, 0, 760, 0, 0, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 0, 763, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 765, 0, 0, 0,
    0, 0, 766, 0, 0, 0, 0, 0, 0, 767, 768, 0, 769, 0, 0, 0, 0, 0, 0, 770, 0, 771, 0, 0, 0, 0, 0, 0, 772, 0, 773, 0,
    0, 0, 0, 0, 0, 774, 0, 775, 0, 0, 0, 0, 0, 0, 776, 0, 777, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 0, 0, 0, 0, 0,
    780, 0, 781, 0, 0, 0, 0, 0, 0, 782, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 785, 0, 0, 0, 0, 0, 0, 786, 0, 787, 0, 0,
    0, 0, 0, 0, 788, 0, 789, 0, 0, 0, 0, 0, 0, 790, 0, 791, 0, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 794, 0, 0, 0, 0,
    0, 0, 0, 0, 795, 0, 0, 0, 0, 0, 796, 0, 0, 0, 0, 0, 0, 797, 798, 0, 799, 0, 0, 0, 0, 0, 0, 800, 0, 801, 0, 0,
    0, 0, 0, 0, 802, 0, 803, 0, 0, 0, 0, 0, 0, 804, 0, 805, 0, 0, 0, 0, 0, 0, 806, 0, 807, 0, 0, 0, 0, 0, 0, 808,
    0, 809, 0, 0, 0, 0, 0, 0, 810, 0, 811, 0, 0, 0, 0, 0, 0, 812, 0, 813, 0, 0, 0, 0, 0, 0, 814, 0, 815, 0, 0, 0,
    0, 0, 0, 816, 0, 817, 0, 0, 0, 0, 0, 0, 818, 0, 819, 0, 0, 0, 0, 0, 0, 820, 0, 821, 0, 0, 0, 0, 0, 0, 822, 0,
    823, 0, 0, 0, 824, 0, 0, 0, 0, 825, 0, 0, 826, 0, 0, 0, 0, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0,
    0, 0, 829, 830, 0, 831, 0, 0, 0, 0, 0, 0, 832, 0, 833, 0, 0, 0, 0, 0, 0, 834, 0, 835, 0, 0, 0, 0, 0, 0, 836, 0,
    837, 0, 0, 0, 0, 0, 0, 838, 0, 839, 0, 0, 0, 0, 0, 0, 840, 0, 841, 0, 0, 0, 0, 0, 0, 842, 0, 843, 0, 0, 0, 0,
    0, 0, 844, 0, 845, 0, 0, 0, 0, 0, 0, 846, 0, 847, 0, 0, 0, 0, 0, 0, 848, 0, 849, 0, 0, 0, 0, 0, 0, 850, 0, 851,
    0, 0, 0, 0, 0, 0, 852, 0, 853, 0, 0, 0, 0, 0, 0, 854, 0, 855, 0, 0, 0, 0, 0, 0, 856, 0, 857, 0, 0, 0, 0, 0,
    0, 858, 0, 859, 0, 0, 0, 0, 0, 0, 860, 0, 861, 0, 0, 0, 0, 0, 0, 862, 0, 863, 0, 0, 0, 0, 864, 0, 0, 865, 0, 0,
    0, 0, 0, 0, 0, 0, 866, 0, 0, 0, 0, 0, 867, 0, 0, 0, 0, 0, 0, 868, 869, 0, 870, 0, 0, 0, 0, 0, 0, 871, 0, 872,
};
void recomp_unit_0151_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A60000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0151[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A60000;
    case 2u: goto L_08A60004;
    case 3u: goto L_08A60010;
    case 4u: goto L_08A60020;
    case 5u: goto L_08A60028;
    case 6u: goto L_08A60034;
    case 7u: goto L_08A60044;
    case 8u: goto L_08A6004C;
    case 9u: goto L_08A60058;
    case 10u: goto L_08A60088;
    case 11u: goto L_08A60094;
    case 12u: goto L_08A6009C;
    case 13u: goto L_08A600C8;
    case 14u: goto L_08A600E4;
    case 15u: goto L_08A60104;
    case 16u: goto L_08A60114;
    case 17u: goto L_08A60134;
    case 18u: goto L_08A60140;
    case 19u: goto L_08A60148;
    case 20u: goto L_08A60150;
    case 21u: goto L_08A60158;
    case 22u: goto L_08A60164;
    case 23u: goto L_08A6016C;
    case 24u: goto L_08A60174;
    case 25u: goto L_08A6017C;
    case 26u: goto L_08A60188;
    case 27u: goto L_08A60190;
    case 28u: goto L_08A601B0;
    case 29u: goto L_08A601BC;
    case 30u: goto L_08A601C4;
    case 31u: goto L_08A601CC;
    case 32u: goto L_08A601E0;
    case 33u: goto L_08A601F8;
    case 34u: goto L_08A60200;
    case 35u: goto L_08A6020C;
    case 36u: goto L_08A60214;
    case 37u: goto L_08A60224;
    case 38u: goto L_08A60234;
    case 39u: goto L_08A60264;
    case 40u: goto L_08A6026C;
    case 41u: goto L_08A602AC;
    case 42u: goto L_08A602C4;
    case 43u: goto L_08A602CC;
    case 44u: goto L_08A602F0;
    case 45u: goto L_08A602F8;
    case 46u: goto L_08A6031C;
    case 47u: goto L_08A6032C;
    case 48u: goto L_08A6035C;
    case 49u: goto L_08A6036C;
    case 50u: goto L_08A60384;
    case 51u: goto L_08A60394;
    case 52u: goto L_08A603A4;
    case 53u: goto L_08A603B4;
    case 54u: goto L_08A603C8;
    case 55u: goto L_08A603D8;
    case 56u: goto L_08A603FC;
    case 57u: goto L_08A6046C;
    case 58u: goto L_08A60474;
    case 59u: goto L_08A60490;
    case 60u: goto L_08A60498;
    case 61u: goto L_08A604A8;
    case 62u: goto L_08A604B0;
    case 63u: goto L_08A604D0;
    case 64u: goto L_08A604E4;
    case 65u: goto L_08A604FC;
    case 66u: goto L_08A60504;
    case 67u: goto L_08A60514;
    case 68u: goto L_08A60524;
    case 69u: goto L_08A6058C;
    case 70u: goto L_08A60594;
    case 71u: goto L_08A605BC;
    case 72u: goto L_08A605C4;
    case 73u: goto L_08A605D4;
    case 74u: goto L_08A605FC;
    case 75u: goto L_08A6060C;
    case 76u: goto L_08A60620;
    case 77u: goto L_08A60644;
    case 78u: goto L_08A6065C;
    case 79u: goto L_08A6067C;
    case 80u: goto L_08A60684;
    case 81u: goto L_08A60690;
    case 82u: goto L_08A60698;
    case 83u: goto L_08A606D8;
    case 84u: goto L_08A6070C;
    case 85u: goto L_08A6071C;
    case 86u: goto L_08A60734;
    case 87u: goto L_08A60740;
    case 88u: goto L_08A60750;
    case 89u: goto L_08A60764;
    case 90u: goto L_08A60794;
    case 91u: goto L_08A607D8;
    case 92u: goto L_08A60804;
    case 93u: goto L_08A60818;
    case 94u: goto L_08A60828;
    case 95u: goto L_08A60848;
    case 96u: goto L_08A60880;
    case 97u: goto L_08A60888;
    case 98u: goto L_08A6088C;
    case 99u: goto L_08A608A4;
    case 100u: goto L_08A608DC;
    case 101u: goto L_08A608F0;
    case 102u: goto L_08A60900;
    case 103u: goto L_08A60954;
    case 104u: goto L_08A6095C;
    case 105u: goto L_08A60960;
    case 106u: goto L_08A6097C;
    case 107u: goto L_08A609B4;
    case 108u: goto L_08A609F0;
    case 109u: goto L_08A60A00;
    case 110u: goto L_08A60A54;
    case 111u: goto L_08A60A5C;
    case 112u: goto L_08A60A60;
    case 113u: goto L_08A60A7C;
    case 114u: goto L_08A60AAC;
    case 115u: goto L_08A60AC0;
    case 116u: goto L_08A60AD0;
    case 117u: goto L_08A60AF8;
    case 118u: goto L_08A60B30;
    case 119u: goto L_08A60B38;
    case 120u: goto L_08A60B3C;
    case 121u: goto L_08A60B54;
    case 122u: goto L_08A60B8C;
    case 123u: goto L_08A60BA0;
    case 124u: goto L_08A60BB0;
    case 125u: goto L_08A60BDC;
    case 126u: goto L_08A60C1C;
    case 127u: goto L_08A60C48;
    case 128u: goto L_08A60C50;
    case 129u: goto L_08A60C54;
    case 130u: goto L_08A60C74;
    case 131u: goto L_08A60CAC;
    case 132u: goto L_08A60CBC;
    case 133u: goto L_08A60CD0;
    case 134u: goto L_08A60CD8;
    case 135u: goto L_08A60D24;
    case 136u: goto L_08A60D38;
    case 137u: goto L_08A60D50;
    case 138u: goto L_08A60D84;
    case 139u: goto L_08A60D98;
    case 140u: goto L_08A60DAC;
    case 141u: goto L_08A60DB8;
    case 142u: goto L_08A60DC4;
    case 143u: goto L_08A60DD8;
    case 144u: goto L_08A60DE0;
    case 145u: goto L_08A60DE8;
    case 146u: goto L_08A60DEC;
    case 147u: goto L_08A60DF4;
    case 148u: goto L_08A60E1C;
    case 149u: goto L_08A60E24;
    case 150u: goto L_08A60E30;
    case 151u: goto L_08A60E40;
    case 152u: goto L_08A60E4C;
    case 153u: goto L_08A60E54;
    case 154u: goto L_08A60E5C;
    case 155u: goto L_08A60E68;
    case 156u: goto L_08A60E74;
    case 157u: goto L_08A60E88;
    case 158u: goto L_08A60E94;
    case 159u: goto L_08A60EAC;
    case 160u: goto L_08A60EB8;
    case 161u: goto L_08A60EC0;
    case 162u: goto L_08A60EC8;
    case 163u: goto L_08A60ECC;
    case 164u: goto L_08A60EE0;
    case 165u: goto L_08A60EE8;
    case 166u: goto L_08A60EF8;
    case 167u: goto L_08A60F24;
    case 168u: goto L_08A60F38;
    case 169u: goto L_08A60F40;
    case 170u: goto L_08A60F48;
    case 171u: goto L_08A60F6C;
    case 172u: goto L_08A60F84;
    case 173u: goto L_08A60FA0;
    case 174u: goto L_08A60FA4;
    case 175u: goto L_08A60FAC;
    case 176u: goto L_08A60FC8;
    case 177u: goto L_08A60FD0;
    case 178u: goto L_08A60FEC;
    case 179u: goto L_08A60FF4;
    case 180u: goto L_08A61010;
    case 181u: goto L_08A61018;
    case 182u: goto L_08A61034;
    case 183u: goto L_08A6103C;
    case 184u: goto L_08A61058;
    case 185u: goto L_08A61060;
    case 186u: goto L_08A6107C;
    case 187u: goto L_08A61084;
    case 188u: goto L_08A610A0;
    case 189u: goto L_08A610A8;
    case 190u: goto L_08A610C4;
    case 191u: goto L_08A610CC;
    case 192u: goto L_08A610E8;
    case 193u: goto L_08A610F0;
    case 194u: goto L_08A6110C;
    case 195u: goto L_08A61114;
    case 196u: goto L_08A61130;
    case 197u: goto L_08A61138;
    case 198u: goto L_08A61154;
    case 199u: goto L_08A6115C;
    case 200u: goto L_08A61178;
    case 201u: goto L_08A61180;
    case 202u: goto L_08A6119C;
    case 203u: goto L_08A611A4;
    case 204u: goto L_08A611C0;
    case 205u: goto L_08A611C8;
    case 206u: goto L_08A611DC;
    case 207u: goto L_08A611E8;
    case 208u: goto L_08A61210;
    case 209u: goto L_08A6122C;
    case 210u: goto L_08A61244;
    case 211u: goto L_08A61248;
    case 212u: goto L_08A61274;
    case 213u: goto L_08A6127C;
    case 214u: goto L_08A61284;
    case 215u: goto L_08A61290;
    case 216u: goto L_08A612A8;
    case 217u: goto L_08A612B0;
    case 218u: goto L_08A612B8;
    case 219u: goto L_08A612C0;
    case 220u: goto L_08A612D4;
    case 221u: goto L_08A612E4;
    case 222u: goto L_08A612F4;
    case 223u: goto L_08A6130C;
    case 224u: goto L_08A61314;
    case 225u: goto L_08A6131C;
    case 226u: goto L_08A61324;
    case 227u: goto L_08A6132C;
    case 228u: goto L_08A61344;
    case 229u: goto L_08A6134C;
    case 230u: goto L_08A61364;
    case 231u: goto L_08A6136C;
    case 232u: goto L_08A61374;
    case 233u: goto L_08A6137C;
    case 234u: goto L_08A6138C;
    case 235u: goto L_08A613AC;
    case 236u: goto L_08A613B4;
    case 237u: goto L_08A613C8;
    case 238u: goto L_08A613D0;
    case 239u: goto L_08A613D8;
    case 240u: goto L_08A613E0;
    case 241u: goto L_08A613E8;
    case 242u: goto L_08A61400;
    case 243u: goto L_08A61408;
    case 244u: goto L_08A61418;
    case 245u: goto L_08A6142C;
    case 246u: goto L_08A61450;
    case 247u: goto L_08A61458;
    case 248u: goto L_08A61460;
    case 249u: goto L_08A61478;
    case 250u: goto L_08A61484;
    case 251u: goto L_08A6148C;
    case 252u: goto L_08A614A4;
    case 253u: goto L_08A614B0;
    case 254u: goto L_08A614C0;
    case 255u: goto L_08A614C8;
    case 256u: goto L_08A614D0;
    case 257u: goto L_08A614D8;
    case 258u: goto L_08A614E8;
    case 259u: goto L_08A614F8;
    case 260u: goto L_08A61520;
    case 261u: goto L_08A61538;
    case 262u: goto L_08A61540;
    case 263u: goto L_08A61548;
    case 264u: goto L_08A61550;
    case 265u: goto L_08A61558;
    case 266u: goto L_08A61570;
    case 267u: goto L_08A6157C;
    case 268u: goto L_08A61584;
    case 269u: goto L_08A61590;
    case 270u: goto L_08A61598;
    case 271u: goto L_08A615AC;
    case 272u: goto L_08A615BC;
    case 273u: goto L_08A615CC;
    case 274u: goto L_08A615D8;
    case 275u: goto L_08A615FC;
    case 276u: goto L_08A61608;
    case 277u: goto L_08A61620;
    case 278u: goto L_08A6162C;
    case 279u: goto L_08A6163C;
    case 280u: goto L_08A61644;
    case 281u: goto L_08A6164C;
    case 282u: goto L_08A61664;
    case 283u: goto L_08A6166C;
    case 284u: goto L_08A61674;
    case 285u: goto L_08A6167C;
    case 286u: goto L_08A61688;
    case 287u: goto L_08A61698;
    case 288u: goto L_08A616A8;
    case 289u: goto L_08A616B4;
    case 290u: goto L_08A616D8;
    case 291u: goto L_08A616F0;
    case 292u: goto L_08A6170C;
    case 293u: goto L_08A61710;
    case 294u: goto L_08A61718;
    case 295u: goto L_08A61734;
    case 296u: goto L_08A6173C;
    case 297u: goto L_08A61758;
    case 298u: goto L_08A61760;
    case 299u: goto L_08A6177C;
    case 300u: goto L_08A61784;
    case 301u: goto L_08A617A0;
    case 302u: goto L_08A617A8;
    case 303u: goto L_08A617C4;
    case 304u: goto L_08A617CC;
    case 305u: goto L_08A617E8;
    case 306u: goto L_08A617F0;
    case 307u: goto L_08A6180C;
    case 308u: goto L_08A61814;
    case 309u: goto L_08A61830;
    case 310u: goto L_08A61838;
    case 311u: goto L_08A61854;
    case 312u: goto L_08A6185C;
    case 313u: goto L_08A61878;
    case 314u: goto L_08A61880;
    case 315u: goto L_08A6189C;
    case 316u: goto L_08A618A4;
    case 317u: goto L_08A618C0;
    case 318u: goto L_08A618C8;
    case 319u: goto L_08A618E4;
    case 320u: goto L_08A618EC;
    case 321u: goto L_08A61900;
    case 322u: goto L_08A6190C;
    case 323u: goto L_08A61930;
    case 324u: goto L_08A61948;
    case 325u: goto L_08A61964;
    case 326u: goto L_08A61968;
    case 327u: goto L_08A61970;
    case 328u: goto L_08A6198C;
    case 329u: goto L_08A61994;
    case 330u: goto L_08A619B0;
    case 331u: goto L_08A619B8;
    case 332u: goto L_08A619D4;
    case 333u: goto L_08A619DC;
    case 334u: goto L_08A619F8;
    case 335u: goto L_08A61A00;
    case 336u: goto L_08A61A1C;
    case 337u: goto L_08A61A24;
    case 338u: goto L_08A61A40;
    case 339u: goto L_08A61A48;
    case 340u: goto L_08A61A64;
    case 341u: goto L_08A61A6C;
    case 342u: goto L_08A61A88;
    case 343u: goto L_08A61A90;
    case 344u: goto L_08A61AAC;
    case 345u: goto L_08A61AB4;
    case 346u: goto L_08A61AD0;
    case 347u: goto L_08A61AD8;
    case 348u: goto L_08A61AE8;
    case 349u: goto L_08A61B04;
    case 350u: goto L_08A61B0C;
    case 351u: goto L_08A61B1C;
    case 352u: goto L_08A61B30;
    case 353u: goto L_08A61B3C;
    case 354u: goto L_08A61B60;
    case 355u: goto L_08A61B78;
    case 356u: goto L_08A61B94;
    case 357u: goto L_08A61B98;
    case 358u: goto L_08A61BA0;
    case 359u: goto L_08A61BBC;
    case 360u: goto L_08A61BC4;
    case 361u: goto L_08A61BE0;
    case 362u: goto L_08A61BE8;
    case 363u: goto L_08A61C04;
    case 364u: goto L_08A61C0C;
    case 365u: goto L_08A61C28;
    case 366u: goto L_08A61C30;
    case 367u: goto L_08A61C4C;
    case 368u: goto L_08A61C54;
    case 369u: goto L_08A61C70;
    case 370u: goto L_08A61C78;
    case 371u: goto L_08A61C88;
    case 372u: goto L_08A61CA4;
    case 373u: goto L_08A61CAC;
    case 374u: goto L_08A61CC8;
    case 375u: goto L_08A61CD0;
    case 376u: goto L_08A61CEC;
    case 377u: goto L_08A61CF4;
    case 378u: goto L_08A61D10;
    case 379u: goto L_08A61D18;
    case 380u: goto L_08A61D34;
    case 381u: goto L_08A61D3C;
    case 382u: goto L_08A61D58;
    case 383u: goto L_08A61D60;
    case 384u: goto L_08A61D7C;
    case 385u: goto L_08A61D84;
    case 386u: goto L_08A61D94;
    case 387u: goto L_08A61DA8;
    case 388u: goto L_08A61DB4;
    case 389u: goto L_08A61DD8;
    case 390u: goto L_08A61DF0;
    case 391u: goto L_08A61E0C;
    case 392u: goto L_08A61E10;
    case 393u: goto L_08A61E18;
    case 394u: goto L_08A61E34;
    case 395u: goto L_08A61E3C;
    case 396u: goto L_08A61E58;
    case 397u: goto L_08A61E60;
    case 398u: goto L_08A61E7C;
    case 399u: goto L_08A61E84;
    case 400u: goto L_08A61EA0;
    case 401u: goto L_08A61EA8;
    case 402u: goto L_08A61EC4;
    case 403u: goto L_08A61ECC;
    case 404u: goto L_08A61EE8;
    case 405u: goto L_08A61EF0;
    case 406u: goto L_08A61F0C;
    case 407u: goto L_08A61F14;
    case 408u: goto L_08A61F30;
    case 409u: goto L_08A61F38;
    case 410u: goto L_08A61F54;
    case 411u: goto L_08A61F5C;
    case 412u: goto L_08A61F78;
    case 413u: goto L_08A61F80;
    case 414u: goto L_08A61F9C;
    case 415u: goto L_08A61FA4;
    case 416u: goto L_08A61FC0;
    case 417u: goto L_08A61FC8;
    case 418u: goto L_08A61FE4;
    case 419u: goto L_08A61FEC;
    case 420u: goto L_08A61FFC;
    case 421u: goto L_08A62010;
    case 422u: goto L_08A6201C;
    case 423u: goto L_08A62040;
    case 424u: goto L_08A62058;
    case 425u: goto L_08A62074;
    case 426u: goto L_08A62078;
    case 427u: goto L_08A62080;
    case 428u: goto L_08A6209C;
    case 429u: goto L_08A620A4;
    case 430u: goto L_08A620C0;
    case 431u: goto L_08A620C8;
    case 432u: goto L_08A620E4;
    case 433u: goto L_08A620EC;
    case 434u: goto L_08A62108;
    case 435u: goto L_08A62110;
    case 436u: goto L_08A6212C;
    case 437u: goto L_08A62134;
    case 438u: goto L_08A62150;
    case 439u: goto L_08A62158;
    case 440u: goto L_08A62174;
    case 441u: goto L_08A6217C;
    case 442u: goto L_08A62198;
    case 443u: goto L_08A621A0;
    case 444u: goto L_08A621BC;
    case 445u: goto L_08A621C4;
    case 446u: goto L_08A621E0;
    case 447u: goto L_08A621E8;
    case 448u: goto L_08A62204;
    case 449u: goto L_08A6220C;
    case 450u: goto L_08A62228;
    case 451u: goto L_08A62230;
    case 452u: goto L_08A62240;
    case 453u: goto L_08A6225C;
    case 454u: goto L_08A62264;
    case 455u: goto L_08A62274;
    case 456u: goto L_08A62288;
    case 457u: goto L_08A62294;
    case 458u: goto L_08A622B8;
    case 459u: goto L_08A622D0;
    case 460u: goto L_08A622EC;
    case 461u: goto L_08A622F0;
    case 462u: goto L_08A622F8;
    case 463u: goto L_08A62314;
    case 464u: goto L_08A6231C;
    case 465u: goto L_08A62338;
    case 466u: goto L_08A62340;
    case 467u: goto L_08A6235C;
    case 468u: goto L_08A62364;
    case 469u: goto L_08A62380;
    case 470u: goto L_08A62388;
    case 471u: goto L_08A623A4;
    case 472u: goto L_08A623AC;
    case 473u: goto L_08A623C8;
    case 474u: goto L_08A623D0;
    case 475u: goto L_08A623EC;
    case 476u: goto L_08A623F4;
    case 477u: goto L_08A62410;
    case 478u: goto L_08A62418;
    case 479u: goto L_08A62428;
    case 480u: goto L_08A62444;
    case 481u: goto L_08A6244C;
    case 482u: goto L_08A62460;
    case 483u: goto L_08A6246C;
    case 484u: goto L_08A62490;
    case 485u: goto L_08A624A8;
    case 486u: goto L_08A624C4;
    case 487u: goto L_08A624C8;
    case 488u: goto L_08A624D0;
    case 489u: goto L_08A624EC;
    case 490u: goto L_08A624F4;
    case 491u: goto L_08A62510;
    case 492u: goto L_08A62518;
    case 493u: goto L_08A62534;
    case 494u: goto L_08A6253C;
    case 495u: goto L_08A62558;
    case 496u: goto L_08A62560;
    case 497u: goto L_08A6257C;
    case 498u: goto L_08A62584;
    case 499u: goto L_08A625A0;
    case 500u: goto L_08A625A8;
    case 501u: goto L_08A625C4;
    case 502u: goto L_08A625CC;
    case 503u: goto L_08A625E8;
    case 504u: goto L_08A625F0;
    case 505u: goto L_08A6260C;
    case 506u: goto L_08A62614;
    case 507u: goto L_08A62630;
    case 508u: goto L_08A62638;
    case 509u: goto L_08A62654;
    case 510u: goto L_08A6265C;
    case 511u: goto L_08A62678;
    case 512u: goto L_08A62680;
    case 513u: goto L_08A6269C;
    case 514u: goto L_08A626A4;
    case 515u: goto L_08A626B8;
    case 516u: goto L_08A626C4;
    case 517u: goto L_08A626E8;
    case 518u: goto L_08A62700;
    case 519u: goto L_08A6271C;
    case 520u: goto L_08A62720;
    case 521u: goto L_08A62728;
    case 522u: goto L_08A62744;
    case 523u: goto L_08A6274C;
    case 524u: goto L_08A62768;
    case 525u: goto L_08A62770;
    case 526u: goto L_08A6278C;
    case 527u: goto L_08A62794;
    case 528u: goto L_08A627B0;
    case 529u: goto L_08A627B8;
    case 530u: goto L_08A627D4;
    case 531u: goto L_08A627DC;
    case 532u: goto L_08A627F8;
    case 533u: goto L_08A62800;
    case 534u: goto L_08A6281C;
    case 535u: goto L_08A62824;
    case 536u: goto L_08A62840;
    case 537u: goto L_08A62848;
    case 538u: goto L_08A62864;
    case 539u: goto L_08A6286C;
    case 540u: goto L_08A62888;
    case 541u: goto L_08A62890;
    case 542u: goto L_08A628A0;
    case 543u: goto L_08A628B4;
    case 544u: goto L_08A628C0;
    case 545u: goto L_08A628E4;
    case 546u: goto L_08A628FC;
    case 547u: goto L_08A62918;
    case 548u: goto L_08A6291C;
    case 549u: goto L_08A62924;
    case 550u: goto L_08A62940;
    case 551u: goto L_08A62948;
    case 552u: goto L_08A62964;
    case 553u: goto L_08A6296C;
    case 554u: goto L_08A62988;
    case 555u: goto L_08A62990;
    case 556u: goto L_08A629AC;
    case 557u: goto L_08A629B4;
    case 558u: goto L_08A629D0;
    case 559u: goto L_08A629D8;
    case 560u: goto L_08A629F4;
    case 561u: goto L_08A629FC;
    case 562u: goto L_08A62A18;
    case 563u: goto L_08A62A20;
    case 564u: goto L_08A62A3C;
    case 565u: goto L_08A62A44;
    case 566u: goto L_08A62A60;
    case 567u: goto L_08A62A68;
    case 568u: goto L_08A62A84;
    case 569u: goto L_08A62A8C;
    case 570u: goto L_08A62A9C;
    case 571u: goto L_08A62AB8;
    case 572u: goto L_08A62AC0;
    case 573u: goto L_08A62ADC;
    case 574u: goto L_08A62AE4;
    case 575u: goto L_08A62AF8;
    case 576u: goto L_08A62B04;
    case 577u: goto L_08A62B28;
    case 578u: goto L_08A62B40;
    case 579u: goto L_08A62B5C;
    case 580u: goto L_08A62B60;
    case 581u: goto L_08A62B68;
    case 582u: goto L_08A62B84;
    case 583u: goto L_08A62B8C;
    case 584u: goto L_08A62BA8;
    case 585u: goto L_08A62BB0;
    case 586u: goto L_08A62BCC;
    case 587u: goto L_08A62BD4;
    case 588u: goto L_08A62BF0;
    case 589u: goto L_08A62BF8;
    case 590u: goto L_08A62C14;
    case 591u: goto L_08A62C1C;
    case 592u: goto L_08A62C38;
    case 593u: goto L_08A62C40;
    case 594u: goto L_08A62C5C;
    case 595u: goto L_08A62C64;
    case 596u: goto L_08A62C80;
    case 597u: goto L_08A62C88;
    case 598u: goto L_08A62CA4;
    case 599u: goto L_08A62CAC;
    case 600u: goto L_08A62CC8;
    case 601u: goto L_08A62CD0;
    case 602u: goto L_08A62CEC;
    case 603u: goto L_08A62CF4;
    case 604u: goto L_08A62D04;
    case 605u: goto L_08A62D20;
    case 606u: goto L_08A62D28;
    case 607u: goto L_08A62D38;
    case 608u: goto L_08A62D4C;
    case 609u: goto L_08A62D58;
    case 610u: goto L_08A62D7C;
    case 611u: goto L_08A62D94;
    case 612u: goto L_08A62DB0;
    case 613u: goto L_08A62DB4;
    case 614u: goto L_08A62DBC;
    case 615u: goto L_08A62DD8;
    case 616u: goto L_08A62DE0;
    case 617u: goto L_08A62DFC;
    case 618u: goto L_08A62E04;
    case 619u: goto L_08A62E20;
    case 620u: goto L_08A62E28;
    case 621u: goto L_08A62E44;
    case 622u: goto L_08A62E4C;
    case 623u: goto L_08A62E68;
    case 624u: goto L_08A62E70;
    case 625u: goto L_08A62E8C;
    case 626u: goto L_08A62E94;
    case 627u: goto L_08A62EB0;
    case 628u: goto L_08A62EB8;
    case 629u: goto L_08A62ED4;
    case 630u: goto L_08A62EDC;
    case 631u: goto L_08A62EF8;
    case 632u: goto L_08A62F00;
    case 633u: goto L_08A62F1C;
    case 634u: goto L_08A62F24;
    case 635u: goto L_08A62F40;
    case 636u: goto L_08A62F48;
    case 637u: goto L_08A62F64;
    case 638u: goto L_08A62F6C;
    case 639u: goto L_08A62F7C;
    case 640u: goto L_08A62F8C;
    case 641u: goto L_08A62FA0;
    case 642u: goto L_08A62FAC;
    case 643u: goto L_08A62FD0;
    case 644u: goto L_08A62FE8;
    case 645u: goto L_08A63004;
    case 646u: goto L_08A63008;
    case 647u: goto L_08A63010;
    case 648u: goto L_08A6302C;
    case 649u: goto L_08A63034;
    case 650u: goto L_08A63050;
    case 651u: goto L_08A63058;
    case 652u: goto L_08A63074;
    case 653u: goto L_08A6307C;
    case 654u: goto L_08A63098;
    case 655u: goto L_08A630A0;
    case 656u: goto L_08A630BC;
    case 657u: goto L_08A630C4;
    case 658u: goto L_08A630E0;
    case 659u: goto L_08A630E8;
    case 660u: goto L_08A63104;
    case 661u: goto L_08A6310C;
    case 662u: goto L_08A63128;
    case 663u: goto L_08A63130;
    case 664u: goto L_08A6314C;
    case 665u: goto L_08A63154;
    case 666u: goto L_08A63170;
    case 667u: goto L_08A63178;
    case 668u: goto L_08A63194;
    case 669u: goto L_08A6319C;
    case 670u: goto L_08A631AC;
    case 671u: goto L_08A631C0;
    case 672u: goto L_08A631CC;
    case 673u: goto L_08A631F0;
    case 674u: goto L_08A63208;
    case 675u: goto L_08A63224;
    case 676u: goto L_08A63228;
    case 677u: goto L_08A63230;
    case 678u: goto L_08A6324C;
    case 679u: goto L_08A63254;
    case 680u: goto L_08A63270;
    case 681u: goto L_08A63278;
    case 682u: goto L_08A63294;
    case 683u: goto L_08A6329C;
    case 684u: goto L_08A632B8;
    case 685u: goto L_08A632C0;
    case 686u: goto L_08A632DC;
    case 687u: goto L_08A632E4;
    case 688u: goto L_08A63300;
    case 689u: goto L_08A63308;
    case 690u: goto L_08A63324;
    case 691u: goto L_08A6332C;
    case 692u: goto L_08A63348;
    case 693u: goto L_08A63350;
    case 694u: goto L_08A6336C;
    case 695u: goto L_08A63374;
    case 696u: goto L_08A63384;
    case 697u: goto L_08A633A0;
    case 698u: goto L_08A633A8;
    case 699u: goto L_08A633B8;
    case 700u: goto L_08A633CC;
    case 701u: goto L_08A633D8;
    case 702u: goto L_08A633FC;
    case 703u: goto L_08A63414;
    case 704u: goto L_08A63430;
    case 705u: goto L_08A63434;
    case 706u: goto L_08A6343C;
    case 707u: goto L_08A63458;
    case 708u: goto L_08A63460;
    case 709u: goto L_08A6347C;
    case 710u: goto L_08A63484;
    case 711u: goto L_08A634A0;
    case 712u: goto L_08A634A8;
    case 713u: goto L_08A634C4;
    case 714u: goto L_08A634CC;
    case 715u: goto L_08A634E8;
    case 716u: goto L_08A634F0;
    case 717u: goto L_08A6350C;
    case 718u: goto L_08A63514;
    case 719u: goto L_08A63530;
    case 720u: goto L_08A63538;
    case 721u: goto L_08A63554;
    case 722u: goto L_08A6355C;
    case 723u: goto L_08A63578;
    case 724u: goto L_08A63580;
    case 725u: goto L_08A6359C;
    case 726u: goto L_08A635A4;
    case 727u: goto L_08A635C0;
    case 728u: goto L_08A635C8;
    case 729u: goto L_08A635D8;
    case 730u: goto L_08A635F4;
    case 731u: goto L_08A635FC;
    case 732u: goto L_08A6360C;
    case 733u: goto L_08A63620;
    case 734u: goto L_08A6362C;
    case 735u: goto L_08A63650;
    case 736u: goto L_08A63668;
    case 737u: goto L_08A63684;
    case 738u: goto L_08A63688;
    case 739u: goto L_08A63690;
    case 740u: goto L_08A636AC;
    case 741u: goto L_08A636B4;
    case 742u: goto L_08A636D0;
    case 743u: goto L_08A636D8;
    case 744u: goto L_08A636F4;
    case 745u: goto L_08A636FC;
    case 746u: goto L_08A63718;
    case 747u: goto L_08A63720;
    case 748u: goto L_08A6373C;
    case 749u: goto L_08A63744;
    case 750u: goto L_08A63760;
    case 751u: goto L_08A63768;
    case 752u: goto L_08A63784;
    case 753u: goto L_08A6378C;
    case 754u: goto L_08A637A8;
    case 755u: goto L_08A637B0;
    case 756u: goto L_08A637CC;
    case 757u: goto L_08A637D4;
    case 758u: goto L_08A637E4;
    case 759u: goto L_08A63800;
    case 760u: goto L_08A63808;
    case 761u: goto L_08A63824;
    case 762u: goto L_08A6382C;
    case 763u: goto L_08A63840;
    case 764u: goto L_08A6384C;
    case 765u: goto L_08A63870;
    case 766u: goto L_08A63888;
    case 767u: goto L_08A638A4;
    case 768u: goto L_08A638A8;
    case 769u: goto L_08A638B0;
    case 770u: goto L_08A638CC;
    case 771u: goto L_08A638D4;
    case 772u: goto L_08A638F0;
    case 773u: goto L_08A638F8;
    case 774u: goto L_08A63914;
    case 775u: goto L_08A6391C;
    case 776u: goto L_08A63938;
    case 777u: goto L_08A63940;
    case 778u: goto L_08A6395C;
    case 779u: goto L_08A63964;
    case 780u: goto L_08A63980;
    case 781u: goto L_08A63988;
    case 782u: goto L_08A639A4;
    case 783u: goto L_08A639AC;
    case 784u: goto L_08A639C8;
    case 785u: goto L_08A639D0;
    case 786u: goto L_08A639EC;
    case 787u: goto L_08A639F4;
    case 788u: goto L_08A63A10;
    case 789u: goto L_08A63A18;
    case 790u: goto L_08A63A34;
    case 791u: goto L_08A63A3C;
    case 792u: goto L_08A63A4C;
    case 793u: goto L_08A63A60;
    case 794u: goto L_08A63A6C;
    case 795u: goto L_08A63A90;
    case 796u: goto L_08A63AA8;
    case 797u: goto L_08A63AC4;
    case 798u: goto L_08A63AC8;
    case 799u: goto L_08A63AD0;
    case 800u: goto L_08A63AEC;
    case 801u: goto L_08A63AF4;
    case 802u: goto L_08A63B10;
    case 803u: goto L_08A63B18;
    case 804u: goto L_08A63B34;
    case 805u: goto L_08A63B3C;
    case 806u: goto L_08A63B58;
    case 807u: goto L_08A63B60;
    case 808u: goto L_08A63B7C;
    case 809u: goto L_08A63B84;
    case 810u: goto L_08A63BA0;
    case 811u: goto L_08A63BA8;
    case 812u: goto L_08A63BC4;
    case 813u: goto L_08A63BCC;
    case 814u: goto L_08A63BE8;
    case 815u: goto L_08A63BF0;
    case 816u: goto L_08A63C0C;
    case 817u: goto L_08A63C14;
    case 818u: goto L_08A63C30;
    case 819u: goto L_08A63C38;
    case 820u: goto L_08A63C54;
    case 821u: goto L_08A63C5C;
    case 822u: goto L_08A63C78;
    case 823u: goto L_08A63C80;
    case 824u: goto L_08A63C90;
    case 825u: goto L_08A63CA4;
    case 826u: goto L_08A63CB0;
    case 827u: goto L_08A63CD4;
    case 828u: goto L_08A63CEC;
    case 829u: goto L_08A63D08;
    case 830u: goto L_08A63D0C;
    case 831u: goto L_08A63D14;
    case 832u: goto L_08A63D30;
    case 833u: goto L_08A63D38;
    case 834u: goto L_08A63D54;
    case 835u: goto L_08A63D5C;
    case 836u: goto L_08A63D78;
    case 837u: goto L_08A63D80;
    case 838u: goto L_08A63D9C;
    case 839u: goto L_08A63DA4;
    case 840u: goto L_08A63DC0;
    case 841u: goto L_08A63DC8;
    case 842u: goto L_08A63DE4;
    case 843u: goto L_08A63DEC;
    case 844u: goto L_08A63E08;
    case 845u: goto L_08A63E10;
    case 846u: goto L_08A63E2C;
    case 847u: goto L_08A63E34;
    case 848u: goto L_08A63E50;
    case 849u: goto L_08A63E58;
    case 850u: goto L_08A63E74;
    case 851u: goto L_08A63E7C;
    case 852u: goto L_08A63E98;
    case 853u: goto L_08A63EA0;
    case 854u: goto L_08A63EBC;
    case 855u: goto L_08A63EC4;
    case 856u: goto L_08A63EE0;
    case 857u: goto L_08A63EE8;
    case 858u: goto L_08A63F04;
    case 859u: goto L_08A63F0C;
    case 860u: goto L_08A63F28;
    case 861u: goto L_08A63F30;
    case 862u: goto L_08A63F4C;
    case 863u: goto L_08A63F54;
    case 864u: goto L_08A63F68;
    case 865u: goto L_08A63F74;
    case 866u: goto L_08A63F98;
    case 867u: goto L_08A63FB0;
    case 868u: goto L_08A63FCC;
    case 869u: goto L_08A63FD0;
    case 870u: goto L_08A63FD8;
    case 871u: goto L_08A63FF4;
    case 872u: goto L_08A63FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A60000:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08A60004;
L_08A60004:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 200 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6004C;
      }
      goto L_08A60010;
    }
L_08A60010:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A60020u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08A60058;
L_08A60020:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6004C;
      }
      goto L_08A60028;
    }
L_08A60028:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < 202 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6004C;
      }
      goto L_08A60034;
    }
L_08A60034:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08A60044u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 490u, 0x08A5EAB8u>(ctx, &aot_mem) && ctx.pc == 0x08A60044u) goto L_08A60044;
    return;
L_08A60044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6004C;
      }
      goto L_08A6004C;
    }
L_08A6004C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60058:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (18493u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] | 4096u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A601CC;
      }
      goto L_08A60088;
    }
L_08A60088:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08A60094u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 274u, 0x08A5DC80u>(ctx, &aot_mem) && ctx.pc == 0x08A60094u) goto L_08A60094;
    return;
L_08A60094:
    ctx.gpr[31] = (0x08A6009Cu);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(12)));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 227u, 0x08A5D8DCu>(ctx, &aot_mem) && ctx.pc == 0x08A6009Cu) goto L_08A6009C;
    return;
L_08A6009C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(26308)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A60190;
      }
      goto L_08A600C8;
    }
L_08A600C8:
    ctx.gpr[5] = (17302u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6017C;
      }
      goto L_08A600E4;
    }
L_08A600E4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (17327u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A6016C;
      }
      goto L_08A60104;
    }
L_08A60104:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A60158;
      }
      goto L_08A60114;
    }
L_08A60114:
    ctx.gpr[4] = (15827u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.gpr[4] = (ctx.gpr[4] | 42501u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A60148;
      }
      goto L_08A60134;
    }
L_08A60134:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A60140u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A6065C;
L_08A60140:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A601CC;
      }
      goto L_08A60148;
    }
L_08A60148:
    ctx.gpr[31] = (0x08A60150u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A601E0;
L_08A60150:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A601CC;
      }
      goto L_08A60158;
    }
L_08A60158:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A60164u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A60524;
L_08A60164:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A601CC;
      }
      goto L_08A6016C;
    }
L_08A6016C:
    ctx.gpr[31] = (0x08A60174u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A604E4;
L_08A60174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A601CC;
      }
      goto L_08A6017C;
    }
L_08A6017C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A60188u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A603FC;
L_08A60188:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A601CC;
      }
      goto L_08A60190;
    }
L_08A60190:
    ctx.gpr[4] = (15827u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(856)));
    ctx.gpr[4] = (ctx.gpr[4] | 42501u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A601C4;
      }
      goto L_08A601B0;
    }
L_08A601B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A601BCu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    goto L_08A60234;
L_08A601BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A601CC;
      }
      goto L_08A601C4;
    }
L_08A601C4:
    ctx.gpr[31] = (0x08A601CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A601E0;
L_08A601CC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A601E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A601F8u);
    ctx.gpr[5] = (0u | 20u);
    goto L_08A60A7C;
L_08A601F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60224;
      }
      goto L_08A60200;
    }
L_08A60200:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A6020Cu);
    ctx.gpr[5] = (0u | 75u);
    goto L_08A60764;
L_08A6020C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60224;
      }
      goto L_08A60214;
    }
L_08A60214:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08A60224u);
    ctx.gpr[6] = (0u | 29500u);
    goto L_08A608A4;
L_08A60224:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60234:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A60264u);
    ctx.gpr[5] = (0u | 20u);
    goto L_08A60A7C;
L_08A60264:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (15827u << 16u);
      if (branch_taken) {
          goto L_08A603D8;
      }
      goto L_08A6026C;
    }
L_08A6026C:
    ctx.gpr[4] = (ctx.gpr[4] | 42501u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(856)));
    ctx.gpr[4] = (16152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48754u);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[5] = (17150u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_08A602AC;
    }
    goto L_08A602AC;
L_08A602AC:
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A602C4u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A60B54;
L_08A602C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A603D8;
      }
      goto L_08A602CC;
    }
L_08A602CC:
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[22];
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A602F0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A60764;
L_08A602F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (15948u << 16u);
      if (branch_taken) {
          goto L_08A603D8;
      }
      goto L_08A602F8;
    }
L_08A602F8:
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (18020u << 16u);
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (20224u << 16u);
    { const bool branch_taken = ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6032C;
      }
      goto L_08A6031C;
    }
L_08A6031C:
    ctx.gpr[4] = (0u | 127u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 22050u);
      if (branch_taken) {
          goto L_08A60384;
      }
      goto L_08A6032C;
    }
L_08A6032C:
    ctx.fpr[20] = ctx.fpr[22] / ctx.fpr[12];
    ctx.gpr[4] = (17853u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[26]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A6036C;
      }
      goto L_08A6035C;
    }
L_08A6035C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[22]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_08A60384;
      }
      goto L_08A6036C;
    }
L_08A6036C:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[26];
    ctx.gpr[5] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16000));
    goto L_08A60384;
L_08A60384:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A60394u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A6097C;
L_08A60394:
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[26]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[26];
        goto L_08A603B4;
    }
    goto L_08A603A4;
L_08A603A4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[20]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29500));
      if (branch_taken) {
          goto L_08A603C8;
      }
      goto L_08A603B4;
    }
L_08A603B4:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29500));
    goto L_08A603C8;
L_08A603C8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A603D8u);
    ctx.gpr[5] = (0u | 18u);
    goto L_08A608A4;
L_08A603D8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A603FC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26308)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (17302u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (17110u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[6] = (16256u << 16u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.fpr[20] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A6046Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A60A7C;
L_08A6046C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (17150u << 16u);
      if (branch_taken) {
          goto L_08A604D0;
      }
      goto L_08A60474;
    }
L_08A60474:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A60490u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A60B54;
L_08A60490:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A604D0;
      }
      goto L_08A60498;
    }
L_08A60498:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[31] = (0x08A604A8u);
    ctx.gpr[6] = (0u | 22050u);
    goto L_08A6097C;
L_08A604A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16784u << 16u);
      if (branch_taken) {
          goto L_08A604D0;
      }
      goto L_08A604B0;
    }
L_08A604B0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (0u | 44100u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A604D0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A608A4;
L_08A604D0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A604E4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A604FCu);
    ctx.gpr[5] = (0u | 127u);
    goto L_08A60A7C;
L_08A604FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60514;
      }
      goto L_08A60504;
    }
L_08A60504:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[31] = (0x08A60514u);
    ctx.gpr[6] = (0u | 22050u);
    goto L_08A6097C;
L_08A60514:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60524:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(848))))));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26308)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (17327u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[14];
    ctx.gpr[5] = (17110u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A6058Cu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A60A7C;
L_08A6058C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16256u << 16u);
      if (branch_taken) {
          goto L_08A60644;
      }
      goto L_08A60594;
    }
L_08A60594:
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[22];
    ctx.gpr[4] = (17046u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A605BCu);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A60764;
L_08A605BC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60644;
      }
      goto L_08A605C4;
    }
L_08A605C4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 127u);
    ctx.gpr[31] = (0x08A605D4u);
    ctx.gpr[6] = (0u | 22050u);
    goto L_08A6097C;
L_08A605D4:
    ctx.gpr[4] = (18020u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8192u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[22];
        goto L_08A6060C;
    }
    goto L_08A605FC;
L_08A605FC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29500));
      if (branch_taken) {
          goto L_08A60620;
      }
      goto L_08A6060C;
    }
L_08A6060C:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(29500));
    goto L_08A60620;
L_08A60620:
    ctx.gpr[5] = (16784u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08A60644u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A608A4;
L_08A60644:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6065C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A6067Cu);
    ctx.gpr[5] = (0u | 20u);
    goto L_08A60A7C;
L_08A6067C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60750;
      }
      goto L_08A60684;
    }
L_08A60684:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60690u);
    ctx.gpr[5] = (0u | 75u);
    goto L_08A60764;
L_08A60690:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (15827u << 16u);
      if (branch_taken) {
          goto L_08A60750;
      }
      goto L_08A60698;
    }
L_08A60698:
    ctx.gpr[4] = (ctx.gpr[4] | 42501u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(856)));
    ctx.gpr[4] = (16152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 48754u);
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[14];
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
        goto L_08A606D8;
    }
    goto L_08A606D8;
L_08A606D8:
    ctx.gpr[4] = (17150u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (17853u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4096u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A6071C;
      }
      goto L_08A6070C;
    }
L_08A6070C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
      if (branch_taken) {
          goto L_08A60734;
      }
      goto L_08A6071C;
    }
L_08A6071C:
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16000));
    goto L_08A60734;
L_08A60734:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A60740u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A6097C;
L_08A60740:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08A60750u);
    ctx.gpr[6] = (0u | 29500u);
    goto L_08A608A4;
L_08A60750:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60764:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (17204u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A60888;
      }
      goto L_08A60794;
    }
L_08A60794:
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[20];
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (16179u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 13107u);
    ctx.gpr[17] = (0u | 1u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_08A60804;
      }
      goto L_08A607D8;
    }
L_08A607D8:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(11273)));
    ctx.gpr[6] = (0u | 100u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[6]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08A60804;
L_08A60804:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A60818u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A60818u) goto L_08A60818;
    return;
L_08A60818:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A60880;
      }
      goto L_08A60828;
    }
L_08A60828:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 211u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[31] = (0x08A60848u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08A60C74;
L_08A60848:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A60880u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A60880u) goto L_08A60880;
    return;
L_08A60880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A6088C;
      }
      goto L_08A60888;
    }
L_08A60888:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A6088C;
L_08A6088C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A608A4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (17194u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A6095C;
      }
      goto L_08A608DC;
    }
L_08A608DC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A608F0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A608F0u) goto L_08A608F0;
    return;
L_08A608F0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A60954;
      }
      goto L_08A60900;
    }
L_08A60900:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 212u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A60954u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A60954u) goto L_08A60954;
    return;
L_08A60954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A60960;
      }
      goto L_08A6095C;
    }
L_08A6095C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A60960;
L_08A60960:
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
L_08A6097C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (17204u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08A60A5C;
      }
      goto L_08A609B4;
    }
L_08A609B4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11273)));
    ctx.gpr[5] = (0u | 100u);
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    // nop
    // nop
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[5] = (ctx.gpr[18] - ctx.gpr[5]);
    ctx.gpr[31] = (0x08A609F0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A609F0u) goto L_08A609F0;
    return;
L_08A609F0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_08A60A54;
      }
      goto L_08A60A00;
    }
L_08A60A00:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 208u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 4u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A60A54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A60A54u) goto L_08A60A54;
    return;
L_08A60A54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A60A60;
      }
      goto L_08A60A5C;
    }
L_08A60A5C:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A60A60;
L_08A60A60:
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
L_08A60A7C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (17372u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A60B38;
      }
      goto L_08A60AAC;
    }
L_08A60AAC:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A60AC0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A60AC0u) goto L_08A60AC0;
    return;
L_08A60AC0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A60B30;
      }
      goto L_08A60AD0;
    }
L_08A60AD0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), 0u);
    ctx.gpr[4] = (0u | 207u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 207u);
    ctx.gpr[31] = (0x08A60AF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A60AF8u) goto L_08A60AF8;
    return;
L_08A60AF8:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08A60B30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A60B30u) goto L_08A60B30;
    return;
L_08A60B30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A60B3C;
      }
      goto L_08A60B38;
    }
L_08A60B38:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A60B3C;
L_08A60B3C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60B54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[5] = (17264u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A60C50;
      }
      goto L_08A60B8C;
    }
L_08A60B8C:
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A60BA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 924u, 0x08A9B62Cu>(ctx, &aot_mem) && ctx.pc == 0x08A60BA0u) goto L_08A60BA0;
    return;
L_08A60BA0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(56), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(56)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_08A60C48;
      }
      goto L_08A60BB0;
    }
L_08A60BB0:
    ctx.gpr[4] = (0u | 5u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    ctx.gpr[18] = (0u | 210u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(44), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(45), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    ctx.gpr[5] = (0u | 210u);
    ctx.gpr[31] = (0x08A60BDCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25200));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 335u, 0x088B5ECCu>(ctx, &aot_mem) && ctx.pc == 0x08A60BDCu) goto L_08A60BDC;
    return;
L_08A60BDC:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(64), 0u);
    ctx.gpr[4] = (16512u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(76), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(0u));
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(97), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A60C1Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A60C1Cu) goto L_08A60C1C;
    return;
L_08A60C1C:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(200));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 127u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(98), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08A60C48u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0165_entry, 165u, 868u, 0x08A9B020u>(ctx, &aot_mem) && ctx.pc == 0x08A60C48u) goto L_08A60C48;
    return;
L_08A60C48:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A60C54;
      }
      goto L_08A60C50;
    }
L_08A60C50:
    ctx.gpr[2] = (0u | 0u);
    goto L_08A60C54;
L_08A60C54:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60C74:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(60)));
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17963u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 6144u);
    ctx.gpr[5] = (20224u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08A60CBC;
    }
    goto L_08A60CAC;
L_08A60CAC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[2] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(22050));
      if (branch_taken) {
          goto L_08A60CD0;
      }
      goto L_08A60CBC;
    }
L_08A60CBC:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[2] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(22050));
    goto L_08A60CD0;
L_08A60CD0:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60CD8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A60D24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 304u, 0x08A6D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A60D24u) goto L_08A60D24;
    return;
L_08A60D24:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A60D38u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 262u, 0x08A75E8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A60D38u) goto L_08A60D38;
    return;
L_08A60D38:
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
L_08A60D50:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[31] = (0x08A60D84u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 304u, 0x08A6D4E8u>(ctx, &aot_mem) && ctx.pc == 0x08A60D84u) goto L_08A60D84;
    return;
L_08A60D84:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A60D98u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0156_entry, 156u, 54u, 0x08A743A0u>(ctx, &aot_mem) && ctx.pc == 0x08A60D98u) goto L_08A60D98;
    return;
L_08A60D98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60DAC:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_08A60DD8;
      }
      goto L_08A60DB8;
    }
L_08A60DB8:
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60DD8;
      }
      goto L_08A60DC4;
    }
L_08A60DC4:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(17225), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(17228), ctx.gpr[5]);
    goto L_08A60DD8;
L_08A60DD8:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60DE0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08A60DEC;
      }
      goto L_08A60DE8;
    }
L_08A60DE8:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2004), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A60DEC;
L_08A60DEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60DF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(17228)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[17] < ctx.gpr[5] ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08A60E54;
      }
      goto L_08A60E1C;
    }
L_08A60E1C:
    ctx.gpr[31] = (0x08A60E24u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A60E24u) goto L_08A60E24;
    return;
L_08A60E24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60E4C;
      }
      goto L_08A60E30;
    }
L_08A60E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60E5C;
      }
      goto L_08A60E40;
    }
L_08A60E40:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17225), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A60ECC;
      }
      goto L_08A60E4C;
    }
L_08A60E4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60ECC;
      }
      goto L_08A60E54;
    }
L_08A60E54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60ECC;
      }
      goto L_08A60E5C;
    }
L_08A60E5C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60E74;
      }
      goto L_08A60E68;
    }
L_08A60E68:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17225), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A60ECC;
      }
      goto L_08A60E74;
    }
L_08A60E74:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6988)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A60EC8;
      }
      goto L_08A60E88;
    }
L_08A60E88:
    ctx.gpr[6] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A60EC0;
      }
      goto L_08A60E94;
    }
L_08A60E94:
    ctx.gpr[5] = (3u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-16608));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A60EB8;
      }
      goto L_08A60EAC;
    }
L_08A60EAC:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17225), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A60ECC;
      }
      goto L_08A60EB8;
    }
L_08A60EB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17225), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08A60ECC;
      }
      goto L_08A60EC0;
    }
L_08A60EC0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6988), ctx.gpr[17]);
      if (branch_taken) {
          goto L_08A60ECC;
      }
      goto L_08A60EC8;
    }
L_08A60EC8:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(17225), static_cast<std::uint8_t>(0u));
    goto L_08A60ECC;
L_08A60ECC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60EE0:
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
        goto L_08A60EF8;
    }
    goto L_08A60EE8;
L_08A60EE8:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A60F40;
      }
      goto L_08A60EF8;
    }
L_08A60EF8:
    ctx.gpr[9] = (ctx.gpr[9] & 3u);
    ctx.gpr[9] = (ctx.gpr[9] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[9]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21924)));
    { const std::uint32_t dividend = ctx.gpr[4]; const std::uint32_t divisor = ctx.gpr[8]; if (divisor == 0u) { ctx.lo = 0xFFFFFFFFu; ctx.hi = dividend; } else { ctx.lo = dividend / divisor; ctx.hi = dividend % divisor; } }
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[9];
    // nop
      if (branch_taken) {
          goto L_08A60F40;
      }
      goto L_08A60F24;
    }
L_08A60F24:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[8] = (ctx.gpr[7] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[4] < ctx.gpr[8] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A60F40;
      }
      goto L_08A60F38;
    }
L_08A60F38:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    goto L_08A60F40;
L_08A60F40:
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60F48:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A611C8;
      }
      goto L_08A60F6C;
    }
L_08A60F6C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24232)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A60F84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2532u);
    ctx.gpr[31] = (0x08A60FA0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A60FA0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A60FA4;
L_08A60FA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A611DC;
      }
      goto L_08A60FAC;
    }
L_08A60FAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2523u);
    ctx.gpr[31] = (0x08A60FC8u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A60FC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A60FD0;
    }
L_08A60FD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2530u);
    ctx.gpr[31] = (0x08A60FECu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A60FEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A60FF4;
    }
L_08A60FF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2526u);
    ctx.gpr[31] = (0x08A61010u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A61010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A61018;
    }
L_08A61018:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61034u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61034:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A6103C;
    }
L_08A6103C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61058u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A61060;
    }
L_08A61060:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2534u);
    ctx.gpr[31] = (0x08A6107Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A6107C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A61084;
    }
L_08A61084:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A610A0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A610A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A610A8;
    }
L_08A610A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2537u);
    ctx.gpr[31] = (0x08A610C4u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A610C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A610CC;
    }
L_08A610CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2539u);
    ctx.gpr[31] = (0x08A610E8u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A610E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A610F0;
    }
L_08A610F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6110Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A6110C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A61114;
    }
L_08A61114:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61130u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61130:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A61138;
    }
L_08A61138:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61154u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61154:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A6115C;
    }
L_08A6115C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61178u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A61180;
    }
L_08A61180:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2541u);
    ctx.gpr[31] = (0x08A6119Cu);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A6119C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A611A4;
    }
L_08A611A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A611C0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A611C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A60FA4;
      }
      goto L_08A611C8;
    }
L_08A611C8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A611DCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A611DCu) goto L_08A611DC;
    return;
L_08A611DC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A611E8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(-110));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(47) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A61408;
      }
      goto L_08A61210;
    }
L_08A61210:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-110));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24392)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6122C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 766u);
    ctx.gpr[31] = (0x08A61244u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A61244:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    goto L_08A61248;
L_08A61248:
    ctx.gpr[5] = (0u | 6u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[5]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.hi);
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08A61418;
      }
      goto L_08A61274;
    }
L_08A61274:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61418;
      }
      goto L_08A6127C;
    }
L_08A6127C:
    ctx.gpr[31] = (0x08A61284u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A61284u) goto L_08A61284;
    return;
L_08A61284:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(2096)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08A612B0;
      }
      goto L_08A61290;
    }
L_08A61290:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 768u);
    ctx.gpr[31] = (0x08A612A8u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A612A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61248;
      }
      goto L_08A612B0;
    }
L_08A612B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61418;
      }
      goto L_08A612B8;
    }
L_08A612B8:
    ctx.gpr[31] = (0x08A612C0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08A612C0u) goto L_08A612C0;
    return;
L_08A612C0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 62u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A61314;
      }
      goto L_08A612D4;
    }
L_08A612D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A61314;
      }
      goto L_08A612E4;
    }
L_08A612E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A61314;
      }
      goto L_08A612F4;
    }
L_08A612F4:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 771u);
    ctx.gpr[31] = (0x08A6130Cu);
    ctx.gpr[8] = (0u | 6u);
    goto L_08A60EE0;
L_08A6130C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6131C;
      }
      goto L_08A61314;
    }
L_08A61314:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61418;
      }
      goto L_08A6131C;
    }
L_08A6131C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61248;
      }
      goto L_08A61324;
    }
L_08A61324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61418;
      }
      goto L_08A6132C;
    }
L_08A6132C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 777u);
    ctx.gpr[31] = (0x08A61344u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A61344:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61248;
      }
      goto L_08A6134C;
    }
L_08A6134C:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 779u);
    ctx.gpr[31] = (0x08A61364u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A61364:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61248;
      }
      goto L_08A6136C;
    }
L_08A6136C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61418;
      }
      goto L_08A61374;
    }
L_08A61374:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61418;
      }
      goto L_08A6137C;
    }
L_08A6137C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11320)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A613B4;
      }
      goto L_08A6138C;
    }
L_08A6138C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11320)));
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11320), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(11320)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A613C8;
      }
      goto L_08A613AC;
    }
L_08A613AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A613D0;
      }
      goto L_08A613B4;
    }
L_08A613B4:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(11320), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61418;
      }
      goto L_08A613C8;
    }
L_08A613C8:
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(11320), static_cast<std::uint8_t>(0u));
    goto L_08A613D0;
L_08A613D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61418;
      }
      goto L_08A613D8;
    }
L_08A613D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61418;
      }
      goto L_08A613E0;
    }
L_08A613E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61418;
      }
      goto L_08A613E8;
    }
L_08A613E8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(2008));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[7] = (0u | 782u);
    ctx.gpr[31] = (0x08A61400u);
    ctx.gpr[8] = (0u | 6u);
    goto L_08A60EE0;
L_08A61400:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61248;
      }
      goto L_08A61408;
    }
L_08A61408:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A61418u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A61418u) goto L_08A61418;
    return;
L_08A61418:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6142C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (0u | 142u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 129u);
      if (branch_taken) {
          goto L_08A61484;
      }
      goto L_08A61450;
    }
L_08A61450:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[6] = (0u | 112u);
      if (branch_taken) {
          goto L_08A6148C;
      }
      goto L_08A61458;
    }
L_08A61458:
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A614B0;
      }
      goto L_08A61460;
    }
L_08A61460:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 4189u);
    ctx.gpr[31] = (0x08A61478u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A61478:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A614C8;
      }
      goto L_08A61484;
    }
L_08A61484:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A614E8;
      }
      goto L_08A6148C;
    }
L_08A6148C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 4191u);
    ctx.gpr[31] = (0x08A614A4u);
    ctx.gpr[8] = (0u | 5u);
    goto L_08A60EE0;
L_08A614A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A614C8;
      }
      goto L_08A614B0;
    }
L_08A614B0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A614C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A614C0u) goto L_08A614C0;
    return;
L_08A614C0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A614E8;
      }
      goto L_08A614C8;
    }
L_08A614C8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A614D8;
      }
      goto L_08A614D0;
    }
L_08A614D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A614D8;
      }
      goto L_08A614D8;
    }
L_08A614D8:
    ctx.gpr[5] = (ctx.gpr[4] << 3u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08A614E8;
L_08A614E8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A614F8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(-129));
    ctx.gpr[8] = (ctx.gpr[5] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61584;
      }
      goto L_08A61520;
    }
L_08A61520:
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24584)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A615AC;
      }
      goto L_08A61540;
    }
L_08A61540:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A615AC;
      }
      goto L_08A61548;
    }
L_08A61548:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A615AC;
      }
      goto L_08A61550;
    }
L_08A61550:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A615AC;
      }
      goto L_08A61558;
    }
L_08A61558:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 1390u);
    ctx.gpr[31] = (0x08A61570u);
    ctx.gpr[8] = (0u | 5u);
    goto L_08A60EE0;
L_08A61570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    ctx.gpr[16] = (ctx.gpr[4] & 1u);
      if (branch_taken) {
          goto L_08A61598;
      }
      goto L_08A6157C;
    }
L_08A6157C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (0u - ctx.gpr[16]);
      if (branch_taken) {
          goto L_08A61598;
      }
      goto L_08A61584;
    }
L_08A61584:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A61590u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A61590u) goto L_08A61590;
    return;
L_08A61590:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A615AC;
      }
      goto L_08A61598;
    }
L_08A61598:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08A615AC;
L_08A615AC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A615BC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A615CCu);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A615CCu) goto L_08A615CC;
    return;
L_08A615CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A615D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] & 65535u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 141 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 142 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A61644;
      }
      goto L_08A615FC;
    }
L_08A615FC:
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 140 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A6162C;
      }
      goto L_08A61608;
    }
L_08A61608:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 318u);
    ctx.gpr[31] = (0x08A61620u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A61620:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6166C;
      }
      goto L_08A6162C;
    }
L_08A6162C:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08A6163Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A6163Cu) goto L_08A6163C;
    return;
L_08A6163C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61688;
      }
      goto L_08A61644;
    }
L_08A61644:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A6162C;
      }
      goto L_08A6164C;
    }
L_08A6164C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 314u);
    ctx.gpr[31] = (0x08A61664u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A61664:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6166C;
L_08A6166C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (ctx.gpr[16] & 1u);
      if (branch_taken) {
          goto L_08A6167C;
      }
      goto L_08A61674;
    }
L_08A61674:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A6167C;
      }
      goto L_08A6167C;
    }
L_08A6167C:
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    goto L_08A61688;
L_08A61688:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61698:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08A616A8u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A616A8u) goto L_08A616A8;
    return;
L_08A616A8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A616B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A618EC;
      }
      goto L_08A616D8;
    }
L_08A616D8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24656)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A616F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3143u);
    ctx.gpr[31] = (0x08A6170Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A6170C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A61710;
L_08A61710:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61900;
      }
      goto L_08A61718;
    }
L_08A61718:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3148u);
    ctx.gpr[31] = (0x08A61734u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A61734:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61710;
      }
      goto L_08A6173C;
    }
L_08A6173C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3138u);
    ctx.gpr[31] = (0x08A61758u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A61758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61710;
      }
      goto L_08A61760;
    }
L_08A61760:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3127u);
    ctx.gpr[31] = (0x08A6177Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A6177C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61710;
      }
      goto L_08A61784;
    }
L_08A61784:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3134u);
    ctx.gpr[31] = (0x08A617A0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A617A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61710;
      }
      goto L_08A617A8;
    }
L_08A617A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3130u);
    ctx.gpr[31] = (0x08A617C4u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A617C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61710;
      }
      goto L_08A617CC;
    }
L_08A617CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3136u);
    ctx.gpr[31] = (0x08A617E8u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A617E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61710;
      }
      goto L_08A617F0;
    }
L_08A617F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3140u);
    ctx.gpr[31] = (0x08A6180Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A6180C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61710;
      }
      goto L_08A61814;
    }
L_08A61814:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61830u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61830:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61710;
      }
      goto L_08A61838;
    }
L_08A61838:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61854u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61710;
      }
      goto L_08A6185C;
    }
L_08A6185C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3145u);
    ctx.gpr[31] = (0x08A61878u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A61878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61710;
      }
      goto L_08A61880;
    }
L_08A61880:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6189Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A6189C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61710;
      }
      goto L_08A618A4;
    }
L_08A618A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A618C0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A618C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61710;
      }
      goto L_08A618C8;
    }
L_08A618C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A618E4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A618E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61710;
      }
      goto L_08A618EC;
    }
L_08A618EC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A61900u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A61900u) goto L_08A61900;
    return;
L_08A61900:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6190C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A61B1C;
      }
      goto L_08A61930;
    }
L_08A61930:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24816)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61948:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 905u);
    ctx.gpr[31] = (0x08A61964u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A61964:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A61968;
L_08A61968:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61B30;
      }
      goto L_08A61970;
    }
L_08A61970:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 909u);
    ctx.gpr[31] = (0x08A6198Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A6198C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61968;
      }
      goto L_08A61994;
    }
L_08A61994:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 911u);
    ctx.gpr[31] = (0x08A619B0u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A619B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61968;
      }
      goto L_08A619B8;
    }
L_08A619B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 916u);
    ctx.gpr[31] = (0x08A619D4u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A619D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61968;
      }
      goto L_08A619DC;
    }
L_08A619DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 898u);
    ctx.gpr[31] = (0x08A619F8u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A619F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61968;
      }
      goto L_08A61A00;
    }
L_08A61A00:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 901u);
    ctx.gpr[31] = (0x08A61A1Cu);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A61A1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61968;
      }
      goto L_08A61A24;
    }
L_08A61A24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 907u);
    ctx.gpr[31] = (0x08A61A40u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A61A40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61968;
      }
      goto L_08A61A48;
    }
L_08A61A48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61A64u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61A64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61968;
      }
      goto L_08A61A6C;
    }
L_08A61A6C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61A88u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61A88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61968;
      }
      goto L_08A61A90;
    }
L_08A61A90:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 914u);
    ctx.gpr[31] = (0x08A61AACu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A61AAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61968;
      }
      goto L_08A61AB4;
    }
L_08A61AB4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61AD0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61AD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61968;
      }
      goto L_08A61AD8;
    }
L_08A61AD8:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61968;
      }
      goto L_08A61AE8;
    }
L_08A61AE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 919u);
    ctx.gpr[31] = (0x08A61B04u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A61B04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61968;
      }
      goto L_08A61B0C;
    }
L_08A61B0C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61968;
      }
      goto L_08A61B1C;
    }
L_08A61B1C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A61B30u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A61B30u) goto L_08A61B30;
    return;
L_08A61B30:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61B3C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A61D94;
      }
      goto L_08A61B60;
    }
L_08A61B60:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(24976)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61B78:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 936u);
    ctx.gpr[31] = (0x08A61B94u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A61B94:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A61B98;
L_08A61B98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A61DA8;
      }
      goto L_08A61BA0;
    }
L_08A61BA0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 941u);
    ctx.gpr[31] = (0x08A61BBCu);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A61BBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61B98;
      }
      goto L_08A61BC4;
    }
L_08A61BC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 931u);
    ctx.gpr[31] = (0x08A61BE0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A61BE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61B98;
      }
      goto L_08A61BE8;
    }
L_08A61BE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 920u);
    ctx.gpr[31] = (0x08A61C04u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A61C04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61B98;
      }
      goto L_08A61C0C;
    }
L_08A61C0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 927u);
    ctx.gpr[31] = (0x08A61C28u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A61C28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61B98;
      }
      goto L_08A61C30;
    }
L_08A61C30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 923u);
    ctx.gpr[31] = (0x08A61C4Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A61C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61B98;
      }
      goto L_08A61C54;
    }
L_08A61C54:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 929u);
    ctx.gpr[31] = (0x08A61C70u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A61C70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61B98;
      }
      goto L_08A61C78;
    }
L_08A61C78:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61B98;
      }
      goto L_08A61C88;
    }
L_08A61C88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 933u);
    ctx.gpr[31] = (0x08A61CA4u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A61CA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61B98;
      }
      goto L_08A61CAC;
    }
L_08A61CAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61CC8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61CC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61B98;
      }
      goto L_08A61CD0;
    }
L_08A61CD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61CECu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61CEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61B98;
      }
      goto L_08A61CF4;
    }
L_08A61CF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 938u);
    ctx.gpr[31] = (0x08A61D10u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A61D10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61B98;
      }
      goto L_08A61D18;
    }
L_08A61D18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61D34u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61D34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61B98;
      }
      goto L_08A61D3C;
    }
L_08A61D3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61D58u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61D58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61B98;
      }
      goto L_08A61D60;
    }
L_08A61D60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61D7Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61D7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61B98;
      }
      goto L_08A61D84;
    }
L_08A61D84:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61B98;
      }
      goto L_08A61D94;
    }
L_08A61D94:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A61DA8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A61DA8u) goto L_08A61DA8;
    return;
L_08A61DA8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61DB4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A61FFC;
      }
      goto L_08A61DD8;
    }
L_08A61DD8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25136)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A61DF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2555u);
    ctx.gpr[31] = (0x08A61E0Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A61E0C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A61E10;
L_08A61E10:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62010;
      }
      goto L_08A61E18;
    }
L_08A61E18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2545u);
    ctx.gpr[31] = (0x08A61E34u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A61E34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61E10;
      }
      goto L_08A61E3C;
    }
L_08A61E3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2558u);
    ctx.gpr[31] = (0x08A61E58u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A61E58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61E10;
      }
      goto L_08A61E60;
    }
L_08A61E60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2553u);
    ctx.gpr[31] = (0x08A61E7Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A61E7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61E10;
      }
      goto L_08A61E84;
    }
L_08A61E84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2542u);
    ctx.gpr[31] = (0x08A61EA0u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A61EA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61E10;
      }
      goto L_08A61EA8;
    }
L_08A61EA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2549u);
    ctx.gpr[31] = (0x08A61EC4u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A61EC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61E10;
      }
      goto L_08A61ECC;
    }
L_08A61ECC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2551u);
    ctx.gpr[31] = (0x08A61EE8u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A61EE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61E10;
      }
      goto L_08A61EF0;
    }
L_08A61EF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61F0Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61F0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61E10;
      }
      goto L_08A61F14;
    }
L_08A61F14:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2560u);
    ctx.gpr[31] = (0x08A61F30u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A61F30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61E10;
      }
      goto L_08A61F38;
    }
L_08A61F38:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61F54u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61F54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61E10;
      }
      goto L_08A61F5C;
    }
L_08A61F5C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61F78u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61F78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61E10;
      }
      goto L_08A61F80;
    }
L_08A61F80:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61F9Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61E10;
      }
      goto L_08A61FA4;
    }
L_08A61FA4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A61FC0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A61FC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61E10;
      }
      goto L_08A61FC8;
    }
L_08A61FC8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2563u);
    ctx.gpr[31] = (0x08A61FE4u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A61FE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A61E10;
      }
      goto L_08A61FEC;
    }
L_08A61FEC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A61E10;
      }
      goto L_08A61FFC;
    }
L_08A61FFC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A62010u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A62010u) goto L_08A62010;
    return;
L_08A62010:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6201C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A62274;
      }
      goto L_08A62040;
    }
L_08A62040:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25296)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62058:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2578u);
    ctx.gpr[31] = (0x08A62074u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A62074:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A62078;
L_08A62078:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62288;
      }
      goto L_08A62080;
    }
L_08A62080:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2569u);
    ctx.gpr[31] = (0x08A6209Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A6209C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62078;
      }
      goto L_08A620A4;
    }
L_08A620A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2576u);
    ctx.gpr[31] = (0x08A620C0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A620C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62078;
      }
      goto L_08A620C8;
    }
L_08A620C8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2566u);
    ctx.gpr[31] = (0x08A620E4u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A620E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62078;
      }
      goto L_08A620EC;
    }
L_08A620EC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2572u);
    ctx.gpr[31] = (0x08A62108u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62108:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62078;
      }
      goto L_08A62110;
    }
L_08A62110:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2574u);
    ctx.gpr[31] = (0x08A6212Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A6212C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62078;
      }
      goto L_08A62134;
    }
L_08A62134:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62150u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62150:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62078;
      }
      goto L_08A62158;
    }
L_08A62158:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62174u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62174:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62078;
      }
      goto L_08A6217C;
    }
L_08A6217C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2581u);
    ctx.gpr[31] = (0x08A62198u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62198:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62078;
      }
      goto L_08A621A0;
    }
L_08A621A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2583u);
    ctx.gpr[31] = (0x08A621BCu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A621BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62078;
      }
      goto L_08A621C4;
    }
L_08A621C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A621E0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A621E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62078;
      }
      goto L_08A621E8;
    }
L_08A621E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62204u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62204:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62078;
      }
      goto L_08A6220C;
    }
L_08A6220C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62228u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62228:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62078;
      }
      goto L_08A62230;
    }
L_08A62230:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A62078;
      }
      goto L_08A62240;
    }
L_08A62240:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 2586u);
    ctx.gpr[31] = (0x08A6225Cu);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A6225C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62078;
      }
      goto L_08A62264;
    }
L_08A62264:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A62078;
      }
      goto L_08A62274;
    }
L_08A62274:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A62288u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A62288u) goto L_08A62288;
    return;
L_08A62288:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62294:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(38) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6244C;
      }
      goto L_08A622B8;
    }
L_08A622B8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25456)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A622D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1340u);
    ctx.gpr[31] = (0x08A622ECu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A622EC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A622F0;
L_08A622F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62460;
      }
      goto L_08A622F8;
    }
L_08A622F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1334u);
    ctx.gpr[31] = (0x08A62314u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62314:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A622F0;
      }
      goto L_08A6231C;
    }
L_08A6231C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1323u);
    ctx.gpr[31] = (0x08A62338u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A62338:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A622F0;
      }
      goto L_08A62340;
    }
L_08A62340:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1330u);
    ctx.gpr[31] = (0x08A6235Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A6235C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A622F0;
      }
      goto L_08A62364;
    }
L_08A62364:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1332u);
    ctx.gpr[31] = (0x08A62380u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A622F0;
      }
      goto L_08A62388;
    }
L_08A62388:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1336u);
    ctx.gpr[31] = (0x08A623A4u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A623A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A622F0;
      }
      goto L_08A623AC;
    }
L_08A623AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A623C8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A623C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A622F0;
      }
      goto L_08A623D0;
    }
L_08A623D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1342u);
    ctx.gpr[31] = (0x08A623ECu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A623EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A622F0;
      }
      goto L_08A623F4;
    }
L_08A623F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62410u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62410:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A622F0;
      }
      goto L_08A62418;
    }
L_08A62418:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A622F0;
      }
      goto L_08A62428;
    }
L_08A62428:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1345u);
    ctx.gpr[31] = (0x08A62444u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A62444:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A622F0;
      }
      goto L_08A6244C;
    }
L_08A6244C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A62460u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A62460u) goto L_08A62460;
    return;
L_08A62460:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6246C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A626A4;
      }
      goto L_08A62490;
    }
L_08A62490:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25608)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A624A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1389u);
    ctx.gpr[31] = (0x08A624C4u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A624C4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A624C8;
L_08A624C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A626B8;
      }
      goto L_08A624D0;
    }
L_08A624D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1381u);
    ctx.gpr[31] = (0x08A624ECu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A624EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A624C8;
      }
      goto L_08A624F4;
    }
L_08A624F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1379u);
    ctx.gpr[31] = (0x08A62510u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62510:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A624C8;
      }
      goto L_08A62518;
    }
L_08A62518:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1368u);
    ctx.gpr[31] = (0x08A62534u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A62534:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A624C8;
      }
      goto L_08A6253C;
    }
L_08A6253C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1375u);
    ctx.gpr[31] = (0x08A62558u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62558:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A624C8;
      }
      goto L_08A62560;
    }
L_08A62560:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1371u);
    ctx.gpr[31] = (0x08A6257Cu);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A6257C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A624C8;
      }
      goto L_08A62584;
    }
L_08A62584:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1377u);
    ctx.gpr[31] = (0x08A625A0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A625A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A624C8;
      }
      goto L_08A625A8;
    }
L_08A625A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A625C4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A625C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A624C8;
      }
      goto L_08A625CC;
    }
L_08A625CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1384u);
    ctx.gpr[31] = (0x08A625E8u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A625E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A624C8;
      }
      goto L_08A625F0;
    }
L_08A625F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1386u);
    ctx.gpr[31] = (0x08A6260Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A6260C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A624C8;
      }
      goto L_08A62614;
    }
L_08A62614:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62630u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A624C8;
      }
      goto L_08A62638;
    }
L_08A62638:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62654u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62654:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A624C8;
      }
      goto L_08A6265C;
    }
L_08A6265C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62678u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62678:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A624C8;
      }
      goto L_08A62680;
    }
L_08A62680:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6269Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A6269C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A624C8;
      }
      goto L_08A626A4;
    }
L_08A626A4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A626B8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A626B8u) goto L_08A626B8;
    return;
L_08A626B8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A626C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A628A0;
      }
      goto L_08A626E8;
    }
L_08A626E8:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25768)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62700:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1415u);
    ctx.gpr[31] = (0x08A6271Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A6271C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A62720;
L_08A62720:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A628B4;
      }
      goto L_08A62728;
    }
L_08A62728:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1417u);
    ctx.gpr[31] = (0x08A62744u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A62744:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62720;
      }
      goto L_08A6274C;
    }
L_08A6274C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1420u);
    ctx.gpr[31] = (0x08A62768u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62768:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62720;
      }
      goto L_08A62770;
    }
L_08A62770:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1404u);
    ctx.gpr[31] = (0x08A6278Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A6278C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62720;
      }
      goto L_08A62794;
    }
L_08A62794:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1411u);
    ctx.gpr[31] = (0x08A627B0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A627B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62720;
      }
      goto L_08A627B8;
    }
L_08A627B8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1407u);
    ctx.gpr[31] = (0x08A627D4u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A627D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62720;
      }
      goto L_08A627DC;
    }
L_08A627DC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1413u);
    ctx.gpr[31] = (0x08A627F8u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A627F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62720;
      }
      goto L_08A62800;
    }
L_08A62800:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6281Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A6281C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62720;
      }
      goto L_08A62824;
    }
L_08A62824:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62840u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62720;
      }
      goto L_08A62848;
    }
L_08A62848:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62864u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62720;
      }
      goto L_08A6286C;
    }
L_08A6286C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1422u);
    ctx.gpr[31] = (0x08A62888u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A62888:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62720;
      }
      goto L_08A62890;
    }
L_08A62890:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A62720;
      }
      goto L_08A628A0;
    }
L_08A628A0:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A628B4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A628B4u) goto L_08A628B4;
    return;
L_08A628B4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A628C0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A62AE4;
      }
      goto L_08A628E4;
    }
L_08A628E4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(25928)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A628FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1436u);
    ctx.gpr[31] = (0x08A62918u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62918:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A6291C;
L_08A6291C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62AF8;
      }
      goto L_08A62924;
    }
L_08A62924:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1434u);
    ctx.gpr[31] = (0x08A62940u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62940:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6291C;
      }
      goto L_08A62948;
    }
L_08A62948:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1426u);
    ctx.gpr[31] = (0x08A62964u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6291C;
      }
      goto L_08A6296C;
    }
L_08A6296C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1431u);
    ctx.gpr[31] = (0x08A62988u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A62988:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6291C;
      }
      goto L_08A62990;
    }
L_08A62990:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1428u);
    ctx.gpr[31] = (0x08A629ACu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A629AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6291C;
      }
      goto L_08A629B4;
    }
L_08A629B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1432u);
    ctx.gpr[31] = (0x08A629D0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A629D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6291C;
      }
      goto L_08A629D8;
    }
L_08A629D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A629F4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A629F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6291C;
      }
      goto L_08A629FC;
    }
L_08A629FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1438u);
    ctx.gpr[31] = (0x08A62A18u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62A18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6291C;
      }
      goto L_08A62A20;
    }
L_08A62A20:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1440u);
    ctx.gpr[31] = (0x08A62A3Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A62A3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6291C;
      }
      goto L_08A62A44;
    }
L_08A62A44:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62A60u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62A60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6291C;
      }
      goto L_08A62A68;
    }
L_08A62A68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62A84u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62A84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6291C;
      }
      goto L_08A62A8C;
    }
L_08A62A8C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A6291C;
      }
      goto L_08A62A9C;
    }
L_08A62A9C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1443u);
    ctx.gpr[31] = (0x08A62AB8u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A62AB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6291C;
      }
      goto L_08A62AC0;
    }
L_08A62AC0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62ADCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62ADC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A6291C;
      }
      goto L_08A62AE4;
    }
L_08A62AE4:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A62AF8u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A62AF8u) goto L_08A62AF8;
    return;
L_08A62AF8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62B04:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A62D38;
      }
      goto L_08A62B28;
    }
L_08A62B28:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26088)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62B40:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1454u);
    ctx.gpr[31] = (0x08A62B5Cu);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A62B5C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A62B60;
L_08A62B60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62D4C;
      }
      goto L_08A62B68;
    }
L_08A62B68:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1444u);
    ctx.gpr[31] = (0x08A62B84u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A62B84:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62B60;
      }
      goto L_08A62B8C;
    }
L_08A62B8C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1449u);
    ctx.gpr[31] = (0x08A62BA8u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A62BA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62B60;
      }
      goto L_08A62BB0;
    }
L_08A62BB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1447u);
    ctx.gpr[31] = (0x08A62BCCu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62BCC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62B60;
      }
      goto L_08A62BD4;
    }
L_08A62BD4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1452u);
    ctx.gpr[31] = (0x08A62BF0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62BF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62B60;
      }
      goto L_08A62BF8;
    }
L_08A62BF8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62C14u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62C14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62B60;
      }
      goto L_08A62C1C;
    }
L_08A62C1C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1455u);
    ctx.gpr[31] = (0x08A62C38u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A62C38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62B60;
      }
      goto L_08A62C40;
    }
L_08A62C40:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62C5Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62C5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62B60;
      }
      goto L_08A62C64;
    }
L_08A62C64:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1458u);
    ctx.gpr[31] = (0x08A62C80u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62C80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62B60;
      }
      goto L_08A62C88;
    }
L_08A62C88:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62CA4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62CA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62B60;
      }
      goto L_08A62CAC;
    }
L_08A62CAC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1460u);
    ctx.gpr[31] = (0x08A62CC8u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A62CC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62B60;
      }
      goto L_08A62CD0;
    }
L_08A62CD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62CECu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62CEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62B60;
      }
      goto L_08A62CF4;
    }
L_08A62CF4:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A62B60;
      }
      goto L_08A62D04;
    }
L_08A62D04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1463u);
    ctx.gpr[31] = (0x08A62D20u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A62D20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62B60;
      }
      goto L_08A62D28;
    }
L_08A62D28:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A62B60;
      }
      goto L_08A62D38;
    }
L_08A62D38:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A62D4Cu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A62D4Cu) goto L_08A62D4C;
    return;
L_08A62D4C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62D58:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A62F8C;
      }
      goto L_08A62D7C;
    }
L_08A62D7C:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26248)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62D94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1367u);
    ctx.gpr[31] = (0x08A62DB0u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A62DB0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A62DB4;
L_08A62DB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A62FA0;
      }
      goto L_08A62DBC;
    }
L_08A62DBC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1349u);
    ctx.gpr[31] = (0x08A62DD8u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A62DD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62DE0;
    }
L_08A62DE0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1357u);
    ctx.gpr[31] = (0x08A62DFCu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62DFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62E04;
    }
L_08A62E04:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1346u);
    ctx.gpr[31] = (0x08A62E20u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A62E20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62E28;
    }
L_08A62E28:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1353u);
    ctx.gpr[31] = (0x08A62E44u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62E44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62E4C;
    }
L_08A62E4C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1355u);
    ctx.gpr[31] = (0x08A62E68u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62E68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62E70;
    }
L_08A62E70:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1359u);
    ctx.gpr[31] = (0x08A62E8Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A62E8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62E94;
    }
L_08A62E94:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62EB0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62EB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62EB8;
    }
L_08A62EB8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1362u);
    ctx.gpr[31] = (0x08A62ED4u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A62ED4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62EDC;
    }
L_08A62EDC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1364u);
    ctx.gpr[31] = (0x08A62EF8u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A62EF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62F00;
    }
L_08A62F00:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62F1Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62F1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62F24;
    }
L_08A62F24:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62F40u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62F40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62F48;
    }
L_08A62F48:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A62F64u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A62F64:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62F6C;
    }
L_08A62F6C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62F7C;
    }
L_08A62F7C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A62DB4;
      }
      goto L_08A62F8C;
    }
L_08A62F8C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A62FA0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A62FA0u) goto L_08A62FA0;
    return;
L_08A62FA0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62FAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A631AC;
      }
      goto L_08A62FD0;
    }
L_08A62FD0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26408)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A62FE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3217u);
    ctx.gpr[31] = (0x08A63004u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A63004:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A63008;
L_08A63008:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A631C0;
      }
      goto L_08A63010;
    }
L_08A63010:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3213u);
    ctx.gpr[31] = (0x08A6302Cu);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A6302C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63008;
      }
      goto L_08A63034;
    }
L_08A63034:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3207u);
    ctx.gpr[31] = (0x08A63050u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63050:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63008;
      }
      goto L_08A63058;
    }
L_08A63058:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3203u);
    ctx.gpr[31] = (0x08A63074u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63074:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63008;
      }
      goto L_08A6307C;
    }
L_08A6307C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3199u);
    ctx.gpr[31] = (0x08A63098u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A63098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63008;
      }
      goto L_08A630A0;
    }
L_08A630A0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3196u);
    ctx.gpr[31] = (0x08A630BCu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A630BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63008;
      }
      goto L_08A630C4;
    }
L_08A630C4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3205u);
    ctx.gpr[31] = (0x08A630E0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A630E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63008;
      }
      goto L_08A630E8;
    }
L_08A630E8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3209u);
    ctx.gpr[31] = (0x08A63104u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63104:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63008;
      }
      goto L_08A6310C;
    }
L_08A6310C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3211u);
    ctx.gpr[31] = (0x08A63128u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63128:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63008;
      }
      goto L_08A63130;
    }
L_08A63130:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6314Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A6314C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63008;
      }
      goto L_08A63154;
    }
L_08A63154:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63170u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63170:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63008;
      }
      goto L_08A63178;
    }
L_08A63178:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3193u);
    ctx.gpr[31] = (0x08A63194u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A63194:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63008;
      }
      goto L_08A6319C;
    }
L_08A6319C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A63008;
      }
      goto L_08A631AC;
    }
L_08A631AC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A631C0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A631C0u) goto L_08A631C0;
    return;
L_08A631C0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A631CC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A633B8;
      }
      goto L_08A631F0;
    }
L_08A631F0:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26568)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63208:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3190u);
    ctx.gpr[31] = (0x08A63224u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A63224:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A63228;
L_08A63228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A633CC;
      }
      goto L_08A63230;
    }
L_08A63230:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3179u);
    ctx.gpr[31] = (0x08A6324Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A6324C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63228;
      }
      goto L_08A63254;
    }
L_08A63254:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3183u);
    ctx.gpr[31] = (0x08A63270u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63228;
      }
      goto L_08A63278;
    }
L_08A63278:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3185u);
    ctx.gpr[31] = (0x08A63294u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A63294:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63228;
      }
      goto L_08A6329C;
    }
L_08A6329C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3175u);
    ctx.gpr[31] = (0x08A632B8u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A632B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63228;
      }
      goto L_08A632C0;
    }
L_08A632C0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3172u);
    ctx.gpr[31] = (0x08A632DCu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A632DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63228;
      }
      goto L_08A632E4;
    }
L_08A632E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3181u);
    ctx.gpr[31] = (0x08A63300u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63300:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63228;
      }
      goto L_08A63308;
    }
L_08A63308:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3188u);
    ctx.gpr[31] = (0x08A63324u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63324:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63228;
      }
      goto L_08A6332C;
    }
L_08A6332C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63348u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63348:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63228;
      }
      goto L_08A63350;
    }
L_08A63350:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6336Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A6336C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63228;
      }
      goto L_08A63374;
    }
L_08A63374:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A63228;
      }
      goto L_08A63384;
    }
L_08A63384:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3193u);
    ctx.gpr[31] = (0x08A633A0u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A633A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63228;
      }
      goto L_08A633A8;
    }
L_08A633A8:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A63228;
      }
      goto L_08A633B8;
    }
L_08A633B8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A633CCu);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A633CCu) goto L_08A633CC;
    return;
L_08A633CC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A633D8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6360C;
      }
      goto L_08A633FC;
    }
L_08A633FC:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26728)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63414:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3237u);
    ctx.gpr[31] = (0x08A63430u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A63430:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A63434;
L_08A63434:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63620;
      }
      goto L_08A6343C;
    }
L_08A6343C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3235u);
    ctx.gpr[31] = (0x08A63458u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63458:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63434;
      }
      goto L_08A63460;
    }
L_08A63460:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3226u);
    ctx.gpr[31] = (0x08A6347Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A6347C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63434;
      }
      goto L_08A63484;
    }
L_08A63484:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3230u);
    ctx.gpr[31] = (0x08A634A0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A634A0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63434;
      }
      goto L_08A634A8;
    }
L_08A634A8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3220u);
    ctx.gpr[31] = (0x08A634C4u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A634C4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63434;
      }
      goto L_08A634CC;
    }
L_08A634CC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3223u);
    ctx.gpr[31] = (0x08A634E8u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A634E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63434;
      }
      goto L_08A634F0;
    }
L_08A634F0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3228u);
    ctx.gpr[31] = (0x08A6350Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A6350C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63434;
      }
      goto L_08A63514;
    }
L_08A63514:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63530u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63530:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63434;
      }
      goto L_08A63538;
    }
L_08A63538:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3232u);
    ctx.gpr[31] = (0x08A63554u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A63554:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63434;
      }
      goto L_08A6355C;
    }
L_08A6355C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63578u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63578:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63434;
      }
      goto L_08A63580;
    }
L_08A63580:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A6359Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A6359C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63434;
      }
      goto L_08A635A4;
    }
L_08A635A4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A635C0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A635C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63434;
      }
      goto L_08A635C8;
    }
L_08A635C8:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A63434;
      }
      goto L_08A635D8;
    }
L_08A635D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A635F4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A635F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63434;
      }
      goto L_08A635FC;
    }
L_08A635FC:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A63434;
      }
      goto L_08A6360C;
    }
L_08A6360C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A63620u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A63620u) goto L_08A63620;
    return;
L_08A63620:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6362C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A6382C;
      }
      goto L_08A63650;
    }
L_08A63650:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(26888)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63668:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3257u);
    ctx.gpr[31] = (0x08A63684u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63684:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A63688;
L_08A63688:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63840;
      }
      goto L_08A63690;
    }
L_08A63690:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3259u);
    ctx.gpr[31] = (0x08A636ACu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A636AC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63688;
      }
      goto L_08A636B4;
    }
L_08A636B4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3251u);
    ctx.gpr[31] = (0x08A636D0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A636D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63688;
      }
      goto L_08A636D8;
    }
L_08A636D8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3247u);
    ctx.gpr[31] = (0x08A636F4u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A636F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63688;
      }
      goto L_08A636FC;
    }
L_08A636FC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3240u);
    ctx.gpr[31] = (0x08A63718u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A63718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63688;
      }
      goto L_08A63720;
    }
L_08A63720:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3243u);
    ctx.gpr[31] = (0x08A6373Cu);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A6373C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63688;
      }
      goto L_08A63744;
    }
L_08A63744:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3249u);
    ctx.gpr[31] = (0x08A63760u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63760:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63688;
      }
      goto L_08A63768;
    }
L_08A63768:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3253u);
    ctx.gpr[31] = (0x08A63784u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A63784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63688;
      }
      goto L_08A6378C;
    }
L_08A6378C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A637A8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A637A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63688;
      }
      goto L_08A637B0;
    }
L_08A637B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A637CCu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A637CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63688;
      }
      goto L_08A637D4;
    }
L_08A637D4:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A63688;
      }
      goto L_08A637E4;
    }
L_08A637E4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3262u);
    ctx.gpr[31] = (0x08A63800u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A63800:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63688;
      }
      goto L_08A63808;
    }
L_08A63808:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63824u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63824:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63688;
      }
      goto L_08A6382C;
    }
L_08A6382C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A63840u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A63840u) goto L_08A63840;
    return;
L_08A63840:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A6384C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A63A4C;
      }
      goto L_08A63870;
    }
L_08A63870:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27048)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63888:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3281u);
    ctx.gpr[31] = (0x08A638A4u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A638A4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A638A8;
L_08A638A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63A60;
      }
      goto L_08A638B0;
    }
L_08A638B0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3279u);
    ctx.gpr[31] = (0x08A638CCu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A638CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A638A8;
      }
      goto L_08A638D4;
    }
L_08A638D4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3274u);
    ctx.gpr[31] = (0x08A638F0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A638F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A638A8;
      }
      goto L_08A638F8;
    }
L_08A638F8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3270u);
    ctx.gpr[31] = (0x08A63914u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A638A8;
      }
      goto L_08A6391C;
    }
L_08A6391C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3263u);
    ctx.gpr[31] = (0x08A63938u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A63938:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A638A8;
      }
      goto L_08A63940;
    }
L_08A63940:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3266u);
    ctx.gpr[31] = (0x08A6395Cu);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A6395C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A638A8;
      }
      goto L_08A63964;
    }
L_08A63964:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3272u);
    ctx.gpr[31] = (0x08A63980u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63980:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A638A8;
      }
      goto L_08A63988;
    }
L_08A63988:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3276u);
    ctx.gpr[31] = (0x08A639A4u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A639A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A638A8;
      }
      goto L_08A639AC;
    }
L_08A639AC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A639C8u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A639C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A638A8;
      }
      goto L_08A639D0;
    }
L_08A639D0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A639ECu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A639EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A638A8;
      }
      goto L_08A639F4;
    }
L_08A639F4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 3284u);
    ctx.gpr[31] = (0x08A63A10u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A63A10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A638A8;
      }
      goto L_08A63A18;
    }
L_08A63A18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63A34u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63A34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A638A8;
      }
      goto L_08A63A3C;
    }
L_08A63A3C:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A638A8;
      }
      goto L_08A63A4C;
    }
L_08A63A4C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A63A60u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A63A60u) goto L_08A63A60;
    return;
L_08A63A60:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63A6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A63C90;
      }
      goto L_08A63A90;
    }
L_08A63A90:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27208)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63AA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 953u);
    ctx.gpr[31] = (0x08A63AC4u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63AC4:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A63AC8;
L_08A63AC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63CA4;
      }
      goto L_08A63AD0;
    }
L_08A63AD0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 944u);
    ctx.gpr[31] = (0x08A63AECu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A63AEC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63AC8;
      }
      goto L_08A63AF4;
    }
L_08A63AF4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 957u);
    ctx.gpr[31] = (0x08A63B10u);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A63B10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63AC8;
      }
      goto L_08A63B18;
    }
L_08A63B18:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 965u);
    ctx.gpr[31] = (0x08A63B34u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A63B34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63AC8;
      }
      goto L_08A63B3C;
    }
L_08A63B3C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 955u);
    ctx.gpr[31] = (0x08A63B58u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63B58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63AC8;
      }
      goto L_08A63B60;
    }
L_08A63B60:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 951u);
    ctx.gpr[31] = (0x08A63B7Cu);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63B7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63AC8;
      }
      goto L_08A63B84;
    }
L_08A63B84:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 947u);
    ctx.gpr[31] = (0x08A63BA0u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A63BA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63AC8;
      }
      goto L_08A63BA8;
    }
L_08A63BA8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63BC4u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63BC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63AC8;
      }
      goto L_08A63BCC;
    }
L_08A63BCC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 960u);
    ctx.gpr[31] = (0x08A63BE8u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63BE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63AC8;
      }
      goto L_08A63BF0;
    }
L_08A63BF0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 962u);
    ctx.gpr[31] = (0x08A63C0Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A63C0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63AC8;
      }
      goto L_08A63C14;
    }
L_08A63C14:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63C30u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63C30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63AC8;
      }
      goto L_08A63C38;
    }
L_08A63C38:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63C54u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63C54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63AC8;
      }
      goto L_08A63C5C;
    }
L_08A63C5C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63C78u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63C78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63AC8;
      }
      goto L_08A63C80;
    }
L_08A63C80:
    ctx.gpr[4] = (0u | 5662u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 5662u);
      if (branch_taken) {
          goto L_08A63AC8;
      }
      goto L_08A63C90;
    }
L_08A63C90:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A63CA4u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 177u, 0x08A6CAECu>(ctx, &aot_mem) && ctx.pc == 0x08A63CA4u) goto L_08A63CA4;
    return;
L_08A63CA4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63CB0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-118));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(40) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          goto L_08A63F54;
      }
      goto L_08A63CD4;
    }
L_08A63CD4:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27368)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63CEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1012u);
    ctx.gpr[31] = (0x08A63D08u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A63D08:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A63D0C;
L_08A63D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A63F68;
      }
      goto L_08A63D14;
    }
L_08A63D14:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1007u);
    ctx.gpr[31] = (0x08A63D30u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63D30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63D38;
    }
L_08A63D38:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 994u);
    ctx.gpr[31] = (0x08A63D54u);
    ctx.gpr[8] = (0u | 4u);
    goto L_08A60EE0;
L_08A63D54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63D5C;
    }
L_08A63D5C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1002u);
    ctx.gpr[31] = (0x08A63D78u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63D78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63D80;
    }
L_08A63D80:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 991u);
    ctx.gpr[31] = (0x08A63D9Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A63D9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63DA4;
    }
L_08A63DA4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 998u);
    ctx.gpr[31] = (0x08A63DC0u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63DC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63DC8;
    }
L_08A63DC8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1000u);
    ctx.gpr[31] = (0x08A63DE4u);
    ctx.gpr[8] = (0u | 2u);
    goto L_08A60EE0;
L_08A63DE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63DEC;
    }
L_08A63DEC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63E08u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63E08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63E10;
    }
L_08A63E10:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1004u);
    ctx.gpr[31] = (0x08A63E2Cu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A63E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63E34;
    }
L_08A63E34:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63E50u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63E50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63E58;
    }
L_08A63E58:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63E74u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63E74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63E7C;
    }
L_08A63E7C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63E98u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63E98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63EA0;
    }
L_08A63EA0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1009u);
    ctx.gpr[31] = (0x08A63EBCu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A63EBC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63EC4;
    }
L_08A63EC4:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63EE0u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63EE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63EE8;
    }
L_08A63EE8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63F04u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63F04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63F0C;
    }
L_08A63F0C:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63F28u);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63F28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63F30;
    }
L_08A63F30:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 5662u);
    ctx.gpr[31] = (0x08A63F4Cu);
    ctx.gpr[8] = (0u | 0u);
    goto L_08A60EE0;
L_08A63F4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63D0C;
      }
      goto L_08A63F54;
    }
L_08A63F54:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08A63F68u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0154_entry, 154u, 190u, 0x08A6CBD4u>(ctx, &aot_mem) && ctx.pc == 0x08A63F68u) goto L_08A63F68;
    return;
L_08A63F68:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63F74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[6] & 65535u);
    ctx.gpr[8] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(-119));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (ctx.gpr[6] < static_cast<std::uint32_t>(39) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 26u, 0x08A641BCu>(ctx, &aot_mem); return;
      }
      goto L_08A63F98;
    }
L_08A63F98:
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[6]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(27528)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A63FB0:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1026u);
    ctx.gpr[31] = (0x08A63FCCu);
    ctx.gpr[8] = (0u | 3u);
    goto L_08A60EE0;
L_08A63FCC:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    goto L_08A63FD0;
L_08A63FD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0152_entry, 152u, 27u, 0x08A641D0u>(ctx, &aot_mem); return;
      }
      goto L_08A63FD8;
    }
L_08A63FD8:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (0u | 1034u);
    ctx.gpr[31] = (0x08A63FF4u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08A60EE0;
L_08A63FF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08A63FD0;
      }
      goto L_08A63FFC;
    }
L_08A63FFC:
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(2008));
    ctx.pc = 0x08A64000u; return;
}

void recomp_unit_0151(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0151_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_151(Runtime &runtime) {
    runtime.register_generated_unit(151u, 0x08A60000u, 16384u, &recomp_unit_0151, &recomp_unit_0151_entry);
    runtime.register_function(0x08A60000u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60004u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60010u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60020u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60028u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60034u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60044u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6004Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60058u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60088u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60094u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6009Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A600E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60104u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60114u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60134u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60140u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60148u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60150u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60158u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60164u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6016Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60174u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6017Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60188u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60190u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A601F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60200u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6020Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60214u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60224u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60234u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60264u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6026Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A602F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6031Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6032Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6035Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6036Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60384u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60394u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A603FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6046Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60474u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60490u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60498u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A604FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60504u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60514u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60524u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6058Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60594u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A605FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6060Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60620u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60644u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6065Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6067Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60684u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60690u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60698u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A606D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6070Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6071Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60734u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60740u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60750u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60764u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60794u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A607D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60804u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60818u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60828u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60848u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60880u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60888u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6088Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A608F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60900u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60954u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6095Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60960u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6097Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A609F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60A7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60AACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60AC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60AD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60AF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60B8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60BDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60C74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60CD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60D98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60DF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60E94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60ECCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60EF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60F84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A60FF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61010u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61018u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61034u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6103Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61058u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61060u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6107Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61084u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A610F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6110Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61114u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61130u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61138u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61154u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6115Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61178u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61180u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6119Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A611E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61210u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6122Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61244u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61248u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61274u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6127Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61284u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61290u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A612F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6130Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61314u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6131Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61324u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6132Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61344u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6134Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61364u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6136Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61374u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6137Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6138Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A613E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61400u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61408u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61418u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6142Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61450u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61458u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61460u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61478u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61484u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6148Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A614F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61520u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61538u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61540u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61548u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61550u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61558u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61570u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6157Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61584u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61590u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61598u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A615FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61608u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61620u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6162Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6163Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61644u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6164Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61664u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6166Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61674u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6167Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61688u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61698u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A616F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6170Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61710u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61718u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61734u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6173Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61758u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61760u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6177Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61784u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A617F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6180Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61814u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61830u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61838u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61854u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6185Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61878u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61880u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6189Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A618ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61900u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6190Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61930u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61948u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61964u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61968u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61970u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6198Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61994u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A619F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61A90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61AE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61B98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61BE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61C88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61CF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61D94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61DF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61E84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61ECCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61EF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61F9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A61FFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62010u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6201Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62040u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62058u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62074u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62078u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62080u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6209Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A620ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62108u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62110u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6212Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62134u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62150u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62158u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62174u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6217Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62198u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A621E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62204u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6220Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62228u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62230u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62240u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6225Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62264u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62274u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62288u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62294u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A622F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62314u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6231Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62338u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62340u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6235Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62364u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62380u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62388u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A623F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62410u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62418u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62428u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62444u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6244Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62460u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6246Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62490u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A624F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62510u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62518u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62534u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6253Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62558u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62560u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6257Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62584u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A625F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6260Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62614u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62630u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62638u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62654u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6265Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62678u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62680u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6269Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A626E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62700u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6271Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62720u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62728u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62744u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6274Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62768u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62770u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6278Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62794u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A627F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62800u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6281Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62824u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62840u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62848u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62864u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6286Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62888u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62890u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A628FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62918u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6291Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62924u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62940u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62948u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62964u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6296Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62988u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62990u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A629FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62A9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62ADCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62AF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62B8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BCCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62BF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62C88u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62CF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62D94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DB4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62DFCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E20u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E44u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E70u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62E94u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EB8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62ED4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EDCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62EF8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F00u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F1Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F24u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F40u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F48u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F64u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62F8Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A62FE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63004u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63008u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63010u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6302Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63034u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63050u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63058u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63074u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6307Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63098u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630BCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630E0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A630E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63104u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6310Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63128u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63130u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6314Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63154u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63170u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63178u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63194u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6319Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A631F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63208u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63224u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63228u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63230u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6324Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63254u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63270u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63278u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63294u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6329Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632DCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A632E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63300u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63308u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63324u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6332Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63348u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63350u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6336Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63374u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63384u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633B8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A633FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63414u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63430u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63434u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6343Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63458u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63460u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6347Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63484u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634A0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634C4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634E8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A634F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6350Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63514u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63530u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63538u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63554u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6355Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63578u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63580u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6359Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635C0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A635FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6360Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63620u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6362Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63650u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63668u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63684u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63688u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63690u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636B4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636D8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A636FCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63718u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63720u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6373Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63744u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63760u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63768u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63784u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6378Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A637E4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63800u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63808u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63824u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6382Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63840u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6384Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63870u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63888u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638A8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638B0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638CCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638D4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638F0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A638F8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63914u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6391Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63938u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63940u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A6395Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63964u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63980u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63988u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639A4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639ACu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639C8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639D0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639ECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A639F4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A6Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63A90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63AF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B18u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B3Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B60u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63B84u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BA8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BCCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63BF0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63C90u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CD4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63CECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D14u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D38u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D5Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D78u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D80u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63D9Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DA4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DC0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DC8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DE4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63DECu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E08u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E10u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E2Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E34u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E50u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E58u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E7Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63E98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EA0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EBCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EC4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EE0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63EE8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F04u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F0Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F28u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F30u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F4Cu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F54u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F68u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F74u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63F98u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FB0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FCCu, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FD0u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FD8u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FF4u, &recomp_unit_0151, "recomp_unit_0151");
    runtime.register_function(0x08A63FFCu, &recomp_unit_0151, "recomp_unit_0151");
}
} // namespace psprecomp
