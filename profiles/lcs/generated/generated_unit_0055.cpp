#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0055[4091] = {
    1, 0, 2, 0, 3, 0, 0, 0, 4, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 5, 0, 6, 0, 0,
    7, 0, 0, 8, 0, 0, 0, 0, 9, 0, 10, 0, 0, 0, 11, 0, 0, 12, 0, 13, 0, 14, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16,
    0, 0, 0, 17, 0, 0, 0, 18, 0, 0, 0, 19, 0, 0, 0, 0, 0, 20, 0, 0, 21, 0, 0, 0, 22, 0, 23, 0, 0, 24, 0, 0,
    0, 25, 0, 0, 0, 26, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 28, 0, 0, 0, 29, 0, 0, 30, 0, 0, 0, 0, 31, 0, 0, 32,
    0, 0, 0, 33, 0, 0, 0, 34, 0, 0, 35, 0, 36, 0, 0, 0, 37, 0, 38, 0, 0, 39, 0, 40, 0, 41, 0, 0, 0, 0, 0, 42,
    0, 0, 0, 0, 43, 0, 44, 0, 45, 0, 0, 0, 46, 0, 0, 47, 0, 48, 0, 49, 0, 0, 0, 50, 0, 51, 0, 0, 52, 0, 0, 0,
    53, 0, 0, 0, 54, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 57, 0, 58, 0, 0, 59, 0, 0, 0, 60, 0, 0, 0, 0, 0,
    0, 61, 0, 0, 0, 0, 0, 0, 0, 62, 63, 0, 0, 0, 0, 0, 0, 0, 0, 0, 64, 0, 0, 65, 0, 66, 0, 0, 0, 67, 0, 68,
    0, 0, 0, 69, 0, 0, 0, 70, 0, 71, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 73, 0, 74, 0, 75, 0, 76, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 77, 78, 0, 0, 0, 0, 79, 0, 0, 80, 0, 81, 0, 0, 82, 0, 0, 0, 0, 0, 83,
    0, 0, 84, 0, 0, 85, 0, 86, 0, 0, 87, 0, 88, 0, 89, 0, 90, 0, 91, 0, 92, 0, 0, 0, 93, 0, 94, 0, 95, 0, 0, 96,
    0, 0, 0, 97, 0, 98, 0, 99, 0, 0, 0, 100, 0, 101, 0, 102, 103, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 105, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 107, 0, 0, 0, 108, 0, 109,
    0, 110, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 112, 0, 113, 0, 114, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 117, 0, 118, 0,
    119, 0, 0, 0, 0, 0, 120, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 123, 0, 124, 0, 0, 0, 125, 0, 0, 0, 126, 0, 127, 0, 0,
    0, 0, 128, 0, 0, 129, 0, 130, 0, 131, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 134, 135, 0, 0, 0, 136, 0, 137, 0, 0, 0,
    138, 0, 0, 139, 0, 0, 0, 0, 140, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 143, 0, 0, 0, 0, 0, 144, 0, 145, 0, 0, 0, 146,
    0, 147, 0, 148, 0, 0, 0, 0, 0, 149, 0, 0, 0, 0, 150, 0, 0, 0, 0, 151, 0, 0, 0, 0, 152, 0, 0, 0, 153, 0, 0, 0,
    154, 0, 0, 0, 0, 0, 155, 0, 0, 0, 0, 156, 0, 157, 0, 158, 0, 0, 0, 0, 0, 0, 159, 0, 160, 0, 161, 0, 0, 162, 163, 0,
    164, 0, 0, 0, 0, 0, 0, 165, 0, 0, 0, 0, 0, 166, 0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 169, 0, 0, 170, 0, 0, 0,
    0, 0, 0, 171, 0, 172, 0, 173, 0, 174, 175, 0, 0, 176, 0, 177, 0, 178, 0, 0, 0, 179, 0, 0, 0, 180, 0, 181, 0, 182, 0, 0,
    0, 0, 0, 0, 0, 183, 0, 184, 0, 0, 185, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 0, 188, 0, 189, 0, 0, 190, 0,
    0, 0, 0, 0, 0, 0, 191, 0, 0, 192, 0, 0, 0, 193, 0, 194, 0, 195, 0, 0, 0, 0, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 198, 0, 199, 0, 0, 0, 200, 0, 0, 0, 201, 0,
    0, 0, 202, 203, 0, 0, 0, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 206, 0, 207, 0, 0, 0, 208, 0, 0, 0, 209, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 210, 0, 211, 0, 212, 0, 213, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 216, 0, 217,
    0, 0, 218, 0, 0, 0, 219, 0, 220, 0, 221, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 224, 0, 225, 0, 226, 0, 0, 227, 0, 0, 0,
    228, 0, 229, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 0, 0, 0, 232, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 235, 0, 236, 0, 0,
    0, 0, 0, 0, 0, 0, 237, 0, 238, 0, 0, 0, 239, 0, 0, 0, 0, 0, 240, 0, 0, 0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 243,
    0, 0, 0, 0, 0, 0, 244, 0, 245, 0, 246, 0, 247, 0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 253, 0, 0, 254,
    0, 0, 0, 255, 256, 0, 0, 257, 0, 0, 258, 259, 0, 0, 260, 0, 0, 261, 0, 262, 0, 0, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0,
    0, 0, 0, 264, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    266, 0, 267, 0, 268, 269, 0, 270, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 271, 0, 272, 0, 273, 274, 0, 0, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 0, 279, 0, 280, 0, 281, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 283, 0, 0, 0, 284, 0,
    0, 0, 285, 0, 286, 287, 0, 288, 0, 289, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 290, 0, 0, 0, 291, 0, 0, 0, 292, 0, 293, 294, 0, 295, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 299, 0, 300, 0, 301,
    0, 0, 0, 0, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 305, 0, 306, 0,
    0, 0, 307, 0, 0, 0, 308, 0, 0, 309, 0, 0, 310, 0, 0, 0, 311, 312, 0, 0, 0, 0, 313, 0, 314, 0, 0, 0, 315, 0, 0, 0,
    0, 316, 0, 317, 0, 318, 0, 319, 0, 0, 0, 320, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 323, 0, 0, 0, 0, 0, 324, 0,
    0, 0, 0, 325, 0, 326, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 329, 0, 0, 0, 0, 0, 330, 0, 331, 0, 332, 0, 333, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0, 0,
    335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 340, 0,
    341, 0, 342, 0, 0, 0, 343, 0, 0, 0, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 346, 0, 0, 0, 347, 0, 0,
    0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 350, 0, 0, 351, 0, 0, 0, 0, 0, 0, 0, 352, 0, 0, 353, 0, 0, 354, 0, 355,
    0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 357, 0, 358, 0, 0, 0, 359, 0, 0,
    0, 360, 0, 0, 0, 361, 0, 362, 0, 363, 0, 364, 0, 365, 0, 366, 0, 0, 367, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 369, 0, 0, 0, 0, 0, 0,
    370, 0, 0, 0, 0, 0, 371, 0, 0, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 374, 0, 0, 0, 375, 0, 0, 376, 0, 377, 0, 378,
    0, 379, 0, 0, 0, 380, 0, 0, 0, 381, 382, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 386, 0, 0, 0, 387, 0, 0,
    0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 390, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 395, 0, 396, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 0,
    0, 0, 0, 400, 0, 401, 0, 402, 0, 0, 403, 0, 0, 0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 405, 0, 406, 0, 0, 0, 0, 0, 0,
    407, 0, 0, 0, 0, 408, 0, 409, 0, 0, 410, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 414, 0, 415, 0, 0, 416, 0,
    0, 0, 417, 0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 421, 0, 422, 0, 0, 423, 0, 424, 0, 0, 425, 0, 426, 0, 427,
    0, 0, 0, 0, 428, 0, 0, 429, 0, 0, 0, 0, 0, 0, 0, 0, 430, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 433, 0, 0, 0, 434, 435, 0, 436, 0, 0, 0, 437, 0, 0, 438, 0, 439, 0, 440,
    0, 0, 0, 0, 0, 0, 441, 0, 0, 0, 0, 442, 0, 443, 0, 444, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 445, 0,
    446, 0, 447, 0, 448, 0, 0, 449, 0, 450, 0, 451, 0, 0, 452, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0, 0,
    0, 0, 457, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 462, 463, 0, 0, 0,
    464, 0, 0, 0, 0, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 0, 0, 0, 0, 0, 0, 468, 0, 0, 0, 469, 0,
    0, 0, 470, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 475, 476, 0, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 479,
    0, 0, 0, 0, 0, 0, 480, 0, 0, 481, 0, 482, 483, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 485, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 487, 0, 0, 0, 488, 0, 0, 0, 0, 489, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 490, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 0, 0, 0,
    0, 0, 496, 0, 0, 0, 0, 0, 497, 0, 0, 0, 498, 0, 0, 0, 0, 499, 0, 0, 500, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 501, 0, 0, 502, 0, 0, 0, 0, 0, 0, 503, 0, 0, 504, 0, 0, 0,
    0, 0, 505, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 508, 0, 509, 0, 0, 510, 0, 511, 0, 0, 0, 0, 0, 512, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 515, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 517, 0, 518, 519, 0, 0,
    0, 520, 0, 0, 0, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0, 523, 0, 0, 0, 524, 0, 0, 0, 0, 0, 525, 0, 526, 0,
    0, 0, 0, 0, 527, 0, 0, 0, 528, 0, 0, 0, 529, 0, 0, 0, 0, 0, 0, 530, 0, 531, 0, 0, 532, 0, 0, 0, 533, 0, 0, 0,
    0, 0, 0, 534, 0, 535, 0, 0, 0, 0, 0, 0, 536, 0, 537, 0, 0, 0, 0, 0, 0, 538, 0, 0, 0, 539, 0, 0, 0, 540, 541, 0,
    0, 0, 542, 0, 0, 543, 544, 0, 0, 0, 545, 0, 0, 0, 0, 546, 0, 0, 0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 550, 0, 551, 0, 0, 0, 0, 0, 0, 0,
    552, 0, 0, 0, 0, 0, 553, 554, 0, 0, 0, 0, 555, 0, 556, 0, 557, 0, 0, 0, 0, 558, 559, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 560, 0, 0, 561, 0, 0, 0, 0, 562, 0, 0, 563, 0, 0, 0, 0, 0, 0, 0, 564, 0, 565, 0, 0, 0, 0, 0, 0, 0, 566,
    0, 0, 0, 0, 567, 0, 0, 568, 0, 0, 569, 0, 0, 570, 571, 0, 572, 0, 573, 0, 574, 0, 0, 0, 575, 0, 0, 576, 0, 0, 0, 0,
    577, 578, 0, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 580, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 581, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 582, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 583, 0, 0, 584, 0, 0,
    0, 585, 0, 586, 0, 587, 0, 0, 588, 0, 589, 0, 590, 0, 0, 591, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    592, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 595, 0, 596,
    0, 0, 0, 0, 0, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 599, 0, 0, 600, 0, 0, 601, 0, 0, 602, 0, 0, 0, 603, 604, 0,
    0, 605, 0, 0, 0, 606, 0, 0, 607, 0, 0, 608, 609, 0, 610, 0, 0, 611, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 613, 0, 0, 0, 0, 0, 614, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 617, 0, 618, 0, 0, 0, 0, 0, 0, 0,
    619, 0, 0, 620, 0, 0, 0, 0, 621, 0, 0, 0, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 624, 0, 0, 0, 625, 0, 0, 0, 0, 0,
    0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 0, 0, 0, 0, 631, 0, 632, 0,
    0, 0, 0, 0, 633, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 638, 0, 639, 0, 0,
    0, 0, 640, 0, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 642, 0, 643, 0, 0, 644, 0, 645, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647,
    0, 0, 0, 0, 0, 648, 0, 0, 0, 0, 649, 0, 0, 650, 651, 0, 652, 0, 0, 0, 0, 653, 0, 0, 654, 0, 655, 0, 0, 0, 0, 656,
    0, 0, 0, 657, 0, 0, 658, 0, 0, 0, 0, 659, 0, 0, 660, 0, 661, 0, 0, 0, 0, 662, 0, 0, 663, 0, 664, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 665, 666, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 669, 0, 670, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 671, 672, 0, 0, 0, 0, 0, 0, 673, 674, 0, 0, 0, 675, 0, 676, 0, 0, 0, 677, 678, 679, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 680, 0, 0, 0, 0, 681, 0, 682, 0, 0, 0, 683, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 684, 0, 0, 0, 0, 685, 0, 0, 0, 0, 686, 0, 0, 0, 0, 687, 0, 0, 0, 0, 688, 689, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 690, 0, 0, 0, 691, 0, 0, 0, 0, 692, 0, 0, 0, 0, 693, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 0, 696,
    697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 0, 699, 0, 0, 0, 0, 0, 0, 700, 0, 0, 0, 0, 0, 701, 0, 702, 0, 0,
    0, 0, 0, 0, 703, 0, 0, 0, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 706, 0, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0,
    0, 0, 0, 709, 0, 0, 0, 0, 0, 0, 710, 711, 0, 0, 0, 0, 712, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 713, 714, 0, 715, 0,
    716, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 717, 718, 0, 0, 0, 0, 0, 0, 0, 0, 719, 0,
    720, 0, 721, 0, 0, 722, 0, 0, 0, 0, 0, 723, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 725, 0, 0, 0, 0, 0,
    0, 726, 0, 0, 0, 727, 0, 728, 0, 729, 0, 730, 0, 731, 0, 732, 0, 0, 0, 733, 734, 0, 735, 0, 0, 0, 736, 737, 0, 0, 738, 0,
    0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740, 0, 0, 0, 741, 0, 742, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0, 745, 0, 0,
    0, 0, 746, 0, 0, 0, 0, 0, 0, 747, 0, 0, 0, 0, 748, 0, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 750, 0, 751, 0, 0, 0,
    752, 753, 0, 754, 0, 0, 0, 755, 756, 0, 0, 757, 0, 0, 0, 0, 758, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 760, 0, 761, 0, 0,
    0, 0, 0, 0, 762, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 0, 0, 0, 766, 0, 0, 0, 0, 767, 0, 0, 0, 0,
    0, 0, 0, 768, 0, 0, 0, 769, 0, 0, 0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771,
    0, 0, 0, 0, 0, 0, 772, 0, 773, 0, 0, 0, 0, 0, 0, 774, 0, 0, 775, 0, 776, 0, 0, 777, 0, 778, 0, 0, 0, 0, 0, 779,
    0, 0, 0, 0, 0, 0, 780, 0, 0, 781, 0, 0, 782, 0, 0, 0, 0, 0, 0, 783, 0, 0, 784, 0, 0, 0, 785, 0, 0, 0, 786, 0,
    0, 787, 0, 788, 0, 0, 0, 0, 789, 0, 0, 790, 0, 0, 791, 0, 0, 0, 0, 0, 0, 792, 0, 0, 793, 0, 0, 0, 794, 0, 0, 0,
    795, 0, 796, 0, 0, 797, 0, 0, 798, 0, 0, 0, 0, 0, 0, 799, 0, 0, 800, 0, 0, 0, 801, 0, 0, 0, 802, 0, 0, 803, 0, 804,
    0, 805, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 806, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 807, 0, 0, 808, 0, 0, 809,
    0, 0, 810, 0, 0, 811, 812, 0, 813, 0, 0, 814, 815, 0, 816, 0, 0, 817, 818, 0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 820, 0, 821,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 823, 0, 824, 0, 0, 0, 0, 825,
    0, 0, 0, 0, 826, 0, 0, 0, 0, 827, 0, 0, 0, 0, 0, 0, 828, 0, 0, 0, 829, 0, 830, 0, 0, 0, 831, 0, 832, 0, 0, 0,
    833, 0, 834, 0, 835, 836, 0, 837, 838, 0, 839, 0, 0, 0, 840, 0, 0, 0, 841, 0, 0, 0, 0, 0, 0, 0, 842, 843, 0, 0, 0, 844,
    845, 0, 846, 847, 0, 848, 0, 0, 0, 849, 0, 0, 0, 0, 0, 0, 850, 0, 0, 0, 851, 0, 852, 0, 0, 0, 0, 853, 0, 0, 0, 854,
    0, 855, 0, 0, 0, 856, 0, 857, 858, 0, 859, 0, 0, 0, 860, 0, 0, 0, 0, 0, 0, 861, 862, 0, 0, 0, 863, 864, 0, 865, 866, 0,
    867, 0, 0, 0, 868, 0, 0, 0, 0, 0, 0, 869, 0, 0, 0, 870, 0, 871, 0, 0, 0, 0, 872, 0, 0, 0, 873, 0, 874, 0, 0, 0,
    875, 0, 876, 877, 0, 878, 0, 0, 879, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 880,
};
void recomp_unit_0055_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x088E0000u;
        entry_id = (entry_delta < 16364u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0055[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_088E0000;
    case 2u: goto L_088E0008;
    case 3u: goto L_088E0010;
    case 4u: goto L_088E0020;
    case 5u: goto L_088E006C;
    case 6u: goto L_088E0074;
    case 7u: goto L_088E0080;
    case 8u: goto L_088E008C;
    case 9u: goto L_088E00A0;
    case 10u: goto L_088E00A8;
    case 11u: goto L_088E00B8;
    case 12u: goto L_088E00C4;
    case 13u: goto L_088E00CC;
    case 14u: goto L_088E00D4;
    case 15u: goto L_088E00E0;
    case 16u: goto L_088E00FC;
    case 17u: goto L_088E010C;
    case 18u: goto L_088E011C;
    case 19u: goto L_088E012C;
    case 20u: goto L_088E0144;
    case 21u: goto L_088E0150;
    case 22u: goto L_088E0160;
    case 23u: goto L_088E0168;
    case 24u: goto L_088E0174;
    case 25u: goto L_088E0184;
    case 26u: goto L_088E0194;
    case 27u: goto L_088E01A0;
    case 28u: goto L_088E01C0;
    case 29u: goto L_088E01D0;
    case 30u: goto L_088E01DC;
    case 31u: goto L_088E01F0;
    case 32u: goto L_088E01FC;
    case 33u: goto L_088E020C;
    case 34u: goto L_088E021C;
    case 35u: goto L_088E0228;
    case 36u: goto L_088E0230;
    case 37u: goto L_088E0240;
    case 38u: goto L_088E0248;
    case 39u: goto L_088E0254;
    case 40u: goto L_088E025C;
    case 41u: goto L_088E0264;
    case 42u: goto L_088E027C;
    case 43u: goto L_088E0290;
    case 44u: goto L_088E0298;
    case 45u: goto L_088E02A0;
    case 46u: goto L_088E02B0;
    case 47u: goto L_088E02BC;
    case 48u: goto L_088E02C4;
    case 49u: goto L_088E02CC;
    case 50u: goto L_088E02DC;
    case 51u: goto L_088E02E4;
    case 52u: goto L_088E02F0;
    case 53u: goto L_088E0300;
    case 54u: goto L_088E0310;
    case 55u: goto L_088E0320;
    case 56u: goto L_088E033C;
    case 57u: goto L_088E0344;
    case 58u: goto L_088E034C;
    case 59u: goto L_088E0358;
    case 60u: goto L_088E0368;
    case 61u: goto L_088E0384;
    case 62u: goto L_088E03A4;
    case 63u: goto L_088E03A8;
    case 64u: goto L_088E03D0;
    case 65u: goto L_088E03DC;
    case 66u: goto L_088E03E4;
    case 67u: goto L_088E03F4;
    case 68u: goto L_088E03FC;
    case 69u: goto L_088E040C;
    case 70u: goto L_088E041C;
    case 71u: goto L_088E0424;
    case 72u: goto L_088E043C;
    case 73u: goto L_088E0450;
    case 74u: goto L_088E0458;
    case 75u: goto L_088E0460;
    case 76u: goto L_088E0468;
    case 77u: goto L_088E04AC;
    case 78u: goto L_088E04B0;
    case 79u: goto L_088E04C4;
    case 80u: goto L_088E04D0;
    case 81u: goto L_088E04D8;
    case 82u: goto L_088E04E4;
    case 83u: goto L_088E04FC;
    case 84u: goto L_088E0508;
    case 85u: goto L_088E0514;
    case 86u: goto L_088E051C;
    case 87u: goto L_088E0528;
    case 88u: goto L_088E0530;
    case 89u: goto L_088E0538;
    case 90u: goto L_088E0540;
    case 91u: goto L_088E0548;
    case 92u: goto L_088E0550;
    case 93u: goto L_088E0560;
    case 94u: goto L_088E0568;
    case 95u: goto L_088E0570;
    case 96u: goto L_088E057C;
    case 97u: goto L_088E058C;
    case 98u: goto L_088E0594;
    case 99u: goto L_088E059C;
    case 100u: goto L_088E05AC;
    case 101u: goto L_088E05B4;
    case 102u: goto L_088E05BC;
    case 103u: goto L_088E05C0;
    case 104u: goto L_088E05C4;
    case 105u: goto L_088E060C;
    case 106u: goto L_088E0654;
    case 107u: goto L_088E0664;
    case 108u: goto L_088E0674;
    case 109u: goto L_088E067C;
    case 110u: goto L_088E0684;
    case 111u: goto L_088E069C;
    case 112u: goto L_088E06B0;
    case 113u: goto L_088E06B8;
    case 114u: goto L_088E06C0;
    case 115u: goto L_088E06D8;
    case 116u: goto L_088E06E0;
    case 117u: goto L_088E06F0;
    case 118u: goto L_088E06F8;
    case 119u: goto L_088E0700;
    case 120u: goto L_088E0718;
    case 121u: goto L_088E072C;
    case 122u: goto L_088E073C;
    case 123u: goto L_088E0744;
    case 124u: goto L_088E074C;
    case 125u: goto L_088E075C;
    case 126u: goto L_088E076C;
    case 127u: goto L_088E0774;
    case 128u: goto L_088E0788;
    case 129u: goto L_088E0794;
    case 130u: goto L_088E079C;
    case 131u: goto L_088E07A4;
    case 132u: goto L_088E07B8;
    case 133u: goto L_088E07C0;
    case 134u: goto L_088E07D4;
    case 135u: goto L_088E07D8;
    case 136u: goto L_088E07E8;
    case 137u: goto L_088E07F0;
    case 138u: goto L_088E0800;
    case 139u: goto L_088E080C;
    case 140u: goto L_088E0820;
    case 141u: goto L_088E0834;
    case 142u: goto L_088E0844;
    case 143u: goto L_088E084C;
    case 144u: goto L_088E0864;
    case 145u: goto L_088E086C;
    case 146u: goto L_088E087C;
    case 147u: goto L_088E0884;
    case 148u: goto L_088E088C;
    case 149u: goto L_088E08A4;
    case 150u: goto L_088E08B8;
    case 151u: goto L_088E08CC;
    case 152u: goto L_088E08E0;
    case 153u: goto L_088E08F0;
    case 154u: goto L_088E0900;
    case 155u: goto L_088E0918;
    case 156u: goto L_088E092C;
    case 157u: goto L_088E0934;
    case 158u: goto L_088E093C;
    case 159u: goto L_088E0958;
    case 160u: goto L_088E0960;
    case 161u: goto L_088E0968;
    case 162u: goto L_088E0974;
    case 163u: goto L_088E0978;
    case 164u: goto L_088E0980;
    case 165u: goto L_088E099C;
    case 166u: goto L_088E09B4;
    case 167u: goto L_088E09D4;
    case 168u: goto L_088E09DC;
    case 169u: goto L_088E09E4;
    case 170u: goto L_088E09F0;
    case 171u: goto L_088E0A0C;
    case 172u: goto L_088E0A14;
    case 173u: goto L_088E0A1C;
    case 174u: goto L_088E0A24;
    case 175u: goto L_088E0A28;
    case 176u: goto L_088E0A34;
    case 177u: goto L_088E0A3C;
    case 178u: goto L_088E0A44;
    case 179u: goto L_088E0A54;
    case 180u: goto L_088E0A64;
    case 181u: goto L_088E0A6C;
    case 182u: goto L_088E0A74;
    case 183u: goto L_088E0A94;
    case 184u: goto L_088E0A9C;
    case 185u: goto L_088E0AA8;
    case 186u: goto L_088E0AB8;
    case 187u: goto L_088E0AC0;
    case 188u: goto L_088E0AE4;
    case 189u: goto L_088E0AEC;
    case 190u: goto L_088E0AF8;
    case 191u: goto L_088E0B18;
    case 192u: goto L_088E0B24;
    case 193u: goto L_088E0B34;
    case 194u: goto L_088E0B3C;
    case 195u: goto L_088E0B44;
    case 196u: goto L_088E0B64;
    case 197u: goto L_088E0BC8;
    case 198u: goto L_088E0BD0;
    case 199u: goto L_088E0BD8;
    case 200u: goto L_088E0BE8;
    case 201u: goto L_088E0BF8;
    case 202u: goto L_088E0C08;
    case 203u: goto L_088E0C0C;
    case 204u: goto L_088E0C20;
    case 205u: goto L_088E0C38;
    case 206u: goto L_088E0C44;
    case 207u: goto L_088E0C4C;
    case 208u: goto L_088E0C5C;
    case 209u: goto L_088E0C6C;
    case 210u: goto L_088E0C9C;
    case 211u: goto L_088E0CA4;
    case 212u: goto L_088E0CAC;
    case 213u: goto L_088E0CB4;
    case 214u: goto L_088E0CBC;
    case 215u: goto L_088E0CC4;
    case 216u: goto L_088E0CF4;
    case 217u: goto L_088E0CFC;
    case 218u: goto L_088E0D08;
    case 219u: goto L_088E0D18;
    case 220u: goto L_088E0D20;
    case 221u: goto L_088E0D28;
    case 222u: goto L_088E0D34;
    case 223u: goto L_088E0D44;
    case 224u: goto L_088E0D54;
    case 225u: goto L_088E0D5C;
    case 226u: goto L_088E0D64;
    case 227u: goto L_088E0D70;
    case 228u: goto L_088E0D80;
    case 229u: goto L_088E0D88;
    case 230u: goto L_088E0D98;
    case 231u: goto L_088E0DA8;
    case 232u: goto L_088E0DC0;
    case 233u: goto L_088E0DD0;
    case 234u: goto L_088E0DE4;
    case 235u: goto L_088E0DEC;
    case 236u: goto L_088E0DF4;
    case 237u: goto L_088E0E18;
    case 238u: goto L_088E0E20;
    case 239u: goto L_088E0E30;
    case 240u: goto L_088E0E48;
    case 241u: goto L_088E0E58;
    case 242u: goto L_088E0E6C;
    case 243u: goto L_088E0E7C;
    case 244u: goto L_088E0E98;
    case 245u: goto L_088E0EA0;
    case 246u: goto L_088E0EA8;
    case 247u: goto L_088E0EB0;
    case 248u: goto L_088E0ECC;
    case 249u: goto L_088E0ED4;
    case 250u: goto L_088E0EDC;
    case 251u: goto L_088E0EE4;
    case 252u: goto L_088E0EEC;
    case 253u: goto L_088E0EF0;
    case 254u: goto L_088E0EFC;
    case 255u: goto L_088E0F0C;
    case 256u: goto L_088E0F10;
    case 257u: goto L_088E0F1C;
    case 258u: goto L_088E0F28;
    case 259u: goto L_088E0F2C;
    case 260u: goto L_088E0F38;
    case 261u: goto L_088E0F44;
    case 262u: goto L_088E0F4C;
    case 263u: goto L_088E0F6C;
    case 264u: goto L_088E0F8C;
    case 265u: goto L_088E0FB8;
    case 266u: goto L_088E1000;
    case 267u: goto L_088E1008;
    case 268u: goto L_088E1010;
    case 269u: goto L_088E1014;
    case 270u: goto L_088E101C;
    case 271u: goto L_088E1084;
    case 272u: goto L_088E108C;
    case 273u: goto L_088E1094;
    case 274u: goto L_088E1098;
    case 275u: goto L_088E10A8;
    case 276u: goto L_088E10B0;
    case 277u: goto L_088E10B8;
    case 278u: goto L_088E10D0;
    case 279u: goto L_088E10E4;
    case 280u: goto L_088E10EC;
    case 281u: goto L_088E10F4;
    case 282u: goto L_088E1120;
    case 283u: goto L_088E1168;
    case 284u: goto L_088E1178;
    case 285u: goto L_088E1188;
    case 286u: goto L_088E1190;
    case 287u: goto L_088E1194;
    case 288u: goto L_088E119C;
    case 289u: goto L_088E11A4;
    case 290u: goto L_088E120C;
    case 291u: goto L_088E121C;
    case 292u: goto L_088E122C;
    case 293u: goto L_088E1234;
    case 294u: goto L_088E1238;
    case 295u: goto L_088E1240;
    case 296u: goto L_088E1250;
    case 297u: goto L_088E1260;
    case 298u: goto L_088E1268;
    case 299u: goto L_088E126C;
    case 300u: goto L_088E1274;
    case 301u: goto L_088E127C;
    case 302u: goto L_088E1294;
    case 303u: goto L_088E12AC;
    case 304u: goto L_088E12D8;
    case 305u: goto L_088E12F0;
    case 306u: goto L_088E12F8;
    case 307u: goto L_088E1308;
    case 308u: goto L_088E1318;
    case 309u: goto L_088E1324;
    case 310u: goto L_088E1330;
    case 311u: goto L_088E1340;
    case 312u: goto L_088E1344;
    case 313u: goto L_088E1358;
    case 314u: goto L_088E1360;
    case 315u: goto L_088E1370;
    case 316u: goto L_088E1384;
    case 317u: goto L_088E138C;
    case 318u: goto L_088E1394;
    case 319u: goto L_088E139C;
    case 320u: goto L_088E13AC;
    case 321u: goto L_088E13D0;
    case 322u: goto L_088E13D8;
    case 323u: goto L_088E13E0;
    case 324u: goto L_088E13F8;
    case 325u: goto L_088E140C;
    case 326u: goto L_088E1414;
    case 327u: goto L_088E142C;
    case 328u: goto L_088E144C;
    case 329u: goto L_088E1490;
    case 330u: goto L_088E14A8;
    case 331u: goto L_088E14B0;
    case 332u: goto L_088E14B8;
    case 333u: goto L_088E14C0;
    case 334u: goto L_088E14EC;
    case 335u: goto L_088E1500;
    case 336u: goto L_088E1510;
    case 337u: goto L_088E153C;
    case 338u: goto L_088E1550;
    case 339u: goto L_088E1560;
    case 340u: goto L_088E1578;
    case 341u: goto L_088E1580;
    case 342u: goto L_088E1588;
    case 343u: goto L_088E1598;
    case 344u: goto L_088E15B0;
    case 345u: goto L_088E15D4;
    case 346u: goto L_088E15E4;
    case 347u: goto L_088E15F4;
    case 348u: goto L_088E1604;
    case 349u: goto L_088E1628;
    case 350u: goto L_088E1630;
    case 351u: goto L_088E163C;
    case 352u: goto L_088E165C;
    case 353u: goto L_088E1668;
    case 354u: goto L_088E1674;
    case 355u: goto L_088E167C;
    case 356u: goto L_088E1694;
    case 357u: goto L_088E16DC;
    case 358u: goto L_088E16E4;
    case 359u: goto L_088E16F4;
    case 360u: goto L_088E1704;
    case 361u: goto L_088E1714;
    case 362u: goto L_088E171C;
    case 363u: goto L_088E1724;
    case 364u: goto L_088E172C;
    case 365u: goto L_088E1734;
    case 366u: goto L_088E173C;
    case 367u: goto L_088E1748;
    case 368u: goto L_088E1838;
    case 369u: goto L_088E1864;
    case 370u: goto L_088E1880;
    case 371u: goto L_088E1898;
    case 372u: goto L_088E18B4;
    case 373u: goto L_088E18C8;
    case 374u: goto L_088E18D0;
    case 375u: goto L_088E18E0;
    case 376u: goto L_088E18EC;
    case 377u: goto L_088E18F4;
    case 378u: goto L_088E18FC;
    case 379u: goto L_088E1904;
    case 380u: goto L_088E1914;
    case 381u: goto L_088E1924;
    case 382u: goto L_088E1928;
    case 383u: goto L_088E1930;
    case 384u: goto L_088E1940;
    case 385u: goto L_088E195C;
    case 386u: goto L_088E1964;
    case 387u: goto L_088E1974;
    case 388u: goto L_088E198C;
    case 389u: goto L_088E19A0;
    case 390u: goto L_088E19AC;
    case 391u: goto L_088E19C0;
    case 392u: goto L_088E19C8;
    case 393u: goto L_088E19D8;
    case 394u: goto L_088E1A44;
    case 395u: goto L_088E1AC0;
    case 396u: goto L_088E1AC8;
    case 397u: goto L_088E1AD0;
    case 398u: goto L_088E1AD8;
    case 399u: goto L_088E1AF4;
    case 400u: goto L_088E1B0C;
    case 401u: goto L_088E1B14;
    case 402u: goto L_088E1B1C;
    case 403u: goto L_088E1B28;
    case 404u: goto L_088E1B44;
    case 405u: goto L_088E1B5C;
    case 406u: goto L_088E1B64;
    case 407u: goto L_088E1B80;
    case 408u: goto L_088E1B94;
    case 409u: goto L_088E1B9C;
    case 410u: goto L_088E1BA8;
    case 411u: goto L_088E1BB0;
    case 412u: goto L_088E1BB8;
    case 413u: goto L_088E1BDC;
    case 414u: goto L_088E1BE4;
    case 415u: goto L_088E1BEC;
    case 416u: goto L_088E1BF8;
    case 417u: goto L_088E1C08;
    case 418u: goto L_088E1C10;
    case 419u: goto L_088E1C18;
    case 420u: goto L_088E1C34;
    case 421u: goto L_088E1C44;
    case 422u: goto L_088E1C4C;
    case 423u: goto L_088E1C58;
    case 424u: goto L_088E1C60;
    case 425u: goto L_088E1C6C;
    case 426u: goto L_088E1C74;
    case 427u: goto L_088E1C7C;
    case 428u: goto L_088E1C90;
    case 429u: goto L_088E1C9C;
    case 430u: goto L_088E1CC0;
    case 431u: goto L_088E1D18;
    case 432u: goto L_088E1D28;
    case 433u: goto L_088E1D34;
    case 434u: goto L_088E1D44;
    case 435u: goto L_088E1D48;
    case 436u: goto L_088E1D50;
    case 437u: goto L_088E1D60;
    case 438u: goto L_088E1D6C;
    case 439u: goto L_088E1D74;
    case 440u: goto L_088E1D7C;
    case 441u: goto L_088E1D98;
    case 442u: goto L_088E1DAC;
    case 443u: goto L_088E1DB4;
    case 444u: goto L_088E1DBC;
    case 445u: goto L_088E1DF8;
    case 446u: goto L_088E1E00;
    case 447u: goto L_088E1E08;
    case 448u: goto L_088E1E10;
    case 449u: goto L_088E1E1C;
    case 450u: goto L_088E1E24;
    case 451u: goto L_088E1E2C;
    case 452u: goto L_088E1E38;
    case 453u: goto L_088E1E4C;
    case 454u: goto L_088E1E74;
    case 455u: goto L_088E1ECC;
    case 456u: goto L_088E1EF4;
    case 457u: goto L_088E1F08;
    case 458u: goto L_088E1F0C;
    case 459u: goto L_088E1F40;
    case 460u: goto L_088E1F94;
    case 461u: goto L_088E1FE4;
    case 462u: goto L_088E1FEC;
    case 463u: goto L_088E1FF0;
    case 464u: goto L_088E2000;
    case 465u: goto L_088E2018;
    case 466u: goto L_088E2020;
    case 467u: goto L_088E2048;
    case 468u: goto L_088E2068;
    case 469u: goto L_088E2078;
    case 470u: goto L_088E2088;
    case 471u: goto L_088E2094;
    case 472u: goto L_088E209C;
    case 473u: goto L_088E20F8;
    case 474u: goto L_088E2140;
    case 475u: goto L_088E2148;
    case 476u: goto L_088E214C;
    case 477u: goto L_088E215C;
    case 478u: goto L_088E2174;
    case 479u: goto L_088E217C;
    case 480u: goto L_088E2198;
    case 481u: goto L_088E21A4;
    case 482u: goto L_088E21AC;
    case 483u: goto L_088E21B0;
    case 484u: goto L_088E2224;
    case 485u: goto L_088E228C;
    case 486u: goto L_088E22A0;
    case 487u: goto L_088E22BC;
    case 488u: goto L_088E22CC;
    case 489u: goto L_088E22E0;
    case 490u: goto L_088E2318;
    case 491u: goto L_088E2354;
    case 492u: goto L_088E235C;
    case 493u: goto L_088E23B0;
    case 494u: goto L_088E23E4;
    case 495u: goto L_088E23F0;
    case 496u: goto L_088E2408;
    case 497u: goto L_088E2420;
    case 498u: goto L_088E2430;
    case 499u: goto L_088E2444;
    case 500u: goto L_088E2450;
    case 501u: goto L_088E24BC;
    case 502u: goto L_088E24C8;
    case 503u: goto L_088E24E4;
    case 504u: goto L_088E24F0;
    case 505u: goto L_088E2508;
    case 506u: goto L_088E250C;
    case 507u: goto L_088E2528;
    case 508u: goto L_088E2534;
    case 509u: goto L_088E253C;
    case 510u: goto L_088E2548;
    case 511u: goto L_088E2550;
    case 512u: goto L_088E2568;
    case 513u: goto L_088E25D0;
    case 514u: goto L_088E2630;
    case 515u: goto L_088E2670;
    case 516u: goto L_088E269C;
    case 517u: goto L_088E26E8;
    case 518u: goto L_088E26F0;
    case 519u: goto L_088E26F4;
    case 520u: goto L_088E2704;
    case 521u: goto L_088E271C;
    case 522u: goto L_088E2738;
    case 523u: goto L_088E2748;
    case 524u: goto L_088E2758;
    case 525u: goto L_088E2770;
    case 526u: goto L_088E2778;
    case 527u: goto L_088E2790;
    case 528u: goto L_088E27A0;
    case 529u: goto L_088E27B0;
    case 530u: goto L_088E27CC;
    case 531u: goto L_088E27D4;
    case 532u: goto L_088E27E0;
    case 533u: goto L_088E27F0;
    case 534u: goto L_088E280C;
    case 535u: goto L_088E2814;
    case 536u: goto L_088E2830;
    case 537u: goto L_088E2838;
    case 538u: goto L_088E2854;
    case 539u: goto L_088E2864;
    case 540u: goto L_088E2874;
    case 541u: goto L_088E2878;
    case 542u: goto L_088E2888;
    case 543u: goto L_088E2894;
    case 544u: goto L_088E2898;
    case 545u: goto L_088E28A8;
    case 546u: goto L_088E28BC;
    case 547u: goto L_088E28D0;
    case 548u: goto L_088E2914;
    case 549u: goto L_088E294C;
    case 550u: goto L_088E2958;
    case 551u: goto L_088E2960;
    case 552u: goto L_088E2980;
    case 553u: goto L_088E2998;
    case 554u: goto L_088E299C;
    case 555u: goto L_088E29B0;
    case 556u: goto L_088E29B8;
    case 557u: goto L_088E29C0;
    case 558u: goto L_088E29D4;
    case 559u: goto L_088E29D8;
    case 560u: goto L_088E2A08;
    case 561u: goto L_088E2A14;
    case 562u: goto L_088E2A28;
    case 563u: goto L_088E2A34;
    case 564u: goto L_088E2A54;
    case 565u: goto L_088E2A5C;
    case 566u: goto L_088E2A7C;
    case 567u: goto L_088E2A90;
    case 568u: goto L_088E2A9C;
    case 569u: goto L_088E2AA8;
    case 570u: goto L_088E2AB4;
    case 571u: goto L_088E2AB8;
    case 572u: goto L_088E2AC0;
    case 573u: goto L_088E2AC8;
    case 574u: goto L_088E2AD0;
    case 575u: goto L_088E2AE0;
    case 576u: goto L_088E2AEC;
    case 577u: goto L_088E2B00;
    case 578u: goto L_088E2B04;
    case 579u: goto L_088E2B24;
    case 580u: goto L_088E2B34;
    case 581u: goto L_088E2B64;
    case 582u: goto L_088E2BB0;
    case 583u: goto L_088E2BE8;
    case 584u: goto L_088E2BF4;
    case 585u: goto L_088E2C04;
    case 586u: goto L_088E2C0C;
    case 587u: goto L_088E2C14;
    case 588u: goto L_088E2C20;
    case 589u: goto L_088E2C28;
    case 590u: goto L_088E2C30;
    case 591u: goto L_088E2C3C;
    case 592u: goto L_088E2C80;
    case 593u: goto L_088E2CD8;
    case 594u: goto L_088E2CEC;
    case 595u: goto L_088E2CF4;
    case 596u: goto L_088E2CFC;
    case 597u: goto L_088E2D20;
    case 598u: goto L_088E2D30;
    case 599u: goto L_088E2D40;
    case 600u: goto L_088E2D4C;
    case 601u: goto L_088E2D58;
    case 602u: goto L_088E2D64;
    case 603u: goto L_088E2D74;
    case 604u: goto L_088E2D78;
    case 605u: goto L_088E2D84;
    case 606u: goto L_088E2D94;
    case 607u: goto L_088E2DA0;
    case 608u: goto L_088E2DAC;
    case 609u: goto L_088E2DB0;
    case 610u: goto L_088E2DB8;
    case 611u: goto L_088E2DC4;
    case 612u: goto L_088E2DC8;
    case 613u: goto L_088E2E14;
    case 614u: goto L_088E2E2C;
    case 615u: goto L_088E2E38;
    case 616u: goto L_088E2E50;
    case 617u: goto L_088E2E58;
    case 618u: goto L_088E2E60;
    case 619u: goto L_088E2E80;
    case 620u: goto L_088E2E8C;
    case 621u: goto L_088E2EA0;
    case 622u: goto L_088E2EB4;
    case 623u: goto L_088E2ED0;
    case 624u: goto L_088E2ED8;
    case 625u: goto L_088E2EE8;
    case 626u: goto L_088E2F0C;
    case 627u: goto L_088E2F18;
    case 628u: goto L_088E2F34;
    case 629u: goto L_088E2F4C;
    case 630u: goto L_088E2F58;
    case 631u: goto L_088E2F70;
    case 632u: goto L_088E2F78;
    case 633u: goto L_088E2F90;
    case 634u: goto L_088E2F9C;
    case 635u: goto L_088E2FB4;
    case 636u: goto L_088E2FCC;
    case 637u: goto L_088E2FE0;
    case 638u: goto L_088E2FEC;
    case 639u: goto L_088E2FF4;
    case 640u: goto L_088E3008;
    case 641u: goto L_088E301C;
    case 642u: goto L_088E3038;
    case 643u: goto L_088E3040;
    case 644u: goto L_088E304C;
    case 645u: goto L_088E3054;
    case 646u: goto L_088E3064;
    case 647u: goto L_088E307C;
    case 648u: goto L_088E3094;
    case 649u: goto L_088E30A8;
    case 650u: goto L_088E30B4;
    case 651u: goto L_088E30B8;
    case 652u: goto L_088E30C0;
    case 653u: goto L_088E30D4;
    case 654u: goto L_088E30E0;
    case 655u: goto L_088E30E8;
    case 656u: goto L_088E30FC;
    case 657u: goto L_088E310C;
    case 658u: goto L_088E3118;
    case 659u: goto L_088E312C;
    case 660u: goto L_088E3138;
    case 661u: goto L_088E3140;
    case 662u: goto L_088E3154;
    case 663u: goto L_088E3160;
    case 664u: goto L_088E3168;
    case 665u: goto L_088E3198;
    case 666u: goto L_088E319C;
    case 667u: goto L_088E31A4;
    case 668u: goto L_088E31D4;
    case 669u: goto L_088E31D8;
    case 670u: goto L_088E31E0;
    case 671u: goto L_088E3210;
    case 672u: goto L_088E3214;
    case 673u: goto L_088E3230;
    case 674u: goto L_088E3234;
    case 675u: goto L_088E3244;
    case 676u: goto L_088E324C;
    case 677u: goto L_088E325C;
    case 678u: goto L_088E3260;
    case 679u: goto L_088E3264;
    case 680u: goto L_088E32B8;
    case 681u: goto L_088E32CC;
    case 682u: goto L_088E32D4;
    case 683u: goto L_088E32E4;
    case 684u: goto L_088E330C;
    case 685u: goto L_088E3320;
    case 686u: goto L_088E3334;
    case 687u: goto L_088E3348;
    case 688u: goto L_088E335C;
    case 689u: goto L_088E3360;
    case 690u: goto L_088E3388;
    case 691u: goto L_088E3398;
    case 692u: goto L_088E33AC;
    case 693u: goto L_088E33C0;
    case 694u: goto L_088E33D4;
    case 695u: goto L_088E33E8;
    case 696u: goto L_088E33FC;
    case 697u: goto L_088E3400;
    case 698u: goto L_088E342C;
    case 699u: goto L_088E3438;
    case 700u: goto L_088E3454;
    case 701u: goto L_088E346C;
    case 702u: goto L_088E3474;
    case 703u: goto L_088E3490;
    case 704u: goto L_088E34A8;
    case 705u: goto L_088E34C4;
    case 706u: goto L_088E34CC;
    case 707u: goto L_088E34E0;
    case 708u: goto L_088E34F0;
    case 709u: goto L_088E350C;
    case 710u: goto L_088E3528;
    case 711u: goto L_088E352C;
    case 712u: goto L_088E3540;
    case 713u: goto L_088E356C;
    case 714u: goto L_088E3570;
    case 715u: goto L_088E3578;
    case 716u: goto L_088E3580;
    case 717u: goto L_088E35D0;
    case 718u: goto L_088E35D4;
    case 719u: goto L_088E35F8;
    case 720u: goto L_088E3600;
    case 721u: goto L_088E3608;
    case 722u: goto L_088E3614;
    case 723u: goto L_088E362C;
    case 724u: goto L_088E3638;
    case 725u: goto L_088E3668;
    case 726u: goto L_088E3684;
    case 727u: goto L_088E3694;
    case 728u: goto L_088E369C;
    case 729u: goto L_088E36A4;
    case 730u: goto L_088E36AC;
    case 731u: goto L_088E36B4;
    case 732u: goto L_088E36BC;
    case 733u: goto L_088E36CC;
    case 734u: goto L_088E36D0;
    case 735u: goto L_088E36D8;
    case 736u: goto L_088E36E8;
    case 737u: goto L_088E36EC;
    case 738u: goto L_088E36F8;
    case 739u: goto L_088E370C;
    case 740u: goto L_088E3728;
    case 741u: goto L_088E3738;
    case 742u: goto L_088E3740;
    case 743u: goto L_088E375C;
    case 744u: goto L_088E376C;
    case 745u: goto L_088E3774;
    case 746u: goto L_088E3788;
    case 747u: goto L_088E37A4;
    case 748u: goto L_088E37B8;
    case 749u: goto L_088E37D8;
    case 750u: goto L_088E37E8;
    case 751u: goto L_088E37F0;
    case 752u: goto L_088E3800;
    case 753u: goto L_088E3804;
    case 754u: goto L_088E380C;
    case 755u: goto L_088E381C;
    case 756u: goto L_088E3820;
    case 757u: goto L_088E382C;
    case 758u: goto L_088E3840;
    case 759u: goto L_088E385C;
    case 760u: goto L_088E386C;
    case 761u: goto L_088E3874;
    case 762u: goto L_088E3890;
    case 763u: goto L_088E38A0;
    case 764u: goto L_088E38A8;
    case 765u: goto L_088E38BC;
    case 766u: goto L_088E38D8;
    case 767u: goto L_088E38EC;
    case 768u: goto L_088E390C;
    case 769u: goto L_088E391C;
    case 770u: goto L_088E393C;
    case 771u: goto L_088E397C;
    case 772u: goto L_088E3998;
    case 773u: goto L_088E39A0;
    case 774u: goto L_088E39BC;
    case 775u: goto L_088E39C8;
    case 776u: goto L_088E39D0;
    case 777u: goto L_088E39DC;
    case 778u: goto L_088E39E4;
    case 779u: goto L_088E39FC;
    case 780u: goto L_088E3A18;
    case 781u: goto L_088E3A24;
    case 782u: goto L_088E3A30;
    case 783u: goto L_088E3A4C;
    case 784u: goto L_088E3A58;
    case 785u: goto L_088E3A68;
    case 786u: goto L_088E3A78;
    case 787u: goto L_088E3A84;
    case 788u: goto L_088E3A8C;
    case 789u: goto L_088E3AA0;
    case 790u: goto L_088E3AAC;
    case 791u: goto L_088E3AB8;
    case 792u: goto L_088E3AD4;
    case 793u: goto L_088E3AE0;
    case 794u: goto L_088E3AF0;
    case 795u: goto L_088E3B00;
    case 796u: goto L_088E3B08;
    case 797u: goto L_088E3B14;
    case 798u: goto L_088E3B20;
    case 799u: goto L_088E3B3C;
    case 800u: goto L_088E3B48;
    case 801u: goto L_088E3B58;
    case 802u: goto L_088E3B68;
    case 803u: goto L_088E3B74;
    case 804u: goto L_088E3B7C;
    case 805u: goto L_088E3B84;
    case 806u: goto L_088E3BB8;
    case 807u: goto L_088E3BE4;
    case 808u: goto L_088E3BF0;
    case 809u: goto L_088E3BFC;
    case 810u: goto L_088E3C08;
    case 811u: goto L_088E3C14;
    case 812u: goto L_088E3C18;
    case 813u: goto L_088E3C20;
    case 814u: goto L_088E3C2C;
    case 815u: goto L_088E3C30;
    case 816u: goto L_088E3C38;
    case 817u: goto L_088E3C44;
    case 818u: goto L_088E3C48;
    case 819u: goto L_088E3C5C;
    case 820u: goto L_088E3C74;
    case 821u: goto L_088E3C7C;
    case 822u: goto L_088E3CB4;
    case 823u: goto L_088E3CE0;
    case 824u: goto L_088E3CE8;
    case 825u: goto L_088E3CFC;
    case 826u: goto L_088E3D10;
    case 827u: goto L_088E3D24;
    case 828u: goto L_088E3D40;
    case 829u: goto L_088E3D50;
    case 830u: goto L_088E3D58;
    case 831u: goto L_088E3D68;
    case 832u: goto L_088E3D70;
    case 833u: goto L_088E3D80;
    case 834u: goto L_088E3D88;
    case 835u: goto L_088E3D90;
    case 836u: goto L_088E3D94;
    case 837u: goto L_088E3D9C;
    case 838u: goto L_088E3DA0;
    case 839u: goto L_088E3DA8;
    case 840u: goto L_088E3DB8;
    case 841u: goto L_088E3DC8;
    case 842u: goto L_088E3DE8;
    case 843u: goto L_088E3DEC;
    case 844u: goto L_088E3DFC;
    case 845u: goto L_088E3E00;
    case 846u: goto L_088E3E08;
    case 847u: goto L_088E3E0C;
    case 848u: goto L_088E3E14;
    case 849u: goto L_088E3E24;
    case 850u: goto L_088E3E40;
    case 851u: goto L_088E3E50;
    case 852u: goto L_088E3E58;
    case 853u: goto L_088E3E6C;
    case 854u: goto L_088E3E7C;
    case 855u: goto L_088E3E84;
    case 856u: goto L_088E3E94;
    case 857u: goto L_088E3E9C;
    case 858u: goto L_088E3EA0;
    case 859u: goto L_088E3EA8;
    case 860u: goto L_088E3EB8;
    case 861u: goto L_088E3ED4;
    case 862u: goto L_088E3ED8;
    case 863u: goto L_088E3EE8;
    case 864u: goto L_088E3EEC;
    case 865u: goto L_088E3EF4;
    case 866u: goto L_088E3EF8;
    case 867u: goto L_088E3F00;
    case 868u: goto L_088E3F10;
    case 869u: goto L_088E3F2C;
    case 870u: goto L_088E3F3C;
    case 871u: goto L_088E3F44;
    case 872u: goto L_088E3F58;
    case 873u: goto L_088E3F68;
    case 874u: goto L_088E3F70;
    case 875u: goto L_088E3F80;
    case 876u: goto L_088E3F88;
    case 877u: goto L_088E3F8C;
    case 878u: goto L_088E3F94;
    case 879u: goto L_088E3FA0;
    case 880u: goto L_088E3FE8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_088E0000:
    ctx.gpr[31] = (0x088E0008u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088E0008u) goto L_088E0008;
    return;
L_088E0008:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E0074;
      }
      goto L_088E0010;
    }
