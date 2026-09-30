#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0118[4087] = {
    1, 0, 0, 2, 0, 0, 0, 0, 3, 0, 4, 0, 0, 5, 0, 0, 0, 6, 0, 7, 8, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0,
    0, 0, 10, 0, 0, 11, 0, 0, 0, 12, 0, 13, 14, 0, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 16, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 17, 0, 18, 0, 0, 19, 0, 0, 0, 0, 20, 0, 21, 0, 0, 22, 0, 0, 23, 0, 0, 0, 24, 0, 25,
    26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 28, 0, 0, 29, 0, 0, 0, 0, 30, 0, 31, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 34,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 37, 0, 0, 0, 0,
    0, 0, 38, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 40, 0, 0, 0, 0, 41, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 42, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 43, 0, 0, 44, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 45, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 46, 0, 47, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 48, 49, 0, 0, 50, 0, 0, 51, 0, 52, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 53, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 54, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 55, 0, 0, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0, 57, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 59, 0, 0, 0, 0, 0, 0, 0, 0, 60, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0,
    0, 63, 0, 0, 0, 0, 0, 0, 64, 65, 0, 66, 0, 0, 0, 0, 0, 0, 67, 0, 0, 0, 68, 0, 0, 0, 69, 0, 70, 71, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0, 0, 75, 0, 0, 0, 0, 0, 0, 76, 77, 0, 78, 0,
    0, 0, 0, 0, 79, 0, 0, 0, 80, 0, 0, 0, 81, 0, 0, 0, 0, 0, 82, 0, 0, 83, 0, 84, 85, 0, 0, 0, 0, 0, 0, 0,
    0, 86, 0, 87, 0, 0, 0, 0, 0, 0, 88, 0, 0, 0, 0, 89, 0, 0, 0, 0, 0, 0, 90, 91, 0, 92, 0, 0, 0, 0, 0, 0,
    0, 93, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 94, 0, 0, 0, 0, 95, 0, 96,
    0, 0, 0, 0, 0, 0, 97, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 98, 0, 99, 0, 100, 0, 0, 0, 0, 0, 101, 0, 102,
    0, 103, 0, 0, 0, 0, 0, 104, 105, 0, 106, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0, 0, 0, 108, 0, 0, 109, 0, 0, 0, 0,
    0, 110, 0, 111, 0, 0, 0, 0, 0, 112, 0, 113, 0, 0, 0, 114, 0, 0, 0, 0, 0, 115, 0, 116, 0, 0, 0, 0, 117, 0, 0, 0,
    0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 121, 0, 0, 0, 0, 0, 122, 0, 123, 0,
    0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 126, 0, 0, 0, 127, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0, 0, 130,
    0, 0, 0, 0, 131, 132, 0, 133, 0, 0, 0, 134, 0, 135, 136, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 137, 0, 0, 0,
    138, 0, 0, 139, 0, 140, 0, 0, 0, 0, 0, 141, 0, 0, 0, 142, 0, 0, 0, 0, 0, 0, 0, 0, 143, 0, 0, 0, 0, 144, 0, 0,
    0, 145, 0, 0, 146, 0, 0, 147, 0, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 0, 0, 152, 0, 153,
    0, 154, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0, 0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0,
    160, 161, 0, 162, 0, 0, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 0, 164, 0, 0, 0, 0, 0, 0, 0, 0, 0, 165, 0, 166, 0, 0,
    0, 167, 0, 168, 169, 0, 0, 0, 0, 0, 0, 0, 0, 170, 0, 0, 0, 171, 0, 0, 172, 0, 173, 0, 0, 0, 0, 0, 0, 0, 0, 174,
    0, 0, 0, 0, 175, 0, 0, 0, 0, 0, 0, 0, 0, 0, 176, 0, 177, 0, 0, 0, 178, 0, 179, 180, 0, 0, 0, 0, 0, 0, 0, 0,
    181, 0, 0, 0, 182, 0, 0, 183, 0, 184, 0, 0, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0,
    0, 0, 0, 188, 0, 0, 0, 189, 0, 0, 190, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 193, 0,
    0, 0, 194, 0, 0, 195, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 196, 0, 197, 0, 0, 198, 0, 199, 0, 0, 0, 0, 0, 0, 0,
    200, 0, 0, 0, 0, 0, 0, 0, 0, 201, 0, 0, 0, 0, 202, 0, 0, 203, 0, 0, 0, 204, 0, 205, 206, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 208, 0, 0, 209, 0, 210, 0, 0, 0, 0, 0, 211, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0,
    0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0,
    0, 0, 0, 217, 0, 0, 218, 219, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 220, 0, 221, 0, 0, 0, 0, 0, 222, 0, 0, 0,
    223, 0, 0, 224, 0, 225, 0, 0, 226, 0, 0, 0, 0, 0, 0, 227, 0, 0, 0, 0, 228, 0, 229, 0, 0, 0, 0, 0, 230, 0, 0, 0,
    231, 0, 0, 232, 0, 233, 0, 0, 234, 0, 0, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 237, 0, 0, 0, 0, 0, 238, 0, 239, 0,
    240, 0, 0, 0, 0, 0, 0, 241, 0, 0, 242, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 245, 0, 246, 0, 0, 0, 0, 0, 0, 247,
    0, 0, 0, 0, 0, 0, 0, 248, 0, 0, 249, 250, 0, 0, 0, 251, 0, 252, 0, 0, 253, 0, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0,
    0, 0, 0, 255, 0, 256, 0, 0, 0, 0, 0, 0, 257, 0, 0, 258, 0, 259, 0, 0, 0, 0, 0, 0, 260, 0, 0, 0, 0, 0, 0, 0,
    0, 261, 0, 262, 0, 0, 0, 0, 0, 263, 0, 0, 0, 0, 0, 0, 0, 0, 264, 0, 265, 0, 0, 266, 0, 0, 0, 0, 0, 0, 0, 267,
    0, 268, 0, 0, 269, 0, 270, 0, 271, 272, 0, 0, 0, 0, 0, 0, 0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 0, 0,
    276, 0, 0, 0, 0, 0, 0, 277, 278, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 0, 0, 0, 0, 281, 0, 0, 282, 283, 0,
    0, 0, 0, 0, 0, 284, 0, 285, 0, 0, 0, 0, 0, 0, 286, 0, 0, 0, 0, 0, 0, 0, 0, 287, 0, 0, 288, 289, 0, 0, 0, 0,
    0, 0, 290, 0, 291, 0, 0, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 0, 0, 293, 0, 0, 294, 295, 0, 0, 0, 0, 0, 0, 296,
    0, 297, 0, 0, 0, 0, 0, 298, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0, 0, 0, 0, 0, 0, 0,
    0, 301, 0, 0, 0, 0, 302, 0, 303, 0, 304, 305, 0, 0, 0, 0, 0, 0, 0, 0, 306, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0,
    0, 308, 0, 309, 0, 310, 311, 0, 0, 0, 0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 314, 0, 0, 0, 0, 0, 315, 0, 0, 316, 0,
    0, 0, 0, 0, 0, 317, 0, 318, 0, 0, 0, 0, 0, 319, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 320, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 321, 0, 322, 0, 0, 0, 0, 0, 323, 0, 0, 0, 324, 0, 0, 0, 325, 0, 326,
    327, 0, 328, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 331, 0, 332, 333, 0, 0, 0, 0, 0, 0, 0, 0, 334, 0, 0, 0,
    0, 0, 0, 335, 0, 0, 0, 0, 336, 0, 337, 0, 338, 339, 0, 0, 0, 0, 0, 0, 340, 0, 0, 0, 0, 341, 0, 0, 342, 0, 0, 0,
    0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 345, 0, 346, 0, 0, 0, 0, 0, 347, 0, 0, 0, 348, 0, 0, 0, 349, 0, 350, 351,
    0, 352, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 353, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0, 0, 356, 0,
    0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 359, 0, 360, 361, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 362, 0, 0, 363, 0,
    0, 0, 0, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0, 0, 366, 0, 367, 0, 0, 0, 0, 0, 0, 368, 0, 0, 0, 369, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0, 0, 372, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 0, 0, 0, 0, 375, 0, 376,
    0, 377, 378, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 380, 0, 0, 0, 0, 0, 381, 0, 0, 382, 0, 0, 0, 0, 0,
    0, 383, 0, 384, 0, 0, 0, 0, 0, 0, 385, 0, 0, 0, 386, 0, 0, 387, 0, 0, 0, 0, 0, 0, 0, 0, 0, 388, 0, 389, 0, 390,
    0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0,
    396, 0, 0, 0, 397, 0, 398, 0, 399, 0, 0, 400, 0, 401, 402, 0, 0, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0,
    405, 0, 0, 0, 0, 406, 0, 0, 0, 0, 0, 0, 407, 408, 0, 409, 0, 0, 0, 0, 0, 0, 410, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 411, 0, 412, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0, 0, 415, 0, 416, 0, 0, 0, 417, 0, 0, 0, 0, 0,
    0, 418, 0, 419, 0, 0, 0, 0, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 421, 0, 422, 423,
    0, 0, 0, 0, 0, 0, 0, 0, 424, 0, 425, 0, 0, 0, 0, 0, 0, 426, 0, 0, 0, 0, 427, 0, 0, 0, 0, 0, 0, 428, 429, 0,
    430, 0, 0, 0, 0, 0, 0, 431, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 0, 433, 0, 434, 435, 0, 0, 0, 0, 0, 0, 0, 0, 436,
    0, 437, 0, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 440, 441, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0,
    0, 0, 444, 0, 0, 0, 0, 0, 0, 0, 445, 0, 446, 447, 0, 0, 0, 0, 0, 0, 0, 0, 448, 0, 449, 0, 0, 0, 0, 0, 0, 450,
    0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 452, 453, 0, 454, 0, 0, 0, 0, 0, 455, 0, 0, 0, 456, 0, 0, 457, 0, 458, 0, 0,
    459, 0, 0, 0, 0, 0, 460, 0, 0, 0, 461, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 464, 0, 0, 0, 465, 0, 0, 466, 0,
    467, 0, 0, 468, 0, 0, 0, 0, 0, 469, 0, 0, 0, 470, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 473, 0, 0, 0, 474, 0,
    0, 475, 0, 476, 0, 0, 477, 0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 480, 0, 481, 0, 0, 0, 0, 0, 0, 482, 0,
    0, 0, 0, 0, 0, 0, 483, 0, 0, 484, 485, 0, 0, 0, 486, 0, 487, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 490,
    0, 0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 0, 0, 0, 494, 0, 0, 495, 496, 0, 0, 0, 497, 0,
    498, 0, 0, 499, 0, 0, 0, 0, 0, 0, 0, 500, 0, 0, 0, 501, 0, 0, 0, 0, 0, 502, 0, 503, 0, 0, 0, 0, 0, 0, 504, 0,
    0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 507, 0, 0, 0, 508, 0, 0, 0, 0, 509, 0, 510, 0, 0, 0, 0, 0, 511, 0, 0, 0, 0,
    512, 0, 513, 0, 0, 0, 0, 0, 514, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 518, 0, 519, 0, 0, 0,
    0, 0, 520, 0, 0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 525, 0, 0, 0, 0, 0, 526, 0, 0, 0,
    0, 527, 0, 528, 0, 0, 0, 0, 0, 529, 0, 0, 0, 0, 530, 0, 531, 0, 0, 0, 0, 0, 532, 0, 0, 0, 0, 533, 0, 534, 0, 0,
    0, 0, 0, 535, 0, 0, 0, 0, 536, 0, 537, 0, 0, 538, 0, 0, 539, 0, 540, 0, 541, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 542, 0, 543, 0, 0, 0, 0, 0, 544, 0, 0, 545, 0, 0, 546, 0, 547, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 549, 0, 0, 0, 0, 550, 0, 0, 0, 0, 551, 0, 552, 0, 0, 0, 0, 0, 553, 0, 0, 0, 554, 0, 0, 555, 0, 0, 0, 556,
    0, 0, 557, 0, 558, 0, 0, 559, 0, 560, 0, 0, 0, 0, 0, 561, 0, 0, 0, 562, 0, 0, 0, 0, 563, 0, 564, 565, 0, 0, 0, 0,
    0, 0, 0, 0, 566, 0, 567, 0, 0, 0, 0, 0, 0, 568, 0, 0, 0, 0, 569, 0, 0, 0, 0, 0, 0, 570, 571, 0, 572, 573, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 574, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 576, 0, 0,
    0, 0, 0, 577, 0, 0, 0, 578, 0, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 581, 0, 0, 0, 582, 0, 0, 0, 583, 0, 584, 0, 0,
    0, 0, 0, 585, 0, 0, 0, 586, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 587, 0, 588, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 591, 0, 592, 0, 0, 0, 0, 0, 0, 593, 0, 0, 0, 594, 0, 0, 0, 0, 0, 0, 0,
    0, 595, 0, 0, 596, 597, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 598, 0, 599, 0, 0, 0, 0, 0, 0, 600, 0,
    0, 0, 601, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 603, 0, 0, 0, 604, 0, 0, 0, 605, 0, 0, 0, 0, 0, 0, 0, 0, 0, 606,
    0, 0, 0, 0, 0, 607, 0, 608, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 609, 0, 610, 0, 0, 0, 0,
    0, 611, 0, 0, 0, 612, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 613, 0, 614, 0, 0, 0, 615, 0, 616, 0, 0, 0, 617, 0, 618,
    0, 0, 0, 619, 0, 620, 0, 0, 0, 621, 0, 622, 0, 0, 0, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 624, 0, 0, 625, 0, 0, 0, 0, 0, 0, 626, 0, 0, 0, 627, 0, 0, 0, 0, 0, 628, 0, 0, 629, 0, 0, 630, 0, 0, 631, 0,
    0, 0, 0, 0, 0, 0, 632, 0, 0, 633, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 637, 0, 638,
    0, 0, 0, 0, 0, 639, 0, 0, 0, 0, 0, 640, 0, 641, 0, 0, 0, 0, 642, 0, 0, 643, 0, 644, 0, 0, 0, 645, 0, 646, 0, 0,
    647, 0, 648, 0, 649, 0, 650, 0, 0, 651, 0, 652, 0, 0, 0, 653, 0, 654, 0, 0, 0, 655, 0, 656, 0, 0, 657, 0, 658, 0, 659, 0,
    660, 0, 0, 0, 0, 0, 661, 0, 0, 0, 662, 0, 663, 0, 0, 0, 0, 0, 664, 0, 0, 0, 665, 0, 666, 0, 667, 0, 668, 0, 0, 0,
    0, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 670, 0, 0, 671, 0, 0, 0, 672, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 673, 0, 674, 0, 0, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 678, 0, 0, 679, 0, 0, 680, 0, 681, 0, 0, 0,
    682, 0, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 685, 0, 686, 0, 0, 0, 0, 0, 0, 0, 687, 0, 0, 0, 688,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 690, 0, 0, 0, 0, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 0, 0,
    0, 0, 0, 693, 0, 0, 694, 695, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 696, 0, 0, 0, 0, 0, 697, 0, 698, 0, 0, 0, 0, 0,
    0, 0, 699, 0, 700, 0, 0, 0, 0, 0, 701, 0, 0, 0, 702, 0, 0, 0, 703, 0, 0, 704, 0, 0, 0, 0, 0, 0, 705, 0, 0, 0,
    0, 706, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 707, 0, 0, 0, 0, 0, 708, 0, 0, 0,
    0, 709, 0, 0, 0, 0, 0, 0, 0, 0, 0, 710, 0, 0, 0, 711, 0, 712, 0, 0, 0, 713, 0, 714, 0, 0, 0, 0, 0, 715, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 0, 0, 0, 0, 0, 718, 0, 0, 0, 0, 0, 719, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 720, 0, 0, 0, 0, 0, 721, 0, 0, 0, 0, 722, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 724, 0, 725, 0, 0, 0, 0, 0, 726, 0, 727, 0, 0, 0, 0, 0, 0, 728, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 729, 0, 730, 0, 0, 0, 0, 0, 731, 0, 0, 0, 732, 0, 0, 0, 733, 0, 734, 735, 0,
    0, 0, 0, 0, 0, 0, 0, 736, 0, 737, 0, 0, 0, 0, 0, 0, 738, 0, 0, 0, 0, 739, 0, 0, 0, 0, 0, 0, 740, 741, 0, 742,
    0, 0, 0, 0, 0, 743, 0, 0, 0, 744, 0, 745, 0, 0, 746, 0, 0, 0, 0, 0, 747, 0, 748, 0, 0, 0, 0, 0, 749, 0, 0, 0,
    750, 0, 751, 0, 0, 752, 0, 0, 0, 0, 0, 753, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 0, 756, 0, 757, 0, 0, 758, 0, 0, 0,
    0, 0, 759, 0, 760, 0, 0, 0, 0, 0, 761, 0, 0, 0, 762, 0, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 0, 765, 0, 0, 0, 766,
    0, 0, 0, 0, 767, 0, 768, 0, 0, 0, 0, 0, 769, 0, 0, 0, 770, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0, 0, 0, 0, 773, 0,
    0, 0, 774, 0, 0, 0, 0, 775, 0, 0, 0, 776, 0, 777, 0, 778, 0, 779, 0, 780, 0, 0, 0, 0, 0, 781, 0, 0, 782, 0, 783, 0,
    0, 0, 0, 0, 784, 0, 0, 0, 785, 0, 786, 0, 0, 0, 0, 0, 787, 0, 0, 0, 788, 0, 789, 0, 0, 0, 0, 0, 790, 0, 0, 0,
    791, 0, 792, 0, 0, 0, 0, 0, 793, 0, 0, 0, 794, 0, 795, 0, 0, 0, 0, 0, 796, 0, 0, 0, 797, 0, 0, 0, 0, 0, 798, 0,
    0, 799, 0, 0, 800, 0, 0, 0, 0, 801, 802, 0, 803, 0, 0, 0, 0, 0, 804, 0, 0, 0, 0, 805, 0, 0, 806, 0, 0, 807, 0, 0,
    0, 808, 809, 0, 810, 0, 0, 811, 0, 0, 812, 0, 0, 0, 0, 813, 814, 815, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 816, 0, 0, 0, 0, 817, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 818,
    0, 0, 0, 0, 819, 0, 0, 0, 0, 0, 0, 0, 820, 0, 0, 821, 0, 0, 0, 0, 822, 0, 0, 823, 0, 824, 0, 0, 0, 0, 0, 0,
    825, 0, 0, 0, 826, 0, 0, 0, 0, 0, 827, 0, 0, 828, 0, 0, 829, 0, 0, 830, 831, 0, 832,
};
void recomp_unit_0118_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x089DC004u;
        entry_id = (entry_delta < 16348u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0118[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_089DC004;
    case 2u: goto L_089DC010;
    case 3u: goto L_089DC024;
    case 4u: goto L_089DC02C;
    case 5u: goto L_089DC038;
    case 6u: goto L_089DC048;
    case 7u: goto L_089DC050;
    case 8u: goto L_089DC054;
    case 9u: goto L_089DC06C;
    case 10u: goto L_089DC08C;
    case 11u: goto L_089DC098;
    case 12u: goto L_089DC0A8;
    case 13u: goto L_089DC0B0;
    case 14u: goto L_089DC0B4;
    case 15u: goto L_089DC0CC;
    case 16u: goto L_089DC0E4;
    case 17u: goto L_089DC120;
    case 18u: goto L_089DC128;
    case 19u: goto L_089DC134;
    case 20u: goto L_089DC148;
    case 21u: goto L_089DC150;
    case 22u: goto L_089DC15C;
    case 23u: goto L_089DC168;
    case 24u: goto L_089DC178;
    case 25u: goto L_089DC180;
    case 26u: goto L_089DC184;
    case 27u: goto L_089DC19C;
    case 28u: goto L_089DC210;
    case 29u: goto L_089DC21C;
    case 30u: goto L_089DC230;
    case 31u: goto L_089DC238;
    case 32u: goto L_089DC23C;
    case 33u: goto L_089DC26C;
    case 34u: goto L_089DC280;
    case 35u: goto L_089DC2C0;
    case 36u: goto L_089DC2E8;
    case 37u: goto L_089DC2F0;
    case 38u: goto L_089DC30C;
    case 39u: goto L_089DC394;
    case 40u: goto L_089DC3C0;
    case 41u: goto L_089DC3D4;
    case 42u: goto L_089DC414;
    case 43u: goto L_089DC460;
    case 44u: goto L_089DC46C;
    case 45u: goto L_089DC4B0;
    case 46u: goto L_089DC4E0;
    case 47u: goto L_089DC4E8;
    case 48u: goto L_089DC510;
    case 49u: goto L_089DC514;
    case 50u: goto L_089DC520;
    case 51u: goto L_089DC52C;
    case 52u: goto L_089DC534;
    case 53u: goto L_089DC578;
    case 54u: goto L_089DC60C;
    case 55u: goto L_089DC640;
    case 56u: goto L_089DC65C;
    case 57u: goto L_089DC674;
    case 58u: goto L_089DC6A8;
    case 59u: goto L_089DC6AC;
    case 60u: goto L_089DC6D0;
    case 61u: goto L_089DC6D8;
    case 62u: goto L_089DC6F4;
    case 63u: goto L_089DC708;
    case 64u: goto L_089DC724;
    case 65u: goto L_089DC728;
    case 66u: goto L_089DC730;
    case 67u: goto L_089DC74C;
    case 68u: goto L_089DC75C;
    case 69u: goto L_089DC76C;
    case 70u: goto L_089DC774;
    case 71u: goto L_089DC778;
    case 72u: goto L_089DC79C;
    case 73u: goto L_089DC7A4;
    case 74u: goto L_089DC7C0;
    case 75u: goto L_089DC7D4;
    case 76u: goto L_089DC7F0;
    case 77u: goto L_089DC7F4;
    case 78u: goto L_089DC7FC;
    case 79u: goto L_089DC814;
    case 80u: goto L_089DC824;
    case 81u: goto L_089DC834;
    case 82u: goto L_089DC84C;
    case 83u: goto L_089DC858;
    case 84u: goto L_089DC860;
    case 85u: goto L_089DC864;
    case 86u: goto L_089DC888;
    case 87u: goto L_089DC890;
    case 88u: goto L_089DC8AC;
    case 89u: goto L_089DC8C0;
    case 90u: goto L_089DC8DC;
    case 91u: goto L_089DC8E0;
    case 92u: goto L_089DC8E8;
    case 93u: goto L_089DC908;
    case 94u: goto L_089DC964;
    case 95u: goto L_089DC978;
    case 96u: goto L_089DC980;
    case 97u: goto L_089DC99C;
    case 98u: goto L_089DC9D0;
    case 99u: goto L_089DC9D8;
    case 100u: goto L_089DC9E0;
    case 101u: goto L_089DC9F8;
    case 102u: goto L_089DCA00;
    case 103u: goto L_089DCA08;
    case 104u: goto L_089DCA20;
    case 105u: goto L_089DCA24;
    case 106u: goto L_089DCA2C;
    case 107u: goto L_089DCA40;
    case 108u: goto L_089DCA64;
    case 109u: goto L_089DCA70;
    case 110u: goto L_089DCA88;
    case 111u: goto L_089DCA90;
    case 112u: goto L_089DCAA8;
    case 113u: goto L_089DCAB0;
    case 114u: goto L_089DCAC0;
    case 115u: goto L_089DCAD8;
    case 116u: goto L_089DCAE0;
    case 117u: goto L_089DCAF4;
    case 118u: goto L_089DCB18;
    case 119u: goto L_089DCB44;
    case 120u: goto L_089DCB4C;
    case 121u: goto L_089DCB5C;
    case 122u: goto L_089DCB74;
    case 123u: goto L_089DCB7C;
    case 124u: goto L_089DCB9C;
    case 125u: goto L_089DCBC4;
    case 126u: goto L_089DCC20;
    case 127u: goto L_089DCC30;
    case 128u: goto L_089DCC44;
    case 129u: goto L_089DCC68;
    case 130u: goto L_089DCC80;
    case 131u: goto L_089DCC94;
    case 132u: goto L_089DCC98;
    case 133u: goto L_089DCCA0;
    case 134u: goto L_089DCCB0;
    case 135u: goto L_089DCCB8;
    case 136u: goto L_089DCCBC;
    case 137u: goto L_089DCCF4;
    case 138u: goto L_089DCD04;
    case 139u: goto L_089DCD10;
    case 140u: goto L_089DCD18;
    case 141u: goto L_089DCD30;
    case 142u: goto L_089DCD40;
    case 143u: goto L_089DCD64;
    case 144u: goto L_089DCD78;
    case 145u: goto L_089DCD88;
    case 146u: goto L_089DCD94;
    case 147u: goto L_089DCDA0;
    case 148u: goto L_089DCDAC;
    case 149u: goto L_089DCDC8;
    case 150u: goto L_089DCDD8;
    case 151u: goto L_089DCDE8;
    case 152u: goto L_089DCDF8;
    case 153u: goto L_089DCE00;
    case 154u: goto L_089DCE08;
    case 155u: goto L_089DCE0C;
    case 156u: goto L_089DCE30;
    case 157u: goto L_089DCE38;
    case 158u: goto L_089DCE54;
    case 159u: goto L_089DCE68;
    case 160u: goto L_089DCE84;
    case 161u: goto L_089DCE88;
    case 162u: goto L_089DCE90;
    case 163u: goto L_089DCEB4;
    case 164u: goto L_089DCEC8;
    case 165u: goto L_089DCEF0;
    case 166u: goto L_089DCEF8;
    case 167u: goto L_089DCF08;
    case 168u: goto L_089DCF10;
    case 169u: goto L_089DCF14;
    case 170u: goto L_089DCF38;
    case 171u: goto L_089DCF48;
    case 172u: goto L_089DCF54;
    case 173u: goto L_089DCF5C;
    case 174u: goto L_089DCF80;
    case 175u: goto L_089DCF94;
    case 176u: goto L_089DCFBC;
    case 177u: goto L_089DCFC4;
    case 178u: goto L_089DCFD4;
    case 179u: goto L_089DCFDC;
    case 180u: goto L_089DCFE0;
    case 181u: goto L_089DD004;
    case 182u: goto L_089DD014;
    case 183u: goto L_089DD020;
    case 184u: goto L_089DD028;
    case 185u: goto L_089DD044;
    case 186u: goto L_089DD070;
    case 187u: goto L_089DD078;
    case 188u: goto L_089DD090;
    case 189u: goto L_089DD0A0;
    case 190u: goto L_089DD0AC;
    case 191u: goto L_089DD0DC;
    case 192u: goto L_089DD0E4;
    case 193u: goto L_089DD0FC;
    case 194u: goto L_089DD10C;
    case 195u: goto L_089DD118;
    case 196u: goto L_089DD148;
    case 197u: goto L_089DD150;
    case 198u: goto L_089DD15C;
    case 199u: goto L_089DD164;
    case 200u: goto L_089DD184;
    case 201u: goto L_089DD1A8;
    case 202u: goto L_089DD1BC;
    case 203u: goto L_089DD1C8;
    case 204u: goto L_089DD1D8;
    case 205u: goto L_089DD1E0;
    case 206u: goto L_089DD1E4;
    case 207u: goto L_089DD29C;
    case 208u: goto L_089DD2AC;
    case 209u: goto L_089DD2B8;
    case 210u: goto L_089DD2C0;
    case 211u: goto L_089DD2D8;
    case 212u: goto L_089DD2EC;
    case 213u: goto L_089DD308;
    case 214u: goto L_089DD34C;
    case 215u: goto L_089DD354;
    case 216u: goto L_089DD370;
    case 217u: goto L_089DD390;
    case 218u: goto L_089DD39C;
    case 219u: goto L_089DD3A0;
    case 220u: goto L_089DD3D4;
    case 221u: goto L_089DD3DC;
    case 222u: goto L_089DD3F4;
    case 223u: goto L_089DD404;
    case 224u: goto L_089DD410;
    case 225u: goto L_089DD418;
    case 226u: goto L_089DD424;
    case 227u: goto L_089DD440;
    case 228u: goto L_089DD454;
    case 229u: goto L_089DD45C;
    case 230u: goto L_089DD474;
    case 231u: goto L_089DD484;
    case 232u: goto L_089DD490;
    case 233u: goto L_089DD498;
    case 234u: goto L_089DD4A4;
    case 235u: goto L_089DD4C0;
    case 236u: goto L_089DD4D4;
    case 237u: goto L_089DD4DC;
    case 238u: goto L_089DD4F4;
    case 239u: goto L_089DD4FC;
    case 240u: goto L_089DD504;
    case 241u: goto L_089DD520;
    case 242u: goto L_089DD52C;
    case 243u: goto L_089DD534;
    case 244u: goto L_089DD550;
    case 245u: goto L_089DD55C;
    case 246u: goto L_089DD564;
    case 247u: goto L_089DD580;
    case 248u: goto L_089DD5A0;
    case 249u: goto L_089DD5AC;
    case 250u: goto L_089DD5B0;
    case 251u: goto L_089DD5C0;
    case 252u: goto L_089DD5C8;
    case 253u: goto L_089DD5D4;
    case 254u: goto L_089DD5FC;
    case 255u: goto L_089DD610;
    case 256u: goto L_089DD618;
    case 257u: goto L_089DD634;
    case 258u: goto L_089DD640;
    case 259u: goto L_089DD648;
    case 260u: goto L_089DD664;
    case 261u: goto L_089DD688;
    case 262u: goto L_089DD690;
    case 263u: goto L_089DD6A8;
    case 264u: goto L_089DD6CC;
    case 265u: goto L_089DD6D4;
    case 266u: goto L_089DD6E0;
    case 267u: goto L_089DD700;
    case 268u: goto L_089DD708;
    case 269u: goto L_089DD714;
    case 270u: goto L_089DD71C;
    case 271u: goto L_089DD724;
    case 272u: goto L_089DD728;
    case 273u: goto L_089DD74C;
    case 274u: goto L_089DD754;
    case 275u: goto L_089DD770;
    case 276u: goto L_089DD784;
    case 277u: goto L_089DD7A0;
    case 278u: goto L_089DD7A4;
    case 279u: goto L_089DD7AC;
    case 280u: goto L_089DD7C8;
    case 281u: goto L_089DD7EC;
    case 282u: goto L_089DD7F8;
    case 283u: goto L_089DD7FC;
    case 284u: goto L_089DD818;
    case 285u: goto L_089DD820;
    case 286u: goto L_089DD83C;
    case 287u: goto L_089DD860;
    case 288u: goto L_089DD86C;
    case 289u: goto L_089DD870;
    case 290u: goto L_089DD88C;
    case 291u: goto L_089DD894;
    case 292u: goto L_089DD8B0;
    case 293u: goto L_089DD8D4;
    case 294u: goto L_089DD8E0;
    case 295u: goto L_089DD8E4;
    case 296u: goto L_089DD900;
    case 297u: goto L_089DD908;
    case 298u: goto L_089DD920;
    case 299u: goto L_089DD954;
    case 300u: goto L_089DD964;
    case 301u: goto L_089DD988;
    case 302u: goto L_089DD99C;
    case 303u: goto L_089DD9A4;
    case 304u: goto L_089DD9AC;
    case 305u: goto L_089DD9B0;
    case 306u: goto L_089DD9D4;
    case 307u: goto L_089DD9F4;
    case 308u: goto L_089DDA08;
    case 309u: goto L_089DDA10;
    case 310u: goto L_089DDA18;
    case 311u: goto L_089DDA1C;
    case 312u: goto L_089DDA38;
    case 313u: goto L_089DDA4C;
    case 314u: goto L_089DDA58;
    case 315u: goto L_089DDA70;
    case 316u: goto L_089DDA7C;
    case 317u: goto L_089DDA98;
    case 318u: goto L_089DDAA0;
    case 319u: goto L_089DDAB8;
    case 320u: goto L_089DDAEC;
    case 321u: goto L_089DDB38;
    case 322u: goto L_089DDB40;
    case 323u: goto L_089DDB58;
    case 324u: goto L_089DDB68;
    case 325u: goto L_089DDB78;
    case 326u: goto L_089DDB80;
    case 327u: goto L_089DDB84;
    case 328u: goto L_089DDB8C;
    case 329u: goto L_089DDBA8;
    case 330u: goto L_089DDBBC;
    case 331u: goto L_089DDBC4;
    case 332u: goto L_089DDBCC;
    case 333u: goto L_089DDBD0;
    case 334u: goto L_089DDBF4;
    case 335u: goto L_089DDC10;
    case 336u: goto L_089DDC24;
    case 337u: goto L_089DDC2C;
    case 338u: goto L_089DDC34;
    case 339u: goto L_089DDC38;
    case 340u: goto L_089DDC54;
    case 341u: goto L_089DDC68;
    case 342u: goto L_089DDC74;
    case 343u: goto L_089DDC8C;
    case 344u: goto L_089DDC98;
    case 345u: goto L_089DDCB4;
    case 346u: goto L_089DDCBC;
    case 347u: goto L_089DDCD4;
    case 348u: goto L_089DDCE4;
    case 349u: goto L_089DDCF4;
    case 350u: goto L_089DDCFC;
    case 351u: goto L_089DDD00;
    case 352u: goto L_089DDD08;
    case 353u: goto L_089DDD4C;
    case 354u: goto L_089DDD54;
    case 355u: goto L_089DDD6C;
    case 356u: goto L_089DDD7C;
    case 357u: goto L_089DDD98;
    case 358u: goto L_089DDDAC;
    case 359u: goto L_089DDDB4;
    case 360u: goto L_089DDDBC;
    case 361u: goto L_089DDDC0;
    case 362u: goto L_089DDDF0;
    case 363u: goto L_089DDDFC;
    case 364u: goto L_089DDE14;
    case 365u: goto L_089DDE20;
    case 366u: goto L_089DDE3C;
    case 367u: goto L_089DDE44;
    case 368u: goto L_089DDE60;
    case 369u: goto L_089DDE70;
    case 370u: goto L_089DDE98;
    case 371u: goto L_089DDEA0;
    case 372u: goto L_089DDEB8;
    case 373u: goto L_089DDEC8;
    case 374u: goto L_089DDEE4;
    case 375u: goto L_089DDEF8;
    case 376u: goto L_089DDF00;
    case 377u: goto L_089DDF08;
    case 378u: goto L_089DDF0C;
    case 379u: goto L_089DDF3C;
    case 380u: goto L_089DDF48;
    case 381u: goto L_089DDF60;
    case 382u: goto L_089DDF6C;
    case 383u: goto L_089DDF88;
    case 384u: goto L_089DDF90;
    case 385u: goto L_089DDFAC;
    case 386u: goto L_089DDFBC;
    case 387u: goto L_089DDFC8;
    case 388u: goto L_089DDFF0;
    case 389u: goto L_089DDFF8;
    case 390u: goto L_089DE000;
    case 391u: goto L_089DE008;
    case 392u: goto L_089DE010;
    case 393u: goto L_089DE02C;
    case 394u: goto L_089DE060;
    case 395u: goto L_089DE074;
    case 396u: goto L_089DE084;
    case 397u: goto L_089DE094;
    case 398u: goto L_089DE09C;
    case 399u: goto L_089DE0A4;
    case 400u: goto L_089DE0B0;
    case 401u: goto L_089DE0B8;
    case 402u: goto L_089DE0BC;
    case 403u: goto L_089DE0E0;
    case 404u: goto L_089DE0E8;
    case 405u: goto L_089DE104;
    case 406u: goto L_089DE118;
    case 407u: goto L_089DE134;
    case 408u: goto L_089DE138;
    case 409u: goto L_089DE140;
    case 410u: goto L_089DE15C;
    case 411u: goto L_089DE190;
    case 412u: goto L_089DE198;
    case 413u: goto L_089DE1B4;
    case 414u: goto L_089DE1C4;
    case 415u: goto L_089DE1D4;
    case 416u: goto L_089DE1DC;
    case 417u: goto L_089DE1EC;
    case 418u: goto L_089DE208;
    case 419u: goto L_089DE210;
    case 420u: goto L_089DE22C;
    case 421u: goto L_089DE274;
    case 422u: goto L_089DE27C;
    case 423u: goto L_089DE280;
    case 424u: goto L_089DE2A4;
    case 425u: goto L_089DE2AC;
    case 426u: goto L_089DE2C8;
    case 427u: goto L_089DE2DC;
    case 428u: goto L_089DE2F8;
    case 429u: goto L_089DE2FC;
    case 430u: goto L_089DE304;
    case 431u: goto L_089DE320;
    case 432u: goto L_089DE330;
    case 433u: goto L_089DE350;
    case 434u: goto L_089DE358;
    case 435u: goto L_089DE35C;
    case 436u: goto L_089DE380;
    case 437u: goto L_089DE388;
    case 438u: goto L_089DE3A4;
    case 439u: goto L_089DE3B8;
    case 440u: goto L_089DE3D4;
    case 441u: goto L_089DE3D8;
    case 442u: goto L_089DE3E0;
    case 443u: goto L_089DE3FC;
    case 444u: goto L_089DE40C;
    case 445u: goto L_089DE42C;
    case 446u: goto L_089DE434;
    case 447u: goto L_089DE438;
    case 448u: goto L_089DE45C;
    case 449u: goto L_089DE464;
    case 450u: goto L_089DE480;
    case 451u: goto L_089DE494;
    case 452u: goto L_089DE4B0;
    case 453u: goto L_089DE4B4;
    case 454u: goto L_089DE4BC;
    case 455u: goto L_089DE4D4;
    case 456u: goto L_089DE4E4;
    case 457u: goto L_089DE4F0;
    case 458u: goto L_089DE4F8;
    case 459u: goto L_089DE504;
    case 460u: goto L_089DE51C;
    case 461u: goto L_089DE52C;
    case 462u: goto L_089DE540;
    case 463u: goto L_089DE548;
    case 464u: goto L_089DE560;
    case 465u: goto L_089DE570;
    case 466u: goto L_089DE57C;
    case 467u: goto L_089DE584;
    case 468u: goto L_089DE590;
    case 469u: goto L_089DE5A8;
    case 470u: goto L_089DE5B8;
    case 471u: goto L_089DE5CC;
    case 472u: goto L_089DE5D4;
    case 473u: goto L_089DE5EC;
    case 474u: goto L_089DE5FC;
    case 475u: goto L_089DE608;
    case 476u: goto L_089DE610;
    case 477u: goto L_089DE61C;
    case 478u: goto L_089DE634;
    case 479u: goto L_089DE644;
    case 480u: goto L_089DE658;
    case 481u: goto L_089DE660;
    case 482u: goto L_089DE67C;
    case 483u: goto L_089DE69C;
    case 484u: goto L_089DE6A8;
    case 485u: goto L_089DE6AC;
    case 486u: goto L_089DE6BC;
    case 487u: goto L_089DE6C4;
    case 488u: goto L_089DE6D0;
    case 489u: goto L_089DE6F0;
    case 490u: goto L_089DE700;
    case 491u: goto L_089DE718;
    case 492u: goto L_089DE720;
    case 493u: goto L_089DE73C;
    case 494u: goto L_089DE75C;
    case 495u: goto L_089DE768;
    case 496u: goto L_089DE76C;
    case 497u: goto L_089DE77C;
    case 498u: goto L_089DE784;
    case 499u: goto L_089DE790;
    case 500u: goto L_089DE7B0;
    case 501u: goto L_089DE7C0;
    case 502u: goto L_089DE7D8;
    case 503u: goto L_089DE7E0;
    case 504u: goto L_089DE7FC;
    case 505u: goto L_089DE808;
    case 506u: goto L_089DE810;
    case 507u: goto L_089DE82C;
    case 508u: goto L_089DE83C;
    case 509u: goto L_089DE850;
    case 510u: goto L_089DE858;
    case 511u: goto L_089DE870;
    case 512u: goto L_089DE884;
    case 513u: goto L_089DE88C;
    case 514u: goto L_089DE8A4;
    case 515u: goto L_089DE8B8;
    case 516u: goto L_089DE8C0;
    case 517u: goto L_089DE8D8;
    case 518u: goto L_089DE8EC;
    case 519u: goto L_089DE8F4;
    case 520u: goto L_089DE90C;
    case 521u: goto L_089DE920;
    case 522u: goto L_089DE928;
    case 523u: goto L_089DE940;
    case 524u: goto L_089DE954;
    case 525u: goto L_089DE95C;
    case 526u: goto L_089DE974;
    case 527u: goto L_089DE988;
    case 528u: goto L_089DE990;
    case 529u: goto L_089DE9A8;
    case 530u: goto L_089DE9BC;
    case 531u: goto L_089DE9C4;
    case 532u: goto L_089DE9DC;
    case 533u: goto L_089DE9F0;
    case 534u: goto L_089DE9F8;
    case 535u: goto L_089DEA10;
    case 536u: goto L_089DEA24;
    case 537u: goto L_089DEA2C;
    case 538u: goto L_089DEA38;
    case 539u: goto L_089DEA44;
    case 540u: goto L_089DEA4C;
    case 541u: goto L_089DEA54;
    case 542u: goto L_089DEA90;
    case 543u: goto L_089DEA98;
    case 544u: goto L_089DEAB0;
    case 545u: goto L_089DEABC;
    case 546u: goto L_089DEAC8;
    case 547u: goto L_089DEAD0;
    case 548u: goto L_089DEAD8;
    case 549u: goto L_089DEB0C;
    case 550u: goto L_089DEB20;
    case 551u: goto L_089DEB34;
    case 552u: goto L_089DEB3C;
    case 553u: goto L_089DEB54;
    case 554u: goto L_089DEB64;
    case 555u: goto L_089DEB70;
    case 556u: goto L_089DEB80;
    case 557u: goto L_089DEB8C;
    case 558u: goto L_089DEB94;
    case 559u: goto L_089DEBA0;
    case 560u: goto L_089DEBA8;
    case 561u: goto L_089DEBC0;
    case 562u: goto L_089DEBD0;
    case 563u: goto L_089DEBE4;
    case 564u: goto L_089DEBEC;
    case 565u: goto L_089DEBF0;
    case 566u: goto L_089DEC14;
    case 567u: goto L_089DEC1C;
    case 568u: goto L_089DEC38;
    case 569u: goto L_089DEC4C;
    case 570u: goto L_089DEC68;
    case 571u: goto L_089DEC6C;
    case 572u: goto L_089DEC74;
    case 573u: goto L_089DEC78;
    case 574u: goto L_089DECA0;
    case 575u: goto L_089DECDC;
    case 576u: goto L_089DECF8;
    case 577u: goto L_089DED10;
    case 578u: goto L_089DED20;
    case 579u: goto L_089DED30;
    case 580u: goto L_089DED38;
    case 581u: goto L_089DED50;
    case 582u: goto L_089DED60;
    case 583u: goto L_089DED70;
    case 584u: goto L_089DED78;
    case 585u: goto L_089DED90;
    case 586u: goto L_089DEDA0;
    case 587u: goto L_089DEDD0;
    case 588u: goto L_089DEDD8;
    case 589u: goto L_089DEDF0;
    case 590u: goto L_089DEE00;
    case 591u: goto L_089DEE30;
    case 592u: goto L_089DEE38;
    case 593u: goto L_089DEE54;
    case 594u: goto L_089DEE64;
    case 595u: goto L_089DEE88;
    case 596u: goto L_089DEE94;
    case 597u: goto L_089DEE98;
    case 598u: goto L_089DEED8;
    case 599u: goto L_089DEEE0;
    case 600u: goto L_089DEEFC;
    case 601u: goto L_089DEF0C;
    case 602u: goto L_089DEF2C;
    case 603u: goto L_089DEF38;
    case 604u: goto L_089DEF48;
    case 605u: goto L_089DEF58;
    case 606u: goto L_089DEF80;
    case 607u: goto L_089DEF98;
    case 608u: goto L_089DEFA0;
    case 609u: goto L_089DEFE8;
    case 610u: goto L_089DEFF0;
    case 611u: goto L_089DF008;
    case 612u: goto L_089DF018;
    case 613u: goto L_089DF048;
    case 614u: goto L_089DF050;
    case 615u: goto L_089DF060;
    case 616u: goto L_089DF068;
    case 617u: goto L_089DF078;
    case 618u: goto L_089DF080;
    case 619u: goto L_089DF090;
    case 620u: goto L_089DF098;
    case 621u: goto L_089DF0A8;
    case 622u: goto L_089DF0B0;
    case 623u: goto L_089DF0CC;
    case 624u: goto L_089DF108;
    case 625u: goto L_089DF114;
    case 626u: goto L_089DF130;
    case 627u: goto L_089DF140;
    case 628u: goto L_089DF158;
    case 629u: goto L_089DF164;
    case 630u: goto L_089DF170;
    case 631u: goto L_089DF17C;
    case 632u: goto L_089DF19C;
    case 633u: goto L_089DF1A8;
    case 634u: goto L_089DF1B0;
    case 635u: goto L_089DF1C8;
    case 636u: goto L_089DF1F0;
    case 637u: goto L_089DF1F8;
    case 638u: goto L_089DF200;
    case 639u: goto L_089DF218;
    case 640u: goto L_089DF230;
    case 641u: goto L_089DF238;
    case 642u: goto L_089DF24C;
    case 643u: goto L_089DF258;
    case 644u: goto L_089DF260;
    case 645u: goto L_089DF270;
    case 646u: goto L_089DF278;
    case 647u: goto L_089DF284;
    case 648u: goto L_089DF28C;
    case 649u: goto L_089DF294;
    case 650u: goto L_089DF29C;
    case 651u: goto L_089DF2A8;
    case 652u: goto L_089DF2B0;
    case 653u: goto L_089DF2C0;
    case 654u: goto L_089DF2C8;
    case 655u: goto L_089DF2D8;
    case 656u: goto L_089DF2E0;
    case 657u: goto L_089DF2EC;
    case 658u: goto L_089DF2F4;
    case 659u: goto L_089DF2FC;
    case 660u: goto L_089DF304;
    case 661u: goto L_089DF31C;
    case 662u: goto L_089DF32C;
    case 663u: goto L_089DF334;
    case 664u: goto L_089DF34C;
    case 665u: goto L_089DF35C;
    case 666u: goto L_089DF364;
    case 667u: goto L_089DF36C;
    case 668u: goto L_089DF374;
    case 669u: goto L_089DF390;
    case 670u: goto L_089DF3C0;
    case 671u: goto L_089DF3CC;
    case 672u: goto L_089DF3DC;
    case 673u: goto L_089DF408;
    case 674u: goto L_089DF410;
    case 675u: goto L_089DF420;
    case 676u: goto L_089DF428;
    case 677u: goto L_089DF444;
    case 678u: goto L_089DF454;
    case 679u: goto L_089DF460;
    case 680u: goto L_089DF46C;
    case 681u: goto L_089DF474;
    case 682u: goto L_089DF484;
    case 683u: goto L_089DF4AC;
    case 684u: goto L_089DF4B8;
    case 685u: goto L_089DF4C8;
    case 686u: goto L_089DF4D0;
    case 687u: goto L_089DF4F0;
    case 688u: goto L_089DF500;
    case 689u: goto L_089DF538;
    case 690u: goto L_089DF540;
    case 691u: goto L_089DF55C;
    case 692u: goto L_089DF56C;
    case 693u: goto L_089DF590;
    case 694u: goto L_089DF59C;
    case 695u: goto L_089DF5A0;
    case 696u: goto L_089DF5CC;
    case 697u: goto L_089DF5E4;
    case 698u: goto L_089DF5EC;
    case 699u: goto L_089DF60C;
    case 700u: goto L_089DF614;
    case 701u: goto L_089DF62C;
    case 702u: goto L_089DF63C;
    case 703u: goto L_089DF64C;
    case 704u: goto L_089DF658;
    case 705u: goto L_089DF674;
    case 706u: goto L_089DF688;
    case 707u: goto L_089DF6DC;
    case 708u: goto L_089DF6F4;
    case 709u: goto L_089DF708;
    case 710u: goto L_089DF730;
    case 711u: goto L_089DF740;
    case 712u: goto L_089DF748;
    case 713u: goto L_089DF758;
    case 714u: goto L_089DF760;
    case 715u: goto L_089DF778;
    case 716u: goto L_089DF7AC;
    case 717u: goto L_089DF7BC;
    case 718u: goto L_089DF7DC;
    case 719u: goto L_089DF7F4;
    case 720u: goto L_089DF848;
    case 721u: goto L_089DF860;
    case 722u: goto L_089DF874;
    case 723u: goto L_089DF89C;
    case 724u: goto L_089DF8AC;
    case 725u: goto L_089DF8B4;
    case 726u: goto L_089DF8CC;
    case 727u: goto L_089DF8D4;
    case 728u: goto L_089DF8F0;
    case 729u: goto L_089DF930;
    case 730u: goto L_089DF938;
    case 731u: goto L_089DF950;
    case 732u: goto L_089DF960;
    case 733u: goto L_089DF970;
    case 734u: goto L_089DF978;
    case 735u: goto L_089DF97C;
    case 736u: goto L_089DF9A0;
    case 737u: goto L_089DF9A8;
    case 738u: goto L_089DF9C4;
    case 739u: goto L_089DF9D8;
    case 740u: goto L_089DF9F4;
    case 741u: goto L_089DF9F8;
    case 742u: goto L_089DFA00;
    case 743u: goto L_089DFA18;
    case 744u: goto L_089DFA28;
    case 745u: goto L_089DFA30;
    case 746u: goto L_089DFA3C;
    case 747u: goto L_089DFA54;
    case 748u: goto L_089DFA5C;
    case 749u: goto L_089DFA74;
    case 750u: goto L_089DFA84;
    case 751u: goto L_089DFA8C;
    case 752u: goto L_089DFA98;
    case 753u: goto L_089DFAB0;
    case 754u: goto L_089DFAB8;
    case 755u: goto L_089DFAD0;
    case 756u: goto L_089DFAE0;
    case 757u: goto L_089DFAE8;
    case 758u: goto L_089DFAF4;
    case 759u: goto L_089DFB0C;
    case 760u: goto L_089DFB14;
    case 761u: goto L_089DFB2C;
    case 762u: goto L_089DFB3C;
    case 763u: goto L_089DFB50;
    case 764u: goto L_089DFB58;
    case 765u: goto L_089DFB70;
    case 766u: goto L_089DFB80;
    case 767u: goto L_089DFB94;
    case 768u: goto L_089DFB9C;
    case 769u: goto L_089DFBB4;
    case 770u: goto L_089DFBC4;
    case 771u: goto L_089DFBD8;
    case 772u: goto L_089DFBE0;
    case 773u: goto L_089DFBFC;
    case 774u: goto L_089DFC0C;
    case 775u: goto L_089DFC20;
    case 776u: goto L_089DFC30;
    case 777u: goto L_089DFC38;
    case 778u: goto L_089DFC40;
    case 779u: goto L_089DFC48;
    case 780u: goto L_089DFC50;
    case 781u: goto L_089DFC68;
    case 782u: goto L_089DFC74;
    case 783u: goto L_089DFC7C;
    case 784u: goto L_089DFC94;
    case 785u: goto L_089DFCA4;
    case 786u: goto L_089DFCAC;
    case 787u: goto L_089DFCC4;
    case 788u: goto L_089DFCD4;
    case 789u: goto L_089DFCDC;
    case 790u: goto L_089DFCF4;
    case 791u: goto L_089DFD04;
    case 792u: goto L_089DFD0C;
    case 793u: goto L_089DFD24;
    case 794u: goto L_089DFD34;
    case 795u: goto L_089DFD3C;
    case 796u: goto L_089DFD54;
    case 797u: goto L_089DFD64;
    case 798u: goto L_089DFD7C;
    case 799u: goto L_089DFD88;
    case 800u: goto L_089DFD94;
    case 801u: goto L_089DFDA8;
    case 802u: goto L_089DFDAC;
    case 803u: goto L_089DFDB4;
    case 804u: goto L_089DFDCC;
    case 805u: goto L_089DFDE0;
    case 806u: goto L_089DFDEC;
    case 807u: goto L_089DFDF8;
    case 808u: goto L_089DFE08;
    case 809u: goto L_089DFE0C;
    case 810u: goto L_089DFE14;
    case 811u: goto L_089DFE20;
    case 812u: goto L_089DFE2C;
    case 813u: goto L_089DFE40;
    case 814u: goto L_089DFE44;
    case 815u: goto L_089DFE48;
    case 816u: goto L_089DFEA0;
    case 817u: goto L_089DFEB4;
    case 818u: goto L_089DFF00;
    case 819u: goto L_089DFF14;
    case 820u: goto L_089DFF34;
    case 821u: goto L_089DFF40;
    case 822u: goto L_089DFF54;
    case 823u: goto L_089DFF60;
    case 824u: goto L_089DFF68;
    case 825u: goto L_089DFF84;
    case 826u: goto L_089DFF94;
    case 827u: goto L_089DFFAC;
    case 828u: goto L_089DFFB8;
    case 829u: goto L_089DFFC4;
    case 830u: goto L_089DFFD0;
    case 831u: goto L_089DFFD4;
    case 832u: goto L_089DFFDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_089DC004:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(232)));
    ctx.gpr[31] = (0x089DC010u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x089DC010u) goto L_089DC010;
    return;
