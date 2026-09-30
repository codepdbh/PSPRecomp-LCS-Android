#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0167[4094] = {
    1, 0, 0, 0, 0, 0, 0, 2, 0, 3, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 0, 0, 0, 7, 0, 8, 0, 9, 0, 0, 0, 0,
    0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 11, 0, 12, 0, 0, 13, 0, 0, 0, 14, 0, 0, 15, 0, 0, 16, 0, 0, 17, 18, 0, 19,
    20, 0, 0, 0, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 24, 25, 0, 26, 0, 27, 28, 0, 0, 29, 0, 0, 0, 30, 0, 0, 31, 0,
    32, 0, 33, 0, 34, 0, 0, 0, 0, 35, 36, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 37, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 40, 0, 0,
    41, 0, 42, 0, 43, 0, 44, 0, 45, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 50, 0, 0, 0, 0, 0, 51, 0, 0, 0,
    52, 0, 0, 0, 53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 56, 0, 0, 0, 57, 0, 0, 0, 58, 0, 0, 59, 0, 60, 0, 0,
    0, 0, 61, 0, 62, 0, 63, 0, 0, 0, 64, 0, 0, 0, 0, 65, 0, 0, 0, 0, 0, 0, 0, 0, 0, 66, 0, 0, 67, 0, 0, 0,
    68, 0, 0, 0, 69, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 0, 0, 75, 0, 0, 0, 0, 76,
    0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 82, 0, 0, 0, 0, 83, 0,
    0, 0, 0, 84, 0, 0, 0, 85, 86, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 0, 0, 0, 92, 0, 0, 0, 0, 93, 0, 0, 0,
    0, 0, 0, 0, 0, 94, 0, 95, 0, 96, 0, 0, 0, 97, 0, 0, 98, 99, 0, 0, 0, 0, 100, 0, 0, 0, 0, 101, 102, 0, 103, 0,
    0, 0, 104, 0, 0, 0, 0, 105, 0, 0, 0, 0, 0, 106, 0, 107, 0, 0, 0, 0, 0, 108, 0, 0, 0, 0, 109, 110, 0, 0, 0, 0,
    0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 0, 0, 113, 0, 0, 114, 0,
    0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 0, 0, 120, 0, 0, 121, 0, 0, 122, 0, 0, 123, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 128, 0, 129, 0, 0, 130, 0, 0, 0, 131, 0, 0, 132, 0, 133, 0,
    134, 0, 0, 135, 0, 136, 0, 137, 0, 0, 138, 0, 0, 139, 0, 0, 140, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 144, 0, 0, 0, 145,
    0, 146, 0, 147, 0, 0, 148, 0, 149, 0, 150, 0, 0, 151, 0, 0, 152, 0, 0, 153, 154, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 158, 0, 159, 0, 160, 0, 0, 161, 0, 162, 0, 163, 0, 0, 164, 0, 0, 165,
    0, 166, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 171, 0, 172, 0,
    173, 0, 0, 174, 0, 175, 0, 176, 0, 0, 177, 0, 0, 178, 0, 179, 180, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 181,
    0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 184, 0, 185, 0, 186, 0, 0, 187, 0, 188, 0, 189, 0, 0, 190, 0, 0, 191, 0, 0, 192, 193,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 197, 0, 0, 0, 0, 0, 198, 0, 0,
    0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 202, 0, 203, 0, 0, 204, 0, 0,
    0, 205, 0, 206, 0, 207, 0, 0, 208, 0, 209, 0, 210, 0, 0, 211, 0, 0, 212, 0, 0, 213, 214, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 216, 0, 217, 0, 0, 0, 218, 0, 219, 0, 0, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0, 223,
    0, 224, 0, 225, 0, 0, 226, 0, 227, 0, 228, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 234, 0, 0,
    0, 0, 0, 235, 0, 236, 237, 0, 0, 238, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 243, 0, 0, 0, 244, 0, 245, 0, 246, 0, 0, 0,
    0, 0, 0, 247, 0, 248, 0, 0, 0, 249, 0, 0, 0, 250, 0, 251, 0, 252, 253, 0, 0, 0, 0, 254, 0, 255, 0, 256, 0, 0, 0, 0,
    0, 0, 257, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 0, 262, 0, 263, 0, 264, 0, 0, 0, 0, 265, 0, 0, 0, 266,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 267, 0, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 269,
    0, 270, 271, 0, 272, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 275, 276, 0, 0, 0, 277,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 0, 0, 0, 279, 0, 280, 0,
    0, 281, 0, 0, 282, 0, 283, 0, 284, 0, 285, 0, 286, 0, 0, 287, 0, 0, 0, 0, 0, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0,
    0, 293, 0, 0, 0, 294, 0, 295, 0, 296, 0, 297, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0,
    0, 300, 0, 0, 301, 0, 0, 0, 302, 0, 0, 303, 304, 0, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 307, 0, 0, 0, 308, 0, 309,
    0, 0, 0, 0, 0, 0, 0, 0, 310, 0, 311, 0, 312, 0, 0, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 315, 0, 316, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 317, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 318, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 322, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 0, 326, 0, 0, 0, 327, 328, 0, 329, 0, 0, 330, 0, 0, 331, 0, 0, 0, 0,
    0, 0, 332, 333, 334, 0, 335, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 336, 0, 0, 0, 337, 0, 0, 338, 0, 0, 339, 0, 0, 0, 0,
    340, 0, 341, 0, 0, 0, 342, 0, 0, 0, 343, 344, 0, 345, 346, 0, 347, 0, 0, 0, 0, 0, 348, 349, 350, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 351, 0, 352, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 355, 0, 356, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 359,
    0, 0, 0, 360, 361, 0, 362, 363, 0, 364, 0, 0, 0, 0, 0, 365, 366, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0,
    369, 0, 0, 0, 370, 0, 0, 371, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 372, 0, 373, 0, 0, 0, 374, 0, 0, 0, 375, 0, 0, 0,
    0, 376, 0, 0, 0, 0, 0, 0, 0, 0, 0, 377, 0, 0, 0, 0, 0, 378, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0,
    381, 0, 382, 0, 0, 383, 0, 384, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    388, 0, 0, 0, 389, 0, 390, 0, 391, 0, 0, 0, 392, 0, 393, 394, 0, 0, 0, 0, 0, 0, 0, 395, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 396, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 397, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 399, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 400, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 401, 0, 0, 0, 0, 0, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0,
    0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 407, 0, 0, 408, 0, 409, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 410, 0, 411, 0, 412, 0, 413, 0, 0, 414, 0, 0, 0, 0, 0, 415, 0, 0, 416, 0, 417, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 418, 0, 419, 0, 420, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 0, 0,
    423, 424, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 426, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 427, 0, 428, 0, 429, 0, 430, 0, 431, 0, 432, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 433, 0, 0, 0, 0, 0, 0, 434, 0, 435, 0, 0, 0, 0, 436, 0, 437, 0, 0, 0, 0, 0, 438, 0, 439, 0, 440, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 445, 0, 0, 0, 0, 446, 0, 0,
    0, 0, 0, 0, 0, 0, 447, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 450, 0, 0, 0, 451, 0, 0, 0, 0, 0, 452, 0, 453, 0, 454,
    0, 455, 0, 0, 0, 0, 456, 0, 0, 0, 0, 0, 0, 0, 0, 0, 457, 0, 0, 458, 0, 0, 459, 0, 0, 0, 0, 460, 0, 0, 461, 0,
    0, 462, 0, 0, 0, 463, 0, 464, 0, 0, 465, 0, 0, 0, 466, 0, 467, 0, 468, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 469, 470, 0,
    471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 473, 474, 0, 475, 0, 476, 0, 477, 0, 0, 0, 0, 0, 0, 478, 0, 0, 479, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 480, 0, 0, 0, 481, 0, 482, 0, 0, 483, 0, 0, 484, 0, 485, 0, 486, 0, 0, 0, 0, 487, 0, 0, 488, 0,
    0, 0, 489, 0, 490, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 494, 0, 0, 0, 495, 0, 0, 0, 496, 0,
    0, 0, 0, 497, 0, 498, 0, 499, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502,
    0, 0, 0, 503, 0, 0, 504, 0, 0, 505, 0, 0, 506, 507, 0, 508, 509, 510, 0, 511, 0, 0, 0, 0, 0, 0, 0, 512, 0, 0, 513, 0,
    0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 518, 0, 519, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 520, 0, 0, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 523, 0, 524, 0, 0, 0, 0, 0, 0, 0,
    525, 0, 0, 0, 526, 0, 0, 0, 0, 0, 527, 0, 528, 0, 529, 0, 530, 0, 531, 0, 532, 0, 0, 0, 0, 533, 0, 0, 0, 0, 534, 0,
    0, 0, 0, 0, 535, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0, 538, 0, 0, 539, 0, 540, 0, 0, 0, 0, 0, 541,
    0, 0, 0, 0, 0, 0, 0, 0, 542, 0, 0, 0, 0, 543, 0, 544, 0, 545, 0, 546, 0, 547, 0, 0, 0, 548, 0, 0, 0, 0, 0, 549,
    0, 550, 0, 0, 551, 0, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 0, 0, 0, 0, 554, 0, 555, 0, 556, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 557, 0, 0, 558, 0, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 0, 562, 0, 0, 0, 0, 0, 563, 0, 0,
    0, 564, 0, 565, 0, 566, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    570, 0, 571, 0, 572, 0, 573, 0, 0, 0, 0, 0, 0, 0, 0, 0, 574, 0, 575, 0, 0, 576, 0, 0, 577, 0, 0, 0, 0, 578, 0, 0,
    579, 0, 0, 0, 580, 0, 581, 0, 0, 0, 582, 0, 583, 0, 0, 0, 584, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 587, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 588, 0, 0, 589, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 590, 0, 591, 0, 592, 0, 593, 0, 594, 0, 595, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 596, 0, 0, 0, 0, 0, 0, 597, 0, 598, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 599, 0, 600, 0, 0, 0, 0, 0,
    0, 0, 601, 0, 0, 0, 602, 0, 0, 0, 0, 603, 0, 604, 0, 605, 0, 606, 607, 0, 0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 610,
    0, 611, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 612, 0, 0, 613, 0, 0, 614, 0, 615, 0, 0, 0, 0, 0, 616, 0, 0, 0, 0, 0,
    0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 0, 619, 0, 620, 0, 621, 0, 622, 0, 0, 0, 0, 623, 0, 0, 0, 0, 624, 0, 625,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 626, 0, 0, 627, 0, 628, 0, 629, 0, 0, 0, 630, 0, 0, 631, 0, 0, 0, 632, 0, 0, 0,
    0, 0, 633, 0, 0, 0, 634, 0, 635, 0, 636, 0, 637, 0, 0, 0, 0, 638, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 639, 0, 640, 0, 0, 641, 0, 642, 0, 643, 0, 644, 0, 645, 0, 646, 0, 647, 0, 0, 0, 648, 0, 0, 649, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 650, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 651, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0,
    0, 654, 0, 0, 0, 0, 0, 655, 0, 0, 656, 0, 0, 0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 0, 0, 659, 0, 0, 660, 0, 0, 0,
    0, 0, 661, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0,
    668, 0, 0, 0, 0, 0, 669, 0, 0, 670, 0, 0, 0, 0, 0, 0, 0, 0, 0, 671, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 672, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 673, 0, 0, 0, 674, 0, 0, 0, 0, 0, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 0, 0, 0,
    0, 677, 0, 0, 678, 0, 0, 0, 0, 0, 0, 0, 0, 679, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 681, 0, 682, 0, 0, 683, 0, 0,
    684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688, 0, 0, 689, 0, 690, 0, 691, 0, 0, 0,
    0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 694, 0, 695, 0, 696, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 0,
    0, 0, 0, 0, 0, 699, 0, 0, 0, 700, 0, 701, 0, 702, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    705, 0, 706, 0, 0, 707, 0, 0, 0, 708, 0, 709, 0, 0, 710, 0, 711, 0, 0, 712, 0, 713, 0, 0, 0, 0, 0, 0, 714, 0, 0, 0,
    0, 0, 0, 715, 0, 0, 0, 0, 0, 716, 0, 0, 0, 0, 717, 0, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 0, 0, 0, 720,
    0, 721, 0, 0, 722, 0, 0, 0, 723, 0, 724, 0, 725, 0, 726, 0, 0, 727, 0, 0, 728, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730,
    0, 0, 0, 0, 0, 731, 0, 0, 0, 732, 0, 733, 0, 734, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 735, 0, 0, 0, 0, 0, 0, 0,
    0, 736, 0, 0, 737, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 738, 0, 0, 739, 0, 0, 0, 0, 0, 740, 0, 0, 0, 741,
    0, 742, 0, 743, 0, 0, 0, 0, 0, 744, 0, 0, 0, 0, 0, 745, 0, 0, 0, 0, 746, 0, 747, 0, 0, 0, 748, 0, 749, 0, 750, 0,
    0, 751, 752, 0, 753, 0, 0, 754, 0, 755, 0, 756, 0, 757, 0, 758, 0, 759, 0, 0, 760, 0, 0, 0, 0, 761, 0, 762, 0, 0, 0, 0,
    763, 0, 0, 0, 0, 0, 764, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 765, 0, 766, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 768, 0, 0, 0, 0, 769, 0, 770, 0, 0,
    771, 0, 772, 0, 0, 0, 0, 0, 773, 774, 0, 0, 0, 0, 0, 0, 775, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 777, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 778, 0, 779, 0, 0, 780, 0, 0, 0, 0, 0, 0,
    0, 0, 781, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 782, 0, 0, 0, 0, 783, 0, 0, 0, 0, 0, 0,
    0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 0, 0, 786, 0, 787, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 788, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 0, 790, 0, 0, 0, 0, 0, 791, 0, 0, 0, 792, 0, 0, 0, 0, 793, 0, 0, 0, 0,
    0, 0, 794, 0, 0, 0, 0, 795, 0, 0, 0, 796, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0, 0, 0, 799, 0,
    0, 0, 0, 800, 0, 0, 801, 802, 0, 803, 0, 0, 0, 804, 0, 0, 0, 0, 0, 0, 0, 0, 0, 805, 0, 0, 0, 806, 0, 807, 0, 0,
    0, 0, 0, 0, 808, 0, 0, 809, 0, 0, 0, 0, 0, 810, 0, 0, 0, 0, 0, 0, 811, 0, 0, 0, 0, 0, 812, 0, 0, 0, 813, 0,
    814, 0, 815, 0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 818, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 820, 0, 821, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 823, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 824, 0, 0, 0, 0, 0, 825, 0, 0, 0, 826, 0, 0, 827, 0, 0, 0, 0, 0, 828, 0, 0, 0, 0, 829, 0, 830, 0, 0, 831,
    0, 0, 832, 0, 833, 0, 834, 0, 0, 835, 0, 836, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 837, 0, 838, 0, 0, 839,
    0, 0, 0, 0, 840, 0, 0, 0, 0, 0, 841, 0, 0, 0, 0, 842, 0, 0, 0, 843, 0, 0, 0, 844, 0, 0, 845, 0, 0, 846,
};
void recomp_unit_0167_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08AA0000u;
        entry_id = (entry_delta < 16376u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0167[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08AA0000;
    case 2u: goto L_08AA001C;
    case 3u: goto L_08AA0024;
    case 4u: goto L_08AA002C;
    case 5u: goto L_08AA0040;
    case 6u: goto L_08AA0048;
    case 7u: goto L_08AA005C;
    case 8u: goto L_08AA0064;
    case 9u: goto L_08AA006C;
    case 10u: goto L_08AA0084;
    case 11u: goto L_08AA00A8;
    case 12u: goto L_08AA00B0;
    case 13u: goto L_08AA00BC;
    case 14u: goto L_08AA00CC;
    case 15u: goto L_08AA00D8;
    case 16u: goto L_08AA00E4;
    case 17u: goto L_08AA00F0;
    case 18u: goto L_08AA00F4;
    case 19u: goto L_08AA00FC;
    case 20u: goto L_08AA0100;
    case 21u: goto L_08AA0114;
    case 22u: goto L_08AA0120;
    case 23u: goto L_08AA012C;
    case 24u: goto L_08AA0138;
    case 25u: goto L_08AA013C;
    case 26u: goto L_08AA0144;
    case 27u: goto L_08AA014C;
    case 28u: goto L_08AA0150;
    case 29u: goto L_08AA015C;
    case 30u: goto L_08AA016C;
    case 31u: goto L_08AA0178;
    case 32u: goto L_08AA0180;
    case 33u: goto L_08AA0188;
    case 34u: goto L_08AA0190;
    case 35u: goto L_08AA01A4;
    case 36u: goto L_08AA01A8;
    case 37u: goto L_08AA01F0;
    case 38u: goto L_08AA023C;
    case 39u: goto L_08AA0264;
    case 40u: goto L_08AA0274;
    case 41u: goto L_08AA0280;
    case 42u: goto L_08AA0288;
    case 43u: goto L_08AA0290;
    case 44u: goto L_08AA0298;
    case 45u: goto L_08AA02A0;
    case 46u: goto L_08AA02AC;
    case 47u: goto L_08AA02B8;
    case 48u: goto L_08AA02C0;
    case 49u: goto L_08AA02C8;
    case 50u: goto L_08AA02D8;
    case 51u: goto L_08AA02F0;
    case 52u: goto L_08AA0300;
    case 53u: goto L_08AA0310;
    case 54u: goto L_08AA0320;
    case 55u: goto L_08AA0330;
    case 56u: goto L_08AA0340;
    case 57u: goto L_08AA0350;
    case 58u: goto L_08AA0360;
    case 59u: goto L_08AA036C;
    case 60u: goto L_08AA0374;
    case 61u: goto L_08AA0388;
    case 62u: goto L_08AA0390;
    case 63u: goto L_08AA0398;
    case 64u: goto L_08AA03A8;
    case 65u: goto L_08AA03BC;
    case 66u: goto L_08AA03E4;
    case 67u: goto L_08AA03F0;
    case 68u: goto L_08AA0400;
    case 69u: goto L_08AA0410;
    case 70u: goto L_08AA041C;
    case 71u: goto L_08AA0424;
    case 72u: goto L_08AA043C;
    case 73u: goto L_08AA0450;
    case 74u: goto L_08AA0458;
    case 75u: goto L_08AA0468;
    case 76u: goto L_08AA047C;
    case 77u: goto L_08AA0490;
    case 78u: goto L_08AA04A8;
    case 79u: goto L_08AA04B0;
    case 80u: goto L_08AA04C4;
    case 81u: goto L_08AA04D4;
    case 82u: goto L_08AA04E4;
    case 83u: goto L_08AA04F8;
    case 84u: goto L_08AA050C;
    case 85u: goto L_08AA051C;
    case 86u: goto L_08AA0520;
    case 87u: goto L_08AA0528;
    case 88u: goto L_08AA0530;
    case 89u: goto L_08AA0538;
    case 90u: goto L_08AA0540;
    case 91u: goto L_08AA0548;
    case 92u: goto L_08AA055C;
    case 93u: goto L_08AA0570;
    case 94u: goto L_08AA0594;
    case 95u: goto L_08AA059C;
    case 96u: goto L_08AA05A4;
    case 97u: goto L_08AA05B4;
    case 98u: goto L_08AA05C0;
    case 99u: goto L_08AA05C4;
    case 100u: goto L_08AA05D8;
    case 101u: goto L_08AA05EC;
    case 102u: goto L_08AA05F0;
    case 103u: goto L_08AA05F8;
    case 104u: goto L_08AA0608;
    case 105u: goto L_08AA061C;
    case 106u: goto L_08AA0634;
    case 107u: goto L_08AA063C;
    case 108u: goto L_08AA0654;
    case 109u: goto L_08AA0668;
    case 110u: goto L_08AA066C;
    case 111u: goto L_08AA0684;
    case 112u: goto L_08AA06CC;
    case 113u: goto L_08AA06EC;
    case 114u: goto L_08AA06F8;
    case 115u: goto L_08AA0708;
    case 116u: goto L_08AA0710;
    case 117u: goto L_08AA0720;
    case 118u: goto L_08AA0754;
    case 119u: goto L_08AA0794;
    case 120u: goto L_08AA07B0;
    case 121u: goto L_08AA07BC;
    case 122u: goto L_08AA07C8;
    case 123u: goto L_08AA07D4;
    case 124u: goto L_08AA07D8;
    case 125u: goto L_08AA0814;
    case 126u: goto L_08AA0828;
    case 127u: goto L_08AA0830;
    case 128u: goto L_08AA0840;
    case 129u: goto L_08AA0848;
    case 130u: goto L_08AA0854;
    case 131u: goto L_08AA0864;
    case 132u: goto L_08AA0870;
    case 133u: goto L_08AA0878;
    case 134u: goto L_08AA0880;
    case 135u: goto L_08AA088C;
    case 136u: goto L_08AA0894;
    case 137u: goto L_08AA089C;
    case 138u: goto L_08AA08A8;
    case 139u: goto L_08AA08B4;
    case 140u: goto L_08AA08C0;
    case 141u: goto L_08AA08C8;
    case 142u: goto L_08AA08D8;
    case 143u: goto L_08AA08E0;
    case 144u: goto L_08AA08EC;
    case 145u: goto L_08AA08FC;
    case 146u: goto L_08AA0904;
    case 147u: goto L_08AA090C;
    case 148u: goto L_08AA0918;
    case 149u: goto L_08AA0920;
    case 150u: goto L_08AA0928;
    case 151u: goto L_08AA0934;
    case 152u: goto L_08AA0940;
    case 153u: goto L_08AA094C;
    case 154u: goto L_08AA0950;
    case 155u: goto L_08AA098C;
    case 156u: goto L_08AA09A0;
    case 157u: goto L_08AA09A8;
    case 158u: goto L_08AA09B8;
    case 159u: goto L_08AA09C0;
    case 160u: goto L_08AA09C8;
    case 161u: goto L_08AA09D4;
    case 162u: goto L_08AA09DC;
    case 163u: goto L_08AA09E4;
    case 164u: goto L_08AA09F0;
    case 165u: goto L_08AA09FC;
    case 166u: goto L_08AA0A04;
    case 167u: goto L_08AA0A08;
    case 168u: goto L_08AA0A44;
    case 169u: goto L_08AA0A58;
    case 170u: goto L_08AA0A60;
    case 171u: goto L_08AA0A70;
    case 172u: goto L_08AA0A78;
    case 173u: goto L_08AA0A80;
    case 174u: goto L_08AA0A8C;
    case 175u: goto L_08AA0A94;
    case 176u: goto L_08AA0A9C;
    case 177u: goto L_08AA0AA8;
    case 178u: goto L_08AA0AB4;
    case 179u: goto L_08AA0ABC;
    case 180u: goto L_08AA0AC0;
    case 181u: goto L_08AA0AFC;
    case 182u: goto L_08AA0B10;
    case 183u: goto L_08AA0B18;
    case 184u: goto L_08AA0B28;
    case 185u: goto L_08AA0B30;
    case 186u: goto L_08AA0B38;
    case 187u: goto L_08AA0B44;
    case 188u: goto L_08AA0B4C;
    case 189u: goto L_08AA0B54;
    case 190u: goto L_08AA0B60;
    case 191u: goto L_08AA0B6C;
    case 192u: goto L_08AA0B78;
    case 193u: goto L_08AA0B7C;
    case 194u: goto L_08AA0BB8;
    case 195u: goto L_08AA0BCC;
    case 196u: goto L_08AA0BD4;
    case 197u: goto L_08AA0BDC;
    case 198u: goto L_08AA0BF4;
    case 199u: goto L_08AA0C14;
    case 200u: goto L_08AA0C34;
    case 201u: goto L_08AA0C50;
    case 202u: goto L_08AA0C60;
    case 203u: goto L_08AA0C68;
    case 204u: goto L_08AA0C74;
    case 205u: goto L_08AA0C84;
    case 206u: goto L_08AA0C8C;
    case 207u: goto L_08AA0C94;
    case 208u: goto L_08AA0CA0;
    case 209u: goto L_08AA0CA8;
    case 210u: goto L_08AA0CB0;
    case 211u: goto L_08AA0CBC;
    case 212u: goto L_08AA0CC8;
    case 213u: goto L_08AA0CD4;
    case 214u: goto L_08AA0CD8;
    case 215u: goto L_08AA0D14;
    case 216u: goto L_08AA0D28;
    case 217u: goto L_08AA0D30;
    case 218u: goto L_08AA0D40;
    case 219u: goto L_08AA0D48;
    case 220u: goto L_08AA0D58;
    case 221u: goto L_08AA0D60;
    case 222u: goto L_08AA0D6C;
    case 223u: goto L_08AA0D7C;
    case 224u: goto L_08AA0D84;
    case 225u: goto L_08AA0D8C;
    case 226u: goto L_08AA0D98;
    case 227u: goto L_08AA0DA0;
    case 228u: goto L_08AA0DA8;
    case 229u: goto L_08AA0DB8;
    case 230u: goto L_08AA0DC0;
    case 231u: goto L_08AA0DE4;
    case 232u: goto L_08AA0E64;
    case 233u: goto L_08AA0EB8;
    case 234u: goto L_08AA0EF4;
    case 235u: goto L_08AA0F0C;
    case 236u: goto L_08AA0F14;
    case 237u: goto L_08AA0F18;
    case 238u: goto L_08AA0F24;
    case 239u: goto L_08AA0F2C;
    case 240u: goto L_08AA0F34;
    case 241u: goto L_08AA0FA8;
    case 242u: goto L_08AA0FBC;
    case 243u: goto L_08AA0FD0;
    case 244u: goto L_08AA0FE0;
    case 245u: goto L_08AA0FE8;
    case 246u: goto L_08AA0FF0;
    case 247u: goto L_08AA100C;
    case 248u: goto L_08AA1014;
    case 249u: goto L_08AA1024;
    case 250u: goto L_08AA1034;
    case 251u: goto L_08AA103C;
    case 252u: goto L_08AA1044;
    case 253u: goto L_08AA1048;
    case 254u: goto L_08AA105C;
    case 255u: goto L_08AA1064;
    case 256u: goto L_08AA106C;
    case 257u: goto L_08AA1088;
    case 258u: goto L_08AA1090;
    case 259u: goto L_08AA10A0;
    case 260u: goto L_08AA10B0;
    case 261u: goto L_08AA10C0;
    case 262u: goto L_08AA10C8;
    case 263u: goto L_08AA10D0;
    case 264u: goto L_08AA10D8;
    case 265u: goto L_08AA10EC;
    case 266u: goto L_08AA10FC;
    case 267u: goto L_08AA1148;
    case 268u: goto L_08AA1164;
    case 269u: goto L_08AA117C;
    case 270u: goto L_08AA1184;
    case 271u: goto L_08AA1188;
    case 272u: goto L_08AA1190;
    case 273u: goto L_08AA11D0;
    case 274u: goto L_08AA11D8;
    case 275u: goto L_08AA11E8;
    case 276u: goto L_08AA11EC;
    case 277u: goto L_08AA11FC;
    case 278u: goto L_08AA1250;
    case 279u: goto L_08AA1270;
    case 280u: goto L_08AA1278;
    case 281u: goto L_08AA1284;
    case 282u: goto L_08AA1290;
    case 283u: goto L_08AA1298;
    case 284u: goto L_08AA12A0;
    case 285u: goto L_08AA12A8;
    case 286u: goto L_08AA12B0;
    case 287u: goto L_08AA12BC;
    case 288u: goto L_08AA12D8;
    case 289u: goto L_08AA12E0;
    case 290u: goto L_08AA12E8;
    case 291u: goto L_08AA12F0;
    case 292u: goto L_08AA12F8;
    case 293u: goto L_08AA1304;
    case 294u: goto L_08AA1314;
    case 295u: goto L_08AA131C;
    case 296u: goto L_08AA1324;
    case 297u: goto L_08AA132C;
    case 298u: goto L_08AA1334;
    case 299u: goto L_08AA1374;
    case 300u: goto L_08AA1384;
    case 301u: goto L_08AA1390;
    case 302u: goto L_08AA13A0;
    case 303u: goto L_08AA13AC;
    case 304u: goto L_08AA13B0;
    case 305u: goto L_08AA13B8;
    case 306u: goto L_08AA13DC;
    case 307u: goto L_08AA13E4;
    case 308u: goto L_08AA13F4;
    case 309u: goto L_08AA13FC;
    case 310u: goto L_08AA1420;
    case 311u: goto L_08AA1428;
    case 312u: goto L_08AA1430;
    case 313u: goto L_08AA144C;
    case 314u: goto L_08AA1460;
    case 315u: goto L_08AA1468;
    case 316u: goto L_08AA1470;
    case 317u: goto L_08AA14A0;
    case 318u: goto L_08AA14D0;
    case 319u: goto L_08AA1500;
    case 320u: goto L_08AA152C;
    case 321u: goto L_08AA1558;
    case 322u: goto L_08AA1584;
    case 323u: goto L_08AA158C;
    case 324u: goto L_08AA159C;
    case 325u: goto L_08AA15AC;
    case 326u: goto L_08AA15B8;
    case 327u: goto L_08AA15C8;
    case 328u: goto L_08AA15CC;
    case 329u: goto L_08AA15D4;
    case 330u: goto L_08AA15E0;
    case 331u: goto L_08AA15EC;
    case 332u: goto L_08AA1608;
    case 333u: goto L_08AA160C;
    case 334u: goto L_08AA1610;
    case 335u: goto L_08AA1618;
    case 336u: goto L_08AA1644;
    case 337u: goto L_08AA1654;
    case 338u: goto L_08AA1660;
    case 339u: goto L_08AA166C;
    case 340u: goto L_08AA1680;
    case 341u: goto L_08AA1688;
    case 342u: goto L_08AA1698;
    case 343u: goto L_08AA16A8;
    case 344u: goto L_08AA16AC;
    case 345u: goto L_08AA16B4;
    case 346u: goto L_08AA16B8;
    case 347u: goto L_08AA16C0;
    case 348u: goto L_08AA16D8;
    case 349u: goto L_08AA16DC;
    case 350u: goto L_08AA16E0;
    case 351u: goto L_08AA1714;
    case 352u: goto L_08AA171C;
    case 353u: goto L_08AA1734;
    case 354u: goto L_08AA173C;
    case 355u: goto L_08AA1748;
    case 356u: goto L_08AA1750;
    case 357u: goto L_08AA1764;
    case 358u: goto L_08AA176C;
    case 359u: goto L_08AA177C;
    case 360u: goto L_08AA178C;
    case 361u: goto L_08AA1790;
    case 362u: goto L_08AA1798;
    case 363u: goto L_08AA179C;
    case 364u: goto L_08AA17A4;
    case 365u: goto L_08AA17BC;
    case 366u: goto L_08AA17C0;
    case 367u: goto L_08AA17C4;
    case 368u: goto L_08AA17F8;
    case 369u: goto L_08AA1800;
    case 370u: goto L_08AA1810;
    case 371u: goto L_08AA181C;
    case 372u: goto L_08AA1848;
    case 373u: goto L_08AA1850;
    case 374u: goto L_08AA1860;
    case 375u: goto L_08AA1870;
    case 376u: goto L_08AA1884;
    case 377u: goto L_08AA18AC;
    case 378u: goto L_08AA18C4;
    case 379u: goto L_08AA18CC;
    case 380u: goto L_08AA1978;
    case 381u: goto L_08AA1980;
    case 382u: goto L_08AA1988;
    case 383u: goto L_08AA1994;
    case 384u: goto L_08AA199C;
    case 385u: goto L_08AA19A0;
    case 386u: goto L_08AA1A4C;
    case 387u: goto L_08AA1A54;
    case 388u: goto L_08AA1B00;
    case 389u: goto L_08AA1B10;
    case 390u: goto L_08AA1B18;
    case 391u: goto L_08AA1B20;
    case 392u: goto L_08AA1B30;
    case 393u: goto L_08AA1B38;
    case 394u: goto L_08AA1B3C;
    case 395u: goto L_08AA1B5C;
    case 396u: goto L_08AA1BA4;
    case 397u: goto L_08AA1C3C;
    case 398u: goto L_08AA1C6C;
    case 399u: goto L_08AA1C9C;
    case 400u: goto L_08AA1CCC;
    case 401u: goto L_08AA1D24;
    case 402u: goto L_08AA1D3C;
    case 403u: goto L_08AA1D60;
    case 404u: goto L_08AA1D74;
    case 405u: goto L_08AA1D90;
    case 406u: goto L_08AA1DAC;
    case 407u: goto L_08AA1DC4;
    case 408u: goto L_08AA1DD0;
    case 409u: goto L_08AA1DD8;
    case 410u: goto L_08AA1E14;
    case 411u: goto L_08AA1E1C;
    case 412u: goto L_08AA1E24;
    case 413u: goto L_08AA1E2C;
    case 414u: goto L_08AA1E38;
    case 415u: goto L_08AA1E50;
    case 416u: goto L_08AA1E5C;
    case 417u: goto L_08AA1E64;
    case 418u: goto L_08AA1EA0;
    case 419u: goto L_08AA1EA8;
    case 420u: goto L_08AA1EB0;
    case 421u: goto L_08AA1EB8;
    case 422u: goto L_08AA1EDC;
    case 423u: goto L_08AA1F00;
    case 424u: goto L_08AA1F04;
    case 425u: goto L_08AA1F38;
    case 426u: goto L_08AA1F90;
    case 427u: goto L_08AA2034;
    case 428u: goto L_08AA203C;
    case 429u: goto L_08AA2044;
    case 430u: goto L_08AA204C;
    case 431u: goto L_08AA2054;
    case 432u: goto L_08AA205C;
    case 433u: goto L_08AA2090;
    case 434u: goto L_08AA20AC;
    case 435u: goto L_08AA20B4;
    case 436u: goto L_08AA20C8;
    case 437u: goto L_08AA20D0;
    case 438u: goto L_08AA20E8;
    case 439u: goto L_08AA20F0;
    case 440u: goto L_08AA20F8;
    case 441u: goto L_08AA2128;
    case 442u: goto L_08AA2130;
    case 443u: goto L_08AA214C;
    case 444u: goto L_08AA21D0;
    case 445u: goto L_08AA21E0;
    case 446u: goto L_08AA21F4;
    case 447u: goto L_08AA2218;
    case 448u: goto L_08AA2224;
    case 449u: goto L_08AA222C;
    case 450u: goto L_08AA2244;
    case 451u: goto L_08AA2254;
    case 452u: goto L_08AA226C;
    case 453u: goto L_08AA2274;
    case 454u: goto L_08AA227C;
    case 455u: goto L_08AA2284;
    case 456u: goto L_08AA2298;
    case 457u: goto L_08AA22C0;
    case 458u: goto L_08AA22CC;
    case 459u: goto L_08AA22D8;
    case 460u: goto L_08AA22EC;
    case 461u: goto L_08AA22F8;
    case 462u: goto L_08AA2304;
    case 463u: goto L_08AA2314;
    case 464u: goto L_08AA231C;
    case 465u: goto L_08AA2328;
    case 466u: goto L_08AA2338;
    case 467u: goto L_08AA2340;
    case 468u: goto L_08AA2348;
    case 469u: goto L_08AA2374;
    case 470u: goto L_08AA2378;
    case 471u: goto L_08AA2380;
    case 472u: goto L_08AA2388;
    case 473u: goto L_08AA23AC;
    case 474u: goto L_08AA23B0;
    case 475u: goto L_08AA23B8;
    case 476u: goto L_08AA23C0;
    case 477u: goto L_08AA23C8;
    case 478u: goto L_08AA23E4;
    case 479u: goto L_08AA23F0;
    case 480u: goto L_08AA2418;
    case 481u: goto L_08AA2428;
    case 482u: goto L_08AA2430;
    case 483u: goto L_08AA243C;
    case 484u: goto L_08AA2448;
    case 485u: goto L_08AA2450;
    case 486u: goto L_08AA2458;
    case 487u: goto L_08AA246C;
    case 488u: goto L_08AA2478;
    case 489u: goto L_08AA2488;
    case 490u: goto L_08AA2490;
    case 491u: goto L_08AA24A0;
    case 492u: goto L_08AA24A8;
    case 493u: goto L_08AA24C8;
    case 494u: goto L_08AA24D8;
    case 495u: goto L_08AA24E8;
    case 496u: goto L_08AA24F8;
    case 497u: goto L_08AA250C;
    case 498u: goto L_08AA2514;
    case 499u: goto L_08AA251C;
    case 500u: goto L_08AA2524;
    case 501u: goto L_08AA2570;
    case 502u: goto L_08AA257C;
    case 503u: goto L_08AA258C;
    case 504u: goto L_08AA2598;
    case 505u: goto L_08AA25A4;
    case 506u: goto L_08AA25B0;
    case 507u: goto L_08AA25B4;
    case 508u: goto L_08AA25BC;
    case 509u: goto L_08AA25C0;
    case 510u: goto L_08AA25C4;
    case 511u: goto L_08AA25CC;
    case 512u: goto L_08AA25EC;
    case 513u: goto L_08AA25F8;
    case 514u: goto L_08AA2608;
    case 515u: goto L_08AA2650;
    case 516u: goto L_08AA26CC;
    case 517u: goto L_08AA26D4;
    case 518u: goto L_08AA26E4;
    case 519u: goto L_08AA26EC;
    case 520u: goto L_08AA2720;
    case 521u: goto L_08AA273C;
    case 522u: goto L_08AA2744;
    case 523u: goto L_08AA2758;
    case 524u: goto L_08AA2760;
    case 525u: goto L_08AA2780;
    case 526u: goto L_08AA2790;
    case 527u: goto L_08AA27A8;
    case 528u: goto L_08AA27B0;
    case 529u: goto L_08AA27B8;
    case 530u: goto L_08AA27C0;
    case 531u: goto L_08AA27C8;
    case 532u: goto L_08AA27D0;
    case 533u: goto L_08AA27E4;
    case 534u: goto L_08AA27F8;
    case 535u: goto L_08AA2810;
    case 536u: goto L_08AA2818;
    case 537u: goto L_08AA2844;
    case 538u: goto L_08AA2850;
    case 539u: goto L_08AA285C;
    case 540u: goto L_08AA2864;
    case 541u: goto L_08AA287C;
    case 542u: goto L_08AA28A0;
    case 543u: goto L_08AA28B4;
    case 544u: goto L_08AA28BC;
    case 545u: goto L_08AA28C4;
    case 546u: goto L_08AA28CC;
    case 547u: goto L_08AA28D4;
    case 548u: goto L_08AA28E4;
    case 549u: goto L_08AA28FC;
    case 550u: goto L_08AA2904;
    case 551u: goto L_08AA2910;
    case 552u: goto L_08AA2928;
    case 553u: goto L_08AA293C;
    case 554u: goto L_08AA2954;
    case 555u: goto L_08AA295C;
    case 556u: goto L_08AA2964;
    case 557u: goto L_08AA2990;
    case 558u: goto L_08AA299C;
    case 559u: goto L_08AA29AC;
    case 560u: goto L_08AA29B8;
    case 561u: goto L_08AA29C4;
    case 562u: goto L_08AA29DC;
    case 563u: goto L_08AA29F4;
    case 564u: goto L_08AA2A04;
    case 565u: goto L_08AA2A0C;
    case 566u: goto L_08AA2A14;
    case 567u: goto L_08AA2A30;
    case 568u: goto L_08AA2A38;
    case 569u: goto L_08AA2A40;
    case 570u: goto L_08AA2A80;
    case 571u: goto L_08AA2A88;
    case 572u: goto L_08AA2A90;
    case 573u: goto L_08AA2A98;
    case 574u: goto L_08AA2AC0;
    case 575u: goto L_08AA2AC8;
    case 576u: goto L_08AA2AD4;
    case 577u: goto L_08AA2AE0;
    case 578u: goto L_08AA2AF4;
    case 579u: goto L_08AA2B00;
    case 580u: goto L_08AA2B10;
    case 581u: goto L_08AA2B18;
    case 582u: goto L_08AA2B28;
    case 583u: goto L_08AA2B30;
    case 584u: goto L_08AA2B40;
    case 585u: goto L_08AA2B4C;
    case 586u: goto L_08AA2B5C;
    case 587u: goto L_08AA2B98;
    case 588u: goto L_08AA2BE4;
    case 589u: goto L_08AA2BF0;
    case 590u: goto L_08AA2C34;
    case 591u: goto L_08AA2C3C;
    case 592u: goto L_08AA2C44;
    case 593u: goto L_08AA2C4C;
    case 594u: goto L_08AA2C54;
    case 595u: goto L_08AA2C5C;
    case 596u: goto L_08AA2C90;
    case 597u: goto L_08AA2CAC;
    case 598u: goto L_08AA2CB4;
    case 599u: goto L_08AA2CE0;
    case 600u: goto L_08AA2CE8;
    case 601u: goto L_08AA2D08;
    case 602u: goto L_08AA2D18;
    case 603u: goto L_08AA2D2C;
    case 604u: goto L_08AA2D34;
    case 605u: goto L_08AA2D3C;
    case 606u: goto L_08AA2D44;
    case 607u: goto L_08AA2D48;
    case 608u: goto L_08AA2D58;
    case 609u: goto L_08AA2D64;
    case 610u: goto L_08AA2D7C;
    case 611u: goto L_08AA2D84;
    case 612u: goto L_08AA2DB0;
    case 613u: goto L_08AA2DBC;
    case 614u: goto L_08AA2DC8;
    case 615u: goto L_08AA2DD0;
    case 616u: goto L_08AA2DE8;
    case 617u: goto L_08AA2E0C;
    case 618u: goto L_08AA2E24;
    case 619u: goto L_08AA2E34;
    case 620u: goto L_08AA2E3C;
    case 621u: goto L_08AA2E44;
    case 622u: goto L_08AA2E4C;
    case 623u: goto L_08AA2E60;
    case 624u: goto L_08AA2E74;
    case 625u: goto L_08AA2E7C;
    case 626u: goto L_08AA2EA8;
    case 627u: goto L_08AA2EB4;
    case 628u: goto L_08AA2EBC;
    case 629u: goto L_08AA2EC4;
    case 630u: goto L_08AA2ED4;
    case 631u: goto L_08AA2EE0;
    case 632u: goto L_08AA2EF0;
    case 633u: goto L_08AA2F08;
    case 634u: goto L_08AA2F18;
    case 635u: goto L_08AA2F20;
    case 636u: goto L_08AA2F28;
    case 637u: goto L_08AA2F30;
    case 638u: goto L_08AA2F44;
    case 639u: goto L_08AA2F8C;
    case 640u: goto L_08AA2F94;
    case 641u: goto L_08AA2FA0;
    case 642u: goto L_08AA2FA8;
    case 643u: goto L_08AA2FB0;
    case 644u: goto L_08AA2FB8;
    case 645u: goto L_08AA2FC0;
    case 646u: goto L_08AA2FC8;
    case 647u: goto L_08AA2FD0;
    case 648u: goto L_08AA2FE0;
    case 649u: goto L_08AA2FEC;
    case 650u: goto L_08AA3020;
    case 651u: goto L_08AA30B4;
    case 652u: goto L_08AA30E0;
    case 653u: goto L_08AA30F8;
    case 654u: goto L_08AA3104;
    case 655u: goto L_08AA311C;
    case 656u: goto L_08AA3128;
    case 657u: goto L_08AA3140;
    case 658u: goto L_08AA314C;
    case 659u: goto L_08AA3164;
    case 660u: goto L_08AA3170;
    case 661u: goto L_08AA3188;
    case 662u: goto L_08AA3194;
    case 663u: goto L_08AA31B0;
    case 664u: goto L_08AA31BC;
    case 665u: goto L_08AA31CC;
    case 666u: goto L_08AA31E0;
    case 667u: goto L_08AA31F4;
    case 668u: goto L_08AA3200;
    case 669u: goto L_08AA3218;
    case 670u: goto L_08AA3224;
    case 671u: goto L_08AA324C;
    case 672u: goto L_08AA3278;
    case 673u: goto L_08AA32A4;
    case 674u: goto L_08AA32B4;
    case 675u: goto L_08AA32D4;
    case 676u: goto L_08AA32E4;
    case 677u: goto L_08AA3304;
    case 678u: goto L_08AA3310;
    case 679u: goto L_08AA3334;
    case 680u: goto L_08AA3350;
    case 681u: goto L_08AA3360;
    case 682u: goto L_08AA3368;
    case 683u: goto L_08AA3374;
    case 684u: goto L_08AA3380;
    case 685u: goto L_08AA3394;
    case 686u: goto L_08AA33AC;
    case 687u: goto L_08AA33C4;
    case 688u: goto L_08AA33D4;
    case 689u: goto L_08AA33E0;
    case 690u: goto L_08AA33E8;
    case 691u: goto L_08AA33F0;
    case 692u: goto L_08AA3410;
    case 693u: goto L_08AA3424;
    case 694u: goto L_08AA342C;
    case 695u: goto L_08AA3434;
    case 696u: goto L_08AA343C;
    case 697u: goto L_08AA3448;
    case 698u: goto L_08AA3470;
    case 699u: goto L_08AA3494;
    case 700u: goto L_08AA34A4;
    case 701u: goto L_08AA34AC;
    case 702u: goto L_08AA34B4;
    case 703u: goto L_08AA34BC;
    case 704u: goto L_08AA34C8;
    case 705u: goto L_08AA3500;
    case 706u: goto L_08AA3508;
    case 707u: goto L_08AA3514;
    case 708u: goto L_08AA3524;
    case 709u: goto L_08AA352C;
    case 710u: goto L_08AA3538;
    case 711u: goto L_08AA3540;
    case 712u: goto L_08AA354C;
    case 713u: goto L_08AA3554;
    case 714u: goto L_08AA3570;
    case 715u: goto L_08AA358C;
    case 716u: goto L_08AA35A4;
    case 717u: goto L_08AA35B8;
    case 718u: goto L_08AA35C8;
    case 719u: goto L_08AA35E4;
    case 720u: goto L_08AA35FC;
    case 721u: goto L_08AA3604;
    case 722u: goto L_08AA3610;
    case 723u: goto L_08AA3620;
    case 724u: goto L_08AA3628;
    case 725u: goto L_08AA3630;
    case 726u: goto L_08AA3638;
    case 727u: goto L_08AA3644;
    case 728u: goto L_08AA3650;
    case 729u: goto L_08AA3654;
    case 730u: goto L_08AA367C;
    case 731u: goto L_08AA3694;
    case 732u: goto L_08AA36A4;
    case 733u: goto L_08AA36AC;
    case 734u: goto L_08AA36B4;
    case 735u: goto L_08AA36E0;
    case 736u: goto L_08AA3704;
    case 737u: goto L_08AA3710;
    case 738u: goto L_08AA3748;
    case 739u: goto L_08AA3754;
    case 740u: goto L_08AA376C;
    case 741u: goto L_08AA377C;
    case 742u: goto L_08AA3784;
    case 743u: goto L_08AA378C;
    case 744u: goto L_08AA37A4;
    case 745u: goto L_08AA37BC;
    case 746u: goto L_08AA37D0;
    case 747u: goto L_08AA37D8;
    case 748u: goto L_08AA37E8;
    case 749u: goto L_08AA37F0;
    case 750u: goto L_08AA37F8;
    case 751u: goto L_08AA3804;
    case 752u: goto L_08AA3808;
    case 753u: goto L_08AA3810;
    case 754u: goto L_08AA381C;
    case 755u: goto L_08AA3824;
    case 756u: goto L_08AA382C;
    case 757u: goto L_08AA3834;
    case 758u: goto L_08AA383C;
    case 759u: goto L_08AA3844;
    case 760u: goto L_08AA3850;
    case 761u: goto L_08AA3864;
    case 762u: goto L_08AA386C;
    case 763u: goto L_08AA3880;
    case 764u: goto L_08AA3898;
    case 765u: goto L_08AA3918;
    case 766u: goto L_08AA3920;
    case 767u: goto L_08AA393C;
    case 768u: goto L_08AA3958;
    case 769u: goto L_08AA396C;
    case 770u: goto L_08AA3974;
    case 771u: goto L_08AA3980;
    case 772u: goto L_08AA3988;
    case 773u: goto L_08AA39A0;
    case 774u: goto L_08AA39A4;
    case 775u: goto L_08AA39C0;
    case 776u: goto L_08AA39D0;
    case 777u: goto L_08AA3A20;
    case 778u: goto L_08AA3A50;
    case 779u: goto L_08AA3A58;
    case 780u: goto L_08AA3A64;
    case 781u: goto L_08AA3A88;
    case 782u: goto L_08AA3AD0;
    case 783u: goto L_08AA3AE4;
    case 784u: goto L_08AA3B08;
    case 785u: goto L_08AA3B28;
    case 786u: goto L_08AA3B3C;
    case 787u: goto L_08AA3B44;
    case 788u: goto L_08AA3B74;
    case 789u: goto L_08AA3BA4;
    case 790u: goto L_08AA3BB0;
    case 791u: goto L_08AA3BC8;
    case 792u: goto L_08AA3BD8;
    case 793u: goto L_08AA3BEC;
    case 794u: goto L_08AA3C08;
    case 795u: goto L_08AA3C1C;
    case 796u: goto L_08AA3C2C;
    case 797u: goto L_08AA3C34;
    case 798u: goto L_08AA3C5C;
    case 799u: goto L_08AA3C78;
    case 800u: goto L_08AA3C8C;
    case 801u: goto L_08AA3C98;
    case 802u: goto L_08AA3C9C;
    case 803u: goto L_08AA3CA4;
    case 804u: goto L_08AA3CB4;
    case 805u: goto L_08AA3CDC;
    case 806u: goto L_08AA3CEC;
    case 807u: goto L_08AA3CF4;
    case 808u: goto L_08AA3D10;
    case 809u: goto L_08AA3D1C;
    case 810u: goto L_08AA3D34;
    case 811u: goto L_08AA3D50;
    case 812u: goto L_08AA3D68;
    case 813u: goto L_08AA3D78;
    case 814u: goto L_08AA3D80;
    case 815u: goto L_08AA3D88;
    case 816u: goto L_08AA3D98;
    case 817u: goto L_08AA3DAC;
    case 818u: goto L_08AA3DD0;
    case 819u: goto L_08AA3DDC;
    case 820u: goto L_08AA3E08;
    case 821u: goto L_08AA3E10;
    case 822u: goto L_08AA3E44;
    case 823u: goto L_08AA3E4C;
    case 824u: goto L_08AA3E88;
    case 825u: goto L_08AA3EA0;
    case 826u: goto L_08AA3EB0;
    case 827u: goto L_08AA3EBC;
    case 828u: goto L_08AA3ED4;
    case 829u: goto L_08AA3EE8;
    case 830u: goto L_08AA3EF0;
    case 831u: goto L_08AA3EFC;
    case 832u: goto L_08AA3F08;
    case 833u: goto L_08AA3F10;
    case 834u: goto L_08AA3F18;
    case 835u: goto L_08AA3F24;
    case 836u: goto L_08AA3F2C;
    case 837u: goto L_08AA3F68;
    case 838u: goto L_08AA3F70;
    case 839u: goto L_08AA3F7C;
    case 840u: goto L_08AA3F90;
    case 841u: goto L_08AA3FA8;
    case 842u: goto L_08AA3FBC;
    case 843u: goto L_08AA3FCC;
    case 844u: goto L_08AA3FDC;
    case 845u: goto L_08AA3FE8;
    case 846u: goto L_08AA3FF4;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08AA0000:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0024;
      }
      goto L_08AA001C;
    }