L_088E0010:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088E0020u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 32u, 0x089181ECu>(ctx, &aot_mem) && ctx.pc == 0x088E0020u) goto L_088E0020;
    return;
L_088E0020:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[6] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E006Cu);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088E006Cu) goto L_088E006C;
    return;
L_088E006C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(640), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088E0080;
      }
      goto L_088E0074;
    }
L_088E0074:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088E0080u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 59u, 0x089183A4u>(ctx, &aot_mem) && ctx.pc == 0x088E0080u) goto L_088E0080;
    return;
L_088E0080:
    ctx.gpr[4] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E00B8;
      }
      goto L_088E008C;
    }
L_088E008C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[31] = (0x088E00A0u);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088E00A0u) goto L_088E00A0;
    return;
L_088E00A0:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E00B8;
      }
      goto L_088E00A8;
    }
L_088E00A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7408)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7408), ctx.gpr[5]);
    goto L_088E00B8;
L_088E00B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0240;
      }
      goto L_088E00C4;
    }
L_088E00C4:
    ctx.gpr[31] = (0x088E00CCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E00CCu) goto L_088E00CC;
    return;
L_088E00CC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0240;
      }
      goto L_088E00D4;
    }
L_088E00D4:
    ctx.gpr[4] = (0u | 39u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E0230;
      }
      goto L_088E00E0;
    }