L_089DC010:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x089DC024u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x089DC024u) goto L_089DC024;
    return;
L_089DC024:
    ctx.gpr[31] = (0x089DC02Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x089DC02Cu) goto L_089DC02C;
    return;
L_089DC02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_089DC050;
      }
      goto L_089DC038;
    }
L_089DC038:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
        goto L_089DC054;
    }
    goto L_089DC048;
L_089DC048:
    ctx.gpr[31] = (0x089DC050u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089DC050u) goto L_089DC050;
    return;
L_089DC050:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_089DC054;
L_089DC054:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[31] = (0x089DC06Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x089DC06Cu) goto L_089DC06C;
    return;
L_089DC06C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089DC08Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x089DC08Cu) goto L_089DC08C;
    return;
L_089DC08C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(204)));
      if (branch_taken) {
          goto L_089DC0B0;
      }
      goto L_089DC098;
    }
L_089DC098:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089DC0B4;
      }
      goto L_089DC0A8;
    }
L_089DC0A8:
    ctx.gpr[31] = (0x089DC0B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089DC0B0u) goto L_089DC0B0;
    return;
L_089DC0B0:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_089DC0B4;
L_089DC0B4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[31] = (0x089DC0CCu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x089DC0CCu) goto L_089DC0CC;
    return;
L_089DC0CC:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(521)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DC128;
      }
      goto L_089DC0E4;
    }