L_08AA001C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA0024;
      }
      goto L_08AA0024;
    }
L_08AA0024:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0048;
      }
      goto L_08AA002C;
    }
L_08AA002C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AA0040u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0040u) goto L_08AA0040;
    return;
L_08AA0040:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA005C;
      }
      goto L_08AA0048;
    }
L_08AA0048:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 28u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08AA005Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA005Cu) goto L_08AA005C;
    return;
L_08AA005C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA00A8;
      }
      goto L_08AA0064;
    }
L_08AA0064:
    ctx.gpr[31] = (0x08AA006Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08AA006Cu) goto L_08AA006C;
    return;
L_08AA006C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26204)));
    ctx.gpr[31] = (0x08AA0084u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26200)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0084u) goto L_08AA0084;
    return;
L_08AA0084:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08AA00A8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA00A8u) goto L_08AA00A8;
    return;
L_08AA00A8:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA014C;
      }
      goto L_08AA00B0;
    }
L_08AA00B0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA00BCu);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 56u, 0x089A4300u>(ctx, &aot_mem) && ctx.pc == 0x08AA00BCu) goto L_08AA00BC;
    return;
L_08AA00BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[16] = (0u | 37u);
      if (branch_taken) {
          goto L_08AA0100;
      }
      goto L_08AA00CC;
    }