L_088E00E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 12u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0230;
      }
      goto L_088E00FC;
    }
L_088E00FC:
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
        goto L_088E012C;
    }
    goto L_088E010C;
L_088E010C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[31] = (0x088E011Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088E011Cu) goto L_088E011C;
    return;
L_088E011C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    goto L_088E012C;
L_088E012C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0168;
      }
      goto L_088E0144;
    }
L_088E0144:
    ctx.gpr[4] = (2225u << 16u);
    ctx.gpr[31] = (0x088E0150u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13760));
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 45u, 0x088D4484u>(ctx, &aot_mem) && ctx.pc == 0x088E0150u) goto L_088E0150;
    return;
L_088E0150:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[22] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[31] = (0x088E0160u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 129u, 0x088A86F8u>(ctx, &aot_mem) && ctx.pc == 0x088E0160u) goto L_088E0160;
    return;
L_088E0160:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0228;
      }
      goto L_088E0168;
    }
L_088E0168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
        goto L_088E0194;
    }
    goto L_088E0174;
L_088E0174:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(53));
    ctx.gpr[31] = (0x088E0184u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088E0184u) goto L_088E0184;
    return;
L_088E0184:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(53)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    goto L_088E0194;
L_088E0194:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(208))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_088E0228;
      }
      goto L_088E01A0;
    }
L_088E01A0:
    ctx.gpr[16] = (2232u << 16u);
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(5992));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(100)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[17] = (2225u << 16u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(13792));
      if (branch_taken) {
          goto L_088E01DC;
      }
      goto L_088E01C0;
    }
L_088E01C0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(54));
    ctx.gpr[31] = (0x088E01D0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088E01D0u) goto L_088E01D0;
    return;
L_088E01D0:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(54)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E01DC;
L_088E01DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(208))))));
    ctx.gpr[31] = (0x088E01F0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 45u, 0x088D4484u>(ctx, &aot_mem) && ctx.pc == 0x088E01F0u) goto L_088E01F0;
    return;
L_088E01F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
        goto L_088E021C;
    }
    goto L_088E01FC;
L_088E01FC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(55));
    ctx.gpr[31] = (0x088E020Cu);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x088E020Cu) goto L_088E020C;
    return;
L_088E020C:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(55)));
    aot_mem.aot_store8(ctx.gpr[22] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(96)));
    goto L_088E021C;
L_088E021C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E0228u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(208))))));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 129u, 0x088A86F8u>(ctx, &aot_mem) && ctx.pc == 0x088E0228u) goto L_088E0228;
    return;
L_088E0228:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0240;
      }
      goto L_088E0230;
    }
L_088E0230:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088E0240u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 119u, 0x088A8638u>(ctx, &aot_mem) && ctx.pc == 0x088E0240u) goto L_088E0240;
    return;
L_088E0240:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
      if (branch_taken) {
          goto L_088E05C4;
      }
      goto L_088E0248;
    }
L_088E0248:
    ctx.gpr[4] = (0u | 43u);
    { const bool branch_taken = ctx.gpr[23] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E02E4;
      }
      goto L_088E0254;
    }
L_088E0254:
    ctx.gpr[31] = (0x088E025Cu);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088E025Cu) goto L_088E025C;
    return;
L_088E025C:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    ctx.gpr[16] = (0u | 1u);
      if (branch_taken) {
          goto L_088E027C;
      }
      goto L_088E0264;
    }
L_088E0264:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 80u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_088E027C;
L_088E027C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[5] = (0u | 169u);
    ctx.gpr[31] = (0x088E0290u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 144u, 0x089B07D0u>(ctx, &aot_mem) && ctx.pc == 0x088E0290u) goto L_088E0290;
    return;
L_088E0290:
    ctx.gpr[31] = (0x088E0298u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088E0298u) goto L_088E0298;
    return;
L_088E0298:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E02B0;
      }
      goto L_088E02A0;
    }
L_088E02A0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7408)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7408), ctx.gpr[5]);
    goto L_088E02B0;
L_088E02B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E02DC;
      }
      goto L_088E02BC;
    }
L_088E02BC:
    ctx.gpr[31] = (0x088E02C4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E02C4u) goto L_088E02C4;
    return;