L_089DC0E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
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
    ctx.gpr[4] = (15759u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089DC120u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x089DC120u) goto L_089DC120;
    return;
L_089DC120:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC134;
      }
      goto L_089DC128;
    }
L_089DC128:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(236)));
    ctx.gpr[31] = (0x089DC134u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x089DC134u) goto L_089DC134;
    return;
L_089DC134:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x089DC148u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x089DC148u) goto L_089DC148;
    return;
L_089DC148:
    ctx.gpr[31] = (0x089DC150u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x089DC150u) goto L_089DC150;
    return;
L_089DC150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(188)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(66))))));
        goto L_089DC23C;
    }
    goto L_089DC15C;
L_089DC15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(188)));
      if (branch_taken) {
          goto L_089DC180;
      }
      goto L_089DC168;
    }
L_089DC168:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
      if (branch_taken) {
          goto L_089DC184;
      }
      goto L_089DC178;
    }
L_089DC178:
    ctx.gpr[31] = (0x089DC180u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089DC180u) goto L_089DC180;
    return;
L_089DC180:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    goto L_089DC184;
L_089DC184:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[4]);
    ctx.gpr[31] = (0x089DC19Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 508u, 0x08A0651Cu>(ctx, &aot_mem) && ctx.pc == 0x089DC19Cu) goto L_089DC19C;
    return;