L_08AA00CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA00F4;
      }
      goto L_08AA00D8;
    }
L_08AA00D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_08AA00F4;
    }
    goto L_08AA00E4;
L_08AA00E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08AA00F0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08AA00F0u) goto L_08AA00F0;
    return;
L_08AA00F0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_08AA00F4;
L_08AA00F4:
    ctx.gpr[31] = (0x08AA00FCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA00FCu) goto L_08AA00FC;
    return;
L_08AA00FC:
    ctx.gpr[16] = (0u | 37u);
    goto L_08AA0100;
L_08AA0100:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA0144;
      }
      goto L_08AA0114;
    }
L_08AA0114:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA013C;
      }
      goto L_08AA0120;
    }
L_08AA0120:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(912), 0u);
        goto L_08AA013C;
    }
    goto L_08AA012C;
L_08AA012C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08AA0138u);
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08AA0138u) goto L_08AA0138;
    return;
L_08AA0138:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(912), 0u);
    goto L_08AA013C;
L_08AA013C:
    ctx.gpr[31] = (0x08AA0144u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0144u) goto L_08AA0144;
    return;
L_08AA0144:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(844), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AA0150;
      }
      goto L_08AA014C;
    }
L_08AA014C:
    ctx.gpr[22] = (ctx.gpr[17] | 0u);
    goto L_08AA0150;
L_08AA0150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AA015Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925F24u>(ctx, &aot_mem) && ctx.pc == 0x08AA015Cu) goto L_08AA015C;
    return;
L_08AA015C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[23]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0178;
      }
      goto L_08AA016C;
    }
L_08AA016C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0180;
      }
      goto L_08AA0178;
    }
L_08AA0178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA01A8;
      }
      goto L_08AA0180;
    }
L_08AA0180:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0190;
      }
      goto L_08AA0188;
    }
L_08AA0188:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA01A8;
      }
      goto L_08AA0190;
    }
L_08AA0190:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[21] = (ctx.gpr[23] | 0u);
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[21]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 796u, 0x08A9F9C8u>(ctx, &aot_mem); return;
      }
      goto L_08AA01A4;
    }
L_08AA01A4:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AA01A8;
L_08AA01A8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(412)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(416)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(420)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(424)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(428)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(432)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(436)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(440)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(444)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(448)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(452)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(456)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(460)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(480));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA01F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[31]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] & 255u);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[19] = (0u | 7u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08AA023Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA023Cu) goto L_08AA023C;
    return;
L_08AA023C:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08AA0264u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 390u, 0x088724BCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0264u) goto L_08AA0264;
    return;
L_08AA0264:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 147 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 182 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA0298;
      }
      goto L_08AA0274;
    }
L_08AA0274:
    ctx.gpr[5] = (0u | 138u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-954));
      if (branch_taken) {
          goto L_08AA0330;
      }
      goto L_08AA0280;
    }
L_08AA0280:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-967));
      if (branch_taken) {
          goto L_08AA0340;
      }
      goto L_08AA0288;
    }
L_08AA0288:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA0390;
      }
      goto L_08AA0290;
    }
L_08AA0290:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA03A8;
      }
      goto L_08AA0298;
    }
L_08AA0298:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (0u | 196u);
      if (branch_taken) {
          goto L_08AA02C0;
      }
      goto L_08AA02A0;
    }
L_08AA02A0:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 167 ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-147));
        goto L_08AA02D8;
    }
    goto L_08AA02AC;
L_08AA02AC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 181 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA03A8;
      }
      goto L_08AA02B8;
    }
L_08AA02B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0390;
      }
      goto L_08AA02C0;
    }
L_08AA02C0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA03A8;
      }
      goto L_08AA02C8;
    }
L_08AA02C8:
    ctx.gpr[22] = (0u | 6u);
    ctx.gpr[23] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA05F0;
      }
      goto L_08AA02D8;
    }
L_08AA02D8:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19584)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA02F0:
    ctx.gpr[22] = (0u | 6u);
    ctx.gpr[23] = (0u | 2u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA05F0;
      }
      goto L_08AA0300;
    }
L_08AA0300:
    ctx.gpr[22] = (0u | 6u);
    ctx.gpr[23] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA05F0;
      }
      goto L_08AA0310;
    }
L_08AA0310:
    ctx.gpr[22] = (0u | 6u);
    ctx.gpr[23] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA05F0;
      }
      goto L_08AA0320;
    }
L_08AA0320:
    ctx.gpr[22] = (0u | 16u);
    ctx.gpr[23] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA05F0;
      }
      goto L_08AA0330;
    }
L_08AA0330:
    ctx.gpr[22] = (0u | 17u);
    ctx.gpr[23] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA05F0;
      }
      goto L_08AA0340;
    }
L_08AA0340:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0388;
      }
      goto L_08AA0350;
    }
L_08AA0350:
    ctx.gpr[22] = (0u | 6u);
    ctx.gpr[23] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0374;
      }
      goto L_08AA0360;
    }
L_08AA0360:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17128)));
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[20]);
    goto L_08AA036C;
L_08AA036C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA05F0;
      }
      goto L_08AA0374;
    }