L_088E02C4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E02DC;
      }
      goto L_088E02CC;
    }
L_088E02CC:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088E02DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 119u, 0x088A8638u>(ctx, &aot_mem) && ctx.pc == 0x088E02DCu) goto L_088E02DC;
    return;
L_088E02DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_088E05C4;
      }
      goto L_088E02E4;
    }
L_088E02E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E05BC;
      }
      goto L_088E02F0;
    }
L_088E02F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 5u);
      if (branch_taken) {
          goto L_088E0310;
      }
      goto L_088E0300;
    }
L_088E0300:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E05BC;
      }
      goto L_088E0310;
    }
L_088E0310:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_088E0344;
      }
      goto L_088E0320;
    }
L_088E0320:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    ctx.gpr[6] = (ctx.gpr[21] | 0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088E033Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 77u, 0x08A407CCu>(ctx, &aot_mem) && ctx.pc == 0x088E033Cu) goto L_088E033C;
    return;
L_088E033C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_088E04AC;
      }
      goto L_088E0344;
    }
L_088E0344:
    ctx.gpr[31] = (0x088E034Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x088E034Cu) goto L_088E034C;
    return;
L_088E034C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E03D0;
      }
      goto L_088E0358;
    }
L_088E0358:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E03D0;
      }
      goto L_088E0368;
    }
L_088E0368:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    ctx.gpr[4] = (ctx.gpr[4] >> 4u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
        goto L_088E03A8;
    }
    goto L_088E0384;
L_088E0384:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 48u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[31] = (0x088E03A4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 205u, 0x089ED4F0u>(ctx, &aot_mem) && ctx.pc == 0x088E03A4u) goto L_088E03A4;
    return;
L_088E03A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    goto L_088E03A8;
L_088E03A8:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(399), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(400), ctx.gpr[4]);
    goto L_088E03D0;
L_088E03D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x088E03DCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 10u, 0x088A00B4u>(ctx, &aot_mem) && ctx.pc == 0x088E03DCu) goto L_088E03DC;
    return;
L_088E03DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E03FC;
      }
      goto L_088E03E4;
    }
L_088E03E4:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088E03F4u);
    ctx.gpr[5] = (0u | 38u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 924u, 0x088930F0u>(ctx, &aot_mem) && ctx.pc == 0x088E03F4u) goto L_088E03F4;
    return;
L_088E03F4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E04AC;
      }
      goto L_088E03FC;
    }
L_088E03FC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E043C;
      }
      goto L_088E040C;
    }
L_088E040C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E043C;
      }
      goto L_088E041C;
    }
L_088E041C:
    ctx.gpr[31] = (0x088E0424u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 215u, 0x0899D83Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0424u) goto L_088E0424;
    return;
L_088E0424:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    goto L_088E043C;
L_088E043C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x088E0450u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 144u, 0x089B07D0u>(ctx, &aot_mem) && ctx.pc == 0x088E0450u) goto L_088E0450;
    return;
L_088E0450:
    ctx.gpr[31] = (0x088E0458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088E0458u) goto L_088E0458;
    return;
L_088E0458:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E04AC;
      }
      goto L_088E0460;
    }
L_088E0460:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[19];
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088E04AC;
      }
      goto L_088E0468;
    }
L_088E0468:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(344)));
    ctx.gpr[6] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(10));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E04AC;
L_088E04AC:
    ctx.gpr[17] = (0u | 0u);
    goto L_088E04B0;
L_088E04B0:
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E04E4;
      }
      goto L_088E04C4;
    }
L_088E04C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E04E4;
      }
      goto L_088E04D0;
    }
L_088E04D0:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E04E4;
      }
      goto L_088E04D8;
    }
L_088E04D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(508)));
    ctx.gpr[31] = (0x088E04E4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 319u, 0x0889942Cu>(ctx, &aot_mem) && ctx.pc == 0x088E04E4u) goto L_088E04E4;
    return;
L_088E04E4:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[4] << 16u);
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[17]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E04B0;
      }
      goto L_088E04FC;
    }
L_088E04FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0528;
      }
      goto L_088E0508;
    }
L_088E0508:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E0528;
      }
      goto L_088E0514;
    }
L_088E0514:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0528;
      }
      goto L_088E051C;
    }
L_088E051C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x088E0528u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 319u, 0x0889942Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0528u) goto L_088E0528;
    return;
L_088E0528:
    ctx.gpr[31] = (0x088E0530u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088E0530u) goto L_088E0530;
    return;
L_088E0530:
    { const bool branch_taken = ctx.gpr[22] == ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E0550;
      }
      goto L_088E0538;
    }
L_088E0538:
    { const bool branch_taken = ctx.gpr[22] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0570;
      }
      goto L_088E0540;
    }
L_088E0540:
    ctx.gpr[31] = (0x088E0548u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088E0548u) goto L_088E0548;
    return;
L_088E0548:
    { const bool branch_taken = ctx.gpr[22] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E0570;
      }
      goto L_088E0550;
    }
L_088E0550:
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(57)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088E0560u);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 32u, 0x089181ECu>(ctx, &aot_mem) && ctx.pc == 0x088E0560u) goto L_088E0560;
    return;
L_088E0560:
    ctx.gpr[31] = (0x088E0568u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088E0568u) goto L_088E0568;
    return;
L_088E0568:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(640), ctx.gpr[2]);
      if (branch_taken) {
          goto L_088E057C;
      }
      goto L_088E0570;
    }
L_088E0570:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x088E057Cu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 59u, 0x089183A4u>(ctx, &aot_mem) && ctx.pc == 0x088E057Cu) goto L_088E057C;
    return;
L_088E057C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E05AC;
      }
      goto L_088E058C;
    }
L_088E058C:
    ctx.gpr[31] = (0x088E0594u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E0594u) goto L_088E0594;
    return;
L_088E0594:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E05AC;
      }
      goto L_088E059C;
    }
L_088E059C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088E05ACu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 119u, 0x088A8638u>(ctx, &aot_mem) && ctx.pc == 0x088E05ACu) goto L_088E05AC;
    return;
L_088E05AC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E05BC;
      }
      goto L_088E05B4;
    }
L_088E05B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_088E05C4;
      }
      goto L_088E05BC;
    }
L_088E05BC:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    goto L_088E05C0;
L_088E05C0:
    ctx.gpr[2] = (0u | 0u);
    goto L_088E05C4;
L_088E05C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E060C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[18] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x088E0654u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0654u) goto L_088E0654;
    return;
L_088E0654:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E0744;
      }
      goto L_088E0664;
    }
L_088E0664:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 16u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E073C;
      }
      goto L_088E0674;
    }
L_088E0674:
    ctx.gpr[31] = (0x088E067Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x088E067Cu) goto L_088E067C;
    return;
L_088E067C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E073C;
      }
      goto L_088E0684;
    }
L_088E0684:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[4] = (ctx.gpr[5] & 32768u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E06C0;
      }
      goto L_088E069C;
    }
L_088E069C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[18] = (0u | 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[18] = (0u | 204u);
        goto L_088E06B0;
    }
    goto L_088E06B0;
L_088E06B0:
    ctx.gpr[31] = (0x088E06B8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E06B8u) goto L_088E06B8;
    return;
L_088E06B8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    goto L_088E06C0;
L_088E06C0:
    ctx.gpr[4] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    ctx.gpr[5] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E073C;
      }
      goto L_088E06D8;
    }
L_088E06D8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E073C;
      }
      goto L_088E06E0;
    }
L_088E06E0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[19] = (0u | 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (0u | 202u);
        goto L_088E06F0;
    }
    goto L_088E06F0;
L_088E06F0:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E073C;
      }
      goto L_088E06F8;
    }
L_088E06F8:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E073C;
      }
      goto L_088E0700;
    }
L_088E0700:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E0718u);
    ctx.gpr[6] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088E0718u) goto L_088E0718;
    return;
L_088E0718:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E072Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088E072Cu) goto L_088E072C;
    return;
L_088E072C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_088E073C;
L_088E073C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B44;
      }
      goto L_088E0744;
    }
L_088E0744:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E07F0;
      }
      goto L_088E074C;
    }
L_088E074C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 203u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E07F0;
      }
      goto L_088E075C;
    }
L_088E075C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E07F0;
      }
      goto L_088E076C;
    }
L_088E076C:
    ctx.gpr[31] = (0x088E0774u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E0774u) goto L_088E0774;
    return;
L_088E0774:
    ctx.gpr[4] = (50298u << 16u);
    ctx.gpr[18] = (2190u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1548));
      if (branch_taken) {
          goto L_088E0794;
      }
      goto L_088E0788;
    }
L_088E0788:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(2964)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E07A4;
      }
      goto L_088E0794;
    }
L_088E0794:
    ctx.gpr[31] = (0x088E079Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E079Cu) goto L_088E079C;
    return;
L_088E079C:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E07C0;
      }
      goto L_088E07A4;
    }
L_088E07A4:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088E07B8u);
    ctx.gpr[6] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E07B8u) goto L_088E07B8;
    return;
L_088E07B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E07D8;
      }
      goto L_088E07C0;
    }
L_088E07C0:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x088E07D4u);
    ctx.gpr[6] = (0u | 202u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E07D4u) goto L_088E07D4;
    return;
L_088E07D4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    goto L_088E07D8;
L_088E07D8:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E07E8u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x088E07E8u) goto L_088E07E8;
    return;
L_088E07E8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B44;
      }
      goto L_088E07F0;
    }
L_088E07F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(408)));
    ctx.gpr[6] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_088E08CC;
      }
      goto L_088E0800;
    }
L_088E0800:
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E08CC;
      }
      goto L_088E080C;
    }
L_088E080C:
    ctx.gpr[5] = (ctx.gpr[4] & 32768u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E084C;
      }
      goto L_088E0820;
    }
L_088E0820:
    ctx.gpr[6] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (0u | 0u);
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[4] = (0u | 204u);
        goto L_088E0834;
    }
    goto L_088E0834;
L_088E0834:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x088E0844u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E0844u) goto L_088E0844;
    return;
L_088E0844:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    goto L_088E084C;
L_088E084C:
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B24;
      }
      goto L_088E0864;
    }
L_088E0864:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_088E0B24;
      }
      goto L_088E086C;
    }
L_088E086C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[19] = (0u | 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[19] = (0u | 202u);
        goto L_088E087C;
    }
    goto L_088E087C;
L_088E087C:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E0B24;
      }
      goto L_088E0884;
    }
L_088E0884:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B24;
      }
      goto L_088E088C;
    }
L_088E088C:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E08A4u);
    ctx.gpr[6] = (0u | 155u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088E08A4u) goto L_088E08A4;
    return;
L_088E08A4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E08B8u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088E08B8u) goto L_088E08B8;
    return;
L_088E08B8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E0B24;
      }
      goto L_088E08CC;
    }
L_088E08CC:
    ctx.gpr[5] = (ctx.gpr[4] & 4096u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0A3C;
      }
      goto L_088E08E0;
    }
L_088E08E0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (ctx.gpr[5] & 4u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0A3C;
      }
      goto L_088E08F0;
    }
L_088E08F0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E0A3C;
      }
      goto L_088E0900;
    }
L_088E0900:
    ctx.gpr[6] = (ctx.gpr[4] & 8192u);
    ctx.gpr[6] = (0u < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_088E092C;
      }
      goto L_088E0918;
    }
L_088E0918:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    goto L_088E092C;
L_088E092C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0968;
      }
      goto L_088E0934;
    }
L_088E0934:
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (0u | 202u);
      if (branch_taken) {
          goto L_088E0958;
      }
      goto L_088E093C;
    }
L_088E093C:
    ctx.gpr[5] = (8u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (0u | 205u);
        goto L_088E0958;
    }
    goto L_088E0958;
L_088E0958:
    ctx.gpr[31] = (0x088E0960u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E0960u) goto L_088E0960;
    return;
L_088E0960:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E0978;
      }
      goto L_088E0968;
    }
L_088E0968:
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    ctx.gpr[31] = (0x088E0974u);
    ctx.gpr[5] = (0u | 60u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E0974u) goto L_088E0974;
    return;
L_088E0974:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    goto L_088E0978;
L_088E0978:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (16243u << 16u);
      if (branch_taken) {
          goto L_088E09B4;
      }
      goto L_088E0980;
    }
L_088E0980:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E09DC;
      }
      goto L_088E099C;
    }
L_088E099C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E09DC;
      }
      goto L_088E09B4;
    }
L_088E09B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[18] = (2190u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[6] = (0u | 201u);
    { const bool branch_taken = ctx.gpr[19] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1548));
      if (branch_taken) {
          goto L_088E09E4;
      }
      goto L_088E09D4;
    }
L_088E09D4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0A1C;
      }
      goto L_088E09DC;
    }
L_088E09DC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B44;
      }
      goto L_088E09E4;
    }
L_088E09E4:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    { const bool branch_taken = ctx.gpr[7] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E0A1C;
      }
      goto L_088E09F0;
    }
L_088E09F0:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(108)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 4096u);
    ctx.gpr[7] = (0u < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[6] = (0u | 202u);
        goto L_088E0A0C;
    }
    goto L_088E0A0C;
L_088E0A0C:
    ctx.gpr[31] = (0x088E0A14u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088E0A14u) goto L_088E0A14;
    return;
L_088E0A14:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E0A28;
      }
      goto L_088E0A1C;
    }
L_088E0A1C:
    ctx.gpr[31] = (0x088E0A24u);
    ctx.gpr[6] = (0u | 201u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088E0A24u) goto L_088E0A24;
    return;
L_088E0A24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088E0A28;
L_088E0A28:
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E0A34u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 47u, 0x088B43E0u>(ctx, &aot_mem) && ctx.pc == 0x088E0A34u) goto L_088E0A34;
    return;
L_088E0A34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B44;
      }
      goto L_088E0A3C;
    }
L_088E0A3C:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0A64;
      }
      goto L_088E0A44;
    }
L_088E0A44:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[5] = (0u | 201u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0A64;
      }
      goto L_088E0A54;
    }
L_088E0A54:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0A74;
      }
      goto L_088E0A64;
    }
L_088E0A64:
    if (ctx.gpr[19] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(64)));
        goto L_088E0A9C;
    }
    goto L_088E0A6C;
L_088E0A6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B24;
      }
      goto L_088E0A74;
    }
L_088E0A74:
    ctx.gpr[4] = (49408u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x088E0A94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 97u, 0x088D48F8u>(ctx, &aot_mem) && ctx.pc == 0x088E0A94u) goto L_088E0A94;
    return;
L_088E0A94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B44;
      }
      goto L_088E0A9C;
    }
L_088E0A9C:
    ctx.gpr[5] = (0u | 22u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0B24;
      }
      goto L_088E0AA8;
    }
L_088E0AA8:
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(48))))));
    ctx.gpr[4] = (0u | 201u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 202u);
      if (branch_taken) {
          goto L_088E0AC0;
      }
      goto L_088E0AB8;
    }
L_088E0AB8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E0B24;
      }
      goto L_088E0AC0;
    }
L_088E0AC0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088E0B24;
      }
      goto L_088E0AE4;
    }
L_088E0AE4:
    ctx.gpr[31] = (0x088E0AECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0AECu) goto L_088E0AEC;
    return;
L_088E0AEC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x088E0AF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 565u, 0x0899F0E4u>(ctx, &aot_mem) && ctx.pc == 0x088E0AF8u) goto L_088E0AF8;
    return;
L_088E0AF8:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x088E0B18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0B18u) goto L_088E0B18;
    return;
L_088E0B18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x088E0B24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 544u, 0x0899EF90u>(ctx, &aot_mem) && ctx.pc == 0x088E0B24u) goto L_088E0B24;
    return;
L_088E0B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[4] = (ctx.gpr[4] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B3C;
      }
      goto L_088E0B34;
    }
L_088E0B34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0B44;
      }
      goto L_088E0B3C;
    }
L_088E0B3C:
    ctx.gpr[31] = (0x088E0B44u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 97u, 0x088D48F8u>(ctx, &aot_mem) && ctx.pc == 0x088E0B44u) goto L_088E0B44;
    return;
L_088E0B44:
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
L_088E0B64:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-640));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(608), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(612), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(616), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(620), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(624), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(628), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(632), ctx.gpr[31]);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(428)));
    ctx.gpr[18] = (ctx.gpr[6] ^ 2u);
    ctx.gpr[18] = (ctx.gpr[18] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(428)));
    ctx.gpr[19] = (ctx.gpr[6] ^ 2u);
    ctx.gpr[19] = (ctx.gpr[19] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088E0C4C;
      }
      goto L_088E0BC8;
    }
L_088E0BC8:
    ctx.gpr[31] = (0x088E0BD0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E0BD0u) goto L_088E0BD0;
    return;
L_088E0BD0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0C4C;
      }
      goto L_088E0BD8;
    }
L_088E0BD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0C4C;
      }
      goto L_088E0BE8;
    }
L_088E0BE8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_088E0C08;
      }
      goto L_088E0BF8;
    }
L_088E0BF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[6] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E0C0C;
      }
      goto L_088E0C08;
    }
L_088E0C08:
    ctx.gpr[4] = (0u | 1u);
    goto L_088E0C0C;
L_088E0C0C:
    ctx.gpr[18] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E0C20u);
    ctx.gpr[6] = (0u | 5000u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 377u, 0x089A1A5Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0C20u) goto L_088E0C20;
    return;
L_088E0C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[18] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1176), 0u);
      if (branch_taken) {
          goto L_088E0C44;
      }
      goto L_088E0C38;
    }
L_088E0C38:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E0C44u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0C44u) goto L_088E0C44;
    return;
L_088E0C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C9C;
      }
      goto L_088E0C4C;
    }
L_088E0C4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0CB4;
      }
      goto L_088E0C5C;
    }
L_088E0C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(864)));
    ctx.gpr[5] = (0u | 28u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0CA4;
      }
      goto L_088E0C6C;
    }
L_088E0C6C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088E0CC4;
      }
      goto L_088E0C9C;
    }
L_088E0C9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 1u);
      if (branch_taken) {
          goto L_088E0CC4;
      }
      goto L_088E0CA4;
    }
L_088E0CA4:
    ctx.gpr[31] = (0x088E0CACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 347u, 0x089ADDC8u>(ctx, &aot_mem) && ctx.pc == 0x088E0CACu) goto L_088E0CAC;
    return;
L_088E0CAC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C9C;
      }
      goto L_088E0CB4;
    }
L_088E0CB4:
    ctx.gpr[31] = (0x088E0CBCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 347u, 0x089ADDC8u>(ctx, &aot_mem) && ctx.pc == 0x088E0CBCu) goto L_088E0CBC;
    return;
L_088E0CBC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C9C;
      }
      goto L_088E0CC4;
    }
L_088E0CC4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[21] = (0u | 0u);
      if (branch_taken) {
          goto L_088E0CFC;
      }
      goto L_088E0CF4;
    }
L_088E0CF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (0u | 1u);
      if (branch_taken) {
          goto L_088E0CFC;
      }
      goto L_088E0CFC;
    }
L_088E0CFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0D18;
      }
      goto L_088E0D08;
    }
L_088E0D08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0EA0;
      }
      goto L_088E0D18;
    }
L_088E0D18:
    ctx.gpr[31] = (0x088E0D20u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x088E0D20u) goto L_088E0D20;
    return;
L_088E0D20:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0D5C;
      }
      goto L_088E0D28;
    }
L_088E0D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0D5C;
      }
      goto L_088E0D34;
    }