L_089DC19C:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1032)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (16230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 26214u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[14]));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[14] - ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) & 0x7FFFFFFFu);
    ctx.gpr[4] = (48460u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[31] = (0x089DC210u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 486u, 0x08A05F84u>(ctx, &aot_mem) && ctx.pc == 0x089DC210u) goto L_089DC210;
    return;
L_089DC210:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(516)));
    ctx.gpr[31] = (0x089DC21Cu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 494u, 0x08A06210u>(ctx, &aot_mem) && ctx.pc == 0x089DC21Cu) goto L_089DC21C;
    return;
L_089DC21C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x089DC230u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x089DC230u) goto L_089DC230;
    return;
L_089DC230:
    ctx.gpr[31] = (0x089DC238u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x089DC238u) goto L_089DC238;
    return;
L_089DC238:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[23] + static_cast<std::uint32_t>(66))))));
    goto L_089DC23C;
L_089DC23C:
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] << 8u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24340)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[16] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & 4u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(32));
      if (branch_taken) {
          goto L_089DC510;
      }
      goto L_089DC26C;
    }
L_089DC26C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    ctx.gpr[5] = (16u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
        goto L_089DC514;
    }
    goto L_089DC280;
L_089DC280:
    ctx.gpr[4] = (17154u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(96));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1028)));
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
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17536)));
    ctx.fpr[22] = ctx.fpr[22] / ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DC510;
      }
      goto L_089DC2C0;
    }
L_089DC2C0:
    ctx.gpr[4] = (ctx.gpr[23] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(672));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(656), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(660), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(664), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(656));
    ctx.gpr[31] = (0x089DC2E8u);
    ctx.gpr[4] = (ctx.gpr[23] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 563u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x089DC2E8u) goto L_089DC2E8;
    return;
L_089DC2E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC510;
      }
      goto L_089DC2F0;
    }
L_089DC2F0:
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(712), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(720));
      if (branch_taken) {
          goto L_089DC3C0;
      }
      goto L_089DC30C;
    }
L_089DC30C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
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
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(752), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(756), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(760), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(752));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(768));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (48501u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (48373u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.gpr[31] = (0x089DC394u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089DC394u) goto L_089DC394;
    return;
L_089DC394:
    ctx.fpr[12] = ctx.fpr[24] - ctx.fpr[22];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[22] + ctx.fpr[12];
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(768)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(772)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_089DC3D4;
      }
      goto L_089DC3C0;
    }
L_089DC3C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(704), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(100)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(708), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_089DC3D4;
L_089DC3D4:
    ctx.gpr[16] = (0u | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(688));
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
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.gpr[4] = (ctx.gpr[4] & 256u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC460;
      }
      goto L_089DC414;
    }
L_089DC414:
    ctx.gpr[16] = (0u | 1u);
    { const std::uint32_t vfpu_address = ctx.gpr[23] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(800));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(800)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(800), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(784));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    goto L_089DC460;
L_089DC460:
    ctx.gpr[4] = (16448u << 16u);
    ctx.gpr[31] = (0x089DC46Cu);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 298u, 0x0894DAE0u>(ctx, &aot_mem) && ctx.pc == 0x089DC46Cu) goto L_089DC46C;
    return;
L_089DC46C:
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[12];
    ctx.gpr[4] = (16268u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[14] + ctx.fpr[15];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17516)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[16]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DC510;
      }
      goto L_089DC4B0;
    }
L_089DC4B0:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(704));
    ctx.gpr[4] = (0u | 65u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089DC4E0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x089DC4E0u) goto L_089DC4E0;
    return;
L_089DC4E0:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC510;
      }
      goto L_089DC4E8;
    }
L_089DC4E8:
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(736));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 65u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x089DC510u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0101_entry, 101u, 78u, 0x08998634u>(ctx, &aot_mem) && ctx.pc == 0x089DC510u) goto L_089DC510;
    return;
L_089DC510:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    goto L_089DC514;
L_089DC514:
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC534;
      }
      goto L_089DC520;
    }
L_089DC520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC534;
      }
      goto L_089DC52C;
    }
L_089DC52C:
    ctx.gpr[31] = (0x089DC534u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 256u, 0x08A1D478u>(ctx, &aot_mem) && ctx.pc == 0x089DC534u) goto L_089DC534;
    return;
L_089DC534:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1048)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1052)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1056)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1060)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1064)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1068)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1072)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1076)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1080)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1084)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1088)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1092)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1096)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1100)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(1104)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(1120));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC578:
    ctx.gpr[4] = (2229u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-17556)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2229u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-17560)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2229u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-17528)));
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
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-17552), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2229u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-17544), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-17548), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-17540), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-17536), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-17524), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC60C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-288));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-309));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(96) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(252), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(256), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(260), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(264), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(268), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(272), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(276), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(280), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_089DEC74;
      }
      goto L_089DC640;
    }
L_089DC640:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-309));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-5984)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DC65C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DC674u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DC674u) goto L_089DC674;
    return;
L_089DC674:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[7] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[7] - ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(232)));
    ctx.gpr[6] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_089DC6AC;
      }
      goto L_089DC6A8;
    }
L_089DC6A8:
    ctx.gpr[4] = (0u | 1u);
    goto L_089DC6AC;
L_089DC6AC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089DC6D8;
      }
      goto L_089DC6D0;
    }
L_089DC6D0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DC728;
      }
      goto L_089DC6D8;
    }
L_089DC6D8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DC708;
    }
    goto L_089DC6F4;
L_089DC6F4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DC728;
      }
      goto L_089DC708;
    }
L_089DC708:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC728;
      }
      goto L_089DC724;
    }
L_089DC724:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DC728;
L_089DC728:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DC730;
    }
L_089DC730:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DC74Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DC74Cu) goto L_089DC74C;
    return;
L_089DC74C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DC75Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089DC75Cu) goto L_089DC75C;
    return;
L_089DC75C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DC774;
      }
      goto L_089DC76C;
    }
L_089DC76C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089DC778;
      }
      goto L_089DC774;
    }
L_089DC774:
    ctx.gpr[4] = (0u | 0u);
    goto L_089DC778;
L_089DC778:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089DC7A4;
      }
      goto L_089DC79C;
    }
L_089DC79C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DC7F4;
      }
      goto L_089DC7A4;
    }
L_089DC7A4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DC7D4;
    }
    goto L_089DC7C0;
L_089DC7C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DC7F4;
      }
      goto L_089DC7D4;
    }
L_089DC7D4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC7F4;
      }
      goto L_089DC7F0;
    }
L_089DC7F0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DC7F4;
L_089DC7F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DC7FC;
    }
L_089DC7FC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DC814u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DC814u) goto L_089DC814;
    return;
L_089DC814:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DC824u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089DC824u) goto L_089DC824;
    return;
L_089DC824:
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[2] + static_cast<std::uint32_t>(500), static_cast<std::uint16_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DC834;
    }
L_089DC834:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DC84Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DC84Cu) goto L_089DC84C;
    return;
L_089DC84C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x089DC858u);
    ctx.gpr[17] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0078_entry, 78u, 27u, 0x0893C238u>(ctx, &aot_mem) && ctx.pc == 0x089DC858u) goto L_089DC858;
    return;
L_089DC858:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC864;
      }
      goto L_089DC860;
    }
L_089DC860:
    ctx.gpr[17] = (0u | 1u);
    goto L_089DC864;
L_089DC864:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089DC890;
      }
      goto L_089DC888;
    }
L_089DC888:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089DC8E0;
      }
      goto L_089DC890;
    }
L_089DC890:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DC8C0;
    }
    goto L_089DC8AC;
L_089DC8AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DC8E0;
      }
      goto L_089DC8C0;
    }
L_089DC8C0:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DC8E0;
      }
      goto L_089DC8DC;
    }
L_089DC8DC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DC8E0;
L_089DC8E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DC8E8;
    }
L_089DC8E8:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x089DC908u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DC908u) goto L_089DC908;
    return;
L_089DC908:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(20)));
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(28)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(32)));
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(36)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(40)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(44)));
    ctx.gpr[5] = (ctx.gpr[4] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] << 16u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.gpr[10] = (ctx.gpr[10] & 65535u);
    ctx.gpr[11] = (ctx.gpr[11] & 65535u);
    ctx.gpr[31] = (0x089DC964u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 735u, 0x08AD2C38u>(ctx, &aot_mem) && ctx.pc == 0x089DC964u) goto L_089DC964;
    return;
L_089DC964:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DC978u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DC978u) goto L_089DC978;
    return;
L_089DC978:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DC980;
    }
L_089DC980:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DC99Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DC99Cu) goto L_089DC99C;
    return;
L_089DC99C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-5440));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DC9E0;
      }
      goto L_089DC9D0;
    }
L_089DC9D0:
    ctx.gpr[31] = (0x089DC9D8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 716u, 0x08AD2AC0u>(ctx, &aot_mem) && ctx.pc == 0x089DC9D8u) goto L_089DC9D8;
    return;
L_089DC9D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCA24;
      }
      goto L_089DC9E0;
    }
L_089DC9E0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 101 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DCA08;
      }
      goto L_089DC9F8;
    }
L_089DC9F8:
    ctx.gpr[31] = (0x089DCA00u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 717u, 0x08AD2AD8u>(ctx, &aot_mem) && ctx.pc == 0x089DCA00u) goto L_089DCA00;
    return;
L_089DCA00:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCA24;
      }
      goto L_089DCA08;
    }
L_089DCA08:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DCA20u);
    ctx.gpr[17] = (ctx.gpr[5] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0179_entry, 179u, 717u, 0x08AD2AD8u>(ctx, &aot_mem) && ctx.pc == 0x089DCA20u) goto L_089DCA20;
    return;
L_089DCA20:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(40), static_cast<std::uint16_t>(ctx.gpr[17]));
    goto L_089DCA24;
L_089DCA24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DCA2C;
    }
L_089DCA2C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DCA40u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x089DCA40u) goto L_089DCA40;
    return;
L_089DCA40:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DCA64u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DCA64u) goto L_089DCA64;
    return;
L_089DCA64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCA90;
      }
      goto L_089DCA70;
    }
L_089DCA70:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[31] = (0x089DCA88u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 355u, 0x08AC6A34u>(ctx, &aot_mem) && ctx.pc == 0x089DCA88u) goto L_089DCA88;
    return;
L_089DCA88:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCAA8;
      }
      goto L_089DCA90;
    }
L_089DCA90:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[31] = (0x089DCAA8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 355u, 0x08AC6A34u>(ctx, &aot_mem) && ctx.pc == 0x089DCAA8u) goto L_089DCAA8;
    return;
L_089DCAA8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DCAB0;
    }
L_089DCAB0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DCAC0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x089DCAC0u) goto L_089DCAC0;
    return;
L_089DCAC0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[31] = (0x089DCAD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 374u, 0x08AC6B74u>(ctx, &aot_mem) && ctx.pc == 0x089DCAD8u) goto L_089DCAD8;
    return;
L_089DCAD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DCAE0;
    }
L_089DCAE0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DCAF4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x089DCAF4u) goto L_089DCAF4;
    return;
L_089DCAF4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DCB18u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DCB18u) goto L_089DCB18;
    return;
L_089DCB18:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[11] = (0u | 0u);
    ctx.gpr[31] = (0x089DCB44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 390u, 0x08AC6C68u>(ctx, &aot_mem) && ctx.pc == 0x089DCB44u) goto L_089DCB44;
    return;
L_089DCB44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DCB4C;
    }
L_089DCB4C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DCB5Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x089DCB5Cu) goto L_089DCB5C;
    return;
L_089DCB5C:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[2] - ctx.gpr[5]);
    ctx.gpr[31] = (0x089DCB74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(9096));
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 379u, 0x08AC6BC8u>(ctx, &aot_mem) && ctx.pc == 0x089DCB74u) goto L_089DCB74;
    return;
L_089DCB74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DCB7C;
    }
L_089DCB7C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DCB9Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089DCB9Cu) goto L_089DCB9C;
    return;
L_089DCB9C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x089DCBC4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DCBC4u) goto L_089DCBC4;
    return;
L_089DCBC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(128), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(130), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(132), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(134), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(28)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(136), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(32)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(138), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(140), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(142), static_cast<std::uint16_t>(ctx.gpr[5]));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(144), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DCC20u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 221u, 0x0887171Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCC20u) goto L_089DCC20;
    return;
L_089DCC20:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089DCC98;
      }
      goto L_089DCC30;
    }
L_089DCC30:
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(128))))));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
      if (branch_taken) {
          goto L_089DCC80;
      }
      goto L_089DCC44;
    }
L_089DCC44:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-5704));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DCC80;
      }
      goto L_089DCC68;
    }
L_089DCC68:
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(148));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[7] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DCC80u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6144));
    if (rt.invoke_chained_direct<&recomp_unit_0185_entry, 185u, 806u, 0x08AEB698u>(ctx, &aot_mem) && ctx.pc == 0x089DCC80u) goto L_089DCC80;
    return;
L_089DCC80:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[4] << 16u);
    ctx.gpr[16] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[16]) >> 16u));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 9 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DCC30;
      }
      goto L_089DCC98;
    }
L_089DCC94:
    // nop
    goto L_089DCC98;
L_089DCC98:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089DCCB0;
      }
      goto L_089DCCA0;
    }
L_089DCCA0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DCCB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6080));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089DCCB0u) goto L_089DCCB0;
    return;
L_089DCCB0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DCD10;
      }
      goto L_089DCCB8;
    }
L_089DCCB8:
    ctx.gpr[16] = (2227u << 16u);
    goto L_089DCCBC;
L_089DCCBC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(44)));
    ctx.gpr[7] = (ctx.gpr[5] << 16u);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[31] = (0x089DCCF4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 350u, 0x08872008u>(ctx, &aot_mem) && ctx.pc == 0x089DCCF4u) goto L_089DCCF4;
    return;
L_089DCCF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DCD04u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 251u, 0x08871908u>(ctx, &aot_mem) && ctx.pc == 0x089DCD04u) goto L_089DCD04;
    return;
L_089DCD04:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    ctx.gpr[16] = (2227u << 16u);
      if (branch_taken) {
          goto L_089DCCBC;
      }
      goto L_089DCD10;
    }
L_089DCD10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DCD18;
    }
L_089DCD18:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DCD30u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DCD30u) goto L_089DCD30;
    return;
L_089DCD30:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DCD40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DCD40u) goto L_089DCD40;
    return;
L_089DCD40:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089DCD64u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089DCD64u) goto L_089DCD64;
    return;
L_089DCD64:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089DCD78u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 221u, 0x0887171Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCD78u) goto L_089DCD78;
    return;
L_089DCD78:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DCD94;
      }
      goto L_089DCD88;
    }
L_089DCD88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_089DCD94;
L_089DCD94:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCDC8;
      }
      goto L_089DCDA0;
    }
L_089DCDA0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCDC8;
      }
      goto L_089DCDAC;
    }
L_089DCDAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
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
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCDD8;
      }
      goto L_089DCDC8;
    }
L_089DCDC8:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    goto L_089DCDD8;
L_089DCDD8:
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] & 65535u);
    ctx.gpr[31] = (0x089DCDE8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13820)));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 380u, 0x088723E8u>(ctx, &aot_mem) && ctx.pc == 0x089DCDE8u) goto L_089DCDE8;
    return;
L_089DCDE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x089DCDF8u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 212u, 0x08871684u>(ctx, &aot_mem) && ctx.pc == 0x089DCDF8u) goto L_089DCDF8;
    return;
L_089DCDF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCE08;
      }
      goto L_089DCE00;
    }
L_089DCE00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089DCE0C;
      }
      goto L_089DCE08;
    }
L_089DCE08:
    ctx.gpr[4] = (0u | 0u);
    goto L_089DCE0C;
L_089DCE0C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089DCE38;
      }
      goto L_089DCE30;
    }