L_08AA0374:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17128)));
    ctx.gpr[20] = (ctx.gpr[4] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08AA036C;
      }
      goto L_08AA0388;
    }
L_08AA0388:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA03A8;
      }
      goto L_08AA0390;
    }
L_08AA0390:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA03A8;
      }
      goto L_08AA0398;
    }
L_08AA0398:
    ctx.gpr[23] = (0u | 9u);
    ctx.gpr[22] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA05F0;
      }
      goto L_08AA03A8;
    }
L_08AA03A8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[30] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0410;
      }
      goto L_08AA03BC;
    }
L_08AA03BC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[30] << 3u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-5704));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA0400;
      }
      goto L_08AA03E4;
    }
L_08AA03E4:
    ctx.gpr[22] = (ctx.gpr[30] + static_cast<std::uint32_t>(7));
    ctx.gpr[31] = (0x08AA03F0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 430u, 0x08A9E2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AA03F0u) goto L_08AA03F0;
    return;
L_08AA03F0:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[21] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0410;
      }
      goto L_08AA0400;
    }
L_08AA0400:
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[30]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA03BC;
      }
      goto L_08AA0410;
    }
L_08AA0410:
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[30] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA0424;
      }
      goto L_08AA041C;
    }
L_08AA041C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA05F0;
      }
      goto L_08AA0424;
    }
L_08AA0424:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0450;
      }
      goto L_08AA043C;
    }
L_08AA043C:
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA0450;
L_08AA0450:
    ctx.gpr[31] = (0x08AA0458u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(114)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 391u, 0x08A9DF70u>(ctx, &aot_mem) && ctx.pc == 0x08AA0458u) goto L_08AA0458;
    return;
L_08AA0458:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[30] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA05B4;
      }
      goto L_08AA0468;
    }
L_08AA0468:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0490;
      }
      goto L_08AA047C;
    }
L_08AA047C:
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA0490;
L_08AA0490:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA04A8u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA04A8u) goto L_08AA04A8;
    return;
L_08AA04A8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA059C;
      }
      goto L_08AA04B0;
    }
L_08AA04B0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 202u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA04E4;
      }
      goto L_08AA04C4;
    }
L_08AA04C4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 208u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA04E4;
      }
      goto L_08AA04D4;
    }
L_08AA04D4:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u | 207u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA0520;
      }
      goto L_08AA04E4;
    }
L_08AA04E4:
    ctx.gpr[6] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[6]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA050C;
      }
      goto L_08AA04F8;
    }
L_08AA04F8:
    ctx.gpr[5] = (ctx.gpr[23] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    goto L_08AA050C;
L_08AA050C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08AA0520;
      }
      goto L_08AA051C;
    }
L_08AA051C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08AA0520;
L_08AA0520:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA059C;
      }
      goto L_08AA0528;
    }
L_08AA0528:
    ctx.gpr[31] = (0x08AA0530u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 779u, 0x0889FADCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0530u) goto L_08AA0530;
    return;
L_08AA0530:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA059C;
      }
      goto L_08AA0538;
    }
L_08AA0538:
    ctx.gpr[31] = (0x08AA0540u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 792u, 0x0889FB4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0540u) goto L_08AA0540;
    return;
L_08AA0540:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA059C;
      }
      goto L_08AA0548;
    }
L_08AA0548:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0570;
      }
      goto L_08AA055C;
    }
L_08AA055C:
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA0570;
L_08AA0570:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(69))))));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[6] << (ctx.gpr[5] & 31u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA059C;
      }
      goto L_08AA0594;
    }
L_08AA0594:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA05B4;
      }
      goto L_08AA059C;
    }
L_08AA059C:
    ctx.gpr[31] = (0x08AA05A4u);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(114)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 409u, 0x08A9E0F0u>(ctx, &aot_mem) && ctx.pc == 0x08AA05A4u) goto L_08AA05A4;
    return;
L_08AA05A4:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[30] = (ctx.gpr[30] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08AA0468;
      }
      goto L_08AA05B4;
    }
L_08AA05B4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[30] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA05C4;
      }
      goto L_08AA05C0;
    }
L_08AA05C0:
    ctx.gpr[23] = (ctx.gpr[19] | 0u);
    goto L_08AA05C4;
L_08AA05C4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA05EC;
      }
      goto L_08AA05D8;
    }
L_08AA05D8:
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA05EC;
L_08AA05EC:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(48)));
    goto L_08AA05F0;
L_08AA05F0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AA066C;
      }
      goto L_08AA05F8;
    }
L_08AA05F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA061C;
      }
      goto L_08AA0608;
    }
L_08AA0608:
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA061C;
L_08AA061C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA0634u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA0634u) goto L_08AA0634;
    return;
L_08AA0634:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA066C;
      }
      goto L_08AA063C;
    }
L_08AA063C:
    ctx.gpr[23] = (ctx.gpr[19] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[23]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0668;
      }
      goto L_08AA0654;
    }
L_08AA0654:
    ctx.gpr[4] = (ctx.gpr[23] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA0668;
L_08AA0668:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(48)));
    goto L_08AA066C;
L_08AA066C:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[7] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA0684u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08AA0754;
L_08AA0684:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA06F8;
      }
      goto L_08AA06CC;
    }
L_08AA06CC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[20] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x08AA06ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA06ECu) goto L_08AA06EC;
    return;
L_08AA06EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x08AA06F8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 565u, 0x0899F0E4u>(ctx, &aot_mem) && ctx.pc == 0x08AA06F8u) goto L_08AA06F8;
    return;
L_08AA06F8:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA0708u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 725u, 0x08887A68u>(ctx, &aot_mem) && ctx.pc == 0x08AA0708u) goto L_08AA0708;
    return;
L_08AA0708:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0720;
      }
      goto L_08AA0710;
    }
L_08AA0710:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (64u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_08AA0720;
L_08AA0720:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0754:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-144));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[31]);
    ctx.gpr[19] = (ctx.gpr[8] & 255u);
    ctx.gpr[8] = (ctx.gpr[4] + static_cast<std::uint32_t>(-4));
    ctx.gpr[8] = (ctx.gpr[8] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    ctx.gpr[20] = (ctx.gpr[4] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[18] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AA0DA8;
      }
      goto L_08AA0794;
    }
L_08AA0794:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(-4));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2227u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-19504)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA07B0:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AA07BCu);
    ctx.gpr[4] = (0u | 2160u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x08AA07BCu) goto L_08AA07BC;
    return;
L_08AA07BC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AA07D8;
      }
      goto L_08AA07C8;
    }
L_08AA07C8:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA07D4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 143u, 0x089FD478u>(ctx, &aot_mem) && ctx.pc == 0x08AA07D4u) goto L_08AA07D4;
    return;
L_08AA07D4:
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    goto L_08AA07D8;
L_08AA07D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AA0814u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0814u) goto L_08AA0814;
    return;
L_08AA0814:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08AA0828u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08AA0828u) goto L_08AA0828;
    return;
L_08AA0828:
    ctx.gpr[31] = (0x08AA0830u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0830u) goto L_08AA0830;
    return;
L_08AA0830:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA08EC;
      }
      goto L_08AA0840;
    }
L_08AA0840:
    ctx.gpr[31] = (0x08AA0848u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08AA0848u) goto L_08AA0848;
    return;
L_08AA0848:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    if (static_cast<std::int32_t>(ctx.gpr[4]) >= 0) {
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
        goto L_08AA0864;
    }
    goto L_08AA0854;
L_08AA0854:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] & 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA0864;
      }
      goto L_08AA0864;
    }
L_08AA0864:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA088C;
      }
      goto L_08AA0870;
    }
L_08AA0870:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08AA08C0;
      }
      goto L_08AA0878;
    }
L_08AA0878:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    // nop
      if (branch_taken) {
          goto L_08AA08A8;
      }
      goto L_08AA0880;
    }
L_08AA0880:
    ctx.gpr[16] = (0u | 17u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA08C0;
      }
      goto L_08AA088C;
    }
L_08AA088C:
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA08B4;
      }
      goto L_08AA0894;
    }
L_08AA0894:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA08C0;
      }
      goto L_08AA089C;
    }
L_08AA089C:
    ctx.gpr[16] = (0u | 22u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA08C0;
      }
      goto L_08AA08A8;
    }
L_08AA08A8:
    ctx.gpr[16] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA08C0;
      }
      goto L_08AA08B4;
    }
L_08AA08B4:
    ctx.gpr[16] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA08C0;
      }
      goto L_08AA08C0;
    }
L_08AA08C0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA08EC;
      }
      goto L_08AA08C8;
    }
L_08AA08C8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA08D8u);
    ctx.gpr[6] = (0u | 25001u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 634u, 0x0899F50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA08D8u) goto L_08AA08D8;
    return;
L_08AA08D8:
    ctx.gpr[31] = (0x08AA08E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA08E0u) goto L_08AA08E0;
    return;
L_08AA08E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08AA08ECu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 585u, 0x0899F1DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA08ECu) goto L_08AA08EC;
    return;
L_08AA08EC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0920;
      }
      goto L_08AA08FC;
    }
L_08AA08FC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0920;
      }
      goto L_08AA0904;
    }
L_08AA0904:
    ctx.gpr[31] = (0x08AA090Cu);
    ctx.gpr[4] = (0u | 224u);
    goto L_08AA30E0;
L_08AA090C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0920;
      }
      goto L_08AA0918;
    }
L_08AA0918:
    ctx.gpr[31] = (0x08AA0920u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 777u, 0x0897FFDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0920u) goto L_08AA0920;
    return;
L_08AA0920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA0DC0;
      }
      goto L_08AA0928;
    }
L_08AA0928:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[31] = (0x08AA0934u);
    ctx.gpr[4] = (0u | 2128u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x08AA0934u) goto L_08AA0934;
    return;
L_08AA0934:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AA0950;
      }
      goto L_08AA0940;
    }
L_08AA0940:
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA094Cu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 726u, 0x08A8F734u>(ctx, &aot_mem) && ctx.pc == 0x08AA094Cu) goto L_08AA094C;
    return;
L_08AA094C:
    ctx.gpr[20] = (ctx.gpr[21] | 0u);
    goto L_08AA0950;
L_08AA0950:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AA098Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AA098Cu) goto L_08AA098C;
    return;
L_08AA098C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[31] = (0x08AA09A0u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08AA09A0u) goto L_08AA09A0;
    return;
L_08AA09A0:
    ctx.gpr[31] = (0x08AA09A8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08AA09A8u) goto L_08AA09A8;
    return;
L_08AA09A8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA09DC;
      }
      goto L_08AA09B8;
    }
L_08AA09B8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA09DC;
      }
      goto L_08AA09C0;
    }
L_08AA09C0:
    ctx.gpr[31] = (0x08AA09C8u);
    ctx.gpr[4] = (0u | 224u);
    goto L_08AA30E0;
L_08AA09C8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA09DC;
      }
      goto L_08AA09D4;
    }
L_08AA09D4:
    ctx.gpr[31] = (0x08AA09DCu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 777u, 0x0897FFDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA09DCu) goto L_08AA09DC;
    return;
L_08AA09DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_08AA0DC0;
      }
      goto L_08AA09E4;
    }
L_08AA09E4:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x08AA09F0u);
    ctx.gpr[4] = (0u | 2096u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x08AA09F0u) goto L_08AA09F0;
    return;
L_08AA09F0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA0A08;
      }
      goto L_08AA09FC;
    }
L_08AA09FC:
    ctx.gpr[31] = (0x08AA0A04u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 435u, 0x0894E808u>(ctx, &aot_mem) && ctx.pc == 0x08AA0A04u) goto L_08AA0A04;
    return;
L_08AA0A04:
    ctx.gpr[16] = (ctx.gpr[18] | 0u);
    goto L_08AA0A08;
L_08AA0A08:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AA0A44u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0A44u) goto L_08AA0A44;
    return;
L_08AA0A44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x08AA0A58u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08AA0A58u) goto L_08AA0A58;
    return;
L_08AA0A58:
    ctx.gpr[31] = (0x08AA0A60u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0A60u) goto L_08AA0A60;
    return;
L_08AA0A60:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0A94;
      }
      goto L_08AA0A70;
    }
L_08AA0A70:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0A94;
      }
      goto L_08AA0A78;
    }
L_08AA0A78:
    ctx.gpr[31] = (0x08AA0A80u);
    ctx.gpr[4] = (0u | 224u);
    goto L_08AA30E0;
L_08AA0A80:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0A94;
      }
      goto L_08AA0A8C;
    }
L_08AA0A8C:
    ctx.gpr[31] = (0x08AA0A94u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 777u, 0x0897FFDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0A94u) goto L_08AA0A94;
    return;
L_08AA0A94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA0DC0;
      }
      goto L_08AA0A9C;
    }
L_08AA0A9C:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AA0AA8u);
    ctx.gpr[4] = (0u | 2096u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x08AA0AA8u) goto L_08AA0AA8;
    return;
L_08AA0AA8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA0AC0;
      }
      goto L_08AA0AB4;
    }
L_08AA0AB4:
    ctx.gpr[31] = (0x08AA0ABCu);
    ctx.gpr[5] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 435u, 0x0894E808u>(ctx, &aot_mem) && ctx.pc == 0x08AA0ABCu) goto L_08AA0ABC;
    return;
L_08AA0ABC:
    ctx.gpr[18] = (ctx.gpr[16] | 0u);
    goto L_08AA0AC0;
L_08AA0AC0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AA0AFCu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0AFCu) goto L_08AA0AFC;
    return;
L_08AA0AFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08AA0B10u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08AA0B10u) goto L_08AA0B10;
    return;
L_08AA0B10:
    ctx.gpr[31] = (0x08AA0B18u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0B18u) goto L_08AA0B18;
    return;
L_08AA0B18:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0B4C;
      }
      goto L_08AA0B28;
    }
L_08AA0B28:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0B4C;
      }
      goto L_08AA0B30;
    }
L_08AA0B30:
    ctx.gpr[31] = (0x08AA0B38u);
    ctx.gpr[4] = (0u | 224u);
    goto L_08AA30E0;
L_08AA0B38:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0B4C;
      }
      goto L_08AA0B44;
    }
L_08AA0B44:
    ctx.gpr[31] = (0x08AA0B4Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 777u, 0x0897FFDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0B4Cu) goto L_08AA0B4C;
    return;
L_08AA0B4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA0DC0;
      }
      goto L_08AA0B54;
    }
L_08AA0B54:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08AA0B60u);
    ctx.gpr[4] = (0u | 2160u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x08AA0B60u) goto L_08AA0B60;
    return;
L_08AA0B60:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AA0B7C;
      }
      goto L_08AA0B6C;
    }
L_08AA0B6C:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA0B78u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 143u, 0x089FD478u>(ctx, &aot_mem) && ctx.pc == 0x08AA0B78u) goto L_08AA0B78;
    return;
L_08AA0B78:
    ctx.gpr[18] = (ctx.gpr[21] | 0u);
    goto L_08AA0B7C;
L_08AA0B7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AA0BB8u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0BB8u) goto L_08AA0BB8;
    return;
L_08AA0BB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[31] = (0x08AA0BCCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08AA0BCCu) goto L_08AA0BCC;
    return;
L_08AA0BCC:
    ctx.gpr[31] = (0x08AA0BD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0BD4u) goto L_08AA0BD4;
    return;
L_08AA0BD4:
    ctx.gpr[31] = (0x08AA0BDCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08AA0BDCu) goto L_08AA0BDC;
    return;
L_08AA0BDC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26212)));
    ctx.gpr[31] = (0x08AA0BF4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26208)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0BF4u) goto L_08AA0BF4;
    return;
L_08AA0BF4:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 50 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0C34;
      }
      goto L_08AA0C14;
    }
L_08AA0C14:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5704));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-152)));
      if (branch_taken) {
          goto L_08AA0C50;
      }
      goto L_08AA0C34;
    }
L_08AA0C34:
    ctx.gpr[4] = (ctx.gpr[20] << 3u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5704));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-148)));
    goto L_08AA0C50;
L_08AA0C50:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA0C60u);
    ctx.gpr[6] = (0u | 25001u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 634u, 0x0899F50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0C60u) goto L_08AA0C60;
    return;
L_08AA0C60:
    ctx.gpr[31] = (0x08AA0C68u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0C68u) goto L_08AA0C68;
    return;
L_08AA0C68:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08AA0C74u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 585u, 0x0899F1DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0C74u) goto L_08AA0C74;
    return;
L_08AA0C74:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0CA8;
      }
      goto L_08AA0C84;
    }
L_08AA0C84:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0CA8;
      }
      goto L_08AA0C8C;
    }
L_08AA0C8C:
    ctx.gpr[31] = (0x08AA0C94u);
    ctx.gpr[4] = (0u | 224u);
    goto L_08AA30E0;
L_08AA0C94:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0CA8;
      }
      goto L_08AA0CA0;
    }
L_08AA0CA0:
    ctx.gpr[31] = (0x08AA0CA8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 777u, 0x0897FFDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0CA8u) goto L_08AA0CA8;
    return;
L_08AA0CA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA0DC0;
      }
      goto L_08AA0CB0;
    }
L_08AA0CB0:
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[31] = (0x08AA0CBCu);
    ctx.gpr[4] = (0u | 2160u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x08AA0CBCu) goto L_08AA0CBC;
    return;
L_08AA0CBC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08AA0CD8;
      }
      goto L_08AA0CC8;
    }
L_08AA0CC8:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA0CD4u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 143u, 0x089FD478u>(ctx, &aot_mem) && ctx.pc == 0x08AA0CD4u) goto L_08AA0CD4;
    return;
L_08AA0CD4:
    ctx.gpr[21] = (ctx.gpr[18] | 0u);
    goto L_08AA0CD8;
L_08AA0CD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08AA0D14u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0D14u) goto L_08AA0D14;
    return;
L_08AA0D14:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08AA0D28u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08AA0D28u) goto L_08AA0D28;
    return;
L_08AA0D28:
    ctx.gpr[31] = (0x08AA0D30u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08AA0D30u) goto L_08AA0D30;
    return;
L_08AA0D30:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26136)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (0u | 20u);
      if (branch_taken) {
          goto L_08AA0D6C;
      }
      goto L_08AA0D40;
    }
L_08AA0D40:
    { const bool branch_taken = ctx.gpr[20] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA0D6C;
      }
      goto L_08AA0D48;
    }
L_08AA0D48:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08AA0D58u);
    ctx.gpr[6] = (0u | 25001u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 634u, 0x0899F50Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0D58u) goto L_08AA0D58;
    return;
L_08AA0D58:
    ctx.gpr[31] = (0x08AA0D60u);
    ctx.gpr[4] = (0u | 17u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA0D60u) goto L_08AA0D60;
    return;
L_08AA0D60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08AA0D6Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 585u, 0x0899F1DCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0D6Cu) goto L_08AA0D6C;
    return;
L_08AA0D6C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0DA0;
      }
      goto L_08AA0D7C;
    }
L_08AA0D7C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0DA0;
      }
      goto L_08AA0D84;
    }
L_08AA0D84:
    ctx.gpr[31] = (0x08AA0D8Cu);
    ctx.gpr[4] = (0u | 224u);
    goto L_08AA30E0;
L_08AA0D8C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA0DA0;
      }
      goto L_08AA0D98;
    }
L_08AA0D98:
    ctx.gpr[31] = (0x08AA0DA0u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 777u, 0x0897FFDCu>(ctx, &aot_mem) && ctx.pc == 0x08AA0DA0u) goto L_08AA0DA0;
    return;