L_088E0D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0D5C;
      }
      goto L_088E0D44;
    }
L_088E0D44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
        goto L_088E0D64;
    }
    goto L_088E0D54;
L_088E0D54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0DE4;
      }
      goto L_088E0D5C;
    }
L_088E0D5C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C9C;
      }
      goto L_088E0D64;
    }
L_088E0D64:
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0DE4;
      }
      goto L_088E0D70;
    }
L_088E0D70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0DE4;
      }
      goto L_088E0D80;
    }
L_088E0D80:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E0D88;
    }
L_088E0D88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E0D98;
    }
L_088E0D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 31u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E0DA8;
    }
L_088E0DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E0DC0;
    }
L_088E0DC0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E0DD0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 706u, 0x089AFF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0DD0u) goto L_088E0DD0;
    return;
L_088E0DD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E0DE4;
    }
L_088E0DE4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E0DEC;
    }
L_088E0DEC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E0DF4;
    }
L_088E0DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E0E18;
    }
L_088E0E18:
    ctx.gpr[31] = (0x088E0E20u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088E0E20u) goto L_088E0E20;
    return;
L_088E0E20:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0E6C;
      }
      goto L_088E0E30;
    }
L_088E0E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] < ctx.gpr[4] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E0E6C;
      }
      goto L_088E0E48;
    }
L_088E0E48:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E0E58u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 706u, 0x089AFF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0E58u) goto L_088E0E58;
    return;
L_088E0E58:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E0E6C;
    }
L_088E0E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E0E7C;
    }
L_088E0E7C:
    ctx.gpr[4] = (0u | 2000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 14u);
    ctx.gpr[31] = (0x088E0E98u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x088E0E98u) goto L_088E0E98;
    return;
L_088E0E98:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E0EA0;
    }
L_088E0EA0:
    ctx.gpr[31] = (0x088E0EA8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E0EA8u) goto L_088E0EA8;
    return;
L_088E0EA8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16358u << 16u);
      if (branch_taken) {
          goto L_088E0ECC;
      }
      goto L_088E0EB0;
    }
L_088E0EB0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E0F44;
      }
      goto L_088E0ECC;
    }
L_088E0ECC:
    ctx.gpr[31] = (0x088E0ED4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E0ED4u) goto L_088E0ED4;
    return;
L_088E0ED4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E12F8;
      }
      goto L_088E0EDC;
    }
L_088E0EDC:
    if (ctx.gpr[19] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
        goto L_088E0EF0;
    }
    goto L_088E0EE4;
L_088E0EE4:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E12F8;
      }
      goto L_088E0EEC;
    }
L_088E0EEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    goto L_088E0EF0;
L_088E0EF0:
    ctx.gpr[5] = (0u | 4u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
        goto L_088E0F10;
    }
    goto L_088E0EFC;
L_088E0EFC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E12F8;
      }
      goto L_088E0F0C;
    }
L_088E0F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    goto L_088E0F10;
L_088E0F10:
    ctx.gpr[5] = (0u | 15u);
    if (ctx.gpr[4] != ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
        goto L_088E0F2C;
    }
    goto L_088E0F1C;
L_088E0F1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E12F8;
      }
      goto L_088E0F28;
    }
L_088E0F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    goto L_088E0F2C;
L_088E0F2C:
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E0F44;
      }
      goto L_088E0F38;
    }
L_088E0F38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E12F8;
      }
      goto L_088E0F44;
    }
L_088E0F44:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E10EC;
      }
      goto L_088E0F4C;
    }
L_088E0F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E10EC;
      }
      goto L_088E0F6C;
    }
L_088E0F6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E10EC;
      }
      goto L_088E0F8C;
    }
L_088E0F8C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
          goto L_088E101C;
      }
      goto L_088E0FB8;
    }
L_088E0FB8:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
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
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x088E1000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x088E1000u) goto L_088E1000;
    return;
L_088E1000:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1010;
      }
      goto L_088E1008;
    }
L_088E1008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 26u);
      if (branch_taken) {
          goto L_088E1014;
      }
      goto L_088E1010;
    }
L_088E1010:
    ctx.gpr[18] = (0u | 23u);
    goto L_088E1014;
L_088E1014:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1098;
      }
      goto L_088E101C;
    }
L_088E101C:
    ctx.gpr[4] = (49024u << 16u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x088E1084u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x088E1084u) goto L_088E1084;
    return;
L_088E1084:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1094;
      }
      goto L_088E108C;
    }
L_088E108C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 28u);
      if (branch_taken) {
          goto L_088E1098;
      }
      goto L_088E1094;
    }
L_088E1094:
    ctx.gpr[18] = (0u | 24u);
    goto L_088E1098;
L_088E1098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E10D0;
      }
      goto L_088E10A8;
    }
L_088E10A8:
    ctx.gpr[31] = (0x088E10B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x088E10B0u) goto L_088E10B0;
    return;
L_088E10B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E10D0;
      }
      goto L_088E10B8;
    }
L_088E10B8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 49u);
    ctx.gpr[31] = (0x088E10D0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088E10D0u) goto L_088E10D0;
    return;
L_088E10D0:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3000u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E10E4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x088E10E4u) goto L_088E10E4;
    return;
L_088E10E4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E10EC;
    }
L_088E10EC:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E119C;
      }
      goto L_088E10F4;
    }
L_088E10F4:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
          goto L_088E119C;
      }
      goto L_088E1120;
    }
L_088E1120:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (0x088E1168u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x088E1168u) goto L_088E1168;
    return;
L_088E1168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1188;
      }
      goto L_088E1178;
    }
L_088E1178:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1190;
      }
      goto L_088E1188;
    }
L_088E1188:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 30u);
      if (branch_taken) {
          goto L_088E1194;
      }
      goto L_088E1190;
    }
L_088E1190:
    ctx.gpr[18] = (0u | 34u);
    goto L_088E1194;
L_088E1194:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E126C;
      }
      goto L_088E119C;
    }
L_088E119C:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1240;
      }
      goto L_088E11A4;
    }
L_088E11A4:
    ctx.gpr[4] = (49024u << 16u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x088E120Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x088E120Cu) goto L_088E120C;
    return;
L_088E120C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E122C;
      }
      goto L_088E121C;
    }
L_088E121C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1234;
      }
      goto L_088E122C;
    }
L_088E122C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 32u);
      if (branch_taken) {
          goto L_088E1238;
      }
      goto L_088E1234;
    }
L_088E1234:
    ctx.gpr[18] = (0u | 36u);
    goto L_088E1238;
L_088E1238:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E126C;
      }
      goto L_088E1240;
    }
L_088E1240:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1260;
      }
      goto L_088E1250;
    }
L_088E1250:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1268;
      }
      goto L_088E1260;
    }
L_088E1260:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 31u);
      if (branch_taken) {
          goto L_088E126C;
      }
      goto L_088E1268;
    }
L_088E1268:
    ctx.gpr[18] = (0u | 35u);
    goto L_088E126C;
L_088E126C:
    ctx.gpr[31] = (0x088E1274u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x088E1274u) goto L_088E1274;
    return;
L_088E1274:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E127C;
    }
L_088E127C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E1294;
    }
L_088E1294:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E12ACu);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088E12ACu) goto L_088E12AC;
    return;
L_088E12AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1000));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E12D8;
    }
L_088E12D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 49u);
    ctx.gpr[31] = (0x088E12F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088E12F0u) goto L_088E12F0;
    return;
L_088E12F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E12F8;
    }
L_088E12F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 15u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1318;
      }
      goto L_088E1308;
    }
L_088E1308:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 12u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1560;
      }
      goto L_088E1318;
    }
L_088E1318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1384;
      }
      goto L_088E1324;
    }
L_088E1324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (ctx.gpr[17] == ctx.gpr[4]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
        goto L_088E1344;
    }
    goto L_088E1330;
L_088E1330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1384;
      }
      goto L_088E1340;
    }
L_088E1340:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    goto L_088E1344;
L_088E1344:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1384;
      }
      goto L_088E1358;
    }
L_088E1358:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E1360;
    }
L_088E1360:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E1370u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 706u, 0x089AFF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1370u) goto L_088E1370;
    return;
L_088E1370:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(3000));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E1384;
    }
L_088E1384:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E138C;
    }
L_088E138C:
    ctx.gpr[31] = (0x088E1394u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x088E1394u) goto L_088E1394;
    return;
L_088E1394:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E139C;
    }
L_088E139C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E13AC;
    }
L_088E13AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E14B0;
      }
      goto L_088E13D0;
    }
L_088E13D0:
    ctx.gpr[31] = (0x088E13D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E13D8u) goto L_088E13D8;
    return;
L_088E13D8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E14B0;
      }
      goto L_088E13E0;
    }
L_088E13E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E14B0;
      }
      goto L_088E13F8;
    }
L_088E13F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x088E140Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x088E140Cu) goto L_088E140C;
    return;
L_088E140C:
    ctx.gpr[31] = (0x088E1414u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x088E1414u) goto L_088E1414;
    return;
L_088E1414:
    ctx.gpr[7] = (16640u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E142Cu);
    ctx.gpr[6] = (0u | 44u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088E142Cu) goto L_088E142C;
    return;
L_088E142C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2000));
    { const bool branch_taken = ctx.gpr[19] != 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E144C;
    }
L_088E144C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(484), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(236)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[6]);
    ctx.gpr[31] = (0x088E1490u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 338u, 0x0899E180u>(ctx, &aot_mem) && ctx.pc == 0x088E1490u) goto L_088E1490;
    return;
L_088E1490:
    ctx.gpr[6] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 4u);
    ctx.gpr[31] = (0x088E14A8u);
    ctx.gpr[8] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 674u, 0x088DAF3Cu>(ctx, &aot_mem) && ctx.pc == 0x088E14A8u) goto L_088E14A8;
    return;
L_088E14A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E14B0;
    }
L_088E14B0:
    ctx.gpr[31] = (0x088E14B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E14B8u) goto L_088E14B8;
    return;
L_088E14B8:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1510;
      }
      goto L_088E14C0;
    }
L_088E14C0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
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
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
        goto L_088E1500;
    }
    goto L_088E14EC;
L_088E14EC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E1500;
    }
L_088E1500:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E1510;
    }
L_088E1510:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
        goto L_088E1550;
    }
    goto L_088E153C;
L_088E153C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E1550;
    }
L_088E1550:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1256)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E1560;
    }
L_088E1560:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(840)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] < ctx.gpr[5] ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E1578;
    }
L_088E1578:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E16DC;
      }
      goto L_088E1580;
    }
L_088E1580:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1598;
      }
      goto L_088E1588;
    }
L_088E1588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E16DC;
      }
      goto L_088E1598;
    }
L_088E1598:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E165C;
      }
      goto L_088E15B0;
    }
L_088E15B0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E165C;
      }
      goto L_088E15D4;
    }
L_088E15D4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E165C;
      }
      goto L_088E15E4;
    }
L_088E15E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E165C;
      }
      goto L_088E15F4;
    }
L_088E15F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1376)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E165C;
      }
      goto L_088E1604;
    }
L_088E1604:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E165C;
      }
      goto L_088E1628;
    }
L_088E1628:
    ctx.gpr[31] = (0x088E1630u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 795u, 0x0899FF58u>(ctx, &aot_mem) && ctx.pc == 0x088E1630u) goto L_088E1630;
    return;
L_088E1630:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E163Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0053_entry, 53u, 224u, 0x088D915Cu>(ctx, &aot_mem) && ctx.pc == 0x088E163Cu) goto L_088E163C;
    return;
L_088E163C:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1248)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E1674;
      }
      goto L_088E165C;
    }
L_088E165C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E1668u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 667u, 0x089A7EE8u>(ctx, &aot_mem) && ctx.pc == 0x088E1668u) goto L_088E1668;
    return;
L_088E1668:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E1674u);
    ctx.gpr[5] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1674u) goto L_088E1674;
    return;
L_088E1674:
    ctx.gpr[31] = (0x088E167Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088E167Cu) goto L_088E167C;
    return;
L_088E167C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21836)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21832)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E1694u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x088E1694u) goto L_088E1694;
    return;
L_088E1694:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21844)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(21840)));
    ctx.gpr[8] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[9] = (ctx.gpr[8] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[9] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[8] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E16DC;
    }
L_088E16DC:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E18F4;
      }
      goto L_088E16E4;
    }
L_088E16E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1704;
      }
      goto L_088E16F4;
    }
L_088E16F4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E18F4;
      }
      goto L_088E1704;
    }
L_088E1704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E18D0;
      }
      goto L_088E1714;
    }
L_088E1714:
    ctx.gpr[31] = (0x088E171Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E171Cu) goto L_088E171C;
    return;
L_088E171C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1748;
      }
      goto L_088E1724;
    }
L_088E1724:
    ctx.gpr[31] = (0x088E172Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E172Cu) goto L_088E172C;
    return;
L_088E172C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E18D0;
      }
      goto L_088E1734;
    }
L_088E1734:
    ctx.gpr[31] = (0x088E173Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088E173Cu) goto L_088E173C;
    return;
L_088E173C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E18D0;
      }
      goto L_088E1748;
    }
L_088E1748:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(512), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(516), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(288), ctx.gpr[6]);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(292), ctx.gpr[6]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[7]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(544), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(548), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(296), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(300), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(240)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(244)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(284), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E1864;
      }
      goto L_088E1838;
    }
L_088E1838:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16320u << 16u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E1898;
      }
      goto L_088E1864;
    }
L_088E1864:
    ctx.gpr[4] = (0u | 500u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088E1880u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1880u) goto L_088E1880;
    return;
L_088E1880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E18C8;
      }
      goto L_088E1898;
    }
L_088E1898:
    ctx.gpr[4] = (0u | 1000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088E18B4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x088E18B4u) goto L_088E18B4;
    return;
L_088E18B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    goto L_088E18C8;
L_088E18C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E18D0;
    }
L_088E18D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E18E0;
    }
L_088E18E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E18ECu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 667u, 0x089A7EE8u>(ctx, &aot_mem) && ctx.pc == 0x088E18ECu) goto L_088E18EC;
    return;
L_088E18EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E18F4;
    }
L_088E18F4:
    ctx.gpr[31] = (0x088E18FCu);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088E18FCu) goto L_088E18FC;
    return;
L_088E18FC:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E1BB0;
      }
      goto L_088E1904;
    }
L_088E1904:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 8u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
        goto L_088E1928;
    }
    goto L_088E1914;
L_088E1914:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1BB0;
      }
      goto L_088E1924;
    }
L_088E1924:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    goto L_088E1928;
L_088E1928:
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E1BB0;
      }
      goto L_088E1930;
    }
L_088E1930:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1B9C;
      }
      goto L_088E1940;
    }
L_088E1940:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[31] = (0x088E195Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    if (rt.invoke_chained_direct<&recomp_unit_0019_entry, 19u, 138u, 0x08850D9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E195Cu) goto L_088E195C;
    return;
L_088E195C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1B9C;
      }
      goto L_088E1964;
    }
L_088E1964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1B9C;
      }
      goto L_088E1974;
    }
L_088E1974:
    ctx.gpr[19] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(600)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[20] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_088E19D8;
      }
      goto L_088E198C;
    }
L_088E198C:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3160)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E19AC;
      }
      goto L_088E19A0;
    }
L_088E19A0:
    ctx.gpr[19] = (ctx.gpr[4] << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 16u));
      if (branch_taken) {
          goto L_088E19C8;
      }
      goto L_088E19AC;
    }
L_088E19AC:
    ctx.gpr[5] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (ctx.gpr[18] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(3160)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_088E19C8;
      }
      goto L_088E19C0;
    }
L_088E19C0:
    ctx.gpr[20] = (ctx.gpr[4] << 16u);
    ctx.gpr[20] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[20]) >> 16u));
    goto L_088E19C8;
L_088E19C8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 6 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E198C;
      }
      goto L_088E19D8;
    }
L_088E19D8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1312));
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(576), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(580), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(352), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(356), ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(352)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(356)));
    ctx.gpr[7] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[7]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088E1A44u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 47u, 0x088D44C8u>(ctx, &aot_mem) && ctx.pc == 0x088E1A44u) goto L_088E1A44;
    return;
L_088E1A44:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(324)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(592), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(596), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(360), ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(364), ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(360)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(364)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), ctx.gpr[5]);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(348), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(336)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(340)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (0u | 1u);
        goto L_088E1AC0;
    }
    goto L_088E1AC0;
L_088E1AC0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[19]) <= 0;
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
      if (branch_taken) {
          goto L_088E1B5C;
      }
      goto L_088E1AC8;
    }
L_088E1AC8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1B5C;
      }
      goto L_088E1AD0;
    }
L_088E1AD0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[20]) <= 0;
    // nop
      if (branch_taken) {
          goto L_088E1B0C;
      }
      goto L_088E1AD8;
    }
L_088E1AD8:
    ctx.gpr[4] = (0u | 300u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088E1AF4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1AF4u) goto L_088E1AF4;
    return;
L_088E1AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E1B94;
      }
      goto L_088E1B0C;
    }
L_088E1B0C:
    ctx.gpr[31] = (0x088E1B14u);
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(600)));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x088E1B14u) goto L_088E1B14;
    return;
L_088E1B14:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[2];
    // nop
      if (branch_taken) {
          goto L_088E1B94;
      }
      goto L_088E1B1C;
    }
L_088E1B1C:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E1B28u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 289u, 0x08945414u>(ctx, &aot_mem) && ctx.pc == 0x088E1B28u) goto L_088E1B28;
    return;
L_088E1B28:
    ctx.gpr[4] = (0u | 500u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088E1B44u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1B44u) goto L_088E1B44;
    return;
L_088E1B44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E1B94;
      }
      goto L_088E1B5C;
    }
L_088E1B5C:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1B94;
      }
      goto L_088E1B64;
    }
L_088E1B64:
    ctx.gpr[4] = (0u | 300u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[4]);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[31] = (0x088E1B80u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0109_entry, 109u, 537u, 0x089BA35Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1B80u) goto L_088E1B80;
    return;
L_088E1B80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(840), ctx.gpr[4]);
    goto L_088E1B94;
L_088E1B94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E1B9C;
    }
L_088E1B9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E1BA8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 667u, 0x089A7EE8u>(ctx, &aot_mem) && ctx.pc == 0x088E1BA8u) goto L_088E1BA8;
    return;
L_088E1BA8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E1BB0;
    }
L_088E1BB0:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C4C;
      }
      goto L_088E1BB8;
    }
L_088E1BB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1380)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(37))))));
    ctx.gpr[6] = (0u | 100u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(36))))));
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C4C;
      }
      goto L_088E1BDC;
    }
L_088E1BDC:
    ctx.gpr[31] = (0x088E1BE4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E1BE4u) goto L_088E1BE4;
    return;
L_088E1BE4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C08;
      }
      goto L_088E1BEC;
    }
L_088E1BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C08;
      }
      goto L_088E1BF8;
    }
L_088E1BF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1C34;
      }
      goto L_088E1C08;
    }
L_088E1C08:
    ctx.gpr[31] = (0x088E1C10u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E1C10u) goto L_088E1C10;
    return;
L_088E1C10:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C4C;
      }
      goto L_088E1C18;
    }
L_088E1C18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(2932)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E1C4C;
      }
      goto L_088E1C34;
    }
L_088E1C34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E1C44u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0106_entry, 106u, 706u, 0x089AFF0Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1C44u) goto L_088E1C44;
    return;
L_088E1C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E1C4C;
    }