L_089DCE30:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DCE88;
      }
      goto L_089DCE38;
    }
L_089DCE38:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DCE68;
    }
    goto L_089DCE54;
L_089DCE54:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DCE88;
      }
      goto L_089DCE68;
    }
L_089DCE68:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DCE88;
      }
      goto L_089DCE84;
    }
L_089DCE84:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DCE88;
L_089DCE88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DCE90;
    }
L_089DCE90:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DCEB4u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089DCEB4u) goto L_089DCEB4;
    return;
L_089DCEB4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DCEC8u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 221u, 0x0887171Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCEC8u) goto L_089DCEC8;
    return;
L_089DCEC8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DCEF0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DCEF0u) goto L_089DCEF0;
    return;
L_089DCEF0:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089DCF08;
      }
      goto L_089DCEF8;
    }
L_089DCEF8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DCF08u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6048));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089DCF08u) goto L_089DCF08;
    return;
L_089DCF08:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DCF54;
      }
      goto L_089DCF10;
    }
L_089DCF10:
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
    goto L_089DCF14;
L_089DCF14:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x089DCF38u);
    ctx.gpr[7] = (ctx.gpr[8] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 364u, 0x08872258u>(ctx, &aot_mem) && ctx.pc == 0x089DCF38u) goto L_089DCF38;
    return;
L_089DCF38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DCF48u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 251u, 0x08871908u>(ctx, &aot_mem) && ctx.pc == 0x089DCF48u) goto L_089DCF48;
    return;
L_089DCF48:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_089DCF14;
      }
      goto L_089DCF54;
    }
L_089DCF54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DCF5C;
    }
L_089DCF5C:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DCF80u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089DCF80u) goto L_089DCF80;
    return;
L_089DCF80:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DCF94u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 221u, 0x0887171Cu>(ctx, &aot_mem) && ctx.pc == 0x089DCF94u) goto L_089DCF94;
    return;
L_089DCF94:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DCFBCu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DCFBCu) goto L_089DCFBC;
    return;
L_089DCFBC:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089DCFD4;
      }
      goto L_089DCFC4;
    }
L_089DCFC4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DCFD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6048));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089DCFD4u) goto L_089DCFD4;
    return;
L_089DCFD4:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DD020;
      }
      goto L_089DCFDC;
    }
L_089DCFDC:
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
    goto L_089DCFE0;
L_089DCFE0:
    ctx.gpr[16] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x089DD004u);
    ctx.gpr[7] = (ctx.gpr[8] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 369u, 0x088722D4u>(ctx, &aot_mem) && ctx.pc == 0x089DD004u) goto L_089DD004;
    return;
L_089DD004:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DD014u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 251u, 0x08871908u>(ctx, &aot_mem) && ctx.pc == 0x089DD014u) goto L_089DD014;
    return;
L_089DD014:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[5] = (ctx.gpr[16] & 65535u);
      if (branch_taken) {
          goto L_089DCFE0;
      }
      goto L_089DD020;
    }
L_089DD020:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD028;
    }
L_089DD028:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DD044u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD044u) goto L_089DD044;
    return;
L_089DD044:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[4] << 16u);
    ctx.gpr[7] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089DD070u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 345u, 0x088EE3F4u>(ctx, &aot_mem) && ctx.pc == 0x089DD070u) goto L_089DD070;
    return;
L_089DD070:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD078;
    }
L_089DD078:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DD090u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD090u) goto L_089DD090;
    return;
L_089DD090:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DD0A0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089DD0A0u) goto L_089DD0A0;
    return;
L_089DD0A0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DD0DC;
      }
      goto L_089DD0AC;
    }
L_089DD0AC:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089DD0DCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 345u, 0x088EE3F4u>(ctx, &aot_mem) && ctx.pc == 0x089DD0DCu) goto L_089DD0DC;
    return;
L_089DD0DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD0E4;
    }
L_089DD0E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DD0FCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD0FCu) goto L_089DD0FC;
    return;
L_089DD0FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DD10Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DD10Cu) goto L_089DD10C;
    return;
L_089DD10C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DD148;
      }
      goto L_089DD118;
    }
L_089DD118:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089DD148u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 345u, 0x088EE3F4u>(ctx, &aot_mem) && ctx.pc == 0x089DD148u) goto L_089DD148;
    return;
L_089DD148:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD150;
    }
L_089DD150:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089DD15Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 369u, 0x088EE5C0u>(ctx, &aot_mem) && ctx.pc == 0x089DD15Cu) goto L_089DD15C;
    return;
L_089DD15C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD164;
    }
L_089DD164:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DD184u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089DD184u) goto L_089DD184;
    return;
L_089DD184:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 12u);
    ctx.gpr[31] = (0x089DD1A8u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD1A8u) goto L_089DD1A8;
    return;
L_089DD1A8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DD1BCu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 221u, 0x0887171Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD1BCu) goto L_089DD1BC;
    return;
L_089DD1BC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089DD1D8;
      }
      goto L_089DD1C8;
    }
L_089DD1C8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DD1D8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6080));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089DD1D8u) goto L_089DD1D8;
    return;
L_089DD1D8:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_089DD2B8;
      }
      goto L_089DD1E0;
    }
L_089DD1E0:
    ctx.gpr[4] = (2269u << 16u);
    goto L_089DD1E4;
L_089DD1E4:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[9] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[3] = (ctx.gpr[11] << 16u);
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(28)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(32)));
    ctx.gpr[12] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[14] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[13] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(40)));
    ctx.gpr[4] = (ctx.gpr[12] << 16u);
    ctx.gpr[12] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(44)));
    ctx.gpr[4] = (ctx.gpr[13] << 16u);
    ctx.gpr[13] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[4] = (ctx.gpr[5] << 16u);
    ctx.gpr[17] = (2227u << 16u);
    ctx.gpr[15] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[3] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 16u));
    ctx.gpr[2] = (ctx.gpr[2] << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[2] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[2]) >> 16u));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[3]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[14]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[12]);
    ctx.gpr[8] = (ctx.gpr[8] << 16u);
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[13]);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[8] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[8]) >> 16u));
    ctx.gpr[9] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[9]) >> 16u));
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[10]) >> 16u));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DD29Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[15]);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 357u, 0x088720E4u>(ctx, &aot_mem) && ctx.pc == 0x089DD29Cu) goto L_089DD29C;
    return;
L_089DD29C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x089DD2ACu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 251u, 0x08871908u>(ctx, &aot_mem) && ctx.pc == 0x089DD2ACu) goto L_089DD2AC;
    return;
L_089DD2AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) >= 0;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DD1E4;
      }
      goto L_089DD2B8;
    }
L_089DD2B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD2C0;
    }
L_089DD2C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DD2D8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD2D8u) goto L_089DD2D8;
    return;
L_089DD2D8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7848), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD2EC;
    }
L_089DD2EC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x089DD308u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD308u) goto L_089DD308;
    return;
L_089DD308:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x089DD34Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 343u, 0x088EE3C0u>(ctx, &aot_mem) && ctx.pc == 0x089DD34Cu) goto L_089DD34C;
    return;
L_089DD34C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD354;
    }
L_089DD354:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DD370u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD370u) goto L_089DD370;
    return;
L_089DD370:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089DD3A0;
      }
      goto L_089DD390;
    }
L_089DD390:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089DD39Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089DD39Cu) goto L_089DD39C;
    return;
L_089DD39C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DD3A0;
L_089DD3A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[6] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[31] = (0x089DD3D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 362u, 0x088EE534u>(ctx, &aot_mem) && ctx.pc == 0x089DD3D4u) goto L_089DD3D4;
    return;
L_089DD3D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD3DC;
    }
L_089DD3DC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DD3F4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD3F4u) goto L_089DD3F4;
    return;
L_089DD3F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DD404u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089DD404u) goto L_089DD404;
    return;
L_089DD404:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089DD410u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x089DD410u) goto L_089DD410;
    return;
L_089DD410:
    ctx.gpr[31] = (0x089DD418u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x089DD418u) goto L_089DD418;
    return;
L_089DD418:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DD424;
      }
      goto L_089DD424;
    }
L_089DD424:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089DD440u);
    ctx.gpr[4] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 11u, 0x089680B0u>(ctx, &aot_mem) && ctx.pc == 0x089DD440u) goto L_089DD440;
    return;
L_089DD440:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DD454u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DD454u) goto L_089DD454;
    return;
L_089DD454:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD45C;
    }
L_089DD45C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DD474u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD474u) goto L_089DD474;
    return;
L_089DD474:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DD484u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DD484u) goto L_089DD484;
    return;
L_089DD484:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089DD490u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x089DD490u) goto L_089DD490;
    return;
L_089DD490:
    ctx.gpr[31] = (0x089DD498u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x089DD498u) goto L_089DD498;
    return;
L_089DD498:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DD4A4;
      }
      goto L_089DD4A4;
    }
L_089DD4A4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089DD4C0u);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 11u, 0x089680B0u>(ctx, &aot_mem) && ctx.pc == 0x089DD4C0u) goto L_089DD4C0;
    return;
L_089DD4C0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DD4D4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DD4D4u) goto L_089DD4D4;
    return;
L_089DD4D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD4DC;
    }
L_089DD4DC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DD4F4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD4F4u) goto L_089DD4F4;
    return;
L_089DD4F4:
    ctx.gpr[31] = (0x089DD4FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 27u, 0x089681E0u>(ctx, &aot_mem) && ctx.pc == 0x089DD4FCu) goto L_089DD4FC;
    return;
L_089DD4FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD504;
    }
L_089DD504:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DD520u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD520u) goto L_089DD520;
    return;
L_089DD520:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x089DD52Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 37u, 0x089682ACu>(ctx, &aot_mem) && ctx.pc == 0x089DD52Cu) goto L_089DD52C;
    return;
L_089DD52C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD534;
    }
L_089DD534:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DD550u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD550u) goto L_089DD550;
    return;
L_089DD550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x089DD55Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 42u, 0x089682FCu>(ctx, &aot_mem) && ctx.pc == 0x089DD55Cu) goto L_089DD55C;
    return;
L_089DD55C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD564;
    }
L_089DD564:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089DD580u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD580u) goto L_089DD580;
    return;
L_089DD580:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089DD5B0;
      }
      goto L_089DD5A0;
    }
L_089DD5A0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089DD5ACu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089DD5ACu) goto L_089DD5AC;
    return;
L_089DD5AC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DD5B0;
L_089DD5B0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089DD5C0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x089DD5C0u) goto L_089DD5C0;
    return;
L_089DD5C0:
    ctx.gpr[31] = (0x089DD5C8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x089DD5C8u) goto L_089DD5C8;
    return;
L_089DD5C8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
      if (branch_taken) {
          goto L_089DD5D4;
      }
      goto L_089DD5D4;
    }
L_089DD5D4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[17] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[31] = (0x089DD5FCu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 817u, 0x08967E40u>(ctx, &aot_mem) && ctx.pc == 0x089DD5FCu) goto L_089DD5FC;
    return;
L_089DD5FC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DD610u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DD610u) goto L_089DD610;
    return;
L_089DD610:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD618;
    }
L_089DD618:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DD634u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD634u) goto L_089DD634;
    return;
L_089DD634:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x089DD640u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 49u, 0x08968360u>(ctx, &aot_mem) && ctx.pc == 0x089DD640u) goto L_089DD640;
    return;
L_089DD640:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD648;
    }
L_089DD648:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DD664u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD664u) goto L_089DD664;
    return;
L_089DD664:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x089DD688u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 386u, 0x088EE7ACu>(ctx, &aot_mem) && ctx.pc == 0x089DD688u) goto L_089DD688;
    return;
L_089DD688:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD690;
    }
L_089DD690:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DD6A8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD6A8u) goto L_089DD6A8;
    return;
L_089DD6A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DD6D4;
      }
      goto L_089DD6CC;
    }
L_089DD6CC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089DD6E0;
      }
      goto L_089DD6D4;
    }
L_089DD6D4:
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    goto L_089DD6E0;
L_089DD6E0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x089DD700u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 397u, 0x088EE884u>(ctx, &aot_mem) && ctx.pc == 0x089DD700u) goto L_089DD700;
    return;
L_089DD700:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD708;
    }
L_089DD708:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x089DD714u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 116u, 0x088ECFC4u>(ctx, &aot_mem) && ctx.pc == 0x089DD714u) goto L_089DD714;
    return;
L_089DD714:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD724;
      }
      goto L_089DD71C;
    }
L_089DD71C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089DD728;
      }
      goto L_089DD724;
    }
L_089DD724:
    ctx.gpr[4] = (0u | 0u);
    goto L_089DD728;
L_089DD728:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089DD754;
      }
      goto L_089DD74C;
    }
L_089DD74C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DD7A4;
      }
      goto L_089DD754;
    }
L_089DD754:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DD784;
    }
    goto L_089DD770;
L_089DD770:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DD7A4;
      }
      goto L_089DD784;
    }
L_089DD784:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD7A4;
      }
      goto L_089DD7A0;
    }
L_089DD7A0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DD7A4;
L_089DD7A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD7AC;
    }
L_089DD7AC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DD7C8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD7C8u) goto L_089DD7C8;
    return;
L_089DD7C8:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089DD7FC;
      }
      goto L_089DD7EC;
    }
L_089DD7EC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089DD7F8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089DD7F8u) goto L_089DD7F8;
    return;
L_089DD7F8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DD7FC;
L_089DD7FC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089DD818u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 171u, 0x08A24DC0u>(ctx, &aot_mem) && ctx.pc == 0x089DD818u) goto L_089DD818;
    return;
L_089DD818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD820;
    }
L_089DD820:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DD83Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD83Cu) goto L_089DD83C;
    return;
L_089DD83C:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089DD870;
      }
      goto L_089DD860;
    }
L_089DD860:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089DD86Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089DD86Cu) goto L_089DD86C;
    return;
L_089DD86C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DD870;
L_089DD870:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089DD88Cu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 172u, 0x08A24E04u>(ctx, &aot_mem) && ctx.pc == 0x089DD88Cu) goto L_089DD88C;
    return;
L_089DD88C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD894;
    }
L_089DD894:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DD8B0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD8B0u) goto L_089DD8B0;
    return;
L_089DD8B0:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
      if (branch_taken) {
          goto L_089DD8E4;
      }
      goto L_089DD8D4;
    }
L_089DD8D4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089DD8E0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089DD8E0u) goto L_089DD8E0;
    return;
L_089DD8E0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DD8E4;
L_089DD8E4:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[31] = (0x089DD900u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 236u, 0x08A25548u>(ctx, &aot_mem) && ctx.pc == 0x089DD900u) goto L_089DD900;
    return;
L_089DD900:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DD908;
    }
L_089DD908:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DD920u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DD920u) goto L_089DD920;
    return;
L_089DD920:
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
          goto L_089DD9D4;
      }
      goto L_089DD954;
    }
L_089DD954:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DD9D4;
      }
      goto L_089DD964;
    }
L_089DD964:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DD9A4;
      }
      goto L_089DD988;
    }
L_089DD988:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DD9A4;
      }
      goto L_089DD99C;
    }
L_089DD99C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089DD9B0;
      }
      goto L_089DD9A4;
    }
L_089DD9A4:
    ctx.gpr[31] = (0x089DD9ACu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089DD9ACu) goto L_089DD9AC;
    return;
L_089DD9AC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DD9B0;
L_089DD9B0:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDA38;
      }
      goto L_089DD9D4;
    }
L_089DD9D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DDA10;
      }
      goto L_089DD9F4;
    }
L_089DD9F4:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDA10;
      }
      goto L_089DDA08;
    }
L_089DDA08:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089DDA1C;
      }
      goto L_089DDA10;
    }
L_089DDA10:
    ctx.gpr[31] = (0x089DDA18u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDA18u) goto L_089DDA18;
    return;
L_089DDA18:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DDA1C;
L_089DDA1C:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    goto L_089DDA38;
L_089DDA38:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDA58;
      }
      goto L_089DDA4C;
    }
L_089DDA4C:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089DDA58;
L_089DDA58:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDA7C;
      }
      goto L_089DDA70;
    }
L_089DDA70:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089DDA7C;
L_089DDA7C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DDA98u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DDA98u) goto L_089DDA98;
    return;
L_089DDA98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DDAA0;
    }
L_089DDAA0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DDAB8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DDAB8u) goto L_089DDAB8;
    return;
L_089DDAB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DDB38;
      }
      goto L_089DDAEC;
    }
L_089DDAEC:
    ctx.gpr[5] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[5] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1248)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x089DDB38u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x089DDB38u) goto L_089DDB38;
    return;
L_089DDB38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DDB40;
    }
L_089DDB40:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DDB58u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DDB58u) goto L_089DDB58;
    return;
L_089DDB58:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DDB68u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DDB68u) goto L_089DDB68;
    return;
L_089DDB68:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDB80;
      }
      goto L_089DDB78;
    }
L_089DDB78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_089DDB84;
      }
      goto L_089DDB80;
    }
L_089DDB80:
    ctx.gpr[5] = (0u | 0u);
    goto L_089DDB84;
L_089DDB84:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDBF4;
      }
      goto L_089DDB8C;
    }
L_089DDB8C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DDBC4;
      }
      goto L_089DDBA8;
    }
L_089DDBA8:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDBC4;
      }
      goto L_089DDBBC;
    }
L_089DDBBC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089DDBD0;
      }
      goto L_089DDBC4;
    }
L_089DDBC4:
    ctx.gpr[31] = (0x089DDBCCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDBCCu) goto L_089DDBCC;
    return;
L_089DDBCC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DDBD0;
L_089DDBD0:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDC54;
      }
      goto L_089DDBF4;
    }
L_089DDBF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DDC2C;
      }
      goto L_089DDC10;
    }
L_089DDC10:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDC2C;
      }
      goto L_089DDC24;
    }
L_089DDC24:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089DDC38;
      }
      goto L_089DDC2C;
    }
L_089DDC2C:
    ctx.gpr[31] = (0x089DDC34u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDC34u) goto L_089DDC34;
    return;