L_08AA0DA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08AA0DC0;
      }
      goto L_08AA0DA8;
    }
L_08AA0DA8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19824));
    ctx.gpr[31] = (0x08AA0DB8u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 534u, 0x08AFA558u>(ctx, &aot_mem) && ctx.pc == 0x08AA0DB8u) goto L_08AA0DB8;
    return;
L_08AA0DB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0DC0;
      }
      goto L_08AA0DC0;
    }
L_08AA0DC0:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA0DE4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-400));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(380), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(384), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(388), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(392), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(396), ctx.gpr[31]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(324), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15024)));
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7820)));
    ctx.gpr[16] = (ctx.gpr[4] & 31u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(328), ctx.gpr[16]);
    ctx.gpr[31] = (0x08AA0E64u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 195u, 0x089D58E0u>(ctx, &aot_mem) && ctx.pc == 0x08AA0E64u) goto L_08AA0E64;
    return;
L_08AA0E64:
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[16])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 5u));
    ctx.gpr[6] = (ctx.gpr[6] >> 27u);
    ctx.gpr[18] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 5u));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(332), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] >> 27u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA10EC;
      }
      goto L_08AA0EB8;
    }
L_08AA0EB8:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[23] = (2228u << 16u);
    ctx.gpr[4] = (17136u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16972u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] << 5u);
    ctx.gpr[20] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_08AA0EF4;
L_08AA0EF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_08AA0F14;
    }
    goto L_08AA0F0C;
L_08AA0F0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA0F18;
      }
      goto L_08AA0F14;
    }
L_08AA0F14:
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[20]);
    goto L_08AA0F18;
L_08AA0F18:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA10D8;
      }
      goto L_08AA0F24;
    }
L_08AA0F24:
    ctx.gpr[31] = (0x08AA0F2Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 244u, 0x0883D410u>(ctx, &aot_mem) && ctx.pc == 0x08AA0F2Cu) goto L_08AA0F2C;
    return;
L_08AA0F2C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA10D8;
      }
      goto L_08AA0F34;
    }
L_08AA0F34:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
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
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(384));
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
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1090;
      }
      goto L_08AA0FA8;
    }
L_08AA0FA8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(98)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA0FD0;
      }
      goto L_08AA0FBC;
    }
L_08AA0FBC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(440)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1014;
      }
      goto L_08AA0FD0;
    }
L_08AA0FD0:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA10D8;
      }
      goto L_08AA0FE0;
    }
L_08AA0FE0:
    ctx.gpr[31] = (0x08AA0FE8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08AA0FE8u) goto L_08AA0FE8;
    return;
L_08AA0FE8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA100C;
      }
      goto L_08AA0FF0;
    }
L_08AA0FF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AA100Cu);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA100Cu) goto L_08AA100C;
    return;
L_08AA100C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA10D8;
      }
      goto L_08AA1014;
    }
L_08AA1014:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA105C;
      }
      goto L_08AA1024;
    }
L_08AA1024:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AA1048;
      }
      goto L_08AA1034;
    }
L_08AA1034:
    ctx.gpr[31] = (0x08AA103Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA103Cu) goto L_08AA103C;
    return;
L_08AA103C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA105C;
      }
      goto L_08AA1044;
    }
L_08AA1044:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08AA1048;
L_08AA1048:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(440)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA10D8;
      }
      goto L_08AA105C;
    }
L_08AA105C:
    ctx.gpr[31] = (0x08AA1064u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08AA1064u) goto L_08AA1064;
    return;
L_08AA1064:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA10D8;
      }
      goto L_08AA106C;
    }
L_08AA106C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08AA1088u);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA1088u) goto L_08AA1088;
    return;
L_08AA1088:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA10D8;
      }
      goto L_08AA1090;
    }
L_08AA1090:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA10D8;
      }
      goto L_08AA10A0;
    }
L_08AA10A0:
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA10D8;
      }
      goto L_08AA10B0;
    }
L_08AA10B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA10D8;
      }
      goto L_08AA10C0;
    }
L_08AA10C0:
    ctx.gpr[31] = (0x08AA10C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 384u, 0x08A9DEBCu>(ctx, &aot_mem) && ctx.pc == 0x08AA10C8u) goto L_08AA10C8;
    return;
L_08AA10C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA10D8;
      }
      goto L_08AA10D0;
    }
L_08AA10D0:
    ctx.gpr[31] = (0x08AA10D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 358u, 0x08A9DD54u>(ctx, &aot_mem) && ctx.pc == 0x08AA10D8u) goto L_08AA10D8;
    return;
L_08AA10D8:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(544));
      if (branch_taken) {
          goto L_08AA0EF4;
      }
      goto L_08AA10EC;
    }
L_08AA10EC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
        goto L_08AA11EC;
    }
    goto L_08AA10FC;
L_08AA10FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(328)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 5u));
    ctx.gpr[6] = (ctx.gpr[6] >> 27u);
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 5u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(332)));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 5u));
    ctx.gpr[5] = (ctx.gpr[5] >> 27u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 5u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
      if (branch_taken) {
          goto L_08AA11E8;
      }
      goto L_08AA1148;
    }
L_08AA1148:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[17] << 5u);
    ctx.gpr[4] = (ctx.gpr[19] + ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    goto L_08AA1164;
L_08AA1164:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
        goto L_08AA1184;
    }
    goto L_08AA117C;
L_08AA117C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1188;
      }
      goto L_08AA1184;
    }
L_08AA1184:
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_08AA1188;
L_08AA1188:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA11D8;
      }
      goto L_08AA1190;
    }
L_08AA1190:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA11D8;
      }
      goto L_08AA11D0;
    }
L_08AA11D0:
    ctx.gpr[31] = (0x08AA11D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 329u, 0x08A9DB68u>(ctx, &aot_mem) && ctx.pc == 0x08AA11D8u) goto L_08AA11D8;
    return;
L_08AA11D8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08AA1164;
      }
      goto L_08AA11E8;
    }
L_08AA11E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    goto L_08AA11EC;
L_08AA11EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1B5C;
      }
      goto L_08AA11FC;
    }
L_08AA11FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[4]);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5992));
    ctx.fpr[22] = std::bit_cast<float>(0u);
    ctx.gpr[30] = (128u << 16u);
    ctx.gpr[22] = (2232u << 16u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (16230u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (48998u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 26214u);
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16512u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[4]);
    goto L_08AA1250;
L_08AA1250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] & 128u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AA1278;
      }
      goto L_08AA1270;
    }
L_08AA1270:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1284;
      }
      goto L_08AA1278;
    }
L_08AA1278:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_08AA1284;
L_08AA1284:
    ctx.gpr[20] = (ctx.gpr[17] | 0u);
    if (ctx.gpr[20] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
        goto L_08AA1B3C;
    }
    goto L_08AA1290;
L_08AA1290:
    ctx.gpr[31] = (0x08AA1298u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA1298u) goto L_08AA1298;
    return;
L_08AA1298:
    if (ctx.gpr[2] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
        goto L_08AA1B3C;
    }
    goto L_08AA12A0;
L_08AA12A0:
    ctx.gpr[31] = (0x08AA12A8u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 689u, 0x089A2DC8u>(ctx, &aot_mem) && ctx.pc == 0x08AA12A8u) goto L_08AA12A8;
    return;
L_08AA12A8:
    if (ctx.gpr[2] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
        goto L_08AA1B3C;
    }
    goto L_08AA12B0;
L_08AA12B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(1336)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
        goto L_08AA1B3C;
    }
    goto L_08AA12BC;
L_08AA12BC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1812)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 30001 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA1304;
      }
      goto L_08AA12D8;
    }
L_08AA12D8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA12F8;
      }
      goto L_08AA12E0;
    }
L_08AA12E0:
    ctx.gpr[31] = (0x08AA12E8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 78u, 0x089184E0u>(ctx, &aot_mem) && ctx.pc == 0x08AA12E8u) goto L_08AA12E8;
    return;
L_08AA12E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 15001 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA1304;
      }
      goto L_08AA12F0;
    }
L_08AA12F0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1304;
      }
      goto L_08AA12F8;
    }
L_08AA12F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_08AA1304;
L_08AA1304:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1334;
      }
      goto L_08AA1314;
    }
L_08AA1314:
    ctx.gpr[31] = (0x08AA131Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(80)));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 314u, 0x08925F38u>(ctx, &aot_mem) && ctx.pc == 0x08AA131Cu) goto L_08AA131C;
    return;
L_08AA131C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1334;
      }
      goto L_08AA1324;
    }
L_08AA1324:
    ctx.gpr[31] = (0x08AA132Cu);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x08AA132Cu) goto L_08AA132C;
    return;
L_08AA132C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1B38;
      }
      goto L_08AA1334;
    }
L_08AA1334:
    ctx.gpr[23] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[20] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[20] = std::sqrt(ctx.fpr[20]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 7 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1390;
      }
      goto L_08AA1374;
    }
L_08AA1374:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (16880u << 16u);
      if (branch_taken) {
          goto L_08AA1390;
      }
      goto L_08AA1384;
    }
L_08AA1384:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[20] = ctx.fpr[20] - ctx.fpr[12];
      if (branch_taken) {
          goto L_08AA13B0;
      }
      goto L_08AA1390;
    }
L_08AA1390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA13B0;
      }
      goto L_08AA13A0;
    }
L_08AA13A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1348)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA13B0;
      }
      goto L_08AA13AC;
    }
L_08AA13AC:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08AA13B0;
L_08AA13B0:
    ctx.gpr[31] = (0x08AA13B8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 639u, 0x08A9EF8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA13B8u) goto L_08AA13B8;
    return;
L_08AA13B8:
    ctx.gpr[4] = (17026u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(228)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (1024u << 16u);
      if (branch_taken) {
          goto L_08AA13E4;
      }
      goto L_08AA13DC;
    }
L_08AA13DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA15B8;
      }
      goto L_08AA13E4;
    }
L_08AA13E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1428;
      }
      goto L_08AA13F4;
    }
L_08AA13F4:
    ctx.gpr[31] = (0x08AA13FCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 639u, 0x08A9EF8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA13FCu) goto L_08AA13FC;
    return;
L_08AA13FC:
    ctx.gpr[4] = (16972u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(228)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA1428;
      }
      goto L_08AA1420;
    }
L_08AA1420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA15B8;
      }
      goto L_08AA1428;
    }
L_08AA1428:
    ctx.gpr[31] = (0x08AA1430u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 639u, 0x08A9EF8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1430u) goto L_08AA1430;
    return;
L_08AA1430:
    ctx.gpr[4] = (16840u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA158C;
      }
      goto L_08AA144C;
    }
L_08AA144C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1216)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA15B8;
      }
      goto L_08AA1460;
    }
L_08AA1460:
    ctx.gpr[31] = (0x08AA1468u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1468u) goto L_08AA1468;
    return;
L_08AA1468:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA15B8;
      }
      goto L_08AA1470;
    }
L_08AA1470:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA15B8;
      }
      goto L_08AA14A0;
    }
L_08AA14A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA15B8;
      }
      goto L_08AA14D0;
    }
L_08AA14D0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA15B8;
      }
      goto L_08AA1500;
    }
L_08AA1500:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(424)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA15B8;
      }
      goto L_08AA152C;
    }
L_08AA152C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(425)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA15B8;
      }
      goto L_08AA1558;
    }
L_08AA1558:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(127)));
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(423)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA15B8;
      }
      goto L_08AA1584;
    }
L_08AA1584:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA15B8;
      }
      goto L_08AA158C;
    }
L_08AA158C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA15AC;
      }
      goto L_08AA159C;
    }
L_08AA159C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1216), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA15B8;
      }
      goto L_08AA15AC;
    }
L_08AA15AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4000));
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(1216), ctx.gpr[4]);
    goto L_08AA15B8;
L_08AA15B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA15CC;
      }
      goto L_08AA15C8;
    }
L_08AA15C8:
    ctx.gpr[21] = (0u | 0u);
    goto L_08AA15CC;
L_08AA15CC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08AA1848;
      }
      goto L_08AA15D4;
    }
L_08AA15D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1848;
      }
      goto L_08AA15E0;
    }
L_08AA15E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA160C;
      }
      goto L_08AA15EC;
    }
L_08AA15EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 0 ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
      if (branch_taken) {
          goto L_08AA1610;
      }
      goto L_08AA1608;
    }
L_08AA1608:
    ctx.gpr[6] = (0u | 1u);
    goto L_08AA160C;
L_08AA160C:
    ctx.gpr[4] = (ctx.gpr[6] & 255u);
    goto L_08AA1610;
L_08AA1610:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1848;
      }
      goto L_08AA1618;
    }
L_08AA1618:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1848;
      }
      goto L_08AA1644;
    }
L_08AA1644:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AA181C;
      }
      goto L_08AA1654;
    }
L_08AA1654:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA1660u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 646u, 0x088A7DB8u>(ctx, &aot_mem) && ctx.pc == 0x08AA1660u) goto L_08AA1660;
    return;
L_08AA1660:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA181C;
      }
      goto L_08AA166C;
    }
L_08AA166C:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
        goto L_08AA16B8;
    }
    goto L_08AA1680;
L_08AA1680:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(236), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08AA1688;
L_08AA1688:
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AA16A8;
      }
      goto L_08AA1698;
    }
L_08AA1698:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA16AC;
      }
      goto L_08AA16A8;
    }
L_08AA16A8:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA16AC;
L_08AA16AC:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08AA1688;
    }
    goto L_08AA16B4;
L_08AA16B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    goto L_08AA16B8;
L_08AA16B8:
    if (ctx.gpr[7] == ctx.gpr[4]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
        goto L_08AA16DC;
    }
    goto L_08AA16C0;
L_08AA16C0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(237), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[7]);
        goto L_08AA16E0;
    }
    goto L_08AA16D8;
L_08AA16D8:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    goto L_08AA16DC;
L_08AA16DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[7]);
    goto L_08AA16E0;
L_08AA16E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[4] = (ctx.gpr[7] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
        goto L_08AA171C;
    }
    goto L_08AA1714;
L_08AA1714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA171C;
      }
      goto L_08AA171C;
    }
L_08AA171C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(136));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA1734u);
    ctx.gpr[4] = (ctx.gpr[7] + ctx.gpr[4]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA1734u) goto L_08AA1734;
    return;
L_08AA1734:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA181C;
      }
      goto L_08AA173C;
    }
L_08AA173C:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x08AA1748u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0140_entry, 140u, 151u, 0x08A34E60u>(ctx, &aot_mem) && ctx.pc == 0x08AA1748u) goto L_08AA1748;
    return;
L_08AA1748:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA181C;
      }
      goto L_08AA1750;
    }
L_08AA1750:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
        goto L_08AA179C;
    }
    goto L_08AA1764;
L_08AA1764:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(272), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_08AA176C;
L_08AA176C:
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_08AA178C;
      }
      goto L_08AA177C;
    }
L_08AA177C:
    ctx.gpr[7] = (ctx.gpr[6] | 0u);
    ctx.gpr[4] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA1790;
      }
      goto L_08AA178C;
    }
L_08AA178C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA1790;
L_08AA1790:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_08AA176C;
    }
    goto L_08AA1798;
L_08AA1798:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    goto L_08AA179C;
L_08AA179C:
    if (ctx.gpr[7] == ctx.gpr[4]) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
        goto L_08AA17C0;
    }
    goto L_08AA17A4;
L_08AA17A4:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(273), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[7]);
        goto L_08AA17C4;
    }
    goto L_08AA17BC;
L_08AA17BC:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    goto L_08AA17C0;
L_08AA17C0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[7]);
    goto L_08AA17C4;
L_08AA17C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), ctx.gpr[4]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[4] = (ctx.gpr[7] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
        goto L_08AA1800;
    }
    goto L_08AA17F8;
L_08AA17F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1800;
      }
      goto L_08AA1800;
    }
L_08AA1800:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x08AA1810u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 214u, 0x088A8E30u>(ctx, &aot_mem) && ctx.pc == 0x08AA1810u) goto L_08AA1810;
    return;
L_08AA1810:
    ctx.gpr[21] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1848;
      }
      goto L_08AA181C;
    }
L_08AA181C:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(148)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(144)));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[5] = (ctx.gpr[5] >> 30u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 2u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1644;
      }
      goto L_08AA1848;
    }
L_08AA1848:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[17] = (0u | 40000u);
      if (branch_taken) {
          goto L_08AA1B38;
      }
      goto L_08AA1850;
    }
L_08AA1850:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1B00;
      }
      goto L_08AA1860;
    }
L_08AA1860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1B00;
      }
      goto L_08AA1870;
    }
L_08AA1870:
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08AA1884u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08AA1884u) goto L_08AA1884;
    return;
L_08AA1884:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (15560u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 62915u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x08AA18ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08AA18ACu) goto L_08AA18AC;
    return;
L_08AA18AC:
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[5] = (ctx.gpr[2] & 65535u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[5]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[4]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    ctx.gpr[6] = (ctx.hi);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA1980;
      }
      goto L_08AA18C4;
    }
L_08AA18C4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[6]) < 0;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AA1B00;
      }
      goto L_08AA18CC;
    }
L_08AA18CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27932)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA1978u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x08AA1978u) goto L_08AA1978;
    return;
L_08AA1978:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1B00;
      }
      goto L_08AA1980;
    }
L_08AA1980:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AA19A0;
      }
      goto L_08AA1988;
    }
L_08AA1988:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08AA1A54;
      }
      goto L_08AA1994;
    }
L_08AA1994:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1B00;
      }
      goto L_08AA199C;
    }
L_08AA199C:
    ctx.gpr[4] = (2227u << 16u);
    goto L_08AA19A0;
L_08AA19A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27936)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA1A4Cu);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x08AA1A4Cu) goto L_08AA1A4C;
    return;
L_08AA1A4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1B00;
      }
      goto L_08AA1A54;
    }
L_08AA1A54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(27940)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (0u | 255u);
    ctx.gpr[10] = (0u | 255u);
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[11] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA1B00u);
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0073_entry, 73u, 142u, 0x08929268u>(ctx, &aot_mem) && ctx.pc == 0x08AA1B00u) goto L_08AA1B00;
    return;
L_08AA1B00:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA1B30;
      }
      goto L_08AA1B10;
    }
L_08AA1B10:
    ctx.gpr[31] = (0x08AA1B18u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 745u, 0x08A2F69Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1B18u) goto L_08AA1B18;
    return;
L_08AA1B18:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1B30;
      }
      goto L_08AA1B20;
    }
L_08AA1B20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1B38;
      }
      goto L_08AA1B30;
    }
L_08AA1B30:
    ctx.gpr[31] = (0x08AA1B38u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x08AA1B38u) goto L_08AA1B38;
    return;
L_08AA1B38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    goto L_08AA1B3C;
L_08AA1B3C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(316)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-3248));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(320), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(316), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08AA1250;
      }
      goto L_08AA1B5C;
    }
L_08AA1B5C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(344)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(348)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(368)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(372)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(376)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(380)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(384)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(388)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(392)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(396)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA1BA4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-176));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[31]);
    ctx.gpr[21] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[22] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = ctx.fpr[12] - ctx.fpr[13];
    ctx.gpr[5] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
        goto L_08AA1C3C;
    }
    goto L_08AA1C3C;
L_08AA1C3C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[14] - ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
        goto L_08AA1C6C;
    }
    goto L_08AA1C6C;