L_088E1C4C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E1C58u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 667u, 0x089A7EE8u>(ctx, &aot_mem) && ctx.pc == 0x088E1C58u) goto L_088E1C58;
    return;
L_088E1C58:
    { const bool branch_taken = ctx.gpr[18] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C6C;
      }
      goto L_088E1C60;
    }
L_088E1C60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E1C6Cu);
    ctx.gpr[5] = (0u | 156u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E1C6Cu) goto L_088E1C6C;
    return;
L_088E1C6C:
    ctx.gpr[31] = (0x088E1C74u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E1C74u) goto L_088E1C74;
    return;
L_088E1C74:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1C9C;
      }
      goto L_088E1C7C;
    }
L_088E1C7C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x088E1C90u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 77u, 0x089A0598u>(ctx, &aot_mem) && ctx.pc == 0x088E1C90u) goto L_088E1C90;
    return;
L_088E1C90:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x088E1C9Cu);
    ctx.gpr[5] = (0u | 800u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 787u, 0x0899FEE8u>(ctx, &aot_mem) && ctx.pc == 0x088E1C9Cu) goto L_088E1C9C;
    return;
L_088E1C9C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(608)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(612)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(616)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(620)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(624)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(628)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(632)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(640));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E1CC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-1008));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(940), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(960), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(964), ctx.gpr[17]);
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[16] = (0u | 42u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(944), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(948), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(952), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(956), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(968), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(972), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(976), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(980), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(984), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(988), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(992), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(996), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[16];
    ctx.gpr[18] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_088E1D28;
      }
      goto L_088E1D18;
    }
L_088E1D18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[21] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[21];
    // nop
      if (branch_taken) {
          goto L_088E1D50;
      }
      goto L_088E1D28;
    }
L_088E1D28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1412)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1D44;
      }
      goto L_088E1D34;
    }
L_088E1D34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 496u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1D48;
      }
      goto L_088E1D44;
    }
L_088E1D44:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1412), ctx.gpr[18]);
    goto L_088E1D48;
L_088E1D48:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2C3C;
      }
      goto L_088E1D50;
    }
L_088E1D50:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[22] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088E1D74;
      }
      goto L_088E1D60;
    }
L_088E1D60:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1296)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1296)));
        goto L_088E1D7C;
    }
    goto L_088E1D6C;
L_088E1D6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1DBC;
      }
      goto L_088E1D74;
    }
L_088E1D74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2C3C;
      }
      goto L_088E1D7C;
    }
L_088E1D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E1DBC;
      }
      goto L_088E1D98;
    }
L_088E1D98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1296)));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E1E08;
      }
      goto L_088E1DAC;
    }
L_088E1DAC:
    ctx.gpr[31] = (0x088E1DB4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E1DB4u) goto L_088E1DB4;
    return;
L_088E1DB4:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E1E00;
      }
      goto L_088E1DBC;
    }
L_088E1DBC:
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(916), ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(920), ctx.gpr[5]);
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] - vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (16704u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E1E1C;
      }
      goto L_088E1DF8;
    }
L_088E1DF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
      if (branch_taken) {
          goto L_088E1E10;
      }
      goto L_088E1E00;
    }
L_088E1E00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2C3C;
      }
      goto L_088E1E08;
    }
L_088E1E08:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2C3C;
      }
      goto L_088E1E10;
    }
L_088E1E10:
    ctx.gpr[5] = (0u | 197u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E2960;
      }
      goto L_088E1E1C;
    }
L_088E1E1C:
    ctx.gpr[31] = (0x088E1E24u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E1E24u) goto L_088E1E24;
    return;
L_088E1E24:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2960;
      }
      goto L_088E1E2C;
    }
L_088E1E2C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x088E1E38u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[4]));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088E1E38u) goto L_088E1E38;
    return;
L_088E1E38:
    ctx.gpr[30] = (ctx.gpr[2] & 65535u);
    ctx.gpr[4] = (0u | 39u);
    ctx.gpr[30] = (ctx.gpr[30] & 3u);
    ctx.gpr[31] = (0x088E1E4Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x088E1E4Cu) goto L_088E1E4C;
    return;
L_088E1E4C:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (0u | 197u);
    ctx.gpr[4] = (16256u << 16u);
    ctx.gpr[21] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[23] = (ctx.gpr[18] + static_cast<std::uint32_t>(32));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[2];
    ctx.gpr[22] = (2229u << 16u);
      if (branch_taken) {
          goto L_088E1F0C;
      }
      goto L_088E1E74;
    }
L_088E1E74:
    ctx.gpr[4] = (17274u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (17658u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[16];
    ctx.gpr[4] = (17056u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_088E1ECC;
    }
    goto L_088E1ECC;
L_088E1ECC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (0u | 40000u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[19] = (ctx.gpr[5] & 255u);
    { const std::int32_t dividend = static_cast<std::int32_t>(ctx.gpr[4]); const std::int32_t divisor = static_cast<std::int32_t>(ctx.gpr[19]); if (divisor == 0) { ctx.lo = dividend >= 0 ? 0xFFFFFFFFu : 1u; ctx.hi = static_cast<std::uint32_t>(dividend); } else if (dividend == static_cast<std::int32_t>(0x80000000u) && divisor == -1) { ctx.lo = 0x80000000u; ctx.hi = 0u; } else { ctx.lo = static_cast<std::uint32_t>(dividend / divisor); ctx.hi = static_cast<std::uint32_t>(dividend % divisor); } }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(932), ctx.gpr[20]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.lo);
    ctx.gpr[31] = (0x088E1EF4u);
    ctx.gpr[20] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x088E1EF4u) goto L_088E1EF4;
    return;
L_088E1EF4:
    ctx.gpr[5] = (ctx.gpr[20] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E1F08u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 645u, 0x08A96C48u>(ctx, &aot_mem) && ctx.pc == 0x088E1F08u) goto L_088E1F08;
    return;
L_088E1F08:
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(932)));
    goto L_088E1F0C;
L_088E1F0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[31] = (0x088E1F40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 338u, 0x0899E180u>(ctx, &aot_mem) && ctx.pc == 0x088E1F40u) goto L_088E1F40;
    return;
L_088E1F40:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[16];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
      if (branch_taken) {
          goto L_088E2020;
      }
      goto L_088E1F94;
    }
L_088E1F94:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 40u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), ctx.gpr[5]);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
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
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088E1FEC;
      }
      goto L_088E1FE4;
    }
L_088E1FE4:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E1FF0;
      }
      goto L_088E1FEC;
    }
L_088E1FEC:
    ctx.gpr[19] = (0u | 2u);
    goto L_088E1FF0;
L_088E1FF0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2018;
      }
      goto L_088E2000;
    }
L_088E2000:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 165u);
    ctx.gpr[31] = (0x088E2018u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2018u) goto L_088E2018;
    return;
L_088E2018:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E271C;
      }
      goto L_088E2020;
    }
L_088E2020:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[20] = (ctx.gpr[18] + static_cast<std::uint32_t>(16));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E271C;
      }
      goto L_088E2048;
    }
L_088E2048:
    ctx.gpr[5] = (16253u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[5] = (ctx.gpr[5] | 28836u);
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    if (ctx.fpu_condition()) {
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]) ^ 0x80000000u);
        goto L_088E2068;
    }
    goto L_088E2068;
L_088E2068:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E217C;
      }
      goto L_088E2078;
    }
L_088E2078:
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E2094;
      }
      goto L_088E2088;
    }
L_088E2088:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E209C;
      }
      goto L_088E2094;
    }
L_088E2094:
    ctx.gpr[4] = (0u | 3u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E209C;
L_088E209C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (16217u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E271C;
      }
      goto L_088E20F8;
    }
L_088E20F8:
    ctx.gpr[4] = (0u | 40u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), ctx.gpr[4]);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088E2148;
      }
      goto L_088E2140;
    }
L_088E2140:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E214C;
      }
      goto L_088E2148;
    }
L_088E2148:
    ctx.gpr[19] = (0u | 2u);
    goto L_088E214C;
L_088E214C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2174;
      }
      goto L_088E215C;
    }
L_088E215C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 165u);
    ctx.gpr[31] = (0x088E2174u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2174u) goto L_088E2174;
    return;
L_088E2174:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E271C;
      }
      goto L_088E217C;
    }
L_088E217C:
    ctx.gpr[5] = (15820u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_088E21A4;
      }
      goto L_088E2198;
    }
L_088E2198:
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[30]) < 2 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
        goto L_088E21B0;
    }
    goto L_088E21A4;
L_088E21A4:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E269C;
      }
      goto L_088E21AC;
    }
L_088E21AC:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    goto L_088E21B0;
L_088E21B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[7] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(20)));
    ctx.gpr[9] = (ctx.gpr[6] + ctx.gpr[9]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[8]));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(32));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(0)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[7] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[6] = (48716u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(32));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[6] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_088E228C;
      }
      goto L_088E2224;
    }
L_088E2224:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(936), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088E23B0;
      }
      goto L_088E228C;
    }
L_088E228C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E235C;
      }
      goto L_088E22A0;
    }
L_088E22A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(932), ctx.gpr[16]);
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088E22BCu);
    ctx.gpr[5] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 48u, 0x088D44E0u>(ctx, &aot_mem) && ctx.pc == 0x088E22BCu) goto L_088E22BC;
    return;
L_088E22BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088E22CCu);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 46u, 0x088D44B0u>(ctx, &aot_mem) && ctx.pc == 0x088E22CCu) goto L_088E22CC;
    return;
L_088E22CC:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(256));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x088E22E0u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0052_entry, 52u, 48u, 0x088D44E0u>(ctx, &aot_mem) && ctx.pc == 0x088E22E0u) goto L_088E22E0;
    return;
L_088E22E0:
    { const std::uint32_t vfpu_address = ctx.gpr[22] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    ctx.set_fpu_condition((ctx.fpr[14] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(932)));
      if (branch_taken) {
          goto L_088E2354;
      }
      goto L_088E2318;
    }
L_088E2318:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    ctx.gpr[5] = (16128u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(56)));
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    ctx.gpr[5] = (16000u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[15] + ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = ctx.fpr[13] - ctx.fpr[14];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[14];
    goto L_088E2354;
L_088E2354:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(936), ctx.gpr[17]);
      if (branch_taken) {
          goto L_088E23B0;
      }
      goto L_088E235C;
    }
L_088E235C:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(936), ctx.gpr[17]);
    goto L_088E23B0;
L_088E23B0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(932), ctx.gpr[16]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = ctx.fpr[13] - ctx.fpr[15];
    ctx.fpr[20] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[31] = (0x088E23E4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088E23E4u) goto L_088E23E4;
    return;
L_088E23E4:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[31] = (0x088E23F0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 518u, 0x08AF67ECu>(ctx, &aot_mem) && ctx.pc == 0x088E23F0u) goto L_088E23F0;
    return;
L_088E23F0:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21852)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21848)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E2408u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x088E2408u) goto L_088E2408;
    return;
L_088E2408:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21856)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E2420u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 426u, 0x08AF6118u>(ctx, &aot_mem) && ctx.pc == 0x088E2420u) goto L_088E2420;
    return;
L_088E2420:
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E2430u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088E2430u) goto L_088E2430;
    return;
L_088E2430:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E2444u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x088E2444u) goto L_088E2444;
    return;
L_088E2444:
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E2450u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 551u, 0x08AF6A14u>(ctx, &aot_mem) && ctx.pc == 0x088E2450u) goto L_088E2450;
    return;
L_088E2450:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (15948u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(932)));
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[5];
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(936)));
      if (branch_taken) {
          goto L_088E24C8;
      }
      goto L_088E24BC;
    }
L_088E24BC:
    ctx.gpr[5] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E24E4;
      }
      goto L_088E24C8;
    }
L_088E24C8:
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[14] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E24F0;
      }
      goto L_088E24E4;
    }
L_088E24E4:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E24F0;
L_088E24F0:
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
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(2));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E250C;
      }
      goto L_088E2508;
    }
L_088E2508:
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-4));
    goto L_088E250C;
L_088E250C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2670;
      }
      goto L_088E2528;
    }
L_088E2528:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(912), ctx.gpr[16]);
      if (branch_taken) {
          goto L_088E2670;
      }
      goto L_088E2534;
    }
L_088E2534:
    ctx.gpr[31] = (0x088E253Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 476u, 0x0880B82Cu>(ctx, &aot_mem) && ctx.pc == 0x088E253Cu) goto L_088E253C;
    return;
L_088E253C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(912)));
      if (branch_taken) {
          goto L_088E2670;
      }
      goto L_088E2548;
    }
L_088E2548:
    ctx.gpr[31] = (0x088E2550u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x088E2550u) goto L_088E2550;
    return;
L_088E2550:
    ctx.gpr[4] = (ctx.gpr[2] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] & 1u);
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
      if (branch_taken) {
          goto L_088E25D0;
      }
      goto L_088E2568;
    }
L_088E2568:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(352));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(320));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2630;
      }
      goto L_088E25D0;
    }
L_088E25D0:
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[5]);
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(400));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[6]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 3u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<1u, 3u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 3u; ++i) vfpu_d[i] = vfpu_s[i] + vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 3u>(vfpu_d); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(384));
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
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088E2630;
L_088E2630:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(304)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(308)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(312)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(0)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(4)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x088E2670u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 280u, 0x08A0E1E4u>(ctx, &aot_mem) && ctx.pc == 0x088E2670u) goto L_088E2670;
    return;
L_088E2670:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(916)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(920)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E271C;
      }
      goto L_088E269C;
    }
L_088E269C:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (0u | 40u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(924), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(928), ctx.gpr[5]);
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
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
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[19] == ctx.gpr[4];
    ctx.gpr[4] = (0u | 3u);
      if (branch_taken) {
          goto L_088E26F0;
      }
      goto L_088E26E8;
    }
L_088E26E8:
    { const bool branch_taken = ctx.gpr[19] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_088E26F4;
      }
      goto L_088E26F0;
    }
L_088E26F0:
    ctx.gpr[19] = (0u | 2u);
    goto L_088E26F4;
L_088E26F4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29196)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E271C;
      }
      goto L_088E2704;
    }
L_088E2704:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[6] = (0u | 165u);
    ctx.gpr[31] = (0x088E271Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 101u, 0x0886476Cu>(ctx, &aot_mem) && ctx.pc == 0x088E271Cu) goto L_088E271C;
    return;
L_088E271C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 4u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[19] & 255u);
      if (branch_taken) {
          goto L_088E2790;
      }
      goto L_088E2738;
    }
L_088E2738:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2790;
      }
      goto L_088E2748;
    }
L_088E2748:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[6] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E2778;
      }
      goto L_088E2758;
    }
L_088E2758:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E2770u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x088E2770u) goto L_088E2770;
    return;
L_088E2770:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2790;
      }
      goto L_088E2778;
    }
L_088E2778:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E2790u);
    ctx.gpr[8] = (0u | 1000u);
    if (rt.invoke_chained_direct<&recomp_unit_0163_entry, 163u, 542u, 0x08A92740u>(ctx, &aot_mem) && ctx.pc == 0x088E2790u) goto L_088E2790;
    return;
L_088E2790:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 3 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
        goto L_088E27D4;
    }
    goto L_088E27A0;
L_088E27A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2838;
      }
      goto L_088E27B0;
    }
L_088E27B0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(928)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 6u);
    ctx.gpr[31] = (0x088E27CCu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088E27CCu) goto L_088E27CC;
    return;
L_088E27CC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2854;
      }
      goto L_088E27D4;
    }
L_088E27D4:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2814;
      }
      goto L_088E27E0;
    }
L_088E27E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 5 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2838;
      }
      goto L_088E27F0;
    }
L_088E27F0:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(928)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 3u);
    ctx.gpr[31] = (0x088E280Cu);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088E280Cu) goto L_088E280C;
    return;
L_088E280C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2854;
      }
      goto L_088E2814;
    }
L_088E2814:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(928)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[31] = (0x088E2830u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2830u) goto L_088E2830;
    return;
L_088E2830:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2854;
      }
      goto L_088E2838;
    }
L_088E2838:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(928)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x088E2854u);
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2854u) goto L_088E2854;
    return;
L_088E2854:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 54u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
        goto L_088E2878;
    }
    goto L_088E2864;
L_088E2864:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E2898;
      }
      goto L_088E2874;
    }
L_088E2874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    goto L_088E2878;
L_088E2878:
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2898;
      }
      goto L_088E2888;
    }
L_088E2888:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1412)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2898;
      }
      goto L_088E2894;
    }
L_088E2894:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1412), ctx.gpr[18]);
    goto L_088E2898;
L_088E2898:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(924)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E28BC;
      }
      goto L_088E28A8;
    }
L_088E28A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (256u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E28D0;
      }
      goto L_088E28BC;
    }
L_088E28BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    goto L_088E28D0;
L_088E28D0:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (17583u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[28] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_088E2914;
    }
    goto L_088E2914;
L_088E2914:
    ctx.gpr[5] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (0x088E294Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x088E294Cu) goto L_088E294C;
    return;
L_088E294C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E2958u);
    ctx.gpr[5] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2958u) goto L_088E2958;
    return;
L_088E2958:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2BF4;
      }
      goto L_088E2960;
    }
L_088E2960:
    ctx.gpr[4] = (48972u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16576u << 16u);
      if (branch_taken) {
          goto L_088E299C;
      }
      goto L_088E2980;
    }
L_088E2980:
    ctx.gpr[4] = (16448u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
        goto L_088E29D8;
    }
    goto L_088E2998;
L_088E2998:
    ctx.gpr[4] = (16576u << 16u);
    goto L_088E299C;
L_088E299C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E2BF4;
      }
      goto L_088E29B0;
    }
L_088E29B0:
    ctx.gpr[31] = (0x088E29B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E29B8u) goto L_088E29B8;
    return;
L_088E29B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (16672u << 16u);
      if (branch_taken) {
          goto L_088E29D4;
      }
      goto L_088E29C0;
    }
L_088E29C0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E2BF4;
      }
      goto L_088E29D4;
    }
L_088E29D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    goto L_088E29D8;
L_088E29D8:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(116)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(488));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(488), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(492), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x088E2A08u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 338u, 0x0899E180u>(ctx, &aot_mem) && ctx.pc == 0x088E2A08u) goto L_088E2A08;
    return;
L_088E2A08:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E2A14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E2A14u) goto L_088E2A14;
    return;
L_088E2A14:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[19] = (0u | 197u);
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (ctx.gpr[20] & 255u);
      if (branch_taken) {
          goto L_088E2A5C;
      }
      goto L_088E2A28;
    }
L_088E2A28:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E2A5C;
      }
      goto L_088E2A34;
    }
L_088E2A34:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (17174u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 39u);
    ctx.gpr[31] = (0x088E2A54u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2A54u) goto L_088E2A54;
    return;
L_088E2A54:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2A7C;
      }
      goto L_088E2A5C;
    }
L_088E2A5C:
    ctx.gpr[8] = (ctx.gpr[4] | 0u);
    ctx.gpr[9] = (16880u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[9]);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (0u | 39u);
    ctx.gpr[31] = (0x088E2A7Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0054_entry, 54u, 575u, 0x088DEE0Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2A7Cu) goto L_088E2A7C;
    return;
L_088E2A7C:
    ctx.gpr[6] = (ctx.gpr[20] + static_cast<std::uint32_t>(25));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 1000u);
    ctx.gpr[31] = (0x088E2A90u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 98u, 0x089A0734u>(ctx, &aot_mem) && ctx.pc == 0x088E2A90u) goto L_088E2A90;
    return;