L_089DDC34:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DDC38;
L_089DDC38:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    goto L_089DDC54;
L_089DDC54:
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDC74;
      }
      goto L_089DDC68;
    }
L_089DDC68:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089DDC74;
L_089DDC74:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDC98;
      }
      goto L_089DDC8C;
    }
L_089DDC8C:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089DDC98;
L_089DDC98:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DDCB4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DDCB4u) goto L_089DDCB4;
    return;
L_089DDCB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DDCBC;
    }
L_089DDCBC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DDCD4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DDCD4u) goto L_089DDCD4;
    return;
L_089DDCD4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DDCE4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DDCE4u) goto L_089DDCE4;
    return;
L_089DDCE4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DDCFC;
      }
      goto L_089DDCF4;
    }
L_089DDCF4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
      if (branch_taken) {
          goto L_089DDD00;
      }
      goto L_089DDCFC;
    }
L_089DDCFC:
    ctx.gpr[4] = (0u | 0u);
    goto L_089DDD00;
L_089DDD00:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DDD4C;
      }
      goto L_089DDD08;
    }
L_089DDD08:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x089DDD4Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x089DDD4Cu) goto L_089DDD4C;
    return;
L_089DDD4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DDD54;
    }
L_089DDD54:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DDD6Cu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DDD6Cu) goto L_089DDD6C;
    return;
L_089DDD6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DDD7Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089DDD7Cu) goto L_089DDD7C;
    return;
L_089DDD7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DDDB4;
      }
      goto L_089DDD98;
    }
L_089DDD98:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDDB4;
      }
      goto L_089DDDAC;
    }
L_089DDDAC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089DDDC0;
      }
      goto L_089DDDB4;
    }
L_089DDDB4:
    ctx.gpr[31] = (0x089DDDBCu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDDBCu) goto L_089DDDBC;
    return;
L_089DDDBC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DDDC0;
L_089DDDC0:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDDFC;
      }
      goto L_089DDDF0;
    }
L_089DDDF0:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089DDDFC;
L_089DDDFC:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDE20;
      }
      goto L_089DDE14;
    }
L_089DDE14:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089DDE20;
L_089DDE20:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DDE3Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DDE3Cu) goto L_089DDE3C;
    return;
L_089DDE3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DDE44;
    }
L_089DDE44:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DDE60u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DDE60u) goto L_089DDE60;
    return;
L_089DDE60:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DDE70u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089DDE70u) goto L_089DDE70;
    return;
L_089DDE70:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x089DDE98u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x089DDE98u) goto L_089DDE98;
    return;
L_089DDE98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DDEA0;
    }
L_089DDEA0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DDEB8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DDEB8u) goto L_089DDEB8;
    return;
L_089DDEB8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DDEC8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089DDEC8u) goto L_089DDEC8;
    return;
L_089DDEC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(16)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_089DDF00;
      }
      goto L_089DDEE4;
    }
L_089DDEE4:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDF00;
      }
      goto L_089DDEF8;
    }
L_089DDEF8:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_089DDF0C;
      }
      goto L_089DDF00;
    }
L_089DDF00:
    ctx.gpr[31] = (0x089DDF08u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089DDF08u) goto L_089DDF08;
    return;
L_089DDF08:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DDF0C;
L_089DDF0C:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDF48;
      }
      goto L_089DDF3C;
    }
L_089DDF3C:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    goto L_089DDF48;
L_089DDF48:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DDF6C;
      }
      goto L_089DDF60;
    }
L_089DDF60:
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089DDF6C;
L_089DDF6C:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DDF88u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DDF88u) goto L_089DDF88;
    return;
L_089DDF88:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DDF90;
    }
L_089DDF90:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DDFACu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DDFACu) goto L_089DDFAC;
    return;
L_089DDFAC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DDFBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089DDFBCu) goto L_089DDFBC;
    return;
L_089DDFBC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089DDFC8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x089DDFC8u) goto L_089DDFC8;
    return;
L_089DDFC8:
    ctx.gpr[4] = (16457u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (17204u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[31] = (0x089DDFF0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x089DDFF0u) goto L_089DDFF0;
    return;
L_089DDFF0:
    ctx.gpr[31] = (0x089DDFF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x089DDFF8u) goto L_089DDFF8;
    return;
L_089DDFF8:
    ctx.gpr[31] = (0x089DE000u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x089DE000u) goto L_089DE000;
    return;
L_089DE000:
    ctx.gpr[31] = (0x089DE008u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x089DE008u) goto L_089DE008;
    return;
L_089DE008:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DE010;
    }
L_089DE010:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DE02Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DE02Cu) goto L_089DE02C;
    return;
L_089DE02C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[17] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DE060u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089DE060u) goto L_089DE060;
    return;
L_089DE060:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[18] = (0u | 0u);
      if (branch_taken) {
          goto L_089DE0A4;
      }
      goto L_089DE074;
    }
L_089DE074:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE0A4;
      }
      goto L_089DE084;
    }
L_089DE084:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089DE094u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 261u, 0x08A0E078u>(ctx, &aot_mem) && ctx.pc == 0x089DE094u) goto L_089DE094;
    return;
L_089DE094:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE0BC;
      }
      goto L_089DE09C;
    }
L_089DE09C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[18] = (0u | 1u);
      if (branch_taken) {
          goto L_089DE0BC;
      }
      goto L_089DE0A4;
    }
L_089DE0A4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x089DE0B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 261u, 0x08A0E078u>(ctx, &aot_mem) && ctx.pc == 0x089DE0B0u) goto L_089DE0B0;
    return;
L_089DE0B0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE0BC;
      }
      goto L_089DE0B8;
    }
L_089DE0B8:
    ctx.gpr[18] = (0u | 1u);
    goto L_089DE0BC;
L_089DE0BC:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_089DE0E8;
      }
      goto L_089DE0E0;
    }
L_089DE0E0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_089DE138;
      }
      goto L_089DE0E8;
    }
L_089DE0E8:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DE118;
    }
    goto L_089DE104;
L_089DE104:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DE138;
      }
      goto L_089DE118;
    }
L_089DE118:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE138;
      }
      goto L_089DE134;
    }
L_089DE134:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DE138;
L_089DE138:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DE140;
    }
L_089DE140:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DE15Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DE15Cu) goto L_089DE15C;
    return;
L_089DE15C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x089DE190u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 668u, 0x0899F758u>(ctx, &aot_mem) && ctx.pc == 0x089DE190u) goto L_089DE190;
    return;
L_089DE190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DE198;
    }
L_089DE198:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DE1B4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DE1B4u) goto L_089DE1B4;
    return;
L_089DE1B4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DE1C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DE1C4u) goto L_089DE1C4;
    return;
L_089DE1C4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089DE1D4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 668u, 0x0899F758u>(ctx, &aot_mem) && ctx.pc == 0x089DE1D4u) goto L_089DE1D4;
    return;
L_089DE1D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DE1DC;
    }
L_089DE1DC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DE1ECu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x089DE1ECu) goto L_089DE1EC;
    return;
L_089DE1EC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7028), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DE208;
    }
L_089DE208:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DE210;
    }
L_089DE210:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DE22Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DE22Cu) goto L_089DE22C;
    return;
L_089DE22C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1208)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DE27C;
      }
      goto L_089DE274;
    }
L_089DE274:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089DE280;
      }
      goto L_089DE27C;
    }
L_089DE27C:
    ctx.gpr[4] = (0u | 0u);
    goto L_089DE280;
L_089DE280:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089DE2AC;
      }
      goto L_089DE2A4;
    }
L_089DE2A4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DE2FC;
      }
      goto L_089DE2AC;
    }
L_089DE2AC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DE2DC;
    }
    goto L_089DE2C8;
L_089DE2C8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DE2FC;
      }
      goto L_089DE2DC;
    }
L_089DE2DC:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE2FC;
      }
      goto L_089DE2F8;
    }
L_089DE2F8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DE2FC;
L_089DE2FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DE304;
    }
L_089DE304:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DE320u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DE320u) goto L_089DE320;
    return;
L_089DE320:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DE330u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DE330u) goto L_089DE330;
    return;
L_089DE330:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DE358;
      }
      goto L_089DE350;
    }
L_089DE350:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089DE35C;
      }
      goto L_089DE358;
    }
L_089DE358:
    ctx.gpr[4] = (0u | 0u);
    goto L_089DE35C;
L_089DE35C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089DE388;
      }
      goto L_089DE380;
    }
L_089DE380:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DE3D8;
      }
      goto L_089DE388;
    }
L_089DE388:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DE3B8;
    }
    goto L_089DE3A4;
L_089DE3A4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DE3D8;
      }
      goto L_089DE3B8;
    }
L_089DE3B8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE3D8;
      }
      goto L_089DE3D4;
    }
L_089DE3D4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DE3D8;
L_089DE3D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DE3E0;
    }
L_089DE3E0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DE3FCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DE3FCu) goto L_089DE3FC;
    return;
L_089DE3FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DE40Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089DE40Cu) goto L_089DE40C;
    return;
L_089DE40C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(616)));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[13])));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DE434;
      }
      goto L_089DE42C;
    }
L_089DE42C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_089DE438;
      }
      goto L_089DE434;
    }
L_089DE434:
    ctx.gpr[4] = (0u | 0u);
    goto L_089DE438;
L_089DE438:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089DE464;
      }
      goto L_089DE45C;
    }
L_089DE45C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DE4B4;
      }
      goto L_089DE464;
    }
L_089DE464:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DE494;
    }
    goto L_089DE480;
L_089DE480:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DE4B4;
      }
      goto L_089DE494;
    }
L_089DE494:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DE4B4;
      }
      goto L_089DE4B0;
    }
L_089DE4B0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DE4B4;
L_089DE4B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DE4BC;
    }
L_089DE4BC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DE4D4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DE4D4u) goto L_089DE4D4;
    return;
L_089DE4D4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DE4E4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089DE4E4u) goto L_089DE4E4;
    return;
L_089DE4E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089DE4F0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x089DE4F0u) goto L_089DE4F0;
    return;
L_089DE4F0:
    ctx.gpr[31] = (0x089DE4F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x089DE4F8u) goto L_089DE4F8;
    return;
L_089DE4F8:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE504;
      }
      goto L_089DE504;
    }
L_089DE504:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE51Cu);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 11u, 0x089680B0u>(ctx, &aot_mem) && ctx.pc == 0x089DE51Cu) goto L_089DE51C;
    return;
L_089DE51C:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089DE52Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 49u, 0x08968360u>(ctx, &aot_mem) && ctx.pc == 0x089DE52Cu) goto L_089DE52C;
    return;
L_089DE52C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DE540u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DE540u) goto L_089DE540;
    return;
L_089DE540:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DE548;
    }
L_089DE548:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DE560u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DE560u) goto L_089DE560;
    return;
L_089DE560:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DE570u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DE570u) goto L_089DE570;
    return;
L_089DE570:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089DE57Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x089DE57Cu) goto L_089DE57C;
    return;
L_089DE57C:
    ctx.gpr[31] = (0x089DE584u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x089DE584u) goto L_089DE584;
    return;
L_089DE584:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE590;
      }
      goto L_089DE590;
    }
L_089DE590:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE5A8u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 11u, 0x089680B0u>(ctx, &aot_mem) && ctx.pc == 0x089DE5A8u) goto L_089DE5A8;
    return;
L_089DE5A8:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089DE5B8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 49u, 0x08968360u>(ctx, &aot_mem) && ctx.pc == 0x089DE5B8u) goto L_089DE5B8;
    return;
L_089DE5B8:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DE5CCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DE5CCu) goto L_089DE5CC;
    return;
L_089DE5CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DE5D4;
    }
L_089DE5D4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DE5ECu);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DE5ECu) goto L_089DE5EC;
    return;
L_089DE5EC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DE5FCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089DE5FCu) goto L_089DE5FC;
    return;
L_089DE5FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x089DE608u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x089DE608u) goto L_089DE608;
    return;
L_089DE608:
    ctx.gpr[31] = (0x089DE610u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x089DE610u) goto L_089DE610;
    return;
L_089DE610:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE61C;
      }
      goto L_089DE61C;
    }
L_089DE61C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (0u | 3u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DE634u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 11u, 0x089680B0u>(ctx, &aot_mem) && ctx.pc == 0x089DE634u) goto L_089DE634;
    return;
L_089DE634:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089DE644u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 49u, 0x08968360u>(ctx, &aot_mem) && ctx.pc == 0x089DE644u) goto L_089DE644;
    return;
L_089DE644:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DE658u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DE658u) goto L_089DE658;
    return;
L_089DE658:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DE660;
    }
L_089DE660:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DE67Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DE67Cu) goto L_089DE67C;
    return;
L_089DE67C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089DE6AC;
      }
      goto L_089DE69C;
    }
L_089DE69C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089DE6A8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089DE6A8u) goto L_089DE6A8;
    return;
L_089DE6A8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DE6AC;
L_089DE6AC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089DE6BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x089DE6BCu) goto L_089DE6BC;
    return;
L_089DE6BC:
    ctx.gpr[31] = (0x089DE6C4u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x089DE6C4u) goto L_089DE6C4;
    return;
L_089DE6C4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
      if (branch_taken) {
          goto L_089DE6D0;
      }
      goto L_089DE6D0;
    }
L_089DE6D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089DE6F0u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 817u, 0x08967E40u>(ctx, &aot_mem) && ctx.pc == 0x089DE6F0u) goto L_089DE6F0;
    return;
L_089DE6F0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DE700u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 49u, 0x08968360u>(ctx, &aot_mem) && ctx.pc == 0x089DE700u) goto L_089DE700;
    return;
L_089DE700:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DE718u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DE718u) goto L_089DE718;
    return;
L_089DE718:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DE720;
    }
L_089DE720:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DE73Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DE73Cu) goto L_089DE73C;
    return;
L_089DE73C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
      if (branch_taken) {
          goto L_089DE76C;
      }
      goto L_089DE75C;
    }
L_089DE75C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089DE768u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089DE768u) goto L_089DE768;
    return;
L_089DE768:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DE76C;
L_089DE76C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089DE77Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x089DE77Cu) goto L_089DE77C;
    return;
L_089DE77C:
    ctx.gpr[31] = (0x089DE784u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x089DE784u) goto L_089DE784;
    return;
L_089DE784:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(248)));
      if (branch_taken) {
          goto L_089DE790;
      }
      goto L_089DE790;
    }
L_089DE790:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DE7B0u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 817u, 0x08967E40u>(ctx, &aot_mem) && ctx.pc == 0x089DE7B0u) goto L_089DE7B0;
    return;
L_089DE7B0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DE7C0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 49u, 0x08968360u>(ctx, &aot_mem) && ctx.pc == 0x089DE7C0u) goto L_089DE7C0;
    return;
L_089DE7C0:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DE7D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DE7D8u) goto L_089DE7D8;
    return;
L_089DE7D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DE7E0;
    }
L_089DE7E0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DE7FCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DE7FCu) goto L_089DE7FC;
    return;
L_089DE7FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x089DE808u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 56u, 0x089683C8u>(ctx, &aot_mem) && ctx.pc == 0x089DE808u) goto L_089DE808;
    return;
L_089DE808:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DE810;
    }
L_089DE810:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DE82Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DE82Cu) goto L_089DE82C;
    return;
L_089DE82C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DE858;
      }
      goto L_089DE83C;
    }
L_089DE83C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 168u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE850u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x089DE850u) goto L_089DE850;
    return;
L_089DE850:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEA90;
      }
      goto L_089DE858;
    }
L_089DE858:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 7u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE88C;
      }
      goto L_089DE870;
    }
L_089DE870:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 159u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE884u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x089DE884u) goto L_089DE884;
    return;
L_089DE884:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEA90;
      }
      goto L_089DE88C;
    }
L_089DE88C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 8u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE8C0;
      }
      goto L_089DE8A4;
    }
L_089DE8A4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 160u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE8B8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x089DE8B8u) goto L_089DE8B8;
    return;
L_089DE8B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEA90;
      }
      goto L_089DE8C0;
    }
L_089DE8C0:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 9u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE8F4;
      }
      goto L_089DE8D8;
    }
L_089DE8D8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 161u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE8ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x089DE8ECu) goto L_089DE8EC;
    return;
L_089DE8EC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEA90;
      }
      goto L_089DE8F4;
    }
L_089DE8F4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 10u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE928;
      }
      goto L_089DE90C;
    }
L_089DE90C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 162u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE920u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x089DE920u) goto L_089DE920;
    return;
L_089DE920:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEA90;
      }
      goto L_089DE928;
    }
L_089DE928:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE95C;
      }
      goto L_089DE940;
    }
L_089DE940:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 77u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE954u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x089DE954u) goto L_089DE954;
    return;
L_089DE954:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEA90;
      }
      goto L_089DE95C;
    }
L_089DE95C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 14u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE990;
      }
      goto L_089DE974;
    }
L_089DE974:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 63u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE988u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x089DE988u) goto L_089DE988;
    return;
L_089DE988:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEA90;
      }
      goto L_089DE990;
    }
L_089DE990:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE9C4;
      }
      goto L_089DE9A8;
    }
L_089DE9A8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 193u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE9BCu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x089DE9BCu) goto L_089DE9BC;
    return;
L_089DE9BC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEA90;
      }
      goto L_089DE9C4;
    }
L_089DE9C4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 70u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DE9F8;
      }
      goto L_089DE9DC;
    }
L_089DE9DC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 196u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DE9F0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x089DE9F0u) goto L_089DE9F0;
    return;
L_089DE9F0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEA90;
      }
      goto L_089DE9F8;
    }
L_089DE9F8:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (0u | 71u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DEA2C;
      }
      goto L_089DEA10;
    }
L_089DEA10:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (0u | 205u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089DEA24u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 138u, 0x088649ECu>(ctx, &aot_mem) && ctx.pc == 0x089DEA24u) goto L_089DEA24;
    return;
L_089DEA24:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEA90;
      }
      goto L_089DEA2C;
    }
L_089DEA2C:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[31] = (0x089DEA38u);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 621u, 0x0896EE34u>(ctx, &aot_mem) && ctx.pc == 0x089DEA38u) goto L_089DEA38;
    return;