L_08AA1C6C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[12];
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[14]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 100 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[6]);
    if (ctx.gpr[7] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[5]);
        goto L_08AA1C9C;
    }
    goto L_08AA1C9C;
L_08AA1C9C:
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[12];
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (0u | 100u);
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    if (ctx.gpr[6] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[4]);
        goto L_08AA1CCC;
    }
    goto L_08AA1CCC;
L_08AA1CCC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA1D24u);
    ctx.gpr[5] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 220u, 0x08A9D07Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA1D24u) goto L_08AA1D24;
    return;
L_08AA1D24:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
      if (branch_taken) {
          goto L_08AA1F00;
      }
      goto L_08AA1D3C;
    }
L_08AA1D3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    ctx.gpr[18] = (2227u << 16u);
    ctx.gpr[19] = (2232u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-14464));
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    goto L_08AA1D60;
L_08AA1D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA1EDC;
      }
      goto L_08AA1D74;
    }
L_08AA1D74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    goto L_08AA1D90;
L_08AA1D90:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20972)));
    ctx.gpr[30] = (ctx.gpr[4] + ctx.gpr[30]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1E2C;
      }
      goto L_08AA1DAC;
    }
L_08AA1DAC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA1E24;
      }
      goto L_08AA1DC4;
    }
L_08AA1DC4:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AA1DD0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 741u, 0x08A2F5A8u>(ctx, &aot_mem) && ctx.pc == 0x08AA1DD0u) goto L_08AA1DD0;
    return;
L_08AA1DD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1E24;
      }
      goto L_08AA1DD8;
    }
L_08AA1DD8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20976)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AA1E14u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 325u, 0x088CE900u>(ctx, &aot_mem) && ctx.pc == 0x08AA1E14u) goto L_08AA1E14;
    return;
L_08AA1E14:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA1E24;
      }
      goto L_08AA1E1C;
    }
L_08AA1E1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1F04;
      }
      goto L_08AA1E24;
    }
L_08AA1E24:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1DAC;
      }
      goto L_08AA1E2C;
    }
L_08AA1E2C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(24)));
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1EB8;
      }
      goto L_08AA1E38;
    }
L_08AA1E38:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(84)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20976)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA1EB0;
      }
      goto L_08AA1E50;
    }
L_08AA1E50:
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[31] = (0x08AA1E5Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 741u, 0x08A2F5A8u>(ctx, &aot_mem) && ctx.pc == 0x08AA1E5Cu) goto L_08AA1E5C;
    return;
L_08AA1E5C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1EB0;
      }
      goto L_08AA1E64;
    }
L_08AA1E64:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(20976)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(84), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (ctx.gpr[19] | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08AA1EA0u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0050_entry, 50u, 325u, 0x088CE900u>(ctx, &aot_mem) && ctx.pc == 0x08AA1EA0u) goto L_08AA1EA0;
    return;
L_08AA1EA0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    // nop
      if (branch_taken) {
          goto L_08AA1EB0;
      }
      goto L_08AA1EA8;
    }
L_08AA1EA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA1F04;
      }
      goto L_08AA1EB0;
    }
L_08AA1EB0:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA1E38;
      }
      goto L_08AA1EB8;
    }
L_08AA1EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(44));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA1D90;
      }
      goto L_08AA1EDC;
    }
L_08AA1EDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(100));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA1D60;
      }
      goto L_08AA1F00;
    }
L_08AA1F00:
    ctx.gpr[2] = (0u | 1u);
    goto L_08AA1F04;
L_08AA1F04:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
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
L_08AA1F38:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[31]);
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[5]) < 2 ? 1u : 0u);
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA204C;
      }
      goto L_08AA1F90;
    }
L_08AA1F90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16384u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
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
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[26] - ctx.fpr[13];
    ctx.fpr[30] = ctx.fpr[14] / ctx.fpr[12];
    ctx.fpr[30] = std::sqrt(ctx.fpr[30]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-464));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08AA203C;
      }
      goto L_08AA2034;
    }
L_08AA2034:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AA203C;
L_08AA203C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2054;
      }
      goto L_08AA2044;
    }
L_08AA2044:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA20B4;
      }
      goto L_08AA204C;
    }
L_08AA204C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2608;
      }
      goto L_08AA2054;
    }
L_08AA2054:
    ctx.gpr[31] = (0x08AA205Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA205Cu) goto L_08AA205C;
    return;
L_08AA205C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AA2090u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 639u, 0x08A9EF8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2090u) goto L_08AA2090;
    return;
L_08AA2090:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA20B4;
      }
      goto L_08AA20AC;
    }
L_08AA20AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2608;
      }
      goto L_08AA20B4;
    }
L_08AA20B4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AA20C8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 420u, 0x088A6CB0u>(ctx, &aot_mem) && ctx.pc == 0x08AA20C8u) goto L_08AA20C8;
    return;
L_08AA20C8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA20F0;
      }
      goto L_08AA20D0;
    }
L_08AA20D0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
        goto L_08AA20F8;
    }
    goto L_08AA20E8;
L_08AA20E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA246C;
      }
      goto L_08AA20F0;
    }
L_08AA20F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2608;
      }
      goto L_08AA20F8;
    }
L_08AA20F8:
    ctx.gpr[4] = (48716u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (15948u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(-7));
    ctx.gpr[23] = (2229u << 16u);
    ctx.gpr[22] = (ctx.gpr[29] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[4]);
    goto L_08AA2128;
L_08AA2128:
    ctx.gpr[31] = (0x08AA2130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2130u) goto L_08AA2130;
    return;
L_08AA2130:
    ctx.fpr[12] = ctx.fpr[28] - ctx.fpr[24];
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[24] + ctx.fpr[12];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.gpr[31] = (0x08AA214Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA214Cu) goto L_08AA214C;
    return;
L_08AA214C:
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[24] + ctx.fpr[13];
    { const float fs = ctx.fpr[30]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[19]);
    ctx.fpr[14] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[14])));
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
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
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[20] = ctx.fpr[30] + ctx.fpr[13];
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
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
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[20];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[26];
    ctx.gpr[31] = (0x08AA21D0u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08AA21D0u) goto L_08AA21D0;
    return;
L_08AA21D0:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[26];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2458;
      }
      goto L_08AA21E0;
    }
L_08AA21E0:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
        goto L_08AA21F4;
    }
    goto L_08AA21F4;
L_08AA21F4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[22];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
        goto L_08AA2224;
    }
    goto L_08AA2218;
L_08AA2218:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    goto L_08AA2224;
L_08AA2224:
    ctx.gpr[31] = (0x08AA222Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 430u, 0x08A9E2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AA222Cu) goto L_08AA222C;
    return;
L_08AA222C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2254;
      }
      goto L_08AA2244;
    }
L_08AA2244:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA2254;
L_08AA2254:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA226Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA226Cu) goto L_08AA226C;
    return;
L_08AA226C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA227C;
      }
      goto L_08AA2274;
    }
L_08AA2274:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2458;
      }
      goto L_08AA227C;
    }
L_08AA227C:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AA2284;
L_08AA2284:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(128), 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2284;
      }
      goto L_08AA2298;
    }
L_08AA2298:
    ctx.gpr[4] = (ctx.gpr[16] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08AA22C0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 420u, 0x088A6CB0u>(ctx, &aot_mem) && ctx.pc == 0x08AA22C0u) goto L_08AA22C0;
    return;
L_08AA22C0:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[29] | 0u);
    goto L_08AA22CC;
L_08AA22CC:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(128)));
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2328;
      }
      goto L_08AA22D8;
    }
L_08AA22D8:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08AA2314;
      }
      goto L_08AA22EC;
    }
L_08AA22EC:
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    { const bool branch_taken = ctx.gpr[8] != ctx.gpr[10];
    // nop
      if (branch_taken) {
          goto L_08AA2304;
      }
      goto L_08AA22F8;
    }
L_08AA22F8:
    ctx.gpr[9] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2314;
      }
      goto L_08AA2304;
    }
L_08AA2304:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[10] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA22EC;
      }
      goto L_08AA2314;
    }
L_08AA2314:
    { const bool branch_taken = ctx.gpr[9] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2328;
      }
      goto L_08AA231C;
    }
L_08AA231C:
    ctx.gpr[20] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2338;
      }
      goto L_08AA2328;
    }
L_08AA2328:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA22CC;
      }
      goto L_08AA2338;
    }
L_08AA2338:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2348;
      }
      goto L_08AA2340;
    }
L_08AA2340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA2378;
      }
      goto L_08AA2348;
    }
L_08AA2348:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08AA2374u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2374u) goto L_08AA2374;
    return;
L_08AA2374:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_08AA2378;
L_08AA2378:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2388;
      }
      goto L_08AA2380;
    }
L_08AA2380:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 1u);
      if (branch_taken) {
          goto L_08AA23B0;
      }
      goto L_08AA2388;
    }
L_08AA2388:
    ctx.gpr[5] = (0u | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[26]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[5] = (0u | 1u);
        goto L_08AA23AC;
    }
    goto L_08AA23AC;
L_08AA23AC:
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08AA23B0;
L_08AA23B0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2458;
      }
      goto L_08AA23B8;
    }
L_08AA23B8:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2458;
      }
      goto L_08AA23C0;
    }
L_08AA23C0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2458;
      }
      goto L_08AA23C8;
    }
L_08AA23C8:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA23E4u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08AA0754;
L_08AA23E4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2450;
      }
      goto L_08AA23F0;
    }
L_08AA23F0:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(4));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x08AA2418u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2418u) goto L_08AA2418;
    return;
L_08AA2418:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x08AA2428u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 648u, 0x08AC3D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2428u) goto L_08AA2428;
    return;
L_08AA2428:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA243C;
      }
      goto L_08AA2430;
    }
L_08AA2430:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_08AA243C;
L_08AA243C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AA2448u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925F24u>(ctx, &aot_mem) && ctx.pc == 0x08AA2448u) goto L_08AA2448;
    return;
L_08AA2448:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2458;
      }
      goto L_08AA2450;
    }
L_08AA2450:
    ctx.gpr[31] = (0x08AA2458u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x08AA2458u) goto L_08AA2458;
    return;
L_08AA2458:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2128;
      }
      goto L_08AA246C;
    }
L_08AA246C:
    ctx.gpr[16] = (static_cast<std::int32_t>(ctx.gpr[17]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA24A8;
      }
      goto L_08AA2478;
    }
L_08AA2478:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08AA24A0;
      }
      goto L_08AA2488;
    }
L_08AA2488:
    ctx.gpr[31] = (0x08AA2490u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x08AA2490u) goto L_08AA2490;
    return;
L_08AA2490:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2488;
      }
      goto L_08AA24A0;
    }
L_08AA24A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2608;
      }
      goto L_08AA24A8;
    }
L_08AA24A8:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[18] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[18]) >> 1u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (2u << 16u);
      if (branch_taken) {
          goto L_08AA250C;
      }
      goto L_08AA24C8;
    }
L_08AA24C8:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-31072));
    ctx.gpr[21] = (ctx.gpr[29] | 0u);
    ctx.gpr[19] = (ctx.gpr[17] << 2u);
    ctx.gpr[19] = (ctx.gpr[29] + ctx.gpr[19]);
    goto L_08AA24D8;
L_08AA24D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (0x08AA24E8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 625u, 0x089A2A7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA24E8u) goto L_08AA24E8;
    return;
L_08AA24E8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08AA24F8u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 625u, 0x089A2A7Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA24F8u) goto L_08AA24F8;
    return;
L_08AA24F8:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4));
      if (branch_taken) {
          goto L_08AA24D8;
      }
      goto L_08AA250C;
    }
L_08AA250C:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[4] = (ctx.gpr[17] & 1u);
      if (branch_taken) {
          goto L_08AA251C;
      }
      goto L_08AA2514;
    }
L_08AA2514:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u - ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA251C;
      }
      goto L_08AA251C;
    }
L_08AA251C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA25C4;
      }
      goto L_08AA2524;
    }
L_08AA2524:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] >> 31u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 1u));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = ctx.fpr[14] - ctx.fpr[12];
    ctx.gpr[31] = (0x08AA2570u);
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2570u) goto L_08AA2570;
    return;
L_08AA2570:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA257Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x08AA257Cu) goto L_08AA257C;
    return;
L_08AA257C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 37u);
      if (branch_taken) {
          goto L_08AA25C0;
      }
      goto L_08AA258C;
    }
L_08AA258C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA25B4;
      }
      goto L_08AA2598;
    }
L_08AA2598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
        goto L_08AA25B4;
    }
    goto L_08AA25A4;
L_08AA25A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08AA25B0u);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08AA25B0u) goto L_08AA25B0;
    return;
L_08AA25B0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(912), 0u);
    goto L_08AA25B4;
L_08AA25B4:
    ctx.gpr[31] = (0x08AA25BCu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA25BCu) goto L_08AA25BC;
    return;
L_08AA25BC:
    ctx.gpr[4] = (0u | 37u);
    goto L_08AA25C0;
L_08AA25C0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    goto L_08AA25C4;
L_08AA25C4:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2608;
      }
      goto L_08AA25CC;
    }
L_08AA25CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] | 512u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(408), ctx.gpr[5]);
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2608;
      }
      goto L_08AA25EC;
    }
L_08AA25EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (0x08AA25F8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 56u, 0x089A4300u>(ctx, &aot_mem) && ctx.pc == 0x08AA25F8u) goto L_08AA25F8;
    return;
L_08AA25F8:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[17]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA25EC;
      }
      goto L_08AA2608;
    }
L_08AA2608:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA2650:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), ctx.gpr[31]);
    ctx.gpr[7] = (16448u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[7]);
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-464));
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[7] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[7]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08AA26D4;
      }
      goto L_08AA26CC;
    }
L_08AA26CC:
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    goto L_08AA26D4;
L_08AA26D4:
    ctx.gpr[23] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    ctx.gpr[21] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA2744;
      }
      goto L_08AA26E4;
    }
L_08AA26E4:
    ctx.gpr[31] = (0x08AA26ECu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA26ECu) goto L_08AA26EC;
    return;
L_08AA26EC:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AA2720u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 639u, 0x08A9EF8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2720u) goto L_08AA2720;
    return;
L_08AA2720:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA2744;
      }
      goto L_08AA273C;
    }
L_08AA273C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B5C;
      }
      goto L_08AA2744;
    }
L_08AA2744:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AA2758u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 420u, 0x088A6CB0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2758u) goto L_08AA2758;
    return;
L_08AA2758:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA27B8;
      }
      goto L_08AA2760;
    }
L_08AA2760:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08AA2780u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2780u) goto L_08AA2780;
    return;
L_08AA2780:
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA27B0;
      }
      goto L_08AA2790;
    }
L_08AA2790:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[23] + static_cast<std::uint32_t>(-7));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AA27C0;
      }
      goto L_08AA27A8;
    }
L_08AA27A8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA27C8;
      }
      goto L_08AA27B0;
    }
L_08AA27B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B5C;
      }
      goto L_08AA27B8;
    }
L_08AA27B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B5C;
      }
      goto L_08AA27C0;
    }
L_08AA27C0:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    goto L_08AA27C8;
L_08AA27C8:
    ctx.gpr[31] = (0x08AA27D0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 430u, 0x08A9E2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AA27D0u) goto L_08AA27D0;
    return;
L_08AA27D0:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[22]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA27F8;
      }
      goto L_08AA27E4;
    }
L_08AA27E4:
    ctx.gpr[4] = (ctx.gpr[22] << 2u);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA27F8;
L_08AA27F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA2810u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA2810u) goto L_08AA2810;
    return;
L_08AA2810:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA28CC;
      }
      goto L_08AA2818;
    }
L_08AA2818:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA2844u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08AA0754;
L_08AA2844:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA28C4;
      }
      goto L_08AA2850;
    }
L_08AA2850:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AA285Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA285Cu) goto L_08AA285C;
    return;
L_08AA285C:
    ctx.gpr[31] = (0x08AA2864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08AA2864u) goto L_08AA2864;
    return;
L_08AA2864:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26204)));
    ctx.gpr[31] = (0x08AA287Cu);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26200)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08AA287Cu) goto L_08AA287C;
    return;
L_08AA287C:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08AA28A0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA28A0u) goto L_08AA28A0;
    return;
L_08AA28A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[31] = (0x08AA28B4u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 648u, 0x08AC3D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA28B4u) goto L_08AA28B4;
    return;
L_08AA28B4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA28D4;
      }
      goto L_08AA28BC;
    }
L_08AA28BC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[19]);
      if (branch_taken) {
          goto L_08AA28E4;
      }
      goto L_08AA28C4;
    }
L_08AA28C4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B5C;
      }
      goto L_08AA28CC;
    }
L_08AA28CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B5C;
      }
      goto L_08AA28D4;
    }
L_08AA28D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[19]);
    goto L_08AA28E4;
L_08AA28E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[19]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[20] = (ctx.gpr[22] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_08AA2AF4;
      }
      goto L_08AA28FC;
    }
L_08AA28FC:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
    goto L_08AA2904;
L_08AA2904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[31] = (0x08AA2910u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 430u, 0x08A9E2C4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2910u) goto L_08AA2910;
    return;
L_08AA2910:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA293C;
      }
      goto L_08AA2928;
    }
L_08AA2928:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] << 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA293C;
L_08AA293C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA2954u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA2954u) goto L_08AA2954;
    return;
L_08AA2954:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2964;
      }
      goto L_08AA295C;
    }
L_08AA295C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2AE0;
      }
      goto L_08AA2964;
    }
L_08AA2964:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA2990u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08AA0754;
L_08AA2990:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2AE0;
      }
      goto L_08AA299C;
    }
L_08AA299C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[31] = (0x08AA29ACu);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08AA29ACu) goto L_08AA29AC;
    return;
L_08AA29AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA29B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 627u, 0x08887474u>(ctx, &aot_mem) && ctx.pc == 0x08AA29B8u) goto L_08AA29B8;
    return;
L_08AA29B8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x08AA29C4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 606u, 0x0888718Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA29C4u) goto L_08AA29C4;
    return;
L_08AA29C4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08AA29DCu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08AA29DCu) goto L_08AA29DC;
    return;
L_08AA29DC:
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[20];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
        goto L_08AA29F4;
    }
    goto L_08AA29F4;
L_08AA29F4:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2A14;
      }
      goto L_08AA2A04;
    }
L_08AA2A04:
    ctx.gpr[31] = (0x08AA2A0Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A0Cu) goto L_08AA2A0C;
    return;
L_08AA2A0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2AE0;
      }
      goto L_08AA2A14;
    }
L_08AA2A14:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA2A40;
      }
      goto L_08AA2A30;
    }
L_08AA2A30:
    ctx.gpr[31] = (0x08AA2A38u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A38u) goto L_08AA2A38;
    return;
L_08AA2A38:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2AE0;
      }
      goto L_08AA2A40;
    }
L_08AA2A40:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[30] | 0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[31] = (0x08AA2A80u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0048_entry, 48u, 328u, 0x088C5AA4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A80u) goto L_08AA2A80;
    return;
L_08AA2A80:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2A98;
      }
      goto L_08AA2A88;
    }
L_08AA2A88:
    ctx.gpr[31] = (0x08AA2A90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x08AA2A90u) goto L_08AA2A90;
    return;
L_08AA2A90:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2AE0;
      }
      goto L_08AA2A98;
    }
L_08AA2A98:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(72), ctx.gpr[16]);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[31] = (0x08AA2AC0u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0175_entry, 175u, 648u, 0x08AC3D0Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2AC0u) goto L_08AA2AC0;
    return;