L_088E2A90:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[4] == ctx.gpr[16]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1412)));
        goto L_088E2AB8;
    }
    goto L_088E2A9C;
L_088E2A9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    if (ctx.gpr[4] == ctx.gpr[21]) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1412)));
        goto L_088E2AB8;
    }
    goto L_088E2AA8;
L_088E2AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    // nop
      if (branch_taken) {
          goto L_088E2B04;
      }
      goto L_088E2AB4;
    }
L_088E2AB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1412)));
    goto L_088E2AB8;
L_088E2AB8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2B04;
      }
      goto L_088E2AC0;
    }
L_088E2AC0:
    ctx.gpr[31] = (0x088E2AC8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E2AC8u) goto L_088E2AC8;
    return;
L_088E2AC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2B00;
      }
      goto L_088E2AD0;
    }
L_088E2AD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2B00;
      }
      goto L_088E2AE0;
    }
L_088E2AE0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E2B00;
      }
      goto L_088E2AEC;
    }
L_088E2AEC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(312)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E2B04;
      }
      goto L_088E2B00;
    }
L_088E2B00:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1412), ctx.gpr[18]);
    goto L_088E2B04;
L_088E2B04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (65280u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(88))))));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[19];
    // nop
      if (branch_taken) {
          goto L_088E2B64;
      }
      goto L_088E2B24;
    }
L_088E2B24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2B64;
      }
      goto L_088E2B34;
    }
L_088E2B34:
    ctx.gpr[4] = (16192u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vscl_ct<0u, 0u, 28u, 3u>();
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(496));
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
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_088E2B64;
L_088E2B64:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (17583u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088E2BB0;
    }
    goto L_088E2BB0;
L_088E2BB0:
    ctx.gpr[5] = (49776u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(464));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(464)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(468)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(472)));
    ctx.gpr[31] = (0x088E2BE8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 270u, 0x08A0E0E8u>(ctx, &aot_mem) && ctx.pc == 0x088E2BE8u) goto L_088E2BE8;
    return;
L_088E2BE8:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x088E2BF4u);
    ctx.gpr[5] = (0u | 139u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 497u, 0x088B6C9Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2BF4u) goto L_088E2BF4;
    return;
L_088E2BF4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2C3C;
      }
      goto L_088E2C04;
    }
L_088E2C04:
    ctx.gpr[31] = (0x088E2C0Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 837u, 0x089A380Cu>(ctx, &aot_mem) && ctx.pc == 0x088E2C0Cu) goto L_088E2C0C;
    return;
L_088E2C0C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2C3C;
      }
      goto L_088E2C14;
    }
L_088E2C14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2C3C;
      }
      goto L_088E2C20;
    }
L_088E2C20:
    ctx.gpr[31] = (0x088E2C28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E2C28u) goto L_088E2C28;
    return;
L_088E2C28:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2C3C;
      }
      goto L_088E2C30;
    }
L_088E2C30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(504)));
    ctx.gpr[31] = (0x088E2C3Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0037_entry, 37u, 409u, 0x08899964u>(ctx, &aot_mem) && ctx.pc == 0x088E2C3Cu) goto L_088E2C3C;
    return;
L_088E2C3C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(940)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(944)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(948)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(952)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(956)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(960)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(964)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(968)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(972)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(976)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(980)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(984)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(988)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(992)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(996)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1008));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E2C80:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    ctx.gpr[18] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] & 2048u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2CF4;
      }
      goto L_088E2CD8;
    }
L_088E2CD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_088E2CFC;
      }
      goto L_088E2CEC;
    }
L_088E2CEC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E39D0;
      }
      goto L_088E2CF4;
    }
L_088E2CF4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E2CFC;
    }
L_088E2CFC:
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[30] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[31] = (0x088E2D20u);
    ctx.gpr[5] = (0u | 185u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E2D20u) goto L_088E2D20;
    return;
L_088E2D20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E2D30u);
    ctx.gpr[5] = (0u | 186u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E2D30u) goto L_088E2D30;
    return;
L_088E2D30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E2D40u);
    ctx.gpr[5] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E2D40u) goto L_088E2D40;
    return;
L_088E2D40:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E2D4Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E2D4Cu) goto L_088E2D4C;
    return;
L_088E2D4C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    { const bool branch_taken = ctx.gpr[2] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E2D78;
      }
      goto L_088E2D58;
    }
L_088E2D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E2D64u);
    ctx.gpr[5] = (0u | 188u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E2D64u) goto L_088E2D64;
    return;
L_088E2D64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E2D74u);
    ctx.gpr[5] = (0u | 187u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E2D74u) goto L_088E2D74;
    return;
L_088E2D74:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_088E2D78;
L_088E2D78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E2D84u);
    ctx.gpr[5] = (0u | 189u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E2D84u) goto L_088E2D84;
    return;
L_088E2D84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E2D94u);
    ctx.gpr[5] = (0u | 197u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E2D94u) goto L_088E2D94;
    return;
L_088E2D94:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2DB0;
      }
      goto L_088E2DA0;
    }
L_088E2DA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E2DACu);
    ctx.gpr[5] = (0u | 198u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E2DACu) goto L_088E2DAC;
    return;
L_088E2DAC:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    goto L_088E2DB0;
L_088E2DB0:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2DC8;
      }
      goto L_088E2DB8;
    }
L_088E2DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E2DC4u);
    ctx.gpr[5] = (0u | 199u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E2DC4u) goto L_088E2DC4;
    return;
L_088E2DC4:
    ctx.gpr[30] = (ctx.gpr[2] | 0u);
    goto L_088E2DC8;
L_088E2DC8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(112));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    ctx.execute_vfpu_vdot_ct<28u, 0u, 1u, 3u>();
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(128));
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
    ctx.gpr[4] = (15800u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20972u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E2E58;
      }
      goto L_088E2E14;
    }
L_088E2E14:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 44u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E2E2Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 77u, 0x08A407CCu>(ctx, &aot_mem) && ctx.pc == 0x088E2E2Cu) goto L_088E2E2C;
    return;
L_088E2E2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2E50;
      }
      goto L_088E2E38;
    }
L_088E2E38:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 44u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E2E50u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 77u, 0x08A407CCu>(ctx, &aot_mem) && ctx.pc == 0x088E2E50u) goto L_088E2E50;
    return;
L_088E2E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E2E58;
    }
L_088E2E58:
    { const bool branch_taken = ctx.gpr[30] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E2ED8;
      }
      goto L_088E2E60;
    }
L_088E2E60:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (15523u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E2ED8;
      }
      goto L_088E2E80;
    }
L_088E2E80:
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E2EB4;
      }
      goto L_088E2E8C;
    }
L_088E2E8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088E3160;
      }
      goto L_088E2EA0;
    }
L_088E2EA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088E3160;
      }
      goto L_088E2EB4;
    }
L_088E2EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (16384u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1012)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x088E2ED0u);
    ctx.gpr[6] = (0u | 184u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088E2ED0u) goto L_088E2ED0;
    return;
L_088E2ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E3160;
      }
      goto L_088E2ED8;
    }
L_088E2ED8:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088E310C;
      }
      goto L_088E2EE8;
    }
L_088E2EE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.gpr[5] = (16480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E2F78;
      }
      goto L_088E2F0C;
    }
L_088E2F0C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1445)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) > 0;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_088E2F34;
      }
      goto L_088E2F18;
    }
L_088E2F18:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (48896u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E2F78;
      }
      goto L_088E2F34;
    }
L_088E2F34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 44u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x088E2F4Cu);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 77u, 0x08A407CCu>(ctx, &aot_mem) && ctx.pc == 0x088E2F4Cu) goto L_088E2F4C;
    return;
L_088E2F4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E2F70;
      }
      goto L_088E2F58;
    }
L_088E2F58:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(508)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 44u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x088E2F70u);
    ctx.gpr[8] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0143_entry, 143u, 77u, 0x08A407CCu>(ctx, &aot_mem) && ctx.pc == 0x088E2F70u) goto L_088E2F70;
    return;
L_088E2F70:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E2F78;
    }
L_088E2F78:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.gpr[4] = (49024u << 16u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E3040;
      }
      goto L_088E2F90;
    }
L_088E2F90:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    ctx.gpr[31] = (0x088E2F9Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088E2F9Cu) goto L_088E2F9C;
    return;
L_088E2F9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E2FB4u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088E2FB4u) goto L_088E2FB4;
    return;
L_088E2FB4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21856)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E2FCCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x088E2FCCu) goto L_088E2FCC;
    return;
L_088E2FCC:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E2FE0u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x088E2FE0u) goto L_088E2FE0;
    return;
L_088E2FE0:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) <= 0;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088E3040;
      }
      goto L_088E2FEC;
    }
L_088E2FEC:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E301C;
      }
      goto L_088E2FF4;
    }
L_088E2FF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[30]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088E3160;
      }
      goto L_088E3008;
    }
L_088E3008:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
      if (branch_taken) {
          goto L_088E3160;
      }
      goto L_088E301C;
    }
L_088E301C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (16512u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1012)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[7]);
    ctx.gpr[31] = (0x088E3038u);
    ctx.gpr[6] = (0u | 189u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088E3038u) goto L_088E3038;
    return;
L_088E3038:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_088E3160;
      }
      goto L_088E3040;
    }
L_088E3040:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088E304Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E304Cu) goto L_088E304C;
    return;
L_088E304C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E30B8;
      }
      goto L_088E3054;
    }
L_088E3054:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x088E3064u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088E3064u) goto L_088E3064;
    return;
L_088E3064:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), ctx.gpr[16]);
    ctx.gpr[17] = (ctx.gpr[3] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E307Cu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(148)));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x088E307Cu) goto L_088E307C;
    return;
L_088E307C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21860)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21856)));
    ctx.gpr[5] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E3094u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 436u, 0x08AF61F4u>(ctx, &aot_mem) && ctx.pc == 0x088E3094u) goto L_088E3094;
    return;
L_088E3094:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (ctx.gpr[3] | 0u);
    ctx.gpr[31] = (0x088E30A8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 514u, 0x08AF6790u>(ctx, &aot_mem) && ctx.pc == 0x088E30A8u) goto L_088E30A8;
    return;
L_088E30A8:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[2]) >= 0;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
      if (branch_taken) {
          goto L_088E30B8;
      }
      goto L_088E30B4;
    }
L_088E30B4:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088E30B8;
L_088E30B8:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E30E0;
      }
      goto L_088E30C0;
    }
L_088E30C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E30E0;
      }
      goto L_088E30D4;
    }
L_088E30D4:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E30E0;
L_088E30E0:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3160;
      }
      goto L_088E30E8;
    }
L_088E30E8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3160;
      }
      goto L_088E30FC;
    }
L_088E30FC:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E3160;
      }
      goto L_088E310C;
    }
L_088E310C:
    ctx.gpr[4] = (49024u << 16u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E3138;
      }
      goto L_088E3118;
    }
L_088E3118:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3138;
      }
      goto L_088E312C;
    }
L_088E312C:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E3138;
L_088E3138:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3160;
      }
      goto L_088E3140;
    }
L_088E3140:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3160;
      }
      goto L_088E3154;
    }
L_088E3154:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E3160;
L_088E3160:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088E319C;
      }
      goto L_088E3168;
    }
L_088E3168:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7840)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(36)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[28] = ctx.fpr[28] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[30] < ctx.fpr[28]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[28] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
        goto L_088E3198;
    }
    goto L_088E3198;
L_088E3198:
    ctx.fpr[28] = ctx.fpr[30] - ctx.fpr[28];
    goto L_088E319C;
L_088E319C:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088E31D8;
      }
      goto L_088E31A4;
    }
L_088E31A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7840)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[30] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_088E31D4;
    }
    goto L_088E31D4;
L_088E31D4:
    ctx.fpr[28] = ctx.fpr[28] - ctx.fpr[12];
    goto L_088E31D8;
L_088E31D8:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_088E3214;
      }
      goto L_088E31E0;
    }
L_088E31E0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7840)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[15] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[28]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
        goto L_088E3210;
    }
    goto L_088E3210;
L_088E3210:
    ctx.fpr[28] = ctx.fpr[28] - ctx.fpr[12];
    goto L_088E3214;
L_088E3214:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1008)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[26])) && ctx.fpr[24] == ctx.fpr[26]));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1308)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[12];
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[19] = (2229u << 16u);
      if (branch_taken) {
          goto L_088E3234;
      }
      goto L_088E3230;
    }
L_088E3230:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088E3234;
L_088E3234:
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[30]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E324C;
      }
      goto L_088E3244;
    }
L_088E3244:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
      if (branch_taken) {
          goto L_088E3260;
      }
      goto L_088E324C;
    }
L_088E324C:
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[26]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[17] = (2230u << 16u);
      if (branch_taken) {
          goto L_088E3264;
      }
      goto L_088E325C;
    }
L_088E325C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    goto L_088E3260;
L_088E3260:
    ctx.gpr[17] = (2230u << 16u);
    goto L_088E3264;
L_088E3264:
    ctx.gpr[4] = (16220u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 10486u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[12];
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1320), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x088E32B8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E32B8u) goto L_088E32B8;
    return;
L_088E32B8:
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (16025u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    { const bool branch_taken = ctx.gpr[2] != 0u;
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_088E32D4;
      }
      goto L_088E32CC;
    }
L_088E32CC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088E3570;
      }
      goto L_088E32D4;
    }
L_088E32D4:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[26]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
      if (branch_taken) {
          goto L_088E3570;
      }
      goto L_088E32E4;
    }
L_088E32E4:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1316)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-9));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1184)));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_088E3398;
      }
      goto L_088E330C;
    }
L_088E330C:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3398;
      }
      goto L_088E3320;
    }
L_088E3320:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3398;
      }
      goto L_088E3334;
    }
L_088E3334:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1192)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1008)));
        goto L_088E3360;
    }
    goto L_088E3348;
L_088E3348:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3398;
      }
      goto L_088E335C;
    }
L_088E335C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1008)));
    goto L_088E3360;
L_088E3360:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = ctx.fpr[15] - ctx.fpr[12];
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3438;
      }
      goto L_088E3388;
    }
L_088E3388:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_088E3438;
      }
      goto L_088E3398;
    }
L_088E3398:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1192)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3438;
      }
      goto L_088E33AC;
    }
L_088E33AC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1196)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3438;
      }
      goto L_088E33C0;
    }
L_088E33C0:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[15] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3438;
      }
      goto L_088E33D4;
    }
L_088E33D4:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1184)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1008)));
        goto L_088E3400;
    }
    goto L_088E33E8;
L_088E33E8:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1188)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[15]) || std::isnan(ctx.fpr[20])) && ctx.fpr[15] == ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3438;
      }
      goto L_088E33FC;
    }
L_088E33FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1008)));
    goto L_088E3400;
L_088E3400:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (16153u << 16u);
    ctx.fpr[15] = ctx.fpr[16] - ctx.fpr[15];
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[17]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3438;
      }
      goto L_088E342C;
    }
L_088E342C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1333))))));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1333), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_088E3438;
L_088E3438:
    ctx.gpr[4] = (15897u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3474;
      }
      goto L_088E3454;
    }
L_088E3454:
    ctx.gpr[4] = (16000u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_088E346C;
    }
    goto L_088E346C;
L_088E346C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E352C;
      }
      goto L_088E3474;
    }
L_088E3474:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(592)));
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (15395u << 16u);
      if (branch_taken) {
          goto L_088E34CC;
      }
      goto L_088E3490;
    }
L_088E3490:
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[15]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E34CC;
      }
      goto L_088E34A8;
    }
L_088E34A8:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[24]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_088E34C4;
    }
    goto L_088E34C4;
L_088E34C4:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E352C;
      }
      goto L_088E34CC;
    }
L_088E34CC:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(588)));
    ctx.set_fpu_condition((ctx.fpr[15] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E352C;
      }
      goto L_088E34E0;
    }
L_088E34E0:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E352C;
      }
      goto L_088E34F0;
    }
L_088E34F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(336)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(144)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E352C;
      }
      goto L_088E350C;
    }
L_088E350C:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[24]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_088E3528;
    }
    goto L_088E3528;
L_088E3528:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E352C;
L_088E352C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3570;
      }
      goto L_088E3540;
    }
L_088E3540:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16005u << 16u);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[4] | 7864u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[22] = ctx.fpr[12] / ctx.fpr[13];
    ctx.fpr[22] = ctx.fpr[30] - ctx.fpr[22];
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
        goto L_088E356C;
    }
    goto L_088E356C;
L_088E356C:
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_088E3570;
L_088E3570:
    ctx.gpr[31] = (0x088E3578u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E3578u) goto L_088E3578;
    return;
L_088E3578:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E35D0;
      }
      goto L_088E3580;
    }
L_088E3580:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16227u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<32u>(ctx.gpr[5]);
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<32u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[30] - ctx.fpr[12];
    { const float fs = ctx.fpr[24]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[13] + ctx.fpr[12];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1324), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E35D4;
      }
      goto L_088E35D0;
    }
L_088E35D0:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1324), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088E35D4;
L_088E35D4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (16143u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3608;
      }
      goto L_088E35F8;
    }
L_088E35F8:
    ctx.gpr[31] = (0x088E3600u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E3600u) goto L_088E3600;
    return;
L_088E3600:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3614;
      }
      goto L_088E3608;
    }
L_088E3608:
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088E3694;
      }
      goto L_088E3614;
    }
L_088E3614:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
        goto L_088E3638;
    }
    goto L_088E362C;
L_088E362C:
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[30]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088E3694;
      }
      goto L_088E3638;
    }
L_088E3638:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.fpr[22] = ctx.fpr[14] + ctx.fpr[15];
    ctx.fpr[22] = std::sqrt(ctx.fpr[22]);
    ctx.gpr[4] = (15395u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 55050u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3684;
      }
      goto L_088E3668;
    }
L_088E3668:
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[22];
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[22];
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const bool branch_taken = 0u == 0u;
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
      if (branch_taken) {
          goto L_088E3694;
      }
      goto L_088E3684;
    }
L_088E3684:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) & 0x7FFFFFFFu);
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[22]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[24]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[24] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[24] = fs * ft; }
    goto L_088E3694;
L_088E3694:
    { const bool branch_taken = ctx.gpr[30] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E36A4;
      }
      goto L_088E369C;
    }
L_088E369C:
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088E36A4;
L_088E36A4:
    ctx.gpr[31] = (0x088E36ACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E36ACu) goto L_088E36AC;
    return;
L_088E36AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E37E8;
      }
      goto L_088E36B4;
    }
L_088E36B4:
    { const bool branch_taken = ctx.gpr[21] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E36D0;
      }
      goto L_088E36BC;
    }
L_088E36BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[31] = (0x088E36CCu);
    ctx.gpr[6] = (0u | 188u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E36CCu) goto L_088E36CC;
    return;
L_088E36CC:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    goto L_088E36D0;
L_088E36D0:
    { const bool branch_taken = ctx.gpr[20] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E36EC;
      }
      goto L_088E36D8;
    }
L_088E36D8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[31] = (0x088E36E8u);
    ctx.gpr[6] = (0u | 187u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E36E8u) goto L_088E36E8;
    return;
L_088E36E8:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_088E36EC;
L_088E36EC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3774;
      }
      goto L_088E36F8;
    }
L_088E36F8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_088E3740;
    }
    goto L_088E370C;
L_088E370C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088E3728u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088E3728u) goto L_088E3728;
    return;
L_088E3728:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088E3738u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088E3738u) goto L_088E3738;
    return;
L_088E3738:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E37E8;
      }
      goto L_088E3740;
    }