L_089DEA38:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DEA54;
      }
      goto L_089DEA44;
    }
L_089DEA44:
    ctx.gpr[31] = (0x089DEA4Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 614u, 0x0896EDC0u>(ctx, &aot_mem) && ctx.pc == 0x089DEA4Cu) goto L_089DEA4C;
    return;
L_089DEA4C:
    ctx.gpr[16] = (ctx.gpr[17] | 0u);
    ctx.gpr[4] = (2269u << 16u);
    goto L_089DEA54;
L_089DEA54:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[5]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DEA90u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 129u, 0x0886492Cu>(ctx, &aot_mem) && ctx.pc == 0x089DEA90u) goto L_089DEA90;
    return;
L_089DEA90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DEA98;
    }
L_089DEA98:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DEAB0u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DEAB0u) goto L_089DEAB0;
    return;
L_089DEAB0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089DEABCu);
    ctx.gpr[4] = (0u | 48u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 621u, 0x0896EE34u>(ctx, &aot_mem) && ctx.pc == 0x089DEABCu) goto L_089DEABC;
    return;
L_089DEABC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    if (ctx.gpr[18] == 0u) {
    ctx.gpr[18] = (2269u << 16u);
        goto L_089DEAD8;
    }
    goto L_089DEAC8;
L_089DEAC8:
    ctx.gpr[31] = (0x089DEAD0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 614u, 0x0896EDC0u>(ctx, &aot_mem) && ctx.pc == 0x089DEAD0u) goto L_089DEAD0;
    return;
L_089DEAD0:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[18] = (2269u << 16u);
    goto L_089DEAD8;
L_089DEAD8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store16(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[31] = (0x089DEB0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 123u, 0x088648B0u>(ctx, &aot_mem) && ctx.pc == 0x089DEB0Cu) goto L_089DEB0C;
    return;
L_089DEB0C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(32), ctx.gpr[2]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15020)));
    ctx.gpr[31] = (0x089DEB20u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 626u, 0x08B02D70u>(ctx, &aot_mem) && ctx.pc == 0x089DEB20u) goto L_089DEB20;
    return;
L_089DEB20:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DEB34u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DEB34u) goto L_089DEB34;
    return;
L_089DEB34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DEB3C;
    }
L_089DEB3C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DEB54u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DEB54u) goto L_089DEB54;
    return;
L_089DEB54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DEB64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15020)));
    if (rt.invoke_chained_direct<&recomp_unit_0192_entry, 192u, 244u, 0x08B052D0u>(ctx, &aot_mem) && ctx.pc == 0x089DEB64u) goto L_089DEB64;
    return;
L_089DEB64:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEB94;
      }
      goto L_089DEB70;
    }
L_089DEB70:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (0x089DEB80u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7827));
    if (rt.invoke_chained_direct<&recomp_unit_0024_entry, 24u, 127u, 0x0886490Cu>(ctx, &aot_mem) && ctx.pc == 0x089DEB80u) goto L_089DEB80;
    return;
L_089DEB80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DEB8Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 616u, 0x0896EDE8u>(ctx, &aot_mem) && ctx.pc == 0x089DEB8Cu) goto L_089DEB8C;
    return;
L_089DEB8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEBA0;
      }
      goto L_089DEB94;
    }
L_089DEB94:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x089DEBA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-6020));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x089DEBA0u) goto L_089DEBA0;
    return;
L_089DEBA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DEBA8;
    }
L_089DEBA8:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DEBC0u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DEBC0u) goto L_089DEBC0;
    return;
L_089DEBC0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DEBD0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089DEBD0u) goto L_089DEBD0;
    return;
L_089DEBD0:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x089DEBE4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24016));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 486u, 0x0895745Cu>(ctx, &aot_mem) && ctx.pc == 0x089DEBE4u) goto L_089DEBE4;
    return;
L_089DEBE4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEBF0;
      }
      goto L_089DEBEC;
    }
L_089DEBEC:
    ctx.gpr[17] = (0u | 1u);
    goto L_089DEBF0;
L_089DEBF0:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_089DEC1C;
      }
      goto L_089DEC14;
    }
L_089DEC14:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089DEC6C;
      }
      goto L_089DEC1C;
    }
L_089DEC1C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DEC4C;
    }
    goto L_089DEC38;
L_089DEC38:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DEC6C;
      }
      goto L_089DEC4C;
    }
L_089DEC4C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DEC6C;
      }
      goto L_089DEC68;
    }
L_089DEC68:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DEC6C;
L_089DEC6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_089DEC78;
      }
      goto L_089DEC74;
    }
L_089DEC74:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_089DEC78;
L_089DEC78:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(252)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(256)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(260)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(264)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(268)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(272)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(288));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DECA0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-256));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-405));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(228), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(100) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(232), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(236), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 209u, 0x089E124Cu>(ctx, &aot_mem); return;
      }
      goto L_089DECDC;
    }
L_089DECDC:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-405));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-5600)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089DECF8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DED10u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DED10u) goto L_089DED10;
    return;
L_089DED10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DED20u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089DED20u) goto L_089DED20;
    return;
L_089DED20:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x089DED30u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24016));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 474u, 0x089573C0u>(ctx, &aot_mem) && ctx.pc == 0x089DED30u) goto L_089DED30;
    return;
L_089DED30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DED38;
    }
L_089DED38:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DED50u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DED50u) goto L_089DED50;
    return;
L_089DED50:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DED60u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089DED60u) goto L_089DED60;
    return;
L_089DED60:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x089DED70u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24016));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 481u, 0x0895741Cu>(ctx, &aot_mem) && ctx.pc == 0x089DED70u) goto L_089DED70;
    return;
L_089DED70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DED78;
    }
L_089DED78:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DED90u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DED90u) goto L_089DED90;
    return;
L_089DED90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DEDA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DEDA0u) goto L_089DEDA0;
    return;
L_089DEDA0:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089DEDD0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x089DEDD0u) goto L_089DEDD0;
    return;
L_089DEDD0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DEDD8;
    }
L_089DEDD8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DEDF0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DEDF0u) goto L_089DEDF0;
    return;
L_089DEDF0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DEE00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DEE00u) goto L_089DEE00;
    return;
L_089DEE00:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089DEE30u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x089DEE30u) goto L_089DEE30;
    return;
L_089DEE30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DEE38;
    }
L_089DEE38:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DEE54u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DEE54u) goto L_089DEE54;
    return;
L_089DEE54:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DEE64u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DEE64u) goto L_089DEE64;
    return;
L_089DEE64:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089DEE98;
      }
      goto L_089DEE88;
    }
L_089DEE88:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089DEE94u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089DEE94u) goto L_089DEE94;
    return;
L_089DEE94:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DEE98;
L_089DEE98:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DEED8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1046u, 0x08893734u>(ctx, &aot_mem) && ctx.pc == 0x089DEED8u) goto L_089DEED8;
    return;
L_089DEED8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DEEE0;
    }
L_089DEEE0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x089DEEFCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DEEFCu) goto L_089DEEFC;
    return;
L_089DEEFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DEF0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DEF0Cu) goto L_089DEF0C;
    return;
L_089DEF0C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
      if (branch_taken) {
          goto L_089DEF38;
      }
      goto L_089DEF2C;
    }
L_089DEF2C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_089DEF38;
L_089DEF38:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_089DEF58;
    }
    goto L_089DEF48;
L_089DEF48:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_089DEF58;
L_089DEF58:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = ctx.fpr[13] + ctx.fpr[24];
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[26];
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089DEF80u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089DEF80u) goto L_089DEF80;
    return;
L_089DEF80:
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[24];
    ctx.fpr[14] = ctx.fpr[22] - ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[14] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          goto L_089DEFA0;
      }
      goto L_089DEF98;
    }
L_089DEF98:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_089DEFA0;
      }
      goto L_089DEFA0;
    }
L_089DEFA0:
    ctx.gpr[4] = (0u | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DEFE8u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 1104u, 0x08893B84u>(ctx, &aot_mem) && ctx.pc == 0x089DEFE8u) goto L_089DEFE8;
    return;
L_089DEFE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DEFF0;
    }
L_089DEFF0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DF008u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DF008u) goto L_089DF008;
    return;
L_089DF008:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DF018u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DF018u) goto L_089DF018;
    return;
L_089DF018:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089DF048u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0035_entry, 35u, 881u, 0x08892EE0u>(ctx, &aot_mem) && ctx.pc == 0x089DF048u) goto L_089DF048;
    return;
L_089DF048:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF050;
    }
L_089DF050:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089DF060u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 705u, 0x0887F3E4u>(ctx, &aot_mem) && ctx.pc == 0x089DF060u) goto L_089DF060;
    return;
L_089DF060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF068;
    }
L_089DF068:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089DF078u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 778u, 0x0887F878u>(ctx, &aot_mem) && ctx.pc == 0x089DF078u) goto L_089DF078;
    return;
L_089DF078:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF080;
    }
L_089DF080:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089DF090u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 855u, 0x0887FCF0u>(ctx, &aot_mem) && ctx.pc == 0x089DF090u) goto L_089DF090;
    return;
L_089DF090:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF098;
    }
L_089DF098:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089DF0A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 621u, 0x0887EDC0u>(ctx, &aot_mem) && ctx.pc == 0x089DF0A8u) goto L_089DF0A8;
    return;
L_089DF0A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF0B0;
    }
L_089DF0B0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DF0CCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DF0CCu) goto L_089DF0CC;
    return;
L_089DF0CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF108u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x089DF108u) goto L_089DF108;
    return;
L_089DF108:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[2]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF114;
    }
L_089DF114:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DF130u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DF130u) goto L_089DF130;
    return;
L_089DF130:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DF140u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DF140u) goto L_089DF140;
    return;
L_089DF140:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF158u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 601u, 0x0899F2F4u>(ctx, &aot_mem) && ctx.pc == 0x089DF158u) goto L_089DF158;
    return;
L_089DF158:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF164u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 585u, 0x0899F1DCu>(ctx, &aot_mem) && ctx.pc == 0x089DF164u) goto L_089DF164;
    return;
L_089DF164:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF1A8;
      }
      goto L_089DF170;
    }
L_089DF170:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF1A8;
      }
      goto L_089DF17C;
    }
L_089DF17C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[31] = (0x089DF19Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 287u, 0x0894D97Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF19Cu) goto L_089DF19C;
    return;
L_089DF19C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(96)));
    ctx.gpr[31] = (0x089DF1A8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 565u, 0x0899F0E4u>(ctx, &aot_mem) && ctx.pc == 0x089DF1A8u) goto L_089DF1A8;
    return;
L_089DF1A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF1B0;
    }
L_089DF1B0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DF1C8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DF1C8u) goto L_089DF1C8;
    return;
L_089DF1C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[31] = (0x089DF1F0u);
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089DF1F0u) goto L_089DF1F0;
    return;
L_089DF1F0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF238;
      }
      goto L_089DF1F8;
    }
L_089DF1F8:
    ctx.gpr[31] = (0x089DF200u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089DF200u) goto L_089DF200;
    return;
L_089DF200:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(404));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-4097));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[31] = (0x089DF218u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089DF218u) goto L_089DF218;
    return;
L_089DF218:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(404));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-2049));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[31] = (0x089DF230u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089DF230u) goto L_089DF230;
    return;
L_089DF230:
    ctx.gpr[31] = (0x089DF238u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 879u, 0x089A3B74u>(ctx, &aot_mem) && ctx.pc == 0x089DF238u) goto L_089DF238;
    return;
L_089DF238:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF29C;
      }
      goto L_089DF24C;
    }
L_089DF24C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF258u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 261u, 0x089D9164u>(ctx, &aot_mem) && ctx.pc == 0x089DF258u) goto L_089DF258;
    return;
L_089DF258:
    ctx.gpr[31] = (0x089DF260u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089DF260u) goto L_089DF260;
    return;
L_089DF260:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DF2FC;
      }
      goto L_089DF270;
    }
L_089DF270:
    ctx.gpr[31] = (0x089DF278u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089DF278u) goto L_089DF278;
    return;
L_089DF278:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(1924)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF2FC;
      }
      goto L_089DF284;
    }
L_089DF284:
    ctx.gpr[31] = (0x089DF28Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089DF28Cu) goto L_089DF28C;
    return;
L_089DF28C:
    ctx.gpr[31] = (0x089DF294u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 767u, 0x0899FDC4u>(ctx, &aot_mem) && ctx.pc == 0x089DF294u) goto L_089DF294;
    return;
L_089DF294:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF2FC;
      }
      goto L_089DF29C;
    }
L_089DF29C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF2A8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 261u, 0x089D9164u>(ctx, &aot_mem) && ctx.pc == 0x089DF2A8u) goto L_089DF2A8;
    return;
L_089DF2A8:
    ctx.gpr[31] = (0x089DF2B0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089DF2B0u) goto L_089DF2B0;
    return;
L_089DF2B0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 39 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF2FC;
      }
      goto L_089DF2C0;
    }
L_089DF2C0:
    ctx.gpr[31] = (0x089DF2C8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089DF2C8u) goto L_089DF2C8;
    return;
L_089DF2C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_089DF2FC;
      }
      goto L_089DF2D8;
    }
L_089DF2D8:
    ctx.gpr[31] = (0x089DF2E0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 133u, 0x088ED0C8u>(ctx, &aot_mem) && ctx.pc == 0x089DF2E0u) goto L_089DF2E0;
    return;
L_089DF2E0:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DF2FC;
      }
      goto L_089DF2EC;
    }
L_089DF2EC:
    ctx.gpr[31] = (0x089DF2F4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x089DF2F4u) goto L_089DF2F4;
    return;
L_089DF2F4:
    ctx.gpr[31] = (0x089DF2FCu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 767u, 0x0899FDC4u>(ctx, &aot_mem) && ctx.pc == 0x089DF2FCu) goto L_089DF2FC;
    return;
L_089DF2FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF304;
    }
L_089DF304:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DF31Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DF31Cu) goto L_089DF31C;
    return;
L_089DF31C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x089DF32Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 556u, 0x08932DB0u>(ctx, &aot_mem) && ctx.pc == 0x089DF32Cu) goto L_089DF32C;
    return;
L_089DF32C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF334;
    }
L_089DF334:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DF34Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DF34Cu) goto L_089DF34C;
    return;
L_089DF34C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[31] = (0x089DF35Cu);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 557u, 0x08932DBCu>(ctx, &aot_mem) && ctx.pc == 0x089DF35Cu) goto L_089DF35C;
    return;
L_089DF35C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF364;
    }
L_089DF364:
    ctx.gpr[31] = (0x089DF36Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 558u, 0x08932DD8u>(ctx, &aot_mem) && ctx.pc == 0x089DF36Cu) goto L_089DF36C;
    return;
L_089DF36C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF374;
    }
L_089DF374:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DF390u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DF390u) goto L_089DF390;
    return;
L_089DF390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF3CC;
      }
      goto L_089DF3C0;
    }
L_089DF3C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_089DF420;
      }
      goto L_089DF3CC;
    }
L_089DF3CC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF420;
      }
      goto L_089DF3DC;
    }
L_089DF3DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[4] << 5u);
    ctx.gpr[7] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (ctx.gpr[6] - ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089DF410;
      }
      goto L_089DF408;
    }
L_089DF408:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2948), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089DF410;
L_089DF410:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[4] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF3DC;
      }
      goto L_089DF420;
    }
L_089DF420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF428;
    }
L_089DF428:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DF444u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DF444u) goto L_089DF444;
    return;
L_089DF444:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DF454u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DF454u) goto L_089DF454;
    return;
L_089DF454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089DF474;
      }
      goto L_089DF460;
    }
L_089DF460:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF46Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 585u, 0x0899F1DCu>(ctx, &aot_mem) && ctx.pc == 0x089DF46Cu) goto L_089DF46C;
    return;
L_089DF46C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF4C8;
      }
      goto L_089DF474;
    }
L_089DF474:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF4C8;
      }
      goto L_089DF484;
    }
L_089DF484:
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
    ctx.gpr[5] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DF4B8;
      }
      goto L_089DF4AC;
    }
L_089DF4AC:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF4B8u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 585u, 0x0899F1DCu>(ctx, &aot_mem) && ctx.pc == 0x089DF4B8u) goto L_089DF4B8;
    return;
L_089DF4B8:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[17] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF484;
      }
      goto L_089DF4C8;
    }
L_089DF4C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF4D0;
    }
L_089DF4D0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DF4F0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DF4F0u) goto L_089DF4F0;
    return;
L_089DF4F0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x089DF500u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089DF500u) goto L_089DF500;
    return;
L_089DF500:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DF538u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DF538u) goto L_089DF538;
    return;
L_089DF538:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF540;
    }
L_089DF540:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DF55Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DF55Cu) goto L_089DF55C;
    return;
L_089DF55C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DF56Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089DF56Cu) goto L_089DF56C;
    return;
L_089DF56C:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089DF5A0;
      }
      goto L_089DF590;
    }
L_089DF590:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x089DF59Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089DF59Cu) goto L_089DF59C;
    return;
L_089DF59C:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_089DF5A0;
L_089DF5A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(104));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x089DF5CCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x089DF5CCu) goto L_089DF5CC;
    return;
L_089DF5CC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089DF5E4u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x089DF5E4u) goto L_089DF5E4;
    return;
L_089DF5E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF5EC;
    }
L_089DF5EC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[6] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089DF60Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DF60Cu) goto L_089DF60C;
    return;
L_089DF60C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF614;
    }
L_089DF614:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DF62Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DF62Cu) goto L_089DF62C;
    return;
L_089DF62C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DF63Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DF63Cu) goto L_089DF63C;
    return;
L_089DF63C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF674;
      }
      goto L_089DF64C;
    }
L_089DF64C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF674;
      }
      goto L_089DF658;
    }
L_089DF658:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
          goto L_089DF688;
      }
      goto L_089DF674;
    }
L_089DF674:
    ctx.gpr[17] = (0u | 0u);
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
    goto L_089DF688;
L_089DF688:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x089DF6DCu);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF6DCu) goto L_089DF6DC;
    return;