L_08AA2AC0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2AD4;
      }
      goto L_08AA2AC8;
    }
L_08AA2AC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(416)));
    ctx.gpr[4] = (ctx.gpr[4] | 256u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(416), ctx.gpr[4]);
    goto L_08AA2AD4;
L_08AA2AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AA2AE0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925F24u>(ctx, &aot_mem) && ctx.pc == 0x08AA2AE0u) goto L_08AA2AE0;
    return;
L_08AA2AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2904;
      }
      goto L_08AA2AF4;
    }
L_08AA2AF4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B30;
      }
      goto L_08AA2B00;
    }
L_08AA2B00:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] | 0u);
      if (branch_taken) {
          goto L_08AA2B5C;
      }
      goto L_08AA2B10;
    }
L_08AA2B10:
    ctx.gpr[31] = (0x08AA2B18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x08AA2B18u) goto L_08AA2B18;
    return;
L_08AA2B18:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2B10;
      }
      goto L_08AA2B28;
    }
L_08AA2B28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2B5C;
      }
      goto L_08AA2B30;
    }
L_08AA2B30:
    ctx.gpr[16] = (0u | 1u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2B5C;
      }
      goto L_08AA2B40;
    }
L_08AA2B40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08AA2B4Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 56u, 0x089A4300u>(ctx, &aot_mem) && ctx.pc == 0x08AA2B4Cu) goto L_08AA2B4C;
    return;
L_08AA2B4C:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < static_cast<std::int32_t>(ctx.gpr[18]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2B40;
      }
      goto L_08AA2B5C;
    }
L_08AA2B5C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(220)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA2B98:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[31]);
    ctx.gpr[20] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (0u | 4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[6] | 0u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[8];
    ctx.gpr[19] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AA2C4C;
      }
      goto L_08AA2BE4;
    }
L_08AA2BE4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08AA2C4C;
      }
      goto L_08AA2BF0;
    }
L_08AA2BF0:
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-464));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { float vfpu_matrix[16]{}, vfpu_target_raw[4]{}, vfpu_target[4]{}, vfpu_result[4]{};
      ctx.read_vfpu_matrix(vfpu_matrix, 36u, 4u);
      ctx.read_vfpu_vector_ct<12u, 4u>(vfpu_target_raw);
      constexpr std::uint32_t vfpu_side = 4u;
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
      ctx.write_vfpu_vector_with_destination_prefix(vfpu_result, 14u, vfpu_side); }
    ctx.vfpu_ctrl[1u] = 0x00000000u;
    ctx.execute_vfpu_vcmp_ct<14u, 0u, 4u, 3u>();
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08AA2C3C;
      }
      goto L_08AA2C34;
    }
L_08AA2C34:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    goto L_08AA2C3C;
L_08AA2C3C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2C54;
      }
      goto L_08AA2C44;
    }
L_08AA2C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2CB4;
      }
      goto L_08AA2C4C;
    }
L_08AA2C4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2FEC;
      }
      goto L_08AA2C54;
    }
L_08AA2C54:
    ctx.gpr[31] = (0x08AA2C5Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2C5Cu) goto L_08AA2C5C;
    return;
L_08AA2C5C:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 0u, 2u>();
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<28u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::fabs(std::sqrt(vfpu_s[i]));
      ctx.write_vfpu_vector_with_destination_prefix_ct<28u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[31] = (0x08AA2C90u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 639u, 0x08A9EF8Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2C90u) goto L_08AA2C90;
    return;
L_08AA2C90:
    ctx.gpr[4] = (16928u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08AA2CB4;
      }
      goto L_08AA2CAC;
    }
L_08AA2CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2FEC;
      }
      goto L_08AA2CB4;
    }
L_08AA2CB4:
    ctx.gpr[23] = (ctx.gpr[17] << 2u);
    ctx.gpr[21] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08AA2CE0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 420u, 0x088A6CB0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2CE0u) goto L_08AA2CE0;
    return;
L_08AA2CE0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2D3C;
      }
      goto L_08AA2CE8;
    }
L_08AA2CE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08AA2D08u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2D08u) goto L_08AA2D08;
    return;
L_08AA2D08:
    ctx.fpr[22] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2D34;
      }
      goto L_08AA2D18;
    }
L_08AA2D18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[22] = (2230u << 16u);
      if (branch_taken) {
          goto L_08AA2D44;
      }
      goto L_08AA2D2C;
    }
L_08AA2D2C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2D48;
      }
      goto L_08AA2D34;
    }
L_08AA2D34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2FEC;
      }
      goto L_08AA2D3C;
    }
L_08AA2D3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2FEC;
      }
      goto L_08AA2D44;
    }
L_08AA2D44:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    goto L_08AA2D48;
L_08AA2D48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2D64;
      }
      goto L_08AA2D58;
    }
L_08AA2D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[23]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08AA2D64;
L_08AA2D64:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA2D7Cu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA2D7Cu) goto L_08AA2D7C;
    return;
L_08AA2D7C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08AA2E44;
      }
      goto L_08AA2D84;
    }
L_08AA2D84:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA2DB0u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08AA0754;
L_08AA2DB0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2E3C;
      }
      goto L_08AA2DBC;
    }
L_08AA2DBC:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08AA2DC8u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2DC8u) goto L_08AA2DC8;
    return;
L_08AA2DC8:
    ctx.gpr[31] = (0x08AA2DD0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08AA2DD0u) goto L_08AA2DD0;
    return;
L_08AA2DD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26204)));
    ctx.gpr[31] = (0x08AA2DE8u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(26200)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08AA2DE8u) goto L_08AA2DE8;
    return;
L_08AA2DE8:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] << 24u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 24u));
    ctx.gpr[31] = (0x08AA2E0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 270u, 0x089A13B4u>(ctx, &aot_mem) && ctx.pc == 0x08AA2E0Cu) goto L_08AA2E0C;
    return;
L_08AA2E0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] | 512u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AA2E24u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925F24u>(ctx, &aot_mem) && ctx.pc == 0x08AA2E24u) goto L_08AA2E24;
    return;
L_08AA2E24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA2E4C;
      }
      goto L_08AA2E34;
    }
L_08AA2E34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
      if (branch_taken) {
          goto L_08AA2E60;
      }
      goto L_08AA2E3C;
    }
L_08AA2E3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2FEC;
      }
      goto L_08AA2E44;
    }
L_08AA2E44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2FEC;
      }
      goto L_08AA2E4C;
    }
L_08AA2E4C:
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    goto L_08AA2E60;
L_08AA2E60:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x08AA2E74u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08AA2E74u) goto L_08AA2E74;
    return;
L_08AA2E74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2EBC;
      }
      goto L_08AA2E7C;
    }
L_08AA2E7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x08AA2EA8u);
    ctx.gpr[8] = (0u | 1u);
    goto L_08AA0754;
L_08AA2EA8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2EC4;
      }
      goto L_08AA2EB4;
    }
L_08AA2EB4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2FEC;
      }
      goto L_08AA2EBC;
    }
L_08AA2EBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2FEC;
      }
      goto L_08AA2EC4;
    }
L_08AA2EC4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[31] = (0x08AA2ED4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2ED4u) goto L_08AA2ED4;
    return;
L_08AA2ED4:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA2EE0u);
    ctx.gpr[5] = (0u | 7u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 627u, 0x08887474u>(ctx, &aot_mem) && ctx.pc == 0x08AA2EE0u) goto L_08AA2EE0;
    return;
L_08AA2EE0:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA2EF0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 606u, 0x0888718Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA2EF0u) goto L_08AA2EF0;
    return;
L_08AA2EF0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[20];
    ctx.gpr[31] = (0x08AA2F08u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F08u) goto L_08AA2F08;
    return;
L_08AA2F08:
    ctx.fpr[20] = ctx.fpr[0] + ctx.fpr[20];
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2F30;
      }
      goto L_08AA2F18;
    }
L_08AA2F18:
    ctx.gpr[31] = (0x08AA2F20u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F20u) goto L_08AA2F20;
    return;
L_08AA2F20:
    ctx.gpr[31] = (0x08AA2F28u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F28u) goto L_08AA2F28;
    return;
L_08AA2F28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2FEC;
      }
      goto L_08AA2F30;
    }
L_08AA2F30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
        goto L_08AA2F44;
    }
    goto L_08AA2F44;
L_08AA2F44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), 0u);
    ctx.gpr[4] = (ctx.gpr[19] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(120));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA2F8Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 420u, 0x088A6CB0u>(ctx, &aot_mem) && ctx.pc == 0x08AA2F8Cu) goto L_08AA2F8C;
    return;
L_08AA2F8C:
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[29] | 0u);
    goto L_08AA2F94;
L_08AA2F94:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(120)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2FD0;
      }
      goto L_08AA2FA0;
    }
L_08AA2FA0:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2FD0;
      }
      goto L_08AA2FA8;
    }
L_08AA2FA8:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08AA2FD0;
      }
      goto L_08AA2FB0;
    }
L_08AA2FB0:
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[18];
    // nop
      if (branch_taken) {
          goto L_08AA2FD0;
      }
      goto L_08AA2FB8;
    }
L_08AA2FB8:
    ctx.gpr[31] = (0x08AA2FC0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x08AA2FC0u) goto L_08AA2FC0;
    return;
L_08AA2FC0:
    ctx.gpr[31] = (0x08AA2FC8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0166_entry, 166u, 289u, 0x08A9D734u>(ctx, &aot_mem) && ctx.pc == 0x08AA2FC8u) goto L_08AA2FC8;
    return;
L_08AA2FC8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA2FEC;
      }
      goto L_08AA2FD0;
    }
L_08AA2FD0:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[19]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA2F94;
      }
      goto L_08AA2FE0;
    }
L_08AA2FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x08AA2FECu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 313u, 0x08925F24u>(ctx, &aot_mem) && ctx.pc == 0x08AA2FECu) goto L_08AA2FEC;
    return;
L_08AA2FEC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3020:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26092)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26096), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26088)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26100), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26108), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2229u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(26116)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(26120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA30B4:
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
L_08AA30E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA30F8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    goto L_08AA33C4;
L_08AA30F8:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3104:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA311Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    goto L_08AA33C4;
L_08AA311C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3128:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA3140u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    goto L_08AA367C;
L_08AA3140:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA314C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA3164u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    goto L_08AA367C;
L_08AA3164:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3170:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA3188u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    goto L_08AA33C4;
L_08AA3188:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3194:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[5])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[31] = (0x08AA31B0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    goto L_08AA3170;
L_08AA31B0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_08AA31CC;
      }
      goto L_08AA31BC;
    }
L_08AA31BC:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA31CCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08AA31CCu) goto L_08AA31CC;
    return;
L_08AA31CC:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA31E0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA31F4u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08AA3194;
L_08AA31F4:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3200:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA3218u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5696));
    goto L_08AA367C;
L_08AA3218:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3224:
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16172));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA324C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[7] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA3278u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 24u, 0x08AA4200u>(ctx, &aot_mem) && ctx.pc == 0x08AA3278u) goto L_08AA3278;
    return;
L_08AA3278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), ctx.gpr[2]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), 0u);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    ctx.gpr[5] = (ctx.gpr[16] >> 10u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(288), ctx.gpr[16]);
    ctx.gpr[31] = (0x08AA32A4u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    goto L_08AA3DDC;
L_08AA32A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (0u | 264u);
    ctx.gpr[31] = (0x08AA32B4u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(292), ctx.gpr[2]);
    goto L_08AA3DDC;
L_08AA32B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[11] = (ctx.gpr[2] | 0u);
    ctx.gpr[10] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.gpr[9] = (0u | 4u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-4));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-16));
    goto L_08AA32D4;
L_08AA32D4:
    ctx.gpr[3] = (ctx.gpr[8] | 0u);
    ctx.gpr[8] = (ctx.gpr[9] < static_cast<std::uint32_t>(17) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08AA3304;
      }
      goto L_08AA32E4;
    }
L_08AA32E4:
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[2] = (ctx.gpr[8] >> 2u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(-1));
    ctx.gpr[12] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA3350;
      }
      goto L_08AA3304;
    }
L_08AA3304:
    ctx.gpr[8] = (ctx.gpr[9] < static_cast<std::uint32_t>(65) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(15));
      if (branch_taken) {
          goto L_08AA3334;
      }
      goto L_08AA3310;
    }
L_08AA3310:
    ctx.gpr[8] = (ctx.gpr[9] + static_cast<std::uint32_t>(7));
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[6]);
    ctx.gpr[2] = (ctx.gpr[8] >> 3u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(1));
    ctx.gpr[12] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
      if (branch_taken) {
          goto L_08AA3350;
      }
      goto L_08AA3334;
    }
L_08AA3334:
    ctx.gpr[8] = (ctx.gpr[8] & ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[8] >> 4u);
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(5));
    ctx.gpr[12] = (ctx.gpr[2] + ctx.gpr[2]);
    ctx.gpr[2] = (ctx.gpr[2] + ctx.gpr[12]);
    ctx.gpr[2] = (ctx.gpr[2] << 2u);
    ctx.gpr[2] = (ctx.gpr[11] + ctx.gpr[2]);
    goto L_08AA3350;
L_08AA3350:
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    ctx.gpr[10] = (ctx.gpr[10] + static_cast<std::uint32_t>(4));
    { const bool branch_taken = ctx.gpr[8] == ctx.gpr[3];
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA3374;
      }
      goto L_08AA3360;
    }
L_08AA3360:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3374;
      }
      goto L_08AA3368;
    }
L_08AA3368:
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(8), 0u);
    goto L_08AA3374;
L_08AA3374:
    ctx.gpr[2] = (ctx.gpr[9] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA32D4;
      }
      goto L_08AA3380;
    }
L_08AA3380:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    ctx.gpr[31] = (0x08AA3394u);
    ctx.gpr[5] = (ctx.gpr[5] & 1023u);
    goto L_08AA3DDC;
L_08AA3394:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), ctx.gpr[2]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA33AC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), 0u);
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), 0u);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA33C4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA33E8;
      }
      goto L_08AA33D4;
    }
L_08AA33D4:
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
        goto L_08AA33F0;
    }
    goto L_08AA33E0;
L_08AA33E0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3434;
      }
      goto L_08AA33E8;
    }
L_08AA33E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA343C;
      }
      goto L_08AA33F0;
    }
L_08AA33F0:
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA3424;
      }
      goto L_08AA3410;
    }
L_08AA3410:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA342C;
      }
      goto L_08AA3424;
    }
L_08AA3424:
    ctx.gpr[31] = (0x08AA342Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 258u, 0x08A25800u>(ctx, &aot_mem) && ctx.pc == 0x08AA342Cu) goto L_08AA342C;
    return;
L_08AA342C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA343C;
      }
      goto L_08AA3434;
    }
L_08AA3434:
    ctx.gpr[31] = (0x08AA343Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 6u, 0x08AA4070u>(ctx, &aot_mem) && ctx.pc == 0x08AA343Cu) goto L_08AA343C;
    return;
L_08AA343C:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3448:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[8] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[8] = (~(ctx.gpr[8] | 0u));
    ctx.gpr[7] = (ctx.gpr[7] & ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[7] < static_cast<std::uint32_t>(257) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA34B4;
      }
      goto L_08AA3470;
    }
L_08AA3470:
    ctx.gpr[5] = (ctx.gpr[7] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA34A4;
      }
      goto L_08AA3494;
    }
L_08AA3494:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA34AC;
      }
      goto L_08AA34A4;
    }
L_08AA34A4:
    ctx.gpr[31] = (0x08AA34ACu);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 258u, 0x08A25800u>(ctx, &aot_mem) && ctx.pc == 0x08AA34ACu) goto L_08AA34AC;
    return;
L_08AA34AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA34BC;
      }
      goto L_08AA34B4;
    }
L_08AA34B4:
    ctx.gpr[31] = (0x08AA34BCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 13u, 0x08AA40F4u>(ctx, &aot_mem) && ctx.pc == 0x08AA34BCu) goto L_08AA34BC;
    return;
L_08AA34BC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA34C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[7] & 255u);
    ctx.gpr[19] = (ctx.gpr[6] | 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA3540;
      }
      goto L_08AA3500;
    }
L_08AA3500:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA352C;
      }
      goto L_08AA3508;
    }
L_08AA3508:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA3514u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AA3CA4;
L_08AA3514:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AA3554;
      }
      goto L_08AA3524;
    }
L_08AA3524:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA35FC;
      }
      goto L_08AA352C;
    }
L_08AA352C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA3538u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AA367C;
L_08AA3538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA3654;
      }
      goto L_08AA3540;
    }
L_08AA3540:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA354Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AA33C4;
L_08AA354C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3654;
      }
      goto L_08AA3554;
    }
L_08AA3554:
    ctx.gpr[21] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[22] = (ctx.gpr[17] - ctx.gpr[21]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA35B8;
      }
      goto L_08AA3570;
    }
L_08AA3570:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (16384u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA35B8;
      }
      goto L_08AA358C;
    }
L_08AA358C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AA35A4u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 96u, 0x08AA4880u>(ctx, &aot_mem) && ctx.pc == 0x08AA35A4u) goto L_08AA35A4;
    return;
L_08AA35A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    goto L_08AA35B8;
L_08AA35B8:
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[21]);
    ctx.gpr[5] = (ctx.gpr[5] < ctx.gpr[19] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA35FC;
      }
      goto L_08AA35C8;
    }
L_08AA35C8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AA35E4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 77u, 0x08AA46CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA35E4u) goto L_08AA35E4;
    return;
L_08AA35E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA3654;
      }
      goto L_08AA35FC;
    }
L_08AA35FC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3628;
      }
      goto L_08AA3604;
    }
L_08AA3604:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA3610u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AA33C4;
L_08AA3610:
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[20] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08AA3630;
      }
      goto L_08AA3620;
    }
L_08AA3620:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08AA3638;
      }
      goto L_08AA3628;
    }
L_08AA3628:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08AA3654;
      }
      goto L_08AA3630;
    }
L_08AA3630:
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    goto L_08AA3638;
L_08AA3638:
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08AA3644u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3644u) goto L_08AA3644;
    return;
L_08AA3644:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA3650u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    goto L_08AA367C;
L_08AA3650:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    goto L_08AA3654;
L_08AA3654:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA367C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
      if (branch_taken) {
          goto L_08AA36AC;
      }
      goto L_08AA3694;
    }
L_08AA3694:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    if (ctx.gpr[6] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
        goto L_08AA36B4;
    }
    goto L_08AA36A4;
L_08AA36A4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA36E0;
      }
      goto L_08AA36AC;
    }
L_08AA36AC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3704;
      }
      goto L_08AA36B4;
    }
L_08AA36B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(292)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] >> 10u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA3704;
      }
      goto L_08AA36E0;
    }
L_08AA36E0:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[31] = (0x08AA3704u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(20), ctx.gpr[7]);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 63u, 0x08AA4550u>(ctx, &aot_mem) && ctx.pc == 0x08AA3704u) goto L_08AA3704;
    return;
L_08AA3704:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3710:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-7904), 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA3834;
      }
      goto L_08AA3748;
    }
L_08AA3748:
    ctx.gpr[12] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[8] = (32768u << 16u);
    ctx.gpr[13] = (4096u << 16u);
    goto L_08AA3754;
L_08AA3754:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[9] = (ctx.gpr[9] & ctx.gpr[8]);
    ctx.gpr[9] = (0u < ctx.gpr[9] ? 1u : 0u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3824;
      }
      goto L_08AA376C;
    }