L_088E3740:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088E375Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088E375Cu) goto L_088E375C;
    return;
L_088E375C:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088E376Cu);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088E376Cu) goto L_088E376C;
    return;
L_088E376C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E37E8;
      }
      goto L_088E3774;
    }
L_088E3774:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_088E37B8;
      }
      goto L_088E3788;
    }
L_088E3788:
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x088E37A4u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088E37A4u) goto L_088E37A4;
    return;
L_088E37A4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[21] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[21] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088E37E8;
      }
      goto L_088E37B8;
    }
L_088E37B8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1324)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088E37D8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088E37D8u) goto L_088E37D8;
    return;
L_088E37D8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[20] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[20] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[21] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088E37E8;
L_088E37E8:
    { const bool branch_taken = ctx.gpr[23] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3804;
      }
      goto L_088E37F0;
    }
L_088E37F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[31] = (0x088E3800u);
    ctx.gpr[6] = (0u | 185u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3800u) goto L_088E3800;
    return;
L_088E3800:
    ctx.gpr[23] = (ctx.gpr[2] | 0u);
    goto L_088E3804;
L_088E3804:
    { const bool branch_taken = ctx.gpr[22] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3820;
      }
      goto L_088E380C;
    }
L_088E380C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1012)));
    ctx.gpr[31] = (0x088E381Cu);
    ctx.gpr[6] = (0u | 186u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E381Cu) goto L_088E381C;
    return;
L_088E381C:
    ctx.gpr[22] = (ctx.gpr[2] | 0u);
    goto L_088E3820;
L_088E3820:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E38A8;
      }
      goto L_088E382C;
    }
L_088E382C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
        goto L_088E3874;
    }
    goto L_088E3840;
L_088E3840:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088E385Cu);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088E385Cu) goto L_088E385C;
    return;
L_088E385C:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088E386Cu);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088E386Cu) goto L_088E386C;
    return;
L_088E386C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E391C;
      }
      goto L_088E3874;
    }
L_088E3874:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088E3890u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088E3890u) goto L_088E3890;
    return;
L_088E3890:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x088E38A0u);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088E38A0u) goto L_088E38A0;
    return;
L_088E38A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E391C;
      }
      goto L_088E38A8;
    }
L_088E38A8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-2));
      if (branch_taken) {
          goto L_088E38EC;
      }
      goto L_088E38BC;
    }
L_088E38BC:
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[22] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x088E38D8u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088E38D8u) goto L_088E38D8;
    return;
L_088E38D8:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[22] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
      if (branch_taken) {
          goto L_088E391C;
      }
      goto L_088E38EC;
    }
L_088E38EC:
    aot_mem.aot_store32(ctx.gpr[23] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(32)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1320)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088E390Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 28u, 0x088B4280u>(ctx, &aot_mem) && ctx.pc == 0x088E390Cu) goto L_088E390C;
    return;
L_088E390C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[23] + static_cast<std::uint32_t>(8), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[22] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088E391C;
L_088E391C:
    ctx.gpr[4] = (16025u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[4] | 39322u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E39C8;
      }
      goto L_088E393C;
    }
L_088E393C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(676)));
    ctx.gpr[5] = (49344u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (16576u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.gpr[31] = (0x088E397Cu);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088E397Cu) goto L_088E397C;
    return;
L_088E397C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(76));
    ctx.gpr[6] = (0u | 2u);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088E3998u);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 188u, 0x0890D044u>(ctx, &aot_mem) && ctx.pc == 0x088E3998u) goto L_088E3998;
    return;
L_088E3998:
    ctx.gpr[31] = (0x088E39A0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x088E39A0u) goto L_088E39A0;
    return;
L_088E39A0:
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.gpr[6] = (0u | 2u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x088E39BCu);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 188u, 0x0890D044u>(ctx, &aot_mem) && ctx.pc == 0x088E39BCu) goto L_088E39BC;
    return;
L_088E39BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(412)));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    goto L_088E39C8;
L_088E39C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E39D0;
    }
L_088E39D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[31] = (0x088E39DCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(504)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 833u, 0x089A37ECu>(ctx, &aot_mem) && ctx.pc == 0x088E39DCu) goto L_088E39DC;
    return;
L_088E39DC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E39E4;
    }
L_088E39E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[16] = (0u | 1u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(584)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E3A8C;
      }
      goto L_088E39FC;
    }
L_088E39FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3A8C;
      }
      goto L_088E3A18;
    }
L_088E3A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3A24u);
    ctx.gpr[5] = (0u | 110u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E3A24u) goto L_088E3A24;
    return;
L_088E3A24:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3A84;
      }
      goto L_088E3A30;
    }
L_088E3A30:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3A84;
      }
      goto L_088E3A4C;
    }
L_088E3A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3A58u);
    ctx.gpr[5] = (0u | 111u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E3A58u) goto L_088E3A58;
    return;
L_088E3A58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E3A68u);
    ctx.gpr[5] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E3A68u) goto L_088E3A68;
    return;
L_088E3A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E3A78u);
    ctx.gpr[5] = (0u | 113u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E3A78u) goto L_088E3A78;
    return;
L_088E3A78:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088E3B7C;
      }
      goto L_088E3A84;
    }
L_088E3A84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E3A8C;
    }
L_088E3A8C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3B08;
      }
      goto L_088E3AA0;
    }
L_088E3AA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3AACu);
    ctx.gpr[5] = (0u | 98u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E3AACu) goto L_088E3AAC;
    return;
L_088E3AAC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3B00;
      }
      goto L_088E3AB8;
    }
L_088E3AB8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3B00;
      }
      goto L_088E3AD4;
    }
L_088E3AD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3AE0u);
    ctx.gpr[5] = (0u | 103u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E3AE0u) goto L_088E3AE0;
    return;
L_088E3AE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E3AF0u);
    ctx.gpr[5] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E3AF0u) goto L_088E3AF0;
    return;
L_088E3AF0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_088E3B7C;
      }
      goto L_088E3B00;
    }
L_088E3B00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E3B08;
    }
L_088E3B08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3B14u);
    ctx.gpr[5] = (0u | 97u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E3B14u) goto L_088E3B14;
    return;
L_088E3B14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3B74;
      }
      goto L_088E3B20;
    }
L_088E3B20:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3B74;
      }
      goto L_088E3B3C;
    }
L_088E3B3C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3B48u);
    ctx.gpr[5] = (0u | 101u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E3B48u) goto L_088E3B48;
    return;
L_088E3B48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E3B58u);
    ctx.gpr[5] = (0u | 102u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E3B58u) goto L_088E3B58;
    return;
L_088E3B58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x088E3B68u);
    ctx.gpr[5] = (0u | 109u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E3B68u) goto L_088E3B68;
    return;
L_088E3B68:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[22] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_088E3B7C;
      }
      goto L_088E3B74;
    }
L_088E3B74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E3B7C;
    }
L_088E3B7C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_088E3BF0;
      }
      goto L_088E3B84;
    }
L_088E3B84:
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
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E3BF0;
      }
      goto L_088E3BB8;
    }
L_088E3BB8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E3BF0;
      }
      goto L_088E3BE4;
    }
L_088E3BE4:
    ctx.gpr[4] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E3BF0;
L_088E3BF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3BFCu);
    ctx.gpr[5] = (0u | 105u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E3BFCu) goto L_088E3BFC;
    return;
L_088E3BFC:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3C18;
      }
      goto L_088E3C08;
    }
L_088E3C08:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3C14u);
    ctx.gpr[5] = (0u | 106u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E3C14u) goto L_088E3C14;
    return;
L_088E3C14:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088E3C18;
L_088E3C18:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3C30;
      }
      goto L_088E3C20;
    }
L_088E3C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3C2Cu);
    ctx.gpr[5] = (0u | 108u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E3C2Cu) goto L_088E3C2C;
    return;
L_088E3C2C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088E3C30;
L_088E3C30:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3C48;
      }
      goto L_088E3C38;
    }
L_088E3C38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x088E3C44u);
    ctx.gpr[5] = (0u | 108u);
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 331u, 0x08865810u>(ctx, &aot_mem) && ctx.pc == 0x088E3C44u) goto L_088E3C44;
    return;
L_088E3C44:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    goto L_088E3C48;
L_088E3C48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[5] = (ctx.gpr[5] & 8u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3D70;
      }
      goto L_088E3C5C;
    }
L_088E3C5C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(588)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3D70;
      }
      goto L_088E3C74;
    }
L_088E3C74:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3D70;
      }
      goto L_088E3C7C;
    }
L_088E3C7C:
    ctx.gpr[4] = (2232u << 16u);
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
    ctx.gpr[6] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_088E3CE0;
      }
      goto L_088E3CB4;
    }
L_088E3CB4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E3CE0;
    }
L_088E3CE0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3D10;
      }
      goto L_088E3CE8;
    }
L_088E3CE8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E3CFC;
    }
L_088E3CFC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(36)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E3D10;
    }
L_088E3D10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (16512u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
      if (branch_taken) {
          goto L_088E3D58;
      }
      goto L_088E3D24;
    }
L_088E3D24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3D58;
      }
      goto L_088E3D40;
    }
L_088E3D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3D50u);
    ctx.gpr[6] = (0u | 113u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088E3D50u) goto L_088E3D50;
    return;
L_088E3D50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E3D58;
    }
L_088E3D58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3D68u);
    ctx.gpr[6] = (0u | 109u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x088E3D68u) goto L_088E3D68;
    return;
L_088E3D68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E3D70;
    }
L_088E3D70:
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[24]) || std::isnan(ctx.fpr[22])) && ctx.fpr[24] == ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3D88;
      }
      goto L_088E3D80;
    }
L_088E3D80:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3DB8;
      }
      goto L_088E3D88;
    }
L_088E3D88:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3D94;
      }
      goto L_088E3D90;
    }
L_088E3D90:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088E3D94;
L_088E3D94:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3DA0;
      }
      goto L_088E3D9C;
    }
L_088E3D9C:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088E3DA0;
L_088E3DA0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E3DA8;
    }
L_088E3DA8:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E3DB8;
    }
L_088E3DB8:
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (48924u << 16u);
      if (branch_taken) {
          goto L_088E3EB8;
      }
      goto L_088E3DC8;
    }
L_088E3DC8:
    ctx.gpr[4] = (16156u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 10486u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3DEC;
      }
      goto L_088E3DE8;
    }
L_088E3DE8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088E3DEC;
L_088E3DEC:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3E00;
      }
      goto L_088E3DFC;
    }
L_088E3DFC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088E3E00;
L_088E3E00:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3E0C;
      }
      goto L_088E3E08;
    }
L_088E3E08:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088E3E0C;
L_088E3E0C:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3E9C;
      }
      goto L_088E3E14;
    }
L_088E3E14:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E3E58;
      }
      goto L_088E3E24;
    }
L_088E3E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3E58;
      }
      goto L_088E3E40;
    }
L_088E3E40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3E50u);
    ctx.gpr[6] = (0u | 111u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3E50u) goto L_088E3E50;
    return;
L_088E3E50:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3EA0;
      }
      goto L_088E3E58;
    }
L_088E3E58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3E84;
      }
      goto L_088E3E6C;
    }
L_088E3E6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3E7Cu);
    ctx.gpr[6] = (0u | 103u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3E7Cu) goto L_088E3E7C;
    return;
L_088E3E7C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3EA0;
      }
      goto L_088E3E84;
    }
L_088E3E84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3E94u);
    ctx.gpr[6] = (0u | 101u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3E94u) goto L_088E3E94;
    return;
L_088E3E94:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3EA0;
      }
      goto L_088E3E9C;
    }
L_088E3E9C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E3EA0;
L_088E3EA0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E3EA8;
    }
L_088E3EA8:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E3EB8;
    }
L_088E3EB8:
    ctx.gpr[4] = (ctx.gpr[4] | 10486u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[24] / ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3ED8;
      }
      goto L_088E3ED4;
    }
L_088E3ED4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088E3ED8;
L_088E3ED8:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_088E3EEC;
      }
      goto L_088E3EE8;
    }
L_088E3EE8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    goto L_088E3EEC;
L_088E3EEC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3EF8;
      }
      goto L_088E3EF4;
    }
L_088E3EF4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_088E3EF8;
L_088E3EF8:
    { const bool branch_taken = ctx.gpr[19] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3F88;
      }
      goto L_088E3F00;
    }
L_088E3F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(836)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_088E3F44;
      }
      goto L_088E3F10;
    }
L_088E3F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(336)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_088E3F44;
      }
      goto L_088E3F2C;
    }
L_088E3F2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3F3Cu);
    ctx.gpr[6] = (0u | 112u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3F3Cu) goto L_088E3F3C;
    return;
L_088E3F3C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3F8C;
      }
      goto L_088E3F44;
    }
L_088E3F44:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 8u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3F70;
      }
      goto L_088E3F58;
    }
L_088E3F58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3F68u);
    ctx.gpr[6] = (0u | 104u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3F68u) goto L_088E3F68;
    return;
L_088E3F68:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3F8C;
      }
      goto L_088E3F70;
    }
L_088E3F70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(80)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x088E3F80u);
    ctx.gpr[6] = (0u | 102u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 478u, 0x08A8AE7Cu>(ctx, &aot_mem) && ctx.pc == 0x088E3F80u) goto L_088E3F80;
    return;
L_088E3F80:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3F8C;
      }
      goto L_088E3F88;
    }
L_088E3F88:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E3F8C;
L_088E3F8C:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_088E3FA0;
      }
      goto L_088E3F94;
    }
L_088E3F94:
    ctx.gpr[4] = (49280u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_088E3FA0;
L_088E3FA0:
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
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_088E3FE8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(21356)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2227u << 16u);
    ctx.pc = 0x088E4000u; return;
}

void recomp_unit_0055(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0055_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_55(Runtime &runtime) {
    runtime.register_generated_unit(55u, 0x088E0000u, 16384u, &recomp_unit_0055, &recomp_unit_0055_entry);
    runtime.register_function(0x088E0000u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0008u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0010u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0020u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E006Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0074u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0080u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E008Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E00FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E010Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E011Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E012Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0144u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0150u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0160u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0168u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0174u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0184u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0194u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E01FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E020Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E021Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0228u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0230u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0240u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0248u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0254u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E025Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0264u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E027Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0290u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0298u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E02F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0300u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0310u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0320u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E033Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0344u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E034Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0358u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0368u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0384u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E03FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E040Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E041Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0424u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E043Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0450u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0458u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0460u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0468u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E04FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0508u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0514u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E051Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0528u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0530u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0538u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0540u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0548u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0550u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0560u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0568u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0570u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E057Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E058Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0594u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E059Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E05C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E060Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0654u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0664u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0674u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E067Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0684u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E069Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E06F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0700u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0718u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E072Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E073Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0744u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E074Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E075Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E076Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0774u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0788u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0794u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E079Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E07F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0800u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E080Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0820u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0834u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0844u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E084Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0864u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E086Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E087Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0884u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E088Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E08F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0900u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0918u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E092Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0934u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E093Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0958u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0960u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0968u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0974u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0978u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0980u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E099Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E09F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A54u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0A9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0AF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0B64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BC8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BD0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BD8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BE8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0BF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0C9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CA4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0CFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D54u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D70u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0D98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DD0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0DF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0E98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0ECCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0ED4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EDCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EF0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0EFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F2Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0F8Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E0FB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1000u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1008u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1010u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1014u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E101Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1084u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E108Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1094u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1098u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E10A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E10B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E10B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E10D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E10E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E10ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E10F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1120u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1168u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1178u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1188u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1190u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1194u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E119Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E11A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E120Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E121Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E122Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1234u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1238u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1240u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1250u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1260u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1268u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E126Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1274u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E127Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1294u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E12F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1308u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1318u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1324u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1330u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1340u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1344u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1358u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1360u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1370u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1384u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E138Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1394u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E139Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E13F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E140Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1414u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E142Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E144Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1490u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E14A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E14B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E14B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E14C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E14ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1500u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1510u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E153Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1550u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1560u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1578u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1580u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1588u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1598u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E15F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1604u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1628u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1630u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E163Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E165Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1668u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1674u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E167Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1694u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E16F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1704u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1714u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E171Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1724u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E172Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1734u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E173Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1748u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1838u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1864u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1880u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1898u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E18FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1904u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1914u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1924u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1928u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1930u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1940u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E195Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1964u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1974u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E198Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E19D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1A44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1AC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1AC8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1AD0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1AD8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1AF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1B9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BDCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1BF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1C9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1CC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1D98u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DBCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1DF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E1Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E2Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1E74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1ECCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1EF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1F94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1FE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1FECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E1FF0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2000u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2018u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2020u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2048u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2068u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2078u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2088u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2094u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E209Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E20F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2140u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2148u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E214Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E215Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2174u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E217Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2198u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E21A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E21ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E21B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2224u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E228Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E22A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E22BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E22CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E22E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2318u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2354u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E235Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E23B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E23E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E23F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2408u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2420u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2430u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2444u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2450u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E24BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E24C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E24E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E24F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2508u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E250Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2528u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2534u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E253Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2548u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2550u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2568u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E25D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2630u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2670u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E269Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E26E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E26F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E26F4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2704u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E271Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2738u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2748u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2758u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2770u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2778u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2790u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E27F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E280Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2814u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2830u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2838u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2854u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2864u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2874u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2878u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2888u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2894u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2898u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E28D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2914u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E294Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2958u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2960u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2980u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2998u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E299Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E29B0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E29B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E29C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E29D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E29D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A54u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2A9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2AA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2AB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2AB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2AC0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2AC8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2AD0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2AE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2AECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2B64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2BB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2BE8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2BF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C04u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C28u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2C80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CD8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2CFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D64u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D78u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2D94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DB0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DC4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2DC8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E2Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E60u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2E8Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2EA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2EB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2ED0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2ED8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2EE8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F34u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F70u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F78u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2F9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FCCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E2FF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3008u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E301Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3038u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3040u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E304Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3054u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3064u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E307Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3094u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E30FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E310Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3118u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E312Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3138u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3140u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3154u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3160u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3168u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3198u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E319Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E31E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3210u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3214u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3230u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3234u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3244u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E324Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E325Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3260u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3264u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E32E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E330Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3320u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3334u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3348u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E335Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3360u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3388u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3398u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33C0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E33FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3400u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E342Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3438u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3454u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E346Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3474u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3490u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34C4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34E0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E34F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E350Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3528u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E352Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3540u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E356Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3570u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3578u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3580u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35D4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E35F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3600u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3608u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3614u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E362Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3638u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3668u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3684u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3694u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E369Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36ACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36B4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36CCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E36F8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E370Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3728u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3738u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3740u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E375Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E376Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3774u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3788u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37A4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37B8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37E8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E37F0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3800u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3804u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E380Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E381Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3820u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E382Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3840u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E385Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E386Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3874u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3890u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38A8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38D8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E38ECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E390Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E391Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E393Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E397Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3998u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39A0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39BCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39C8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39D0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39DCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39E4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E39FCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A4Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A78u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3A8Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AACu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AD4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3AF0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3B84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BE4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BF0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3BFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C18u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C20u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C2Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C30u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C38u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C48u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C5Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C74u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3C7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CB4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CE0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CE8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3CFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D70u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D90u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3D9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DC8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DE8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3DFCu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E08u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E0Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E14u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E24u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E40u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E50u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E6Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E7Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E84u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3E9Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EA8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EB8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3ED4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3ED8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EE8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EECu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EF4u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3EF8u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F00u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F10u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F2Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F3Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F44u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F58u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F68u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F70u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F80u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F88u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F8Cu, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3F94u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FA0u, &recomp_unit_0055, "recomp_unit_0055");
    runtime.register_function(0x088E3FE8u, &recomp_unit_0055, "recomp_unit_0055");
}
} // namespace psprecomp