L_089DF6DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16329u << 16u);
      if (branch_taken) {
          goto L_089DF708;
      }
      goto L_089DF6F4;
    }
L_089DF6F4:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16329u << 16u);
    goto L_089DF708;
L_089DF708:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DF740;
      }
      goto L_089DF730;
    }
L_089DF730:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089DF740;
L_089DF740:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF758;
      }
      goto L_089DF748;
    }
L_089DF748:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089DF758u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x089DF758u) goto L_089DF758;
    return;
L_089DF758:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF760;
    }
L_089DF760:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DF778u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DF778u) goto L_089DF778;
    return;
L_089DF778:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF7DC;
      }
      goto L_089DF7AC;
    }
L_089DF7AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF7DC;
      }
      goto L_089DF7BC;
    }
L_089DF7BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
          goto L_089DF7F4;
      }
      goto L_089DF7DC;
    }
L_089DF7DC:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
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
    goto L_089DF7F4;
L_089DF7F4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x089DF848u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x089DF848u) goto L_089DF848;
    return;
L_089DF848:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[4] = (16329u << 16u);
      if (branch_taken) {
          goto L_089DF874;
      }
      goto L_089DF860;
    }
L_089DF860:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16329u << 16u);
    goto L_089DF874;
L_089DF874:
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[14]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_089DF8AC;
      }
      goto L_089DF89C;
    }
L_089DF89C:
    ctx.gpr[4] = (16585u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    goto L_089DF8AC;
L_089DF8AC:
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_089DF8CC;
      }
      goto L_089DF8B4;
    }
L_089DF8B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1252), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089DF8CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 43u, 0x08A287ACu>(ctx, &aot_mem) && ctx.pc == 0x089DF8CCu) goto L_089DF8CC;
    return;
L_089DF8CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF8D4;
    }
L_089DF8D4:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DF8F0u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DF8F0u) goto L_089DF8F0;
    return;
L_089DF8F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[6]);
    ctx.gpr[31] = (0x089DF930u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089DF930u) goto L_089DF930;
    return;
L_089DF930:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DF938;
    }
L_089DF938:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DF950u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DF950u) goto L_089DF950;
    return;
L_089DF950:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DF960u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089DF960u) goto L_089DF960;
    return;
L_089DF960:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(208), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x089DF970u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 128u, 0x0887C974u>(ctx, &aot_mem) && ctx.pc == 0x089DF970u) goto L_089DF970;
    return;
L_089DF970:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
      if (branch_taken) {
          goto L_089DF97C;
      }
      goto L_089DF978;
    }
L_089DF978:
    ctx.gpr[4] = (0u | 1u);
    goto L_089DF97C;
L_089DF97C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_089DF9A8;
      }
      goto L_089DF9A0;
    }
L_089DF9A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DF9F8;
      }
      goto L_089DF9A8;
    }
L_089DF9A8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089DF9D8;
    }
    goto L_089DF9C4;
L_089DF9C4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089DF9F8;
      }
      goto L_089DF9D8;
    }
L_089DF9D8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DF9F8;
      }
      goto L_089DF9F4;
    }
L_089DF9F4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089DF9F8;
L_089DF9F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DFA00;
    }
L_089DFA00:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFA18u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DFA18u) goto L_089DFA18;
    return;
L_089DFA18:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DFA28u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DFA28u) goto L_089DFA28;
    return;
L_089DFA28:
    ctx.gpr[31] = (0x089DFA30u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 151u, 0x0887CAC8u>(ctx, &aot_mem) && ctx.pc == 0x089DFA30u) goto L_089DFA30;
    return;
L_089DFA30:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFA54;
      }
      goto L_089DFA3C;
    }
L_089DFA3C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DFA54u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 191u, 0x08958B00u>(ctx, &aot_mem) && ctx.pc == 0x089DFA54u) goto L_089DFA54;
    return;
L_089DFA54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DFA5C;
    }
L_089DFA5C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFA74u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DFA74u) goto L_089DFA74;
    return;
L_089DFA74:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DFA84u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089DFA84u) goto L_089DFA84;
    return;
L_089DFA84:
    ctx.gpr[31] = (0x089DFA8Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 195u, 0x0887CD58u>(ctx, &aot_mem) && ctx.pc == 0x089DFA8Cu) goto L_089DFA8C;
    return;
L_089DFA8C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFAB0;
      }
      goto L_089DFA98;
    }
L_089DFA98:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFAB0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 191u, 0x08958B00u>(ctx, &aot_mem) && ctx.pc == 0x089DFAB0u) goto L_089DFAB0;
    return;
L_089DFAB0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DFAB8;
    }
L_089DFAB8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFAD0u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DFAD0u) goto L_089DFAD0;
    return;
L_089DFAD0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DFAE0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089DFAE0u) goto L_089DFAE0;
    return;
L_089DFAE0:
    ctx.gpr[31] = (0x089DFAE8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 200u, 0x0887CDCCu>(ctx, &aot_mem) && ctx.pc == 0x089DFAE8u) goto L_089DFAE8;
    return;
L_089DFAE8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFB0C;
      }
      goto L_089DFAF4;
    }
L_089DFAF4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DFB0Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 191u, 0x08958B00u>(ctx, &aot_mem) && ctx.pc == 0x089DFB0Cu) goto L_089DFB0C;
    return;
L_089DFB0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DFB14;
    }
L_089DFB14:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFB2Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DFB2Cu) goto L_089DFB2C;
    return;
L_089DFB2C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DFB3Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089DFB3Cu) goto L_089DFB3C;
    return;
L_089DFB3C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089DFB50u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 191u, 0x08958B00u>(ctx, &aot_mem) && ctx.pc == 0x089DFB50u) goto L_089DFB50;
    return;
L_089DFB50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DFB58;
    }
L_089DFB58:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFB70u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DFB70u) goto L_089DFB70;
    return;
L_089DFB70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DFB80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089DFB80u) goto L_089DFB80;
    return;
L_089DFB80:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFB94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 191u, 0x08958B00u>(ctx, &aot_mem) && ctx.pc == 0x089DFB94u) goto L_089DFB94;
    return;
L_089DFB94:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DFB9C;
    }
L_089DFB9C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x089DFBB4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DFBB4u) goto L_089DFBB4;
    return;
L_089DFBB4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DFBC4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x089DFBC4u) goto L_089DFBC4;
    return;
L_089DFBC4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089DFBD8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 191u, 0x08958B00u>(ctx, &aot_mem) && ctx.pc == 0x089DFBD8u) goto L_089DFBD8;
    return;
L_089DFBD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 210u, 0x089E1250u>(ctx, &aot_mem); return;
      }
      goto L_089DFBE0;
    }
L_089DFBE0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089DFBFCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x089DFBFCu) goto L_089DFBFC;
    return;
L_089DFBFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x089DFC0Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089DFC0Cu) goto L_089DFC0C;
    return;
L_089DFC0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_089DFD64;
      }
      goto L_089DFC20;
    }
L_089DFC20:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089DFC7C;
      }
      goto L_089DFC30;
    }
L_089DFC30:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_089DFCAC;
      }
      goto L_089DFC38;
    }
L_089DFC38:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_089DFCDC;
      }
      goto L_089DFC40;
    }
L_089DFC40:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089DFD0C;
      }
      goto L_089DFC48;
    }
L_089DFC48:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089DFD3C;
      }
      goto L_089DFC50;
    }
L_089DFC50:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFC74;
      }
      goto L_089DFC68;
    }
L_089DFC68:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_089DFC74;
L_089DFC74:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFD64;
      }
      goto L_089DFC7C;
    }
L_089DFC7C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFCA4;
      }
      goto L_089DFC94;
    }
L_089DFC94:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089DFCA4;
L_089DFCA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFD64;
      }
      goto L_089DFCAC;
    }
L_089DFCAC:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFCD4;
      }
      goto L_089DFCC4;
    }
L_089DFCC4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089DFCD4;
L_089DFCD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFD64;
      }
      goto L_089DFCDC;
    }
L_089DFCDC:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFD04;
      }
      goto L_089DFCF4;
    }
L_089DFCF4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089DFD04;
L_089DFD04:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFD64;
      }
      goto L_089DFD0C;
    }
L_089DFD0C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFD34;
      }
      goto L_089DFD24;
    }
L_089DFD24:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089DFD34;
L_089DFD34:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFD64;
      }
      goto L_089DFD3C;
    }
L_089DFD3C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFD64;
      }
      goto L_089DFD54;
    }
L_089DFD54:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089DFD64;
L_089DFD64:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFDB4;
      }
      goto L_089DFD7C;
    }
L_089DFD7C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089DFD88u);
    ctx.gpr[4] = (0u | 2128u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x089DFD88u) goto L_089DFD88;
    return;
L_089DFD88:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DFDAC;
      }
      goto L_089DFD94;
    }
L_089DFD94:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089DFDA8u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 726u, 0x08A8F734u>(ctx, &aot_mem) && ctx.pc == 0x089DFDA8u) goto L_089DFDA8;
    return;
L_089DFDA8:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089DFDAC;
L_089DFDAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089DFE48;
      }
      goto L_089DFDB4;
    }
L_089DFDB4:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DFDE0;
      }
      goto L_089DFDCC;
    }
L_089DFDCC:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089DFE14;
      }
      goto L_089DFDE0;
    }
L_089DFDE0:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089DFDECu);
    ctx.gpr[4] = (0u | 2096u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x089DFDECu) goto L_089DFDEC;
    return;
L_089DFDEC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DFE0C;
      }
      goto L_089DFDF8;
    }
L_089DFDF8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089DFE08u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 435u, 0x0894E808u>(ctx, &aot_mem) && ctx.pc == 0x089DFE08u) goto L_089DFE08;
    return;
L_089DFE08:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089DFE0C;
L_089DFE0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[5] = (0u | 2u);
      if (branch_taken) {
          goto L_089DFE48;
      }
      goto L_089DFE14;
    }
L_089DFE14:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089DFE20u);
    ctx.gpr[4] = (0u | 2160u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x089DFE20u) goto L_089DFE20;
    return;
L_089DFE20:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089DFE44;
      }
      goto L_089DFE2C;
    }
L_089DFE2C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089DFE40u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 143u, 0x089FD478u>(ctx, &aot_mem) && ctx.pc == 0x089DFE40u) goto L_089DFE40;
    return;
L_089DFE40:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_089DFE44;
L_089DFE44:
    ctx.gpr[5] = (0u | 2u);
    goto L_089DFE48;
L_089DFE48:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (65534u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (65504u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFEB4;
      }
      goto L_089DFEA0;
    }
L_089DFEA0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_089DFEB4;
L_089DFEB4:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089DFF00u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x089DFF00u) goto L_089DFF00;
    return;
L_089DFF00:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[31] = (0x089DFF14u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x089DFF14u) goto L_089DFF14;
    return;
L_089DFF14:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020), ctx.gpr[5]);
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x089DFF34u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x089DFF34u) goto L_089DFF34;
    return;
L_089DFF34:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x089DFF40u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x089DFF40u) goto L_089DFF40;
    return;
L_089DFF40:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_089DFF68;
      }
      goto L_089DFF54;
    }
L_089DFF54:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089DFF60u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 643u, 0x0889F120u>(ctx, &aot_mem) && ctx.pc == 0x089DFF60u) goto L_089DFF60;
    return;
L_089DFF60:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFF84;
      }
      goto L_089DFF68;
    }
L_089DFF68:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x089DFF84u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 654u, 0x0889F270u>(ctx, &aot_mem) && ctx.pc == 0x089DFF84u) goto L_089DFF84;
    return;
L_089DFF84:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1332), ctx.gpr[19]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1332));
    ctx.gpr[31] = (0x089DFF94u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x089DFF94u) goto L_089DFF94;
    return;
L_089DFF94:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089DFFDC;
      }
      goto L_089DFFAC;
    }
L_089DFFAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089DFFD4;
      }
      goto L_089DFFB8;
    }
L_089DFFB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_089DFFD4;
    }
    goto L_089DFFC4;
L_089DFFC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089DFFD0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089DFFD0u) goto L_089DFFD0;
    return;
L_089DFFD0:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_089DFFD4;
L_089DFFD4:
    ctx.gpr[31] = (0x089DFFDCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089DFFDCu) goto L_089DFFDC;
    return;
L_089DFFDC:
    ctx.gpr[5] = (0u | 50u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[6] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    ctx.pc = 0x089E0000u; return;
}

void recomp_unit_0118(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0118_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_118(Runtime &runtime) {
    runtime.register_generated_unit(118u, 0x089DC000u, 16384u, &recomp_unit_0118, &recomp_unit_0118_entry);
    runtime.register_function(0x089DC004u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC010u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC024u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC02Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC038u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC048u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC050u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC054u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC06Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC08Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC098u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC0E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC120u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC128u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC134u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC148u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC150u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC15Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC168u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC178u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC180u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC184u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC19Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC210u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC21Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC230u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC238u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC23Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC26Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC280u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC2C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC2E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC2F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC30Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC394u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC3C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC3D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC414u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC460u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC46Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC4B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC4E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC4E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC510u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC514u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC520u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC52Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC534u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC578u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC60Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC640u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC65Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC674u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC6A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC6ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC6D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC6D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC6F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC708u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC724u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC728u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC730u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC74Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC75Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC76Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC774u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC778u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC79Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC7A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC7C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC7D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC7F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC7F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC7FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC814u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC824u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC834u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC84Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC858u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC860u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC864u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC888u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC890u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC8E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC908u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC964u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC978u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC980u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC99Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC9D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC9D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC9E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DC9F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCA90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCAA8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCAB0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCAC0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCAD8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCAE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCAF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB74u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCB9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCBC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCC98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCCA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCCB0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCCB8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCCBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCCF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD04u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCD94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDD8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCDF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCE90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCEF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCF94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCFBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCFC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCFD4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCFDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DCFE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD004u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD014u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD020u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD028u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD044u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD070u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD078u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD090u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD0FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD10Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD118u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD148u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD150u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD15Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD164u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD184u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD1A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD1BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD1C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD1D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD1E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD1E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD29Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD2ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD2B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD2C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD2D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD2ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD308u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD34Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD354u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD370u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD390u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD39Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD3A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD3D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD3DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD3F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD404u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD410u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD418u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD424u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD440u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD454u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD45Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD474u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD484u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD490u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD498u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD4FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD504u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD520u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD52Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD534u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD550u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD55Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD564u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD580u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD5FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD610u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD618u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD634u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD640u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD648u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD664u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD688u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD690u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD6E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD700u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD708u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD714u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD71Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD724u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD728u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD74Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD754u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD770u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD784u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD7FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD818u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD820u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD83Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD860u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD86Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD870u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD88Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD894u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD8E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD900u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD908u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD920u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD954u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD964u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD988u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD99Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DD9F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA1Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA58u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDA98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAB8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDAECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB58u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDB8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBA8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBCCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDBF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC74u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDC98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCD4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCE4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDCFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDD98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDC0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDDFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDE98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDEA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDEB8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDEC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDEE4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDEF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDF90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFBCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DDFF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE000u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE008u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE010u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE02Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE060u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE074u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE084u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE094u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE09Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE0E8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE104u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE118u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE134u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE138u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE140u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE15Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE190u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE198u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE1ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE208u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE210u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE22Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE274u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE27Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE280u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE2FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE304u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE320u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE330u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE350u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE358u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE35Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE380u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE388u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE3FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE40Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE42Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE434u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE438u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE45Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE464u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE480u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE494u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE4F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE504u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE51Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE52Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE540u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE548u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE560u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE570u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE57Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE584u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE590u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE5FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE608u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE610u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE61Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE634u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE644u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE658u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE660u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE67Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE69Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE6F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE700u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE718u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE720u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE73Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE75Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE768u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE76Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE77Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE784u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE790u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE7FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE808u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE810u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE82Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE83Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE850u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE858u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE870u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE884u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE88Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8A4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE8F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE90Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE920u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE928u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE940u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE954u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE95Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE974u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE988u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE990u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DE9F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEA98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAB0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEABCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAC8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEAD8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEB94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBA8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBC0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBE4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEBF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC1Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC4Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC6Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC74u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEC78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DECF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED10u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED78u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DED90u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDD8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEDF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEE98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEED8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEEE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEEFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF58u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEF98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEFA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEFE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DEFF0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF008u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF018u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF048u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF050u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF060u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF068u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF078u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF080u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF090u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF098u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF0A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF0B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF0CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF108u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF114u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF130u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF140u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF158u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF164u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF170u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF17Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF19Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF1A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF1B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF1C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF1F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF1F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF200u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF218u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF230u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF238u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF24Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF258u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF260u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF270u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF278u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF284u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF28Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF294u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF29Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2B0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2E0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF2FCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF304u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF31Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF32Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF334u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF34Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF35Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF364u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF36Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF374u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF390u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3C0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF3DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF408u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF410u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF420u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF428u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF444u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF454u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF460u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF46Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF474u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF484u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4B8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4C8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4D0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF4F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF500u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF538u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF540u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF55Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF56Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF590u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF59Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5E4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF5ECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF60Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF614u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF62Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF63Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF64Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF658u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF674u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF688u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF6DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF6F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF708u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF730u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF740u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF748u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF758u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF760u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF778u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7BCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7DCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF7F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF848u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF860u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF874u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF89Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8ACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8B4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8CCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8D4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF8F0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF930u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF938u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF950u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF960u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF970u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF978u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF97Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9A0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9A8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9C4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9D8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9F4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DF9F8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA18u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA28u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA5Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA74u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA8Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFA98u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAB0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAB8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAE8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFAF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB58u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB70u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB80u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFB9Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBD8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFBFCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC30u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC38u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC50u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC74u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFC94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCA4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCD4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCDCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFCF4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD04u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD24u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD3Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD64u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD7Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD88u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFD94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDA8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDCCu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDE0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDECu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFDF8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE08u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE0Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE20u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE2Cu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE44u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFE48u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEA0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFEB4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF00u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF14u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF34u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF40u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF54u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF60u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF68u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF84u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFF94u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFACu, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFB8u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFC4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFD0u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFD4u, &recomp_unit_0118, "recomp_unit_0118");
    runtime.register_function(0x089DFFDCu, &recomp_unit_0118, "recomp_unit_0118");
}
} // namespace psprecomp