L_08AA376C:
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (ctx.gpr[6] | 0u);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    goto L_08AA377C;
L_08AA377C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA37F0;
      }
      goto L_08AA3784;
    }
L_08AA3784:
    { const bool branch_taken = ctx.gpr[11] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AA37F0;
      }
      goto L_08AA378C;
    }
L_08AA378C:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.gpr[14] = (ctx.gpr[3] & ctx.gpr[8]);
    ctx.gpr[14] = (0u < ctx.gpr[14] ? 1u : 0u);
    ctx.gpr[14] = (ctx.gpr[14] & 255u);
    { const bool branch_taken = ctx.gpr[14] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA37BC;
      }
      goto L_08AA37A4;
    }
L_08AA37A4:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[3] - ctx.gpr[12]);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[2]);
    ctx.gpr[2] = (static_cast<std::int32_t>(ctx.gpr[9]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[3]);
      if (branch_taken) {
          goto L_08AA37E8;
      }
      goto L_08AA37BC;
    }
L_08AA37BC:
    ctx.gpr[3] = (ctx.gpr[3] & ctx.gpr[13]);
    ctx.gpr[3] = (0u < ctx.gpr[3] ? 1u : 0u);
    ctx.gpr[3] = (ctx.gpr[3] & 255u);
    { const bool branch_taken = ctx.gpr[3] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA37D8;
      }
      goto L_08AA37D0;
    }
L_08AA37D0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA37F0;
      }
      goto L_08AA37D8;
    }
L_08AA37D8:
    ctx.gpr[3] = (aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(0)));
    ctx.gpr[14] = (ctx.gpr[3] - ctx.gpr[12]);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[14]);
    ctx.gpr[11] = (ctx.gpr[11] + ctx.gpr[3]);
    goto L_08AA37E8;
L_08AA37E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA377C;
      }
      goto L_08AA37F0;
    }
L_08AA37F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3810;
      }
      goto L_08AA37F8;
    }
L_08AA37F8:
    ctx.gpr[6] = (ctx.gpr[18] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3808;
      }
      goto L_08AA3804;
    }
L_08AA3804:
    ctx.gpr[18] = (ctx.gpr[9] | 0u);
    goto L_08AA3808;
L_08AA3808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (ctx.gpr[11] | 0u);
      if (branch_taken) {
          goto L_08AA382C;
      }
      goto L_08AA3810;
    }
L_08AA3810:
    ctx.gpr[9] = (ctx.gpr[10] < ctx.gpr[17] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3824;
      }
      goto L_08AA381C;
    }
L_08AA381C:
    ctx.gpr[17] = (ctx.gpr[10] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_08AA3824;
L_08AA3824:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[9]);
    goto L_08AA382C;
L_08AA382C:
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08AA3754;
      }
      goto L_08AA3834;
    }
L_08AA3834:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA386C;
      }
      goto L_08AA383C;
    }
L_08AA383C:
    ctx.gpr[31] = (0x08AA3844u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    goto L_08AA3898;
L_08AA3844:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < static_cast<std::int32_t>(ctx.gpr[16]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA386C;
      }
      goto L_08AA3850;
    }
L_08AA3850:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA3864u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19432));
    goto L_08AA30B4;
L_08AA3864:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3880;
      }
      goto L_08AA386C;
    }
L_08AA386C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08AA3880u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19380));
    goto L_08AA30B4;
L_08AA3880:
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
L_08AA3898:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-96));
    ctx.gpr[7] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2624));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.gpr[8] = (ctx.gpr[7] + static_cast<std::uint32_t>(8));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[7]);
    ctx.gpr[22] = (57344u << 16u);
    ctx.gpr[21] = (4096u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[30]);
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[6]);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-1));
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (16384u << 16u);
    ctx.gpr[30] = (4096u << 16u);
    ctx.gpr[23] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[31]);
    goto L_08AA3918;
L_08AA3918:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3B3C;
      }
      goto L_08AA3920;
    }
L_08AA3920:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3B3C;
      }
      goto L_08AA393C;
    }
L_08AA393C:
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[19] = (ctx.gpr[17] - ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[19] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3974;
      }
      goto L_08AA3958;
    }
L_08AA3958:
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3980;
      }
      goto L_08AA396C;
    }
L_08AA396C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA39A4;
      }
      goto L_08AA3974;
    }
L_08AA3974:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AA3B44;
      }
      goto L_08AA3980;
    }
L_08AA3980:
    ctx.gpr[31] = (0x08AA3988u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 96u, 0x08AA4880u>(ctx, &aot_mem) && ctx.pc == 0x08AA3988u) goto L_08AA3988;
    return;
L_08AA3988:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3980;
      }
      goto L_08AA39A0;
    }
L_08AA39A0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA39A4;
L_08AA39A4:
    ctx.gpr[17] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[30]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3A58;
      }
      goto L_08AA39C0;
    }
L_08AA39C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 256 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08AA3A58;
      }
      goto L_08AA39D0;
    }
L_08AA39D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[5] - ctx.gpr[20]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(-7904), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[20]);
    ctx.gpr[31] = (0x08AA3A20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 115u, 0x08AA49E0u>(ctx, &aot_mem) && ctx.pc == 0x08AA3A20u) goto L_08AA3A20;
    return;
L_08AA3A20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (28672u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
        goto L_08AA3A64;
    }
    goto L_08AA3A50;
L_08AA3A50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA3A88;
      }
      goto L_08AA3A58;
    }
L_08AA3A58:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08AA3B44;
      }
      goto L_08AA3A64;
    }
L_08AA3A64:
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_08AA3A88;
L_08AA3A88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
      if (branch_taken) {
          goto L_08AA3AE4;
      }
      goto L_08AA3AD0;
    }
L_08AA3AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[17]);
    goto L_08AA3AE4;
L_08AA3AE4:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (0x08AA3B08u);
    ctx.gpr[6] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 290u, 0x089D96C8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3B08u) goto L_08AA3B08;
    return;
L_08AA3B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08AA3B28u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 77u, 0x08AA46CCu>(ctx, &aot_mem) && ctx.pc == 0x08AA3B28u) goto L_08AA3B28;
    return;
L_08AA3B28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08AA3918;
      }
      goto L_08AA3B3C;
    }
L_08AA3B3C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[20]);
    ctx.gpr[2] = (0u | 0u);
    goto L_08AA3B44;
L_08AA3B44:
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
L_08AA3B74:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7904), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_08AA3BEC;
      }
      goto L_08AA3BA4;
    }
L_08AA3BA4:
    ctx.gpr[17] = (32768u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[18] = (32768u << 16u);
    goto L_08AA3BB0;
L_08AA3BB0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[18]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3BD8;
      }
      goto L_08AA3BC8;
    }
L_08AA3BC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA3BD8u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    goto L_08AA3898;
L_08AA3BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08AA3BB0;
      }
      goto L_08AA3BEC;
    }
L_08AA3BEC:
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
L_08AA3C08:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (ctx.gpr[6] < ctx.gpr[7] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3C2C;
      }
      goto L_08AA3C1C;
    }
L_08AA3C1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3C34;
      }
      goto L_08AA3C2C;
    }
L_08AA3C2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA3C9C;
      }
      goto L_08AA3C34;
    }
L_08AA3C34:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7904)));
    ctx.gpr[9] = (2232u << 16u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(2624));
    ctx.gpr[8] = (ctx.gpr[4] << 2u);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    { const bool branch_taken = ctx.gpr[9] == ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AA3C98;
      }
      goto L_08AA3C5C;
    }
L_08AA3C5C:
    ctx.gpr[7] = (ctx.gpr[9] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[10] = (ctx.gpr[10] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3C8C;
      }
      goto L_08AA3C78;
    }
L_08AA3C78:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08AA3C9C;
      }
      goto L_08AA3C8C;
    }
L_08AA3C8C:
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(12));
    { const bool branch_taken = ctx.gpr[9] != ctx.gpr[8];
    // nop
      if (branch_taken) {
          goto L_08AA3C5C;
      }
      goto L_08AA3C98;
    }
L_08AA3C98:
    ctx.gpr[2] = (0u | 0u);
    goto L_08AA3C9C;
L_08AA3C9C:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3CA4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[5] < ctx.gpr[6] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3CDC;
      }
      goto L_08AA3CB4;
    }
L_08AA3CB4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] >> 10u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_08AA3CEC;
      }
      goto L_08AA3CDC;
    }
L_08AA3CDC:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    goto L_08AA3CEC;
L_08AA3CEC:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3CF4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1023));
    ctx.gpr[5] = (ctx.gpr[5] >> 10u);
    ctx.gpr[8] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[8];
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AA3D34;
      }
      goto L_08AA3D10;
    }
L_08AA3D10:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3D34;
      }
      goto L_08AA3D1C;
    }
L_08AA3D1C:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(28), ctx.gpr[8]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (ctx.gpr[7] >> 10u);
      if (branch_taken) {
          goto L_08AA3D98;
      }
      goto L_08AA3D34;
    }
L_08AA3D34:
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(8));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[8]);
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[9] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3D80;
      }
      goto L_08AA3D50;
    }
L_08AA3D50:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] << 10u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[6]);
    ctx.gpr[31] = (0x08AA3D68u);
    ctx.gpr[5] = (0u + ctx.gpr[5]);
    goto L_08AA3DDC;
L_08AA3D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_08AA3D88;
      }
      goto L_08AA3D78;
    }
L_08AA3D78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA3DD0;
      }
      goto L_08AA3D80;
    }
L_08AA3D80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA3DD0;
      }
      goto L_08AA3D88;
    }
L_08AA3D88:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[7] - ctx.gpr[2]);
    ctx.gpr[7] = (ctx.gpr[7] >> 10u);
    goto L_08AA3D98;
L_08AA3D98:
    ctx.gpr[9] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[9] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[9] == 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AA3DD0;
      }
      goto L_08AA3DAC;
    }
L_08AA3DAC:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(292)));
    ctx.gpr[10] = (ctx.gpr[5] << 2u);
    ctx.gpr[9] = (ctx.gpr[9] + ctx.gpr[10]);
    ctx.gpr[10] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[8] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(0), ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[10] != 0u;
    ctx.gpr[8] = (ctx.gpr[7] | 0u);
      if (branch_taken) {
          goto L_08AA3DAC;
      }
      goto L_08AA3DD0;
    }
L_08AA3DD0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3DDC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (4096u << 16u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-1));
    ctx.gpr[7] = (ctx.gpr[8] & ctx.gpr[7]);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (ctx.gpr[5] + static_cast<std::uint32_t>(20));
    ctx.gpr[7] = (ctx.gpr[7] < ctx.gpr[8] ? 1u : 0u);
    if (ctx.gpr[7] == 0u) {
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
        goto L_08AA3E10;
    }
    goto L_08AA3E08;
L_08AA3E08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA3E44;
      }
      goto L_08AA3E10;
    }
L_08AA3E10:
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (8192u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[2] = (ctx.gpr[2] + static_cast<std::uint32_t>(8));
    goto L_08AA3E44;
L_08AA3E44:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3E4C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.gpr[5] = (ctx.gpr[5] >> 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[8] = (0u + static_cast<std::uint32_t>(-1024));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1023));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[8]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3EB0;
      }
      goto L_08AA3E88;
    }
L_08AA3E88:
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08AA3EA0u);
    ctx.gpr[6] = (ctx.gpr[7] | 0u);
    goto L_08AA3CF4;
L_08AA3EA0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (0x08AA3EB0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 255u, 0x08A257A4u>(ctx, &aot_mem) && ctx.pc == 0x08AA3EB0u) goto L_08AA3EB0;
    return;
L_08AA3EB0:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3EBC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[6]);
    jump_target = ctx.gpr[31];
    ctx.gpr[2] = (ctx.gpr[4] - ctx.gpr[2]);
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3ED4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA3EFC;
      }
      goto L_08AA3EE8;
    }
L_08AA3EE8:
    ctx.gpr[31] = (0x08AA3EF0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 44u, 0x08AA438Cu>(ctx, &aot_mem) && ctx.pc == 0x08AA3EF0u) goto L_08AA3EF0;
    return;
L_08AA3EF0:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[2] = (ctx.gpr[2] - ctx.gpr[4]);
    goto L_08AA3EFC;
L_08AA3EFC:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3F08:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08AA3F18;
      }
      goto L_08AA3F10;
    }
L_08AA3F10:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA3F24;
      }
      goto L_08AA3F18;
    }
L_08AA3F18:
    ctx.gpr[5] = (2218u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(16172));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    goto L_08AA3F24;
L_08AA3F24:
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08AA3F2C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    ctx.gpr[18] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-19308));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[31]);
    ctx.gpr[31] = (0x08AA3F68u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 144u, 0x08AA4BC8u>(ctx, &aot_mem) && ctx.pc == 0x08AA3F68u) goto L_08AA3F68;
    return;
L_08AA3F68:
    ctx.gpr[31] = (0x08AA3F70u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA3EBC;
L_08AA3F70:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08AA3F7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08AA3ED4;
L_08AA3F7C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08AA3F90u);
    ctx.gpr[7] = (ctx.gpr[2] | 0u);
    goto L_08AA30B4;
L_08AA3F90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-19240));
    ctx.gpr[31] = (0x08AA3FA8u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[6]);
    goto L_08AA30B4;
L_08AA3FA8:
    ctx.gpr[22] = (2227u << 16u);
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[21] = (ctx.gpr[16] | 0u);
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(-19220));
    goto L_08AA3FBC;
L_08AA3FBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_08AA3FF4;
      }
      goto L_08AA3FCC;
    }
L_08AA3FCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[19] = (ctx.gpr[5] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_08AA3FE8;
      }
      goto L_08AA3FDC;
    }
L_08AA3FDC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
      if (branch_taken) {
          goto L_08AA3FDC;
      }
      goto L_08AA3FE8;
    }
L_08AA3FE8:
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08AA3FF4u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    goto L_08AA30B4;
L_08AA3FF4:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[20] < static_cast<std::uint32_t>(64) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08AA3FBC;
      }
      (void)rt.invoke_chained_direct<&recomp_unit_0168_entry, 168u, 1u, 0x08AA4004u>(ctx, &aot_mem); return;
    }
}

void recomp_unit_0167(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0167_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_167(Runtime &runtime) {
    runtime.register_generated_unit(167u, 0x08AA0000u, 16384u, &recomp_unit_0167, &recomp_unit_0167_entry);
    runtime.register_function(0x08AA0000u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA001Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0024u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA002Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0040u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0048u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA005Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0064u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA006Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0084u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA00FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0100u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0114u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0120u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA012Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0138u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA013Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0144u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA014Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0150u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA015Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA016Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0178u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0180u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0188u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0190u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA01F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA023Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0264u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0274u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0280u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0288u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0290u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0298u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA02F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0300u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0310u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0320u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0330u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0340u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0350u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0360u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA036Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0374u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0388u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0390u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0398u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA03F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0400u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0410u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA041Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0424u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA043Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0450u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0458u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0468u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA047Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0490u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA04F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA050Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA051Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0520u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0528u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0530u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0538u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0540u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0548u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA055Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0570u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0594u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA059Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA05F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0608u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA061Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0634u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA063Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0654u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0668u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA066Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0684u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA06F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0708u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0710u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0720u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0754u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0794u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA07D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0814u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0828u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0830u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0840u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0848u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0854u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0864u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0870u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0878u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0880u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA088Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0894u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA089Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA08FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0904u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA090Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0918u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0920u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0928u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0934u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0940u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA094Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0950u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA098Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA09FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0A9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0ABCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0AFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0B7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0BF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0C94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0CD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0D98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0DE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0E64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0EF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0F34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA0FF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA100Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1014u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1024u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1034u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA103Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1044u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1048u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA105Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1064u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA106Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1088u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1090u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA10FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1148u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1164u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA117Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1184u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1188u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1190u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA11FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1250u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1270u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1278u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1284u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1290u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1298u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA12F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1304u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1314u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA131Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1324u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA132Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1334u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1374u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1384u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1390u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA13FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1420u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1428u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1430u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA144Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1460u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1468u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1470u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA14D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1500u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA152Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1558u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1584u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA158Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA159Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA15ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1608u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA160Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1610u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1618u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1644u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1654u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1660u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA166Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1680u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1688u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1698u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA16E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1714u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA171Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1734u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA173Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1748u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1750u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1764u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA176Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA177Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA178Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1790u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1798u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA179Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA17F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1800u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1810u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA181Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1848u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1850u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1860u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1870u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1884u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA18CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1978u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1980u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1988u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1994u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA199Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA19A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1A54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1B5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1BA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C6Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1C9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1CCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1D90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1DD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1E64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1EDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA1F90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2034u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA203Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2044u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA204Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2054u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA205Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2090u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA20F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2128u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2130u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA214Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA21F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2218u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2224u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA222Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2244u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2254u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA226Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2274u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA227Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2284u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2298u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA22F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2304u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2314u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA231Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2328u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2338u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2340u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2348u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2374u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2378u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2380u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2388u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA23F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2418u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2428u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2430u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA243Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2448u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2450u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2458u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA246Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2478u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2488u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2490u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA24F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA250Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2514u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA251Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2524u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2570u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA257Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA258Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2598u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA25F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2608u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2650u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA26ECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2720u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA273Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2744u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2758u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2760u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2780u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2790u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27A8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA27F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2810u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2818u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2844u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2850u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA285Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2864u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA287Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA28FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2904u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2910u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2928u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA293Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2954u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA295Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2964u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2990u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA299Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29DCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA29F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A04u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A14u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A38u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2A98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AD4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2AF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B00u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B40u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2B98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2BF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C54u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2C90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2CE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D48u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2D84u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2DE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E0Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E60u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2E7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EC4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2ED4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2EF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F30u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2F94u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FB8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FC0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FE0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA2FECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3020u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA30F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3104u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA311Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3128u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3140u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA314Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3164u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3170u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3188u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3194u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31B0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31CCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA31F4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3200u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3218u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3224u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA324Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3278u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA32E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3304u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3310u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3334u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3350u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3360u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3368u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3374u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3380u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3394u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33C4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33D4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA33F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3410u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3424u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA342Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3434u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA343Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3448u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3470u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3494u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA34C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3500u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3508u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3514u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3524u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA352Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3538u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3540u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA354Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3554u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3570u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA358Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35B8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35C8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35E4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA35FCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3604u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3610u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3620u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3628u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3630u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3638u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3644u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3650u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3654u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA367Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3694u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36ACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36B4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA36E0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3704u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3710u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3748u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3754u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA376Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA377Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3784u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA378Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37BCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37D8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37E8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37F0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA37F8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3804u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3808u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3810u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA381Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3824u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA382Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3834u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA383Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3844u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3850u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3864u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA386Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3880u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3898u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3918u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3920u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA393Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3958u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA396Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3974u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3980u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3988u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39A0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39A4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39C0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA39D0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A20u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A58u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A64u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3A88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3AE4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B28u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B3Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3B74u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BC8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BD8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3BECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C5Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C8Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3C9Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CA4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CB4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CECu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3CF4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D1Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D34u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D50u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D78u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D80u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3D98u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DACu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DD0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3DDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E44u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E4Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3E88u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EA0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EB0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3ED4u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EF0u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3EFCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F08u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F10u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F18u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F24u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F2Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F68u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F70u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F7Cu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3F90u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FA8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FBCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FCCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FDCu, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FE8u, &recomp_unit_0167, "recomp_unit_0167");
    runtime.register_function(0x08AA3FF4u, &recomp_unit_0167, "recomp_unit_0167");
}
} // namespace psprecomp
