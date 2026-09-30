#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0135[4096] = {
    1, 2, 0, 3, 4, 0, 0, 0, 0, 0, 5, 0, 0, 6, 0, 7, 8, 0, 0, 0, 9, 0, 10, 11, 0, 0, 0, 0, 0, 0, 0, 0,
    12, 0, 13, 0, 0, 0, 0, 0, 0, 14, 0, 0, 0, 0, 15, 0, 0, 0, 0, 0, 0, 16, 17, 0, 18, 0, 0, 0, 0, 0, 19, 0,
    0, 20, 0, 0, 0, 0, 0, 0, 0, 21, 0, 0, 22, 0, 23, 0, 24, 0, 25, 0, 26, 0, 0, 0, 0, 0, 0, 0, 27, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 29, 0, 30, 0, 0, 0, 0, 0, 31, 0, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0, 0, 0,
    0, 34, 0, 0, 0, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 0, 0, 36, 0, 0, 37, 0, 0, 0, 38, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 39, 0, 40, 0, 41, 0, 42, 0,
    43, 0, 44, 0, 45, 0, 46, 0, 47, 0, 48, 0, 0, 0, 0, 0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 51, 52,
    0, 0, 0, 0, 0, 53, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 54, 0, 0, 55, 0, 56, 0, 57, 0, 0, 0, 0, 0, 58,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 60, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 62, 0, 0, 0, 0, 0, 0, 63,
    0, 0, 0, 0, 64, 0, 0, 0, 0, 0, 0, 65, 66, 0, 67, 0, 0, 0, 0, 0, 68, 0, 0, 69, 0, 70, 71, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 72, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 73, 0, 0, 0, 0, 0, 0, 74, 0, 0, 0,
    0, 0, 75, 0, 0, 76, 0, 77, 0, 0, 0, 0, 0, 78, 0, 0, 79, 0, 80, 0, 0, 0, 0, 0, 0, 81, 0, 0, 0, 0, 0, 0,
    0, 0, 82, 0, 0, 83, 84, 0, 0, 0, 0, 0, 0, 0, 85, 0, 86, 0, 0, 0, 0, 0, 0, 87, 0, 0, 0, 0, 0, 0, 0, 88,
    0, 0, 89, 0, 0, 0, 90, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 0, 0, 0, 92, 0, 0, 0, 0, 0, 0, 93, 0, 94, 0, 0,
    0, 0, 0, 0, 0, 95, 0, 96, 0, 0, 0, 0, 0, 97, 0, 0, 98, 0, 99, 0, 0, 0, 0, 0, 0, 100, 0, 0, 0, 101, 0, 0,
    0, 102, 0, 103, 0, 0, 0, 0, 0, 0, 104, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 105, 0, 106, 0, 0, 0, 0, 0, 0,
    107, 0, 0, 0, 108, 0, 0, 0, 109, 0, 110, 0, 0, 0, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0,
    113, 0, 0, 0, 0, 0, 0, 114, 0, 0, 0, 115, 0, 0, 0, 116, 0, 117, 0, 0, 0, 0, 0, 0, 118, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 119, 0, 120, 0, 0, 0, 0, 0, 0, 121, 0, 0, 0, 122, 0, 0, 0, 123, 0, 124, 0, 0, 0, 0, 0, 0, 125,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 129, 0, 0, 0, 130, 0, 131,
    0, 0, 0, 0, 0, 0, 132, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 133, 0, 134, 0, 0, 0, 0, 0, 135, 0, 0, 136, 0,
    137, 0, 0, 0, 0, 0, 0, 138, 0, 0, 0, 139, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0,
    144, 0, 145, 0, 146, 0, 147, 0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 0, 0, 150, 0, 0, 0, 151, 0, 152, 0, 0, 0, 0, 0, 0,
    153, 0, 0, 0, 0, 0, 0, 0, 154, 0, 0, 155, 0, 0, 0, 156, 0, 0, 0, 157, 0, 0, 0, 0, 0, 0, 0, 0, 0, 158, 0, 0,
    0, 0, 0, 0, 159, 0, 160, 0, 0, 0, 0, 0, 0, 0, 0, 161, 0, 162, 0, 163, 0, 164, 0, 165, 0, 0, 0, 0, 0, 0, 166, 0,
    0, 0, 0, 0, 0, 0, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 169, 0, 0, 0, 0, 170, 0, 0, 0, 0, 0, 0, 171, 0, 172, 0,
    173, 0, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 0, 175, 0, 0, 176, 0, 0, 0, 177, 0, 0, 0, 178, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 179, 0, 0, 0, 0, 0, 0, 180, 0, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0, 0, 0, 0, 0, 184,
    0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 0, 187, 0, 0, 0, 0, 0, 0, 0, 188, 0, 0, 0, 0, 189, 0, 0, 0, 0, 190,
    0, 0, 0, 0, 191, 0, 192, 0, 0, 0, 0, 0, 0, 193, 0, 194, 0, 0, 0, 0, 195, 0, 196, 0, 0, 0, 0, 0, 197, 0, 0, 0,
    198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 0, 0, 0, 0, 0, 200, 0, 0, 0, 201, 0, 202, 0, 0, 0, 0, 0, 203, 0, 0, 204,
    0, 205, 0, 206, 0, 0, 0, 0, 0, 0, 0, 0, 207, 0, 0, 0, 0, 0, 0, 0, 208, 0, 0, 209, 0, 0, 210, 0, 0, 211, 0, 0,
    0, 0, 0, 0, 212, 0, 0, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 217, 0,
    0, 0, 0, 0, 0, 218, 219, 0, 220, 0, 0, 0, 221, 0, 222, 0, 0, 0, 223, 0, 224, 0, 0, 0, 225, 0, 226, 0, 0, 0, 227, 0,
    228, 0, 0, 0, 229, 0, 230, 0, 0, 0, 0, 0, 231, 0, 0, 0, 0, 232, 0, 0, 0, 0, 0, 0, 0, 0, 233, 0, 0, 0, 0, 0,
    0, 0, 234, 0, 235, 0, 236, 0, 0, 0, 0, 0, 0, 237, 0, 0, 0, 238, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0, 0,
    241, 0, 0, 0, 242, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 0, 0, 0, 245, 0, 246, 0, 247,
    0, 0, 0, 0, 0, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 0, 251, 0, 0, 0, 252, 0, 0, 0, 0, 253, 0, 0, 254,
    0, 255, 0, 0, 0, 0, 0, 256, 0, 0, 0, 257, 0, 0, 0, 0, 0, 258, 0, 0, 0, 259, 0, 0, 0, 260, 0, 0, 0, 261, 262, 0,
    0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 0, 0, 0, 0, 0, 0, 265, 0, 0, 0, 0, 266, 0, 0, 0, 0, 0, 0, 267, 268, 0, 269,
    0, 0, 0, 0, 0, 270, 0, 0, 0, 0, 0, 271, 0, 0, 272, 0, 273, 0, 0, 274, 0, 275, 0, 276, 0, 277, 0, 0, 0, 0, 0, 0,
    278, 0, 279, 0, 0, 0, 0, 280, 0, 281, 0, 0, 0, 0, 0, 282, 0, 0, 283, 0, 0, 0, 0, 0, 0, 0, 284, 0, 0, 285, 0, 0,
    286, 0, 0, 287, 288, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 289, 0, 0, 290, 291, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 292, 0, 0, 0, 0, 293, 0, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 297, 0, 0, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 300,
    0, 0, 0, 0, 0, 301, 0, 302, 0, 0, 0, 0, 0, 303, 0, 0, 0, 304, 0, 0, 305, 0, 0, 306, 307, 0, 0, 0, 0, 0, 0, 0,
    0, 308, 0, 309, 0, 0, 0, 0, 0, 0, 310, 0, 0, 0, 0, 311, 0, 0, 0, 0, 0, 0, 312, 313, 0, 314, 0, 0, 0, 0, 0, 315,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 316, 0, 317, 318, 0, 0, 0, 0, 0, 0, 0, 0, 319, 0, 320, 0, 0, 0, 0, 0,
    0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 0, 0, 323, 324, 0, 325, 0, 0, 0, 0, 0, 326, 0, 0, 0, 327, 0, 0, 0, 328, 0,
    329, 330, 0, 0, 0, 0, 0, 0, 0, 0, 331, 0, 332, 0, 0, 0, 0, 0, 0, 333, 0, 0, 0, 0, 334, 0, 0, 0, 0, 0, 0, 335,
    336, 0, 337, 0, 0, 0, 0, 0, 0, 338, 0, 0, 0, 0, 0, 0, 0, 339, 0, 340, 0, 341, 0, 0, 0, 0, 0, 342, 0, 0, 343, 0,
    0, 344, 0, 345, 0, 0, 0, 0, 0, 346, 0, 347, 0, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 0, 0, 349, 0, 0, 350, 0,
    351, 0, 0, 352, 0, 353, 0, 0, 354, 0, 0, 0, 0, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 358, 0, 0,
    0, 0, 0, 0, 359, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 362, 0, 0, 363, 0, 364, 0, 0, 365, 0, 0, 0, 0, 0,
    0, 0, 366, 0, 0, 0, 0, 0, 367, 0, 0, 0, 0, 368, 0, 369, 0, 0, 0, 0, 0, 0, 370, 0, 0, 0, 371, 0, 0, 0, 372, 0,
    0, 0, 0, 373, 0, 0, 0, 0, 374, 0, 375, 0, 0, 0, 0, 0, 0, 376, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0, 379, 0,
    0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 386, 0,
    0, 0, 0, 387, 0, 0, 0, 0, 388, 0, 0, 0, 0, 389, 0, 0, 0, 0, 390, 0, 0, 0, 0, 391, 0, 0, 0, 0, 392, 0, 0, 0,
    0, 393, 0, 0, 0, 0, 394, 0, 0, 0, 0, 395, 0, 0, 0, 0, 396, 0, 0, 0, 0, 397, 0, 0, 0, 0, 398, 0, 399, 0, 0, 0,
    0, 0, 0, 400, 0, 0, 0, 401, 0, 0, 0, 402, 0, 0, 0, 0, 403, 0, 0, 0, 0, 404, 0, 0, 0, 0, 405, 0, 0, 0, 0, 406,
    0, 0, 0, 0, 407, 0, 0, 0, 0, 408, 0, 0, 0, 0, 409, 0, 0, 0, 0, 410, 0, 0, 0, 0, 411, 0, 0, 0, 0, 412, 0, 0,
    0, 0, 413, 0, 0, 0, 0, 414, 0, 0, 0, 0, 415, 0, 0, 0, 0, 416, 0, 417, 0, 0, 0, 418, 0, 419, 420, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 421, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 422, 0, 0, 0, 0, 0, 0, 423, 0, 0, 0,
    0, 0, 424, 0, 0, 0, 425, 0, 0, 0, 426, 0, 0, 0, 427, 428, 0, 0, 0, 0, 0, 0, 0, 0, 429, 0, 430, 0, 0, 0, 0, 0,
    0, 431, 0, 0, 0, 0, 432, 0, 0, 0, 0, 0, 0, 433, 434, 0, 435, 0, 0, 0, 0, 0, 0, 436, 0, 0, 0, 0, 0, 0, 0, 0,
    437, 0, 0, 438, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 0, 443, 0, 0, 0, 0, 0, 0, 0, 0, 444, 0, 0, 445,
    446, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 447, 0, 0, 0, 448, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 449, 0,
    450, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 452, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 454, 455, 0, 456, 0, 0, 0, 0,
    0, 0, 0, 0, 457, 0, 458, 0, 0, 459, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 462, 0, 0, 463,
    0, 464, 0, 0, 0, 0, 0, 465, 0, 0, 0, 466, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 467, 0, 468, 0, 469, 470, 0,
    0, 0, 0, 0, 0, 0, 0, 471, 0, 472, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 474, 0, 0, 0, 0, 0, 0, 475, 476, 0, 477,
    0, 0, 0, 0, 0, 478, 0, 0, 0, 479, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 480, 0, 481, 0, 482, 483, 0, 0, 0,
    0, 0, 0, 0, 0, 484, 0, 485, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 487, 0, 0, 0, 0, 0, 0, 488, 489, 0, 490, 0, 0,
    0, 0, 0, 491, 0, 0, 0, 492, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 493, 0, 494, 0, 495, 496, 0, 0, 0, 0, 0,
    0, 0, 0, 497, 0, 498, 0, 0, 0, 0, 0, 0, 499, 0, 0, 0, 0, 500, 0, 0, 0, 0, 0, 0, 501, 502, 0, 503, 0, 0, 0, 0,
    0, 504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 0, 0, 0, 0, 0, 0, 506, 0, 0, 0, 0, 507, 0, 0, 0, 0, 0,
    508, 0, 509, 0, 0, 0, 0, 0, 0, 510, 0, 0, 0, 0, 0, 0, 0, 0, 511, 0, 0, 512, 513, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 514, 0, 0, 0, 0, 0, 515, 0, 516, 0, 0, 0, 0, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 519, 520, 0, 0, 0, 0, 0,
    0, 0, 0, 521, 0, 522, 0, 0, 0, 0, 0, 0, 523, 0, 0, 0, 0, 524, 0, 0, 0, 0, 0, 0, 525, 526, 0, 527, 0, 0, 0, 0,
    0, 528, 0, 0, 0, 0, 0, 529, 0, 530, 0, 0, 0, 0, 0, 0, 531, 0, 0, 0, 532, 0, 0, 0, 0, 0, 0, 0, 0, 0, 533, 0,
    0, 0, 0, 0, 534, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 535, 0, 0, 0, 0, 0, 536, 0, 0,
    0, 0, 0, 537, 0, 0, 0, 538, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 541, 0, 0, 0, 0, 0, 0, 0, 542, 0, 543, 544, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0,
    546, 0, 0, 0, 0, 0, 0, 547, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 549, 550, 0, 0, 0, 0, 551, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 552, 0, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 0, 555, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 556, 557, 0, 0, 0, 0, 0, 0, 0, 0, 558, 0, 559, 0, 0, 0, 0, 0, 0, 560, 0, 0, 0, 0, 561, 0,
    0, 0, 0, 0, 0, 562, 563, 0, 564, 0, 0, 0, 0, 0, 0, 565, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 568, 0,
    0, 0, 0, 0, 0, 0, 0, 569, 0, 570, 0, 0, 0, 0, 0, 0, 571, 0, 0, 0, 0, 572, 0, 0, 0, 0, 0, 0, 573, 574, 0, 575,
    0, 0, 0, 0, 0, 0, 576, 0, 0, 0, 577, 0, 0, 0, 0, 0, 578, 0, 0, 0, 0, 0, 0, 579, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 580, 0, 581, 0, 582, 0, 0, 583, 0, 0, 0, 0, 0, 0, 0, 584, 0, 585, 0, 0, 0, 0, 0, 586, 0, 587, 0, 0, 0, 588, 0,
    0, 0, 589, 0, 0, 0, 590, 0, 591, 0, 592, 0, 0, 0, 593, 0, 0, 0, 0, 594, 0, 0, 595, 0, 0, 0, 0, 0, 0, 0, 596, 0,
    597, 0, 0, 0, 598, 0, 0, 599, 0, 0, 0, 0, 0, 600, 0, 601, 0, 0, 0, 0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0,
    0, 0, 604, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 607, 0,
    0, 0, 0, 0, 608, 0, 609, 0, 0, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 611, 0, 0, 0, 612, 0, 0, 613, 0, 0, 0, 614, 0,
    0, 0, 0, 0, 0, 615, 0, 0, 0, 0, 0, 616, 0, 617, 0, 618, 0, 0, 619, 0, 0, 0, 0, 0, 0, 0, 620, 0, 621, 0, 0, 0,
    0, 0, 622, 0, 623, 0, 0, 0, 624, 0, 0, 0, 625, 0, 0, 0, 626, 0, 627, 0, 628, 0, 0, 0, 629, 0, 0, 0, 0, 630, 0, 0,
    631, 0, 0, 0, 0, 0, 0, 0, 632, 0, 633, 0, 0, 0, 634, 0, 0, 635, 0, 0, 0, 0, 0, 0, 0, 0, 636, 0, 637, 0, 0, 0,
    0, 0, 0, 638, 0, 0, 0, 0, 0, 639, 0, 0, 0, 640, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 641, 0, 0, 0, 0, 642, 0, 643, 0, 0, 0, 0, 0, 644, 0, 645, 0, 0, 0, 0, 0, 646, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 647, 0, 0, 0, 648, 0, 0, 0, 0, 0, 649, 0, 0, 0, 650, 0, 0, 0, 651, 0, 0, 0, 652, 653, 0, 0, 0,
    0, 0, 0, 0, 0, 654, 0, 655, 0, 0, 0, 0, 0, 0, 656, 0, 0, 0, 0, 657, 0, 0, 0, 0, 0, 0, 658, 659, 0, 660, 0, 0,
    0, 0, 0, 661, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 662, 663, 0, 0, 0, 0, 0, 0, 0, 0, 664, 0, 665,
    0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 668, 669, 0, 670, 0, 0, 0, 0, 0, 671, 0, 0, 0, 672,
    0, 0, 0, 0, 0, 673, 674, 0, 0, 0, 0, 0, 0, 0, 0, 675, 0, 676, 0, 0, 0, 0, 0, 0, 677, 0, 0, 0, 0, 678, 0, 0,
    0, 0, 0, 0, 679, 680, 0, 681, 0, 0, 0, 0, 0, 0, 682, 0, 0, 0, 0, 0, 0, 0, 0, 683, 0, 0, 684, 0, 0, 0, 685, 0,
    0, 686, 0, 687, 0, 0, 688, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 689, 0, 0, 0, 0, 690, 0, 691, 0, 0, 0,
    0, 0, 0, 692, 0, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 0, 0, 0, 695, 0, 0, 0, 0,
    0, 0, 696, 0, 0, 0, 697, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 698, 0, 699, 0, 0, 0, 0, 0, 0, 0, 700,
    0, 0, 0, 0, 701, 0, 702, 0, 703, 0, 0, 0, 0, 0, 0, 704, 0, 705, 0, 0, 0, 706, 0, 0, 0, 0, 707, 0, 708, 0, 0, 0,
    0, 0, 709, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 0, 0, 0, 0, 712, 0, 713, 0, 714, 0, 715, 0, 716, 0, 0,
    0, 0, 0, 717, 0, 718, 0, 719, 0, 720, 0, 0, 0, 721, 0, 722, 723, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 725, 0, 0, 0, 0,
    0, 0, 726, 0, 0, 0, 0, 727, 0, 0, 0, 0, 0, 0, 728, 729, 0, 730, 0, 0, 731, 0, 732, 0, 733, 0, 0, 0, 734, 0, 735, 0,
    0, 0, 0, 0, 0, 736, 0, 0, 0, 0, 0, 0, 0, 0, 737, 0, 0, 738, 0, 0, 739, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 740, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 743, 0, 0, 0, 0, 0, 0, 744, 0,
    0, 0, 745, 0, 0, 0, 0, 746, 747, 0, 0, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 751,
    0, 0, 0, 0, 0, 0, 752, 753, 0, 754, 0, 0, 0, 0, 0, 755, 0, 0, 0, 0, 0, 0, 756, 0, 0, 0, 757, 0, 0, 0, 0, 758,
    0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 0, 0, 761, 0, 0, 762, 0, 0, 0, 0, 763, 0, 764, 0, 0, 0, 0, 765, 0, 0, 0, 0,
    766, 0, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 768, 0, 769, 0,
    0, 0, 0, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 772, 0, 0, 0,
    0, 0, 0, 773, 0, 0, 0, 774, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 775, 0, 776, 0, 0, 0, 0, 0, 0, 777, 0,
    0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 779, 0, 780, 0, 0, 0, 0, 0, 0, 781, 0, 0, 0, 0, 0, 0,
    782, 0, 783, 0, 0, 0, 0, 0, 0, 784, 0, 0, 0, 0, 0, 0, 0, 0, 0, 785, 0, 0, 786, 0, 0, 0, 787, 0, 0, 0, 788, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 789, 0, 790, 0, 0, 0, 791, 0,
    0, 792, 0, 0, 793, 0, 794, 0, 795, 0, 796, 0, 0, 0, 0, 0, 797, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 798, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 799, 0, 800, 0, 0, 0, 801, 0, 0, 802, 0, 0, 803, 0, 804, 0, 805, 0, 806, 0, 0, 0, 0, 0, 807,
};
void recomp_unit_0135_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08A20000u;
        entry_id = (entry_delta < 16384u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0135[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08A20000;
    case 2u: goto L_08A20004;
    case 3u: goto L_08A2000C;
    case 4u: goto L_08A20010;
    case 5u: goto L_08A20028;
    case 6u: goto L_08A20034;
    case 7u: goto L_08A2003C;
    case 8u: goto L_08A20040;
    case 9u: goto L_08A20050;
    case 10u: goto L_08A20058;
    case 11u: goto L_08A2005C;
    case 12u: goto L_08A20080;
    case 13u: goto L_08A20088;
    case 14u: goto L_08A200A4;
    case 15u: goto L_08A200B8;
    case 16u: goto L_08A200D4;
    case 17u: goto L_08A200D8;
    case 18u: goto L_08A200E0;
    case 19u: goto L_08A200F8;
    case 20u: goto L_08A20104;
    case 21u: goto L_08A20124;
    case 22u: goto L_08A20130;
    case 23u: goto L_08A20138;
    case 24u: goto L_08A20140;
    case 25u: goto L_08A20148;
    case 26u: goto L_08A20150;
    case 27u: goto L_08A20170;
    case 28u: goto L_08A20184;
    case 29u: goto L_08A20198;
    case 30u: goto L_08A201A0;
    case 31u: goto L_08A201B8;
    case 32u: goto L_08A201E0;
    case 33u: goto L_08A201E8;
    case 34u: goto L_08A20204;
    case 35u: goto L_08A20224;
    case 36u: goto L_08A20248;
    case 37u: goto L_08A20254;
    case 38u: goto L_08A20264;
    case 39u: goto L_08A202E0;
    case 40u: goto L_08A202E8;
    case 41u: goto L_08A202F0;
    case 42u: goto L_08A202F8;
    case 43u: goto L_08A20300;
    case 44u: goto L_08A20308;
    case 45u: goto L_08A20310;
    case 46u: goto L_08A20318;
    case 47u: goto L_08A20320;
    case 48u: goto L_08A20328;
    case 49u: goto L_08A20344;
    case 50u: goto L_08A2036C;
    case 51u: goto L_08A20378;
    case 52u: goto L_08A2037C;
    case 53u: goto L_08A20394;
    case 54u: goto L_08A203C8;
    case 55u: goto L_08A203D4;
    case 56u: goto L_08A203DC;
    case 57u: goto L_08A203E4;
    case 58u: goto L_08A203FC;
    case 59u: goto L_08A20430;
    case 60u: goto L_08A20434;
    case 61u: goto L_08A20458;
    case 62u: goto L_08A20460;
    case 63u: goto L_08A2047C;
    case 64u: goto L_08A20490;
    case 65u: goto L_08A204AC;
    case 66u: goto L_08A204B0;
    case 67u: goto L_08A204B8;
    case 68u: goto L_08A204D0;
    case 69u: goto L_08A204DC;
    case 70u: goto L_08A204E4;
    case 71u: goto L_08A204E8;
    case 72u: goto L_08A20518;
    case 73u: goto L_08A20554;
    case 74u: goto L_08A20570;
    case 75u: goto L_08A20588;
    case 76u: goto L_08A20594;
    case 77u: goto L_08A2059C;
    case 78u: goto L_08A205B4;
    case 79u: goto L_08A205C0;
    case 80u: goto L_08A205C8;
    case 81u: goto L_08A205E4;
    case 82u: goto L_08A20608;
    case 83u: goto L_08A20614;
    case 84u: goto L_08A20618;
    case 85u: goto L_08A20638;
    case 86u: goto L_08A20640;
    case 87u: goto L_08A2065C;
    case 88u: goto L_08A2067C;
    case 89u: goto L_08A20688;
    case 90u: goto L_08A20698;
    case 91u: goto L_08A206A8;
    case 92u: goto L_08A206D0;
    case 93u: goto L_08A206EC;
    case 94u: goto L_08A206F4;
    case 95u: goto L_08A20714;
    case 96u: goto L_08A2071C;
    case 97u: goto L_08A20734;
    case 98u: goto L_08A20740;
    case 99u: goto L_08A20748;
    case 100u: goto L_08A20764;
    case 101u: goto L_08A20774;
    case 102u: goto L_08A20784;
    case 103u: goto L_08A2078C;
    case 104u: goto L_08A207A8;
    case 105u: goto L_08A207DC;
    case 106u: goto L_08A207E4;
    case 107u: goto L_08A20800;
    case 108u: goto L_08A20810;
    case 109u: goto L_08A20820;
    case 110u: goto L_08A20828;
    case 111u: goto L_08A20844;
    case 112u: goto L_08A20878;
    case 113u: goto L_08A20880;
    case 114u: goto L_08A2089C;
    case 115u: goto L_08A208AC;
    case 116u: goto L_08A208BC;
    case 117u: goto L_08A208C4;
    case 118u: goto L_08A208E0;
    case 119u: goto L_08A20914;
    case 120u: goto L_08A2091C;
    case 121u: goto L_08A20938;
    case 122u: goto L_08A20948;
    case 123u: goto L_08A20958;
    case 124u: goto L_08A20960;
    case 125u: goto L_08A2097C;
    case 126u: goto L_08A209B0;
    case 127u: goto L_08A209B8;
    case 128u: goto L_08A209D4;
    case 129u: goto L_08A209E4;
    case 130u: goto L_08A209F4;
    case 131u: goto L_08A209FC;
    case 132u: goto L_08A20A18;
    case 133u: goto L_08A20A4C;
    case 134u: goto L_08A20A54;
    case 135u: goto L_08A20A6C;
    case 136u: goto L_08A20A78;
    case 137u: goto L_08A20A80;
    case 138u: goto L_08A20A9C;
    case 139u: goto L_08A20AAC;
    case 140u: goto L_08A20ABC;
    case 141u: goto L_08A20AC4;
    case 142u: goto L_08A20AE0;
    case 143u: goto L_08A20AF0;
    case 144u: goto L_08A20B00;
    case 145u: goto L_08A20B08;
    case 146u: goto L_08A20B10;
    case 147u: goto L_08A20B18;
    case 148u: goto L_08A20B20;
    case 149u: goto L_08A20B3C;
    case 150u: goto L_08A20B4C;
    case 151u: goto L_08A20B5C;
    case 152u: goto L_08A20B64;
    case 153u: goto L_08A20B80;
    case 154u: goto L_08A20BA0;
    case 155u: goto L_08A20BAC;
    case 156u: goto L_08A20BBC;
    case 157u: goto L_08A20BCC;
    case 158u: goto L_08A20BF4;
    case 159u: goto L_08A20C10;
    case 160u: goto L_08A20C18;
    case 161u: goto L_08A20C3C;
    case 162u: goto L_08A20C44;
    case 163u: goto L_08A20C4C;
    case 164u: goto L_08A20C54;
    case 165u: goto L_08A20C5C;
    case 166u: goto L_08A20C78;
    case 167u: goto L_08A20C9C;
    case 168u: goto L_08A20CA4;
    case 169u: goto L_08A20CC0;
    case 170u: goto L_08A20CD4;
    case 171u: goto L_08A20CF0;
    case 172u: goto L_08A20CF8;
    case 173u: goto L_08A20D00;
    case 174u: goto L_08A20D1C;
    case 175u: goto L_08A20D3C;
    case 176u: goto L_08A20D48;
    case 177u: goto L_08A20D58;
    case 178u: goto L_08A20D68;
    case 179u: goto L_08A20D90;
    case 180u: goto L_08A20DAC;
    case 181u: goto L_08A20DB4;
    case 182u: goto L_08A20DD8;
    case 183u: goto L_08A20DE0;
    case 184u: goto L_08A20DFC;
    case 185u: goto L_08A20E10;
    case 186u: goto L_08A20E2C;
    case 187u: goto L_08A20E34;
    case 188u: goto L_08A20E54;
    case 189u: goto L_08A20E68;
    case 190u: goto L_08A20E7C;
    case 191u: goto L_08A20E90;
    case 192u: goto L_08A20E98;
    case 193u: goto L_08A20EB4;
    case 194u: goto L_08A20EBC;
    case 195u: goto L_08A20ED0;
    case 196u: goto L_08A20ED8;
    case 197u: goto L_08A20EF0;
    case 198u: goto L_08A20F00;
    case 199u: goto L_08A20F24;
    case 200u: goto L_08A20F40;
    case 201u: goto L_08A20F50;
    case 202u: goto L_08A20F58;
    case 203u: goto L_08A20F70;
    case 204u: goto L_08A20F7C;
    case 205u: goto L_08A20F84;
    case 206u: goto L_08A20F8C;
    case 207u: goto L_08A20FB0;
    case 208u: goto L_08A20FD0;
    case 209u: goto L_08A20FDC;
    case 210u: goto L_08A20FE8;
    case 211u: goto L_08A20FF4;
    case 212u: goto L_08A21010;
    case 213u: goto L_08A2101C;
    case 214u: goto L_08A21040;
    case 215u: goto L_08A21048;
    case 216u: goto L_08A21064;
    case 217u: goto L_08A21078;
    case 218u: goto L_08A21094;
    case 219u: goto L_08A21098;
    case 220u: goto L_08A210A0;
    case 221u: goto L_08A210B0;
    case 222u: goto L_08A210B8;
    case 223u: goto L_08A210C8;
    case 224u: goto L_08A210D0;
    case 225u: goto L_08A210E0;
    case 226u: goto L_08A210E8;
    case 227u: goto L_08A210F8;
    case 228u: goto L_08A21100;
    case 229u: goto L_08A21110;
    case 230u: goto L_08A21118;
    case 231u: goto L_08A21130;
    case 232u: goto L_08A21144;
    case 233u: goto L_08A21168;
    case 234u: goto L_08A21188;
    case 235u: goto L_08A21190;
    case 236u: goto L_08A21198;
    case 237u: goto L_08A211B4;
    case 238u: goto L_08A211C4;
    case 239u: goto L_08A211DC;
    case 240u: goto L_08A211E4;
    case 241u: goto L_08A21200;
    case 242u: goto L_08A21210;
    case 243u: goto L_08A21220;
    case 244u: goto L_08A21248;
    case 245u: goto L_08A2126C;
    case 246u: goto L_08A21274;
    case 247u: goto L_08A2127C;
    case 248u: goto L_08A21298;
    case 249u: goto L_08A212A0;
    case 250u: goto L_08A212BC;
    case 251u: goto L_08A212CC;
    case 252u: goto L_08A212DC;
    case 253u: goto L_08A212F0;
    case 254u: goto L_08A212FC;
    case 255u: goto L_08A21304;
    case 256u: goto L_08A2131C;
    case 257u: goto L_08A2132C;
    case 258u: goto L_08A21344;
    case 259u: goto L_08A21354;
    case 260u: goto L_08A21364;
    case 261u: goto L_08A21374;
    case 262u: goto L_08A21378;
    case 263u: goto L_08A2139C;
    case 264u: goto L_08A213A4;
    case 265u: goto L_08A213C0;
    case 266u: goto L_08A213D4;
    case 267u: goto L_08A213F0;
    case 268u: goto L_08A213F4;
    case 269u: goto L_08A213FC;
    case 270u: goto L_08A21414;
    case 271u: goto L_08A2142C;
    case 272u: goto L_08A21438;
    case 273u: goto L_08A21440;
    case 274u: goto L_08A2144C;
    case 275u: goto L_08A21454;
    case 276u: goto L_08A2145C;
    case 277u: goto L_08A21464;
    case 278u: goto L_08A21480;
    case 279u: goto L_08A21488;
    case 280u: goto L_08A2149C;
    case 281u: goto L_08A214A4;
    case 282u: goto L_08A214BC;
    case 283u: goto L_08A214C8;
    case 284u: goto L_08A214E8;
    case 285u: goto L_08A214F4;
    case 286u: goto L_08A21500;
    case 287u: goto L_08A2150C;
    case 288u: goto L_08A21510;
    case 289u: goto L_08A21544;
    case 290u: goto L_08A21550;
    case 291u: goto L_08A21554;
    case 292u: goto L_08A21584;
    case 293u: goto L_08A21598;
    case 294u: goto L_08A215A0;
    case 295u: goto L_08A215A8;
    case 296u: goto L_08A215C0;
    case 297u: goto L_08A215C8;
    case 298u: goto L_08A215D8;
    case 299u: goto L_08A215F0;
    case 300u: goto L_08A215FC;
    case 301u: goto L_08A21614;
    case 302u: goto L_08A2161C;
    case 303u: goto L_08A21634;
    case 304u: goto L_08A21644;
    case 305u: goto L_08A21650;
    case 306u: goto L_08A2165C;
    case 307u: goto L_08A21660;
    case 308u: goto L_08A21684;
    case 309u: goto L_08A2168C;
    case 310u: goto L_08A216A8;
    case 311u: goto L_08A216BC;
    case 312u: goto L_08A216D8;
    case 313u: goto L_08A216DC;
    case 314u: goto L_08A216E4;
    case 315u: goto L_08A216FC;
    case 316u: goto L_08A21730;
    case 317u: goto L_08A21738;
    case 318u: goto L_08A2173C;
    case 319u: goto L_08A21760;
    case 320u: goto L_08A21768;
    case 321u: goto L_08A21784;
    case 322u: goto L_08A21798;
    case 323u: goto L_08A217B4;
    case 324u: goto L_08A217B8;
    case 325u: goto L_08A217C0;
    case 326u: goto L_08A217D8;
    case 327u: goto L_08A217E8;
    case 328u: goto L_08A217F8;
    case 329u: goto L_08A21800;
    case 330u: goto L_08A21804;
    case 331u: goto L_08A21828;
    case 332u: goto L_08A21830;
    case 333u: goto L_08A2184C;
    case 334u: goto L_08A21860;
    case 335u: goto L_08A2187C;
    case 336u: goto L_08A21880;
    case 337u: goto L_08A21888;
    case 338u: goto L_08A218A4;
    case 339u: goto L_08A218C4;
    case 340u: goto L_08A218CC;
    case 341u: goto L_08A218D4;
    case 342u: goto L_08A218EC;
    case 343u: goto L_08A218F8;
    case 344u: goto L_08A21904;
    case 345u: goto L_08A2190C;
    case 346u: goto L_08A21924;
    case 347u: goto L_08A2192C;
    case 348u: goto L_08A21948;
    case 349u: goto L_08A2196C;
    case 350u: goto L_08A21978;
    case 351u: goto L_08A21980;
    case 352u: goto L_08A2198C;
    case 353u: goto L_08A21994;
    case 354u: goto L_08A219A0;
    case 355u: goto L_08A219C0;
    case 356u: goto L_08A219D8;
    case 357u: goto L_08A219EC;
    case 358u: goto L_08A219F4;
    case 359u: goto L_08A21A10;
    case 360u: goto L_08A21A34;
    case 361u: goto L_08A21A40;
    case 362u: goto L_08A21A48;
    case 363u: goto L_08A21A54;
    case 364u: goto L_08A21A5C;
    case 365u: goto L_08A21A68;
    case 366u: goto L_08A21A88;
    case 367u: goto L_08A21AA0;
    case 368u: goto L_08A21AB4;
    case 369u: goto L_08A21ABC;
    case 370u: goto L_08A21AD8;
    case 371u: goto L_08A21AE8;
    case 372u: goto L_08A21AF8;
    case 373u: goto L_08A21B0C;
    case 374u: goto L_08A21B20;
    case 375u: goto L_08A21B28;
    case 376u: goto L_08A21B44;
    case 377u: goto L_08A21B54;
    case 378u: goto L_08A21B64;
    case 379u: goto L_08A21B78;
    case 380u: goto L_08A21B8C;
    case 381u: goto L_08A21B94;
    case 382u: goto L_08A21BB0;
    case 383u: goto L_08A21BC0;
    case 384u: goto L_08A21BD0;
    case 385u: goto L_08A21BE4;
    case 386u: goto L_08A21BF8;
    case 387u: goto L_08A21C0C;
    case 388u: goto L_08A21C20;
    case 389u: goto L_08A21C34;
    case 390u: goto L_08A21C48;
    case 391u: goto L_08A21C5C;
    case 392u: goto L_08A21C70;
    case 393u: goto L_08A21C84;
    case 394u: goto L_08A21C98;
    case 395u: goto L_08A21CAC;
    case 396u: goto L_08A21CC0;
    case 397u: goto L_08A21CD4;
    case 398u: goto L_08A21CE8;
    case 399u: goto L_08A21CF0;
    case 400u: goto L_08A21D0C;
    case 401u: goto L_08A21D1C;
    case 402u: goto L_08A21D2C;
    case 403u: goto L_08A21D40;
    case 404u: goto L_08A21D54;
    case 405u: goto L_08A21D68;
    case 406u: goto L_08A21D7C;
    case 407u: goto L_08A21D90;
    case 408u: goto L_08A21DA4;
    case 409u: goto L_08A21DB8;
    case 410u: goto L_08A21DCC;
    case 411u: goto L_08A21DE0;
    case 412u: goto L_08A21DF4;
    case 413u: goto L_08A21E08;
    case 414u: goto L_08A21E1C;
    case 415u: goto L_08A21E30;
    case 416u: goto L_08A21E44;
    case 417u: goto L_08A21E4C;
    case 418u: goto L_08A21E5C;
    case 419u: goto L_08A21E64;
    case 420u: goto L_08A21E68;
    case 421u: goto L_08A21E94;
    case 422u: goto L_08A21ED4;
    case 423u: goto L_08A21EF0;
    case 424u: goto L_08A21F08;
    case 425u: goto L_08A21F18;
    case 426u: goto L_08A21F28;
    case 427u: goto L_08A21F38;
    case 428u: goto L_08A21F3C;
    case 429u: goto L_08A21F60;
    case 430u: goto L_08A21F68;
    case 431u: goto L_08A21F84;
    case 432u: goto L_08A21F98;
    case 433u: goto L_08A21FB4;
    case 434u: goto L_08A21FB8;
    case 435u: goto L_08A21FC0;
    case 436u: goto L_08A21FDC;
    case 437u: goto L_08A22000;
    case 438u: goto L_08A2200C;
    case 439u: goto L_08A22010;
    case 440u: goto L_08A22048;
    case 441u: goto L_08A220A8;
    case 442u: goto L_08A220B0;
    case 443u: goto L_08A220CC;
    case 444u: goto L_08A220F0;
    case 445u: goto L_08A220FC;
    case 446u: goto L_08A22100;
    case 447u: goto L_08A22138;
    case 448u: goto L_08A22148;
    case 449u: goto L_08A22178;
    case 450u: goto L_08A22180;
    case 451u: goto L_08A2219C;
    case 452u: goto L_08A221AC;
    case 453u: goto L_08A221D4;
    case 454u: goto L_08A221E0;
    case 455u: goto L_08A221E4;
    case 456u: goto L_08A221EC;
    case 457u: goto L_08A22210;
    case 458u: goto L_08A22218;
    case 459u: goto L_08A22224;
    case 460u: goto L_08A2222C;
    case 461u: goto L_08A22260;
    case 462u: goto L_08A22270;
    case 463u: goto L_08A2227C;
    case 464u: goto L_08A22284;
    case 465u: goto L_08A2229C;
    case 466u: goto L_08A222AC;
    case 467u: goto L_08A22364;
    case 468u: goto L_08A2236C;
    case 469u: goto L_08A22374;
    case 470u: goto L_08A22378;
    case 471u: goto L_08A2239C;
    case 472u: goto L_08A223A4;
    case 473u: goto L_08A223C0;
    case 474u: goto L_08A223D4;
    case 475u: goto L_08A223F0;
    case 476u: goto L_08A223F4;
    case 477u: goto L_08A223FC;
    case 478u: goto L_08A22414;
    case 479u: goto L_08A22424;
    case 480u: goto L_08A224DC;
    case 481u: goto L_08A224E4;
    case 482u: goto L_08A224EC;
    case 483u: goto L_08A224F0;
    case 484u: goto L_08A22514;
    case 485u: goto L_08A2251C;
    case 486u: goto L_08A22538;
    case 487u: goto L_08A2254C;
    case 488u: goto L_08A22568;
    case 489u: goto L_08A2256C;
    case 490u: goto L_08A22574;
    case 491u: goto L_08A2258C;
    case 492u: goto L_08A2259C;
    case 493u: goto L_08A22654;
    case 494u: goto L_08A2265C;
    case 495u: goto L_08A22664;
    case 496u: goto L_08A22668;
    case 497u: goto L_08A2268C;
    case 498u: goto L_08A22694;
    case 499u: goto L_08A226B0;
    case 500u: goto L_08A226C4;
    case 501u: goto L_08A226E0;
    case 502u: goto L_08A226E4;
    case 503u: goto L_08A226EC;
    case 504u: goto L_08A22704;
    case 505u: goto L_08A22734;
    case 506u: goto L_08A22754;
    case 507u: goto L_08A22768;
    case 508u: goto L_08A22780;
    case 509u: goto L_08A22788;
    case 510u: goto L_08A227A4;
    case 511u: goto L_08A227C8;
    case 512u: goto L_08A227D4;
    case 513u: goto L_08A227D8;
    case 514u: goto L_08A22808;
    case 515u: goto L_08A22820;
    case 516u: goto L_08A22828;
    case 517u: goto L_08A22840;
    case 518u: goto L_08A2285C;
    case 519u: goto L_08A22864;
    case 520u: goto L_08A22868;
    case 521u: goto L_08A2288C;
    case 522u: goto L_08A22894;
    case 523u: goto L_08A228B0;
    case 524u: goto L_08A228C4;
    case 525u: goto L_08A228E0;
    case 526u: goto L_08A228E4;
    case 527u: goto L_08A228EC;
    case 528u: goto L_08A22904;
    case 529u: goto L_08A2291C;
    case 530u: goto L_08A22924;
    case 531u: goto L_08A22940;
    case 532u: goto L_08A22950;
    case 533u: goto L_08A22978;
    case 534u: goto L_08A22990;
    case 535u: goto L_08A229DC;
    case 536u: goto L_08A229F4;
    case 537u: goto L_08A22A0C;
    case 538u: goto L_08A22A1C;
    case 539u: goto L_08A22A50;
    case 540u: goto L_08A22A68;
    case 541u: goto L_08A22AA8;
    case 542u: goto L_08A22AC8;
    case 543u: goto L_08A22AD0;
    case 544u: goto L_08A22AD4;
    case 545u: goto L_08A22AF8;
    case 546u: goto L_08A22B00;
    case 547u: goto L_08A22B1C;
    case 548u: goto L_08A22B30;
    case 549u: goto L_08A22B4C;
    case 550u: goto L_08A22B50;
    case 551u: goto L_08A22B64;
    case 552u: goto L_08A22B90;
    case 553u: goto L_08A22BA0;
    case 554u: goto L_08A22BA8;
    case 555u: goto L_08A22BC4;
    case 556u: goto L_08A22C18;
    case 557u: goto L_08A22C1C;
    case 558u: goto L_08A22C40;
    case 559u: goto L_08A22C48;
    case 560u: goto L_08A22C64;
    case 561u: goto L_08A22C78;
    case 562u: goto L_08A22C94;
    case 563u: goto L_08A22C98;
    case 564u: goto L_08A22CA0;
    case 565u: goto L_08A22CBC;
    case 566u: goto L_08A22CCC;
    case 567u: goto L_08A22CF4;
    case 568u: goto L_08A22CF8;
    case 569u: goto L_08A22D1C;
    case 570u: goto L_08A22D24;
    case 571u: goto L_08A22D40;
    case 572u: goto L_08A22D54;
    case 573u: goto L_08A22D70;
    case 574u: goto L_08A22D74;
    case 575u: goto L_08A22D7C;
    case 576u: goto L_08A22D98;
    case 577u: goto L_08A22DA8;
    case 578u: goto L_08A22DC0;
    case 579u: goto L_08A22DDC;
    case 580u: goto L_08A22E04;
    case 581u: goto L_08A22E0C;
    case 582u: goto L_08A22E14;
    case 583u: goto L_08A22E20;
    case 584u: goto L_08A22E40;
    case 585u: goto L_08A22E48;
    case 586u: goto L_08A22E60;
    case 587u: goto L_08A22E68;
    case 588u: goto L_08A22E78;
    case 589u: goto L_08A22E88;
    case 590u: goto L_08A22E98;
    case 591u: goto L_08A22EA0;
    case 592u: goto L_08A22EA8;
    case 593u: goto L_08A22EB8;
    case 594u: goto L_08A22ECC;
    case 595u: goto L_08A22ED8;
    case 596u: goto L_08A22EF8;
    case 597u: goto L_08A22F00;
    case 598u: goto L_08A22F10;
    case 599u: goto L_08A22F1C;
    case 600u: goto L_08A22F34;
    case 601u: goto L_08A22F3C;
    case 602u: goto L_08A22F60;
    case 603u: goto L_08A22F78;
    case 604u: goto L_08A22F88;
    case 605u: goto L_08A22FDC;
    case 606u: goto L_08A22FF0;
    case 607u: goto L_08A22FF8;
    case 608u: goto L_08A23010;
    case 609u: goto L_08A23018;
    case 610u: goto L_08A23038;
    case 611u: goto L_08A2304C;
    case 612u: goto L_08A2305C;
    case 613u: goto L_08A23068;
    case 614u: goto L_08A23078;
    case 615u: goto L_08A23094;
    case 616u: goto L_08A230AC;
    case 617u: goto L_08A230B4;
    case 618u: goto L_08A230BC;
    case 619u: goto L_08A230C8;
    case 620u: goto L_08A230E8;
    case 621u: goto L_08A230F0;
    case 622u: goto L_08A23108;
    case 623u: goto L_08A23110;
    case 624u: goto L_08A23120;
    case 625u: goto L_08A23130;
    case 626u: goto L_08A23140;
    case 627u: goto L_08A23148;
    case 628u: goto L_08A23150;
    case 629u: goto L_08A23160;
    case 630u: goto L_08A23174;
    case 631u: goto L_08A23180;
    case 632u: goto L_08A231A0;
    case 633u: goto L_08A231A8;
    case 634u: goto L_08A231B8;
    case 635u: goto L_08A231C4;
    case 636u: goto L_08A231E8;
    case 637u: goto L_08A231F0;
    case 638u: goto L_08A2320C;
    case 639u: goto L_08A23224;
    case 640u: goto L_08A23234;
    case 641u: goto L_08A23288;
    case 642u: goto L_08A2329C;
    case 643u: goto L_08A232A4;
    case 644u: goto L_08A232BC;
    case 645u: goto L_08A232C4;
    case 646u: goto L_08A232DC;
    case 647u: goto L_08A23314;
    case 648u: goto L_08A23324;
    case 649u: goto L_08A2333C;
    case 650u: goto L_08A2334C;
    case 651u: goto L_08A2335C;
    case 652u: goto L_08A2336C;
    case 653u: goto L_08A23370;
    case 654u: goto L_08A23394;
    case 655u: goto L_08A2339C;
    case 656u: goto L_08A233B8;
    case 657u: goto L_08A233CC;
    case 658u: goto L_08A233E8;
    case 659u: goto L_08A233EC;
    case 660u: goto L_08A233F4;
    case 661u: goto L_08A2340C;
    case 662u: goto L_08A2344C;
    case 663u: goto L_08A23450;
    case 664u: goto L_08A23474;
    case 665u: goto L_08A2347C;
    case 666u: goto L_08A23498;
    case 667u: goto L_08A234AC;
    case 668u: goto L_08A234C8;
    case 669u: goto L_08A234CC;
    case 670u: goto L_08A234D4;
    case 671u: goto L_08A234EC;
    case 672u: goto L_08A234FC;
    case 673u: goto L_08A23514;
    case 674u: goto L_08A23518;
    case 675u: goto L_08A2353C;
    case 676u: goto L_08A23544;
    case 677u: goto L_08A23560;
    case 678u: goto L_08A23574;
    case 679u: goto L_08A23590;
    case 680u: goto L_08A23594;
    case 681u: goto L_08A2359C;
    case 682u: goto L_08A235B8;
    case 683u: goto L_08A235DC;
    case 684u: goto L_08A235E8;
    case 685u: goto L_08A235F8;
    case 686u: goto L_08A23604;
    case 687u: goto L_08A2360C;
    case 688u: goto L_08A23618;
    case 689u: goto L_08A23654;
    case 690u: goto L_08A23668;
    case 691u: goto L_08A23670;
    case 692u: goto L_08A2368C;
    case 693u: goto L_08A2369C;
    case 694u: goto L_08A236D8;
    case 695u: goto L_08A236EC;
    case 696u: goto L_08A23708;
    case 697u: goto L_08A23718;
    case 698u: goto L_08A23754;
    case 699u: goto L_08A2375C;
    case 700u: goto L_08A2377C;
    case 701u: goto L_08A23790;
    case 702u: goto L_08A23798;
    case 703u: goto L_08A237A0;
    case 704u: goto L_08A237BC;
    case 705u: goto L_08A237C4;
    case 706u: goto L_08A237D4;
    case 707u: goto L_08A237E8;
    case 708u: goto L_08A237F0;
    case 709u: goto L_08A23808;
    case 710u: goto L_08A23818;
    case 711u: goto L_08A2383C;
    case 712u: goto L_08A23854;
    case 713u: goto L_08A2385C;
    case 714u: goto L_08A23864;
    case 715u: goto L_08A2386C;
    case 716u: goto L_08A23874;
    case 717u: goto L_08A2388C;
    case 718u: goto L_08A23894;
    case 719u: goto L_08A2389C;
    case 720u: goto L_08A238A4;
    case 721u: goto L_08A238B4;
    case 722u: goto L_08A238BC;
    case 723u: goto L_08A238C0;
    case 724u: goto L_08A238E4;
    case 725u: goto L_08A238EC;
    case 726u: goto L_08A23908;
    case 727u: goto L_08A2391C;
    case 728u: goto L_08A23938;
    case 729u: goto L_08A2393C;
    case 730u: goto L_08A23944;
    case 731u: goto L_08A23950;
    case 732u: goto L_08A23958;
    case 733u: goto L_08A23960;
    case 734u: goto L_08A23970;
    case 735u: goto L_08A23978;
    case 736u: goto L_08A23994;
    case 737u: goto L_08A239B8;
    case 738u: goto L_08A239C4;
    case 739u: goto L_08A239D0;
    case 740u: goto L_08A23A04;
    case 741u: goto L_08A23A0C;
    case 742u: goto L_08A23A24;
    case 743u: goto L_08A23A5C;
    case 744u: goto L_08A23A78;
    case 745u: goto L_08A23A88;
    case 746u: goto L_08A23A9C;
    case 747u: goto L_08A23AA0;
    case 748u: goto L_08A23AC4;
    case 749u: goto L_08A23ACC;
    case 750u: goto L_08A23AE8;
    case 751u: goto L_08A23AFC;
    case 752u: goto L_08A23B18;
    case 753u: goto L_08A23B1C;
    case 754u: goto L_08A23B24;
    case 755u: goto L_08A23B3C;
    case 756u: goto L_08A23B58;
    case 757u: goto L_08A23B68;
    case 758u: goto L_08A23B7C;
    case 759u: goto L_08A23B8C;
    case 760u: goto L_08A23B9C;
    case 761u: goto L_08A23BB0;
    case 762u: goto L_08A23BBC;
    case 763u: goto L_08A23BD0;
    case 764u: goto L_08A23BD8;
    case 765u: goto L_08A23BEC;
    case 766u: goto L_08A23C00;
    case 767u: goto L_08A23C1C;
    case 768u: goto L_08A23C70;
    case 769u: goto L_08A23C78;
    case 770u: goto L_08A23C94;
    case 771u: goto L_08A23CE8;
    case 772u: goto L_08A23CF0;
    case 773u: goto L_08A23D0C;
    case 774u: goto L_08A23D1C;
    case 775u: goto L_08A23D54;
    case 776u: goto L_08A23D5C;
    case 777u: goto L_08A23D78;
    case 778u: goto L_08A23D88;
    case 779u: goto L_08A23DC0;
    case 780u: goto L_08A23DC8;
    case 781u: goto L_08A23DE4;
    case 782u: goto L_08A23E00;
    case 783u: goto L_08A23E08;
    case 784u: goto L_08A23E24;
    case 785u: goto L_08A23E4C;
    case 786u: goto L_08A23E58;
    case 787u: goto L_08A23E68;
    case 788u: goto L_08A23E78;
    case 789u: goto L_08A23EE0;
    case 790u: goto L_08A23EE8;
    case 791u: goto L_08A23EF8;
    case 792u: goto L_08A23F04;
    case 793u: goto L_08A23F10;
    case 794u: goto L_08A23F18;
    case 795u: goto L_08A23F20;
    case 796u: goto L_08A23F28;
    case 797u: goto L_08A23F40;
    case 798u: goto L_08A23F6C;
    case 799u: goto L_08A23F9C;
    case 800u: goto L_08A23FA4;
    case 801u: goto L_08A23FB4;
    case 802u: goto L_08A23FC0;
    case 803u: goto L_08A23FCC;
    case 804u: goto L_08A23FD4;
    case 805u: goto L_08A23FDC;
    case 806u: goto L_08A23FE4;
    case 807u: goto L_08A23FFC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08A20000:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08A20004;
L_08A20004:
    ctx.gpr[31] = (0x08A2000Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08A2000Cu) goto L_08A2000C;
    return;
L_08A2000C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08A20010;
L_08A20010:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A2005C;
      }
      goto L_08A20028;
    }
L_08A20028:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_08A20040;
      }
      goto L_08A20034;
    }
L_08A20034:
    ctx.gpr[31] = (0x08A2003Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x08A2003Cu) goto L_08A2003C;
    return;
L_08A2003C:
    ctx.gpr[4] = (2230u << 16u);
    goto L_08A20040;
L_08A20040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A20050u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 86u, 0x0895076Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20050u) goto L_08A20050;
    return;
L_08A20050:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2005C;
      }
      goto L_08A20058;
    }
L_08A20058:
    ctx.gpr[18] = (0u | 1u);
    goto L_08A2005C;
L_08A2005C:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A20088;
      }
      goto L_08A20080;
    }
L_08A20080:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08A200D8;
      }
      goto L_08A20088;
    }
L_08A20088:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A200B8;
    }
    goto L_08A200A4;
L_08A200A4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A200D8;
      }
      goto L_08A200B8;
    }
L_08A200B8:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A200D8;
      }
      goto L_08A200D4;
    }
L_08A200D4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A200D8;
L_08A200D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A204E8;
      }
      goto L_08A200E0;
    }
L_08A200E0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A200F8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A200F8u) goto L_08A200F8;
    return;
L_08A200F8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A20124;
      }
      goto L_08A20104;
    }
L_08A20104:
    ctx.gpr[4] = (0u - ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08A20124;
L_08A20124:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20140;
      }
      goto L_08A20130;
    }
L_08A20130:
    ctx.gpr[31] = (0x08A20138u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 624u, 0x089C6A08u>(ctx, &aot_mem) && ctx.pc == 0x08A20138u) goto L_08A20138;
    return;
L_08A20138:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20148;
      }
      goto L_08A20140;
    }
L_08A20140:
    ctx.gpr[31] = (0x08A20148u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 641u, 0x089C6B2Cu>(ctx, &aot_mem) && ctx.pc == 0x08A20148u) goto L_08A20148;
    return;
L_08A20148:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A204E8;
      }
      goto L_08A20150;
    }
L_08A20150:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20170u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20170u) goto L_08A20170;
    return;
L_08A20170:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[31] = (0x08A20184u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19632));
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 50u, 0x089303D8u>(ctx, &aot_mem) && ctx.pc == 0x08A20184u) goto L_08A20184;
    return;
L_08A20184:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A20198u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A20198u) goto L_08A20198;
    return;
L_08A20198:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A204E8;
      }
      goto L_08A201A0;
    }
L_08A201A0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A201B8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A201B8u) goto L_08A201B8;
    return;
L_08A201B8:
    ctx.gpr[4] = (2274u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(19632));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[10] = (0u | 0u);
    ctx.gpr[31] = (0x08A201E0u);
    ctx.gpr[11] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 63u, 0x08930598u>(ctx, &aot_mem) && ctx.pc == 0x08A201E0u) goto L_08A201E0;
    return;
L_08A201E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A204E8;
      }
      goto L_08A201E8;
    }
L_08A201E8:
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(448));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A20204u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x08A20204u) goto L_08A20204;
    return;
L_08A20204:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 9u);
    ctx.gpr[31] = (0x08A20224u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20224u) goto L_08A20224;
    return;
L_08A20224:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20264;
      }
      goto L_08A20248;
    }
L_08A20248:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A20254u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A20254u) goto L_08A20254;
    return;
L_08A20254:
    ctx.gpr[4] = (15820u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    goto L_08A20264;
L_08A20264:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[9] = (ctx.gpr[29] + static_cast<std::uint32_t>(432));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[8] = (17377u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[8]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16320u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[8] = (0u | 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.gpr[31] = (0x08A202E0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08A202E0u) goto L_08A202E0;
    return;
L_08A202E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A204E8;
      }
      goto L_08A202E8;
    }
L_08A202E8:
    ctx.gpr[31] = (0x08A202F0u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 664u, 0x08933A00u>(ctx, &aot_mem) && ctx.pc == 0x08A202F0u) goto L_08A202F0;
    return;
L_08A202F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A204E8;
      }
      goto L_08A202F8;
    }
L_08A202F8:
    ctx.gpr[31] = (0x08A20300u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 665u, 0x08933A60u>(ctx, &aot_mem) && ctx.pc == 0x08A20300u) goto L_08A20300;
    return;
L_08A20300:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A204E8;
      }
      goto L_08A20308;
    }
L_08A20308:
    ctx.gpr[31] = (0x08A20310u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 90u, 0x0883C650u>(ctx, &aot_mem) && ctx.pc == 0x08A20310u) goto L_08A20310;
    return;
L_08A20310:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A204E8;
      }
      goto L_08A20318;
    }
L_08A20318:
    ctx.gpr[31] = (0x08A20320u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 91u, 0x0883C690u>(ctx, &aot_mem) && ctx.pc == 0x08A20320u) goto L_08A20320;
    return;
L_08A20320:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A204E8;
      }
      goto L_08A20328;
    }
L_08A20328:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A20344u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20344u) goto L_08A20344;
    return;
L_08A20344:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2037C;
      }
      goto L_08A2036C;
    }
L_08A2036C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A20378u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A20378u) goto L_08A20378;
    return;
L_08A20378:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A2037C;
L_08A2037C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(416));
    ctx.gpr[31] = (0x08A20394u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 236u, 0x08A25548u>(ctx, &aot_mem) && ctx.pc == 0x08A20394u) goto L_08A20394;
    return;
L_08A20394:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A203D4;
      }
      goto L_08A203C8;
    }
L_08A203C8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A203D4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2132));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x08A203D4u) goto L_08A203D4;
    return;
L_08A203D4:
    ctx.gpr[31] = (0x08A203DCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 449u, 0x089D701Cu>(ctx, &aot_mem) && ctx.pc == 0x08A203DCu) goto L_08A203DC;
    return;
L_08A203DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A204E8;
      }
      goto L_08A203E4;
    }
L_08A203E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A203FCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A203FCu) goto L_08A203FC;
    return;
L_08A203FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A20434;
      }
      goto L_08A20430;
    }
L_08A20430:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A20434;
L_08A20434:
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
          goto L_08A20460;
      }
      goto L_08A20458;
    }
L_08A20458:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A204B0;
      }
      goto L_08A20460;
    }
L_08A20460:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A20490;
    }
    goto L_08A2047C;
L_08A2047C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A204B0;
      }
      goto L_08A20490;
    }
L_08A20490:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A204B0;
      }
      goto L_08A204AC;
    }
L_08A204AC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A204B0;
L_08A204B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A204E8;
      }
      goto L_08A204B8;
    }
L_08A204B8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A204D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A204D0u) goto L_08A204D0;
    return;
L_08A204D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x08A204DCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 7u, 0x0887C090u>(ctx, &aot_mem) && ctx.pc == 0x08A204DCu) goto L_08A204DC;
    return;
L_08A204DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A204E8;
      }
      goto L_08A204E4;
    }
L_08A204E4:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A204E8;
L_08A204E8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(516)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(520)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(524)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(528)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(532)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(536)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(540)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(544)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(548)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(552)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(560));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20518:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-128));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-605));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(97) ? 1u : 0u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_08A21E64;
      }
      goto L_08A20554;
    }
L_08A20554:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-605));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[5]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(2752)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A20570:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A20588u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20588u) goto L_08A20588;
    return;
L_08A20588:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x08A20594u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 7u, 0x0887C090u>(ctx, &aot_mem) && ctx.pc == 0x08A20594u) goto L_08A20594;
    return;
L_08A20594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A2059C;
    }
L_08A2059C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A205B4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A205B4u) goto L_08A205B4;
    return;
L_08A205B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x08A205C0u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 7u, 0x0887C090u>(ctx, &aot_mem) && ctx.pc == 0x08A205C0u) goto L_08A205C0;
    return;
L_08A205C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A205C8;
    }
L_08A205C8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A205E4u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A205E4u) goto L_08A205E4;
    return;
L_08A205E4:
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20618;
      }
      goto L_08A20608;
    }
L_08A20608:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A20614u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A20614u) goto L_08A20614;
    return;
L_08A20614:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
    goto L_08A20618;
L_08A20618:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A20638u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 28u, 0x0887C258u>(ctx, &aot_mem) && ctx.pc == 0x08A20638u) goto L_08A20638;
    return;
L_08A20638:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20640;
    }
L_08A20640:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08A2065Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A2065Cu) goto L_08A2065C;
    return;
L_08A2065C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20688;
      }
      goto L_08A2067C;
    }
L_08A2067C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A20688;
L_08A20688:
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A206A8;
    }
    goto L_08A20698;
L_08A20698:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A206A8;
L_08A206A8:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = ctx.fpr[13] + ctx.fpr[24];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[26];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A206D0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A206D0u) goto L_08A206D0;
    return;
L_08A206D0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[13] = ctx.fpr[22] - ctx.fpr[24];
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[26];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A206F4;
      }
      goto L_08A206EC;
    }
L_08A206EC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
      if (branch_taken) {
          goto L_08A206F4;
      }
      goto L_08A206F4;
    }
L_08A206F4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A20714u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 37u, 0x0887C344u>(ctx, &aot_mem) && ctx.pc == 0x08A20714u) goto L_08A20714;
    return;
L_08A20714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A2071C;
    }
L_08A2071C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A20734u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20734u) goto L_08A20734;
    return;
L_08A20734:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x08A20740u);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 7u, 0x0887C090u>(ctx, &aot_mem) && ctx.pc == 0x08A20740u) goto L_08A20740;
    return;
L_08A20740:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20748;
    }
L_08A20748:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20764u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20764u) goto L_08A20764;
    return;
L_08A20764:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A20774u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A20774u) goto L_08A20774;
    return;
L_08A20774:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[31] = (0x08A20784u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 19u, 0x0887C180u>(ctx, &aot_mem) && ctx.pc == 0x08A20784u) goto L_08A20784;
    return;
L_08A20784:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A2078C;
    }
L_08A2078C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A207A8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A207A8u) goto L_08A207A8;
    return;
L_08A207A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x08A207DCu);
    ctx.gpr[5] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 19u, 0x0887C180u>(ctx, &aot_mem) && ctx.pc == 0x08A207DCu) goto L_08A207DC;
    return;
L_08A207DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A207E4;
    }
L_08A207E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20800u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20800u) goto L_08A20800;
    return;
L_08A20800:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A20810u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A20810u) goto L_08A20810;
    return;
L_08A20810:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 9u);
    ctx.gpr[31] = (0x08A20820u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 19u, 0x0887C180u>(ctx, &aot_mem) && ctx.pc == 0x08A20820u) goto L_08A20820;
    return;
L_08A20820:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20828;
    }
L_08A20828:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20844u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20844u) goto L_08A20844;
    return;
L_08A20844:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x08A20878u);
    ctx.gpr[5] = (0u | 9u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 19u, 0x0887C180u>(ctx, &aot_mem) && ctx.pc == 0x08A20878u) goto L_08A20878;
    return;
L_08A20878:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20880;
    }
L_08A20880:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A2089Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A2089Cu) goto L_08A2089C;
    return;
L_08A2089C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A208ACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A208ACu) goto L_08A208AC;
    return;
L_08A208AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 10u);
    ctx.gpr[31] = (0x08A208BCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 19u, 0x0887C180u>(ctx, &aot_mem) && ctx.pc == 0x08A208BCu) goto L_08A208BC;
    return;
L_08A208BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A208C4;
    }
L_08A208C4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A208E0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A208E0u) goto L_08A208E0;
    return;
L_08A208E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x08A20914u);
    ctx.gpr[5] = (0u | 10u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 19u, 0x0887C180u>(ctx, &aot_mem) && ctx.pc == 0x08A20914u) goto L_08A20914;
    return;
L_08A20914:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A2091C;
    }
L_08A2091C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20938u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20938u) goto L_08A20938;
    return;
L_08A20938:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A20948u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A20948u) goto L_08A20948;
    return;
L_08A20948:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[31] = (0x08A20958u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 19u, 0x0887C180u>(ctx, &aot_mem) && ctx.pc == 0x08A20958u) goto L_08A20958;
    return;
L_08A20958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20960;
    }
L_08A20960:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A2097Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A2097Cu) goto L_08A2097C;
    return;
L_08A2097C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x08A209B0u);
    ctx.gpr[5] = (0u | 11u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 19u, 0x0887C180u>(ctx, &aot_mem) && ctx.pc == 0x08A209B0u) goto L_08A209B0;
    return;
L_08A209B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A209B8;
    }
L_08A209B8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A209D4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A209D4u) goto L_08A209D4;
    return;
L_08A209D4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A209E4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A209E4u) goto L_08A209E4;
    return;
L_08A209E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[31] = (0x08A209F4u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 19u, 0x0887C180u>(ctx, &aot_mem) && ctx.pc == 0x08A209F4u) goto L_08A209F4;
    return;
L_08A209F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A209FC;
    }
L_08A209FC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20A18u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20A18u) goto L_08A20A18;
    return;
L_08A20A18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x08A20A4Cu);
    ctx.gpr[5] = (0u | 12u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 19u, 0x0887C180u>(ctx, &aot_mem) && ctx.pc == 0x08A20A4Cu) goto L_08A20A4C;
    return;
L_08A20A4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20A54;
    }
L_08A20A54:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A20A6Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20A6Cu) goto L_08A20A6C;
    return;
L_08A20A6C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x08A20A78u);
    ctx.gpr[5] = (0u | 16u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 7u, 0x0887C090u>(ctx, &aot_mem) && ctx.pc == 0x08A20A78u) goto L_08A20A78;
    return;
L_08A20A78:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20A80;
    }
L_08A20A80:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20A9Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20A9Cu) goto L_08A20A9C;
    return;
L_08A20A9C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A20AACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A20AACu) goto L_08A20AAC;
    return;
L_08A20AAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[31] = (0x08A20ABCu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 19u, 0x0887C180u>(ctx, &aot_mem) && ctx.pc == 0x08A20ABCu) goto L_08A20ABC;
    return;
L_08A20ABC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20AC4;
    }
L_08A20AC4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20AE0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20AE0u) goto L_08A20AE0;
    return;
L_08A20AE0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A20AF0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A20AF0u) goto L_08A20AF0;
    return;
L_08A20AF0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[31] = (0x08A20B00u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 19u, 0x0887C180u>(ctx, &aot_mem) && ctx.pc == 0x08A20B00u) goto L_08A20B00;
    return;
L_08A20B00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20B08;
    }
L_08A20B08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20B10;
    }
L_08A20B10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20B18;
    }
L_08A20B18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20B20;
    }
L_08A20B20:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A20B3Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20B3Cu) goto L_08A20B3C;
    return;
L_08A20B3C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A20B4Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A20B4Cu) goto L_08A20B4C;
    return;
L_08A20B4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (0u | 22u);
    ctx.gpr[31] = (0x08A20B5Cu);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 19u, 0x0887C180u>(ctx, &aot_mem) && ctx.pc == 0x08A20B5Cu) goto L_08A20B5C;
    return;
L_08A20B5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20B64;
    }
L_08A20B64:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08A20B80u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20B80u) goto L_08A20B80;
    return;
L_08A20B80:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20BAC;
      }
      goto L_08A20BA0;
    }
L_08A20BA0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A20BAC;
L_08A20BAC:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A20BCC;
    }
    goto L_08A20BBC;
L_08A20BBC:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A20BCC;
L_08A20BCC:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A20BF4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A20BF4u) goto L_08A20BF4;
    return;
L_08A20BF4:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[26];
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20C18;
      }
      goto L_08A20C10;
    }
L_08A20C10:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A20C18;
      }
      goto L_08A20C18;
    }
L_08A20C18:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[5] = (0u | 24u);
    ctx.gpr[31] = (0x08A20C3Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 37u, 0x0887C344u>(ctx, &aot_mem) && ctx.pc == 0x08A20C3Cu) goto L_08A20C3C;
    return;
L_08A20C3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20C44;
    }
L_08A20C44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20C4C;
    }
L_08A20C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20C54;
    }
L_08A20C54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20C5C;
    }
L_08A20C5C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A20C78u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20C78u) goto L_08A20C78;
    return;
L_08A20C78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[5] << 16u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[6]) >> 16u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[7] = (ctx.gpr[5] << 16u);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[7]) >> 16u));
    ctx.gpr[31] = (0x08A20C9Cu);
    ctx.gpr[5] = (0u | 30u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 46u, 0x0887C440u>(ctx, &aot_mem) && ctx.pc == 0x08A20C9Cu) goto L_08A20C9C;
    return;
L_08A20C9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20CA4;
    }
L_08A20CA4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A20CC0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20CC0u) goto L_08A20CC0;
    return;
L_08A20CC0:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A20CD4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A20CD4u) goto L_08A20CD4;
    return;
L_08A20CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A20CF0u);
    ctx.gpr[5] = (0u | 24u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 28u, 0x0887C258u>(ctx, &aot_mem) && ctx.pc == 0x08A20CF0u) goto L_08A20CF0;
    return;
L_08A20CF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20CF8;
    }
L_08A20CF8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20D00;
    }
L_08A20D00:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08A20D1Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20D1Cu) goto L_08A20D1C;
    return;
L_08A20D1C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20D48;
      }
      goto L_08A20D3C;
    }
L_08A20D3C:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    goto L_08A20D48;
L_08A20D48:
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[22]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
        goto L_08A20D68;
    }
    goto L_08A20D58;
L_08A20D58:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_08A20D68;
L_08A20D68:
    ctx.fpr[26] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[22] = ctx.fpr[12] + ctx.fpr[26];
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[22]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[22] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[22] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] + ctx.fpr[24];
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[20]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[20] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[20] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A20D90u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A20D90u) goto L_08A20D90;
    return;
L_08A20D90:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = ctx.fpr[22] - ctx.fpr[26];
    ctx.fpr[13] = ctx.fpr[20] - ctx.fpr[24];
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A20DB4;
      }
      goto L_08A20DAC;
    }
L_08A20DAC:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08A20DB4;
      }
      goto L_08A20DB4;
    }
L_08A20DB4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (0u | 25u);
    ctx.gpr[31] = (0x08A20DD8u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 37u, 0x0887C344u>(ctx, &aot_mem) && ctx.pc == 0x08A20DD8u) goto L_08A20DD8;
    return;
L_08A20DD8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20DE0;
    }
L_08A20DE0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A20DFCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20DFCu) goto L_08A20DFC;
    return;
L_08A20DFC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A20E10u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A20E10u) goto L_08A20E10;
    return;
L_08A20E10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08A20E2Cu);
    ctx.gpr[5] = (0u | 25u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 28u, 0x0887C258u>(ctx, &aot_mem) && ctx.pc == 0x08A20E2Cu) goto L_08A20E2C;
    return;
L_08A20E2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20E34;
    }
L_08A20E34:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A20E54u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20E54u) goto L_08A20E54;
    return;
L_08A20E54:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A20E68u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A20E68u) goto L_08A20E68;
    return;
L_08A20E68:
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A20E7Cu);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 561u, 0x088829ACu>(ctx, &aot_mem) && ctx.pc == 0x08A20E7Cu) goto L_08A20E7C;
    return;
L_08A20E7C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A20E90u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A20E90u) goto L_08A20E90;
    return;
L_08A20E90:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20E98;
    }
L_08A20E98:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A20EB4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20EB4u) goto L_08A20EB4;
    return;
L_08A20EB4:
    ctx.gpr[31] = (0x08A20EBCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 61u, 0x0887C580u>(ctx, &aot_mem) && ctx.pc == 0x08A20EBCu) goto L_08A20EBC;
    return;
L_08A20EBC:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A20ED0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A20ED0u) goto L_08A20ED0;
    return;
L_08A20ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20ED8;
    }
L_08A20ED8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A20EF0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20EF0u) goto L_08A20EF0;
    return;
L_08A20EF0:
    ctx.gpr[16] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20F50;
      }
      goto L_08A20F00;
    }
L_08A20F00:
    ctx.gpr[4] = (ctx.gpr[16] << 3u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A20F40;
      }
      goto L_08A20F24;
    }
L_08A20F24:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[16] << 3u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4912));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A20F40;
L_08A20F40:
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A20F00;
      }
      goto L_08A20F50;
    }
L_08A20F50:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A20F58;
    }
L_08A20F58:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A20F70u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A20F70u) goto L_08A20F70;
    return;
L_08A20F70:
    ctx.gpr[18] = (0u | 1u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
    goto L_08A20F7C;
L_08A20F7C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2101C;
      }
      goto L_08A20F84;
    }
L_08A20F84:
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2101C;
      }
      goto L_08A20F8C;
    }
L_08A20F8C:
    ctx.gpr[4] = (ctx.gpr[17] << 3u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A21010;
      }
      goto L_08A20FB0;
    }
L_08A20FB0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[5] = (ctx.gpr[17] << 3u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4912));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08A20FD0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A20FD0u) goto L_08A20FD0;
    return;
L_08A20FD0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A20FF4;
      }
      goto L_08A20FDC;
    }
L_08A20FDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A21010;
      }
      goto L_08A20FE8;
    }
L_08A20FE8:
    ctx.gpr[18] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2101C;
      }
      goto L_08A20FF4;
    }
L_08A20FF4:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[17] << 3u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4912));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A21010;
L_08A21010:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 32 ? 1u : 0u);
      if (branch_taken) {
          goto L_08A20F7C;
      }
      goto L_08A2101C;
    }
L_08A2101C:
    ctx.gpr[4] = (0u < ctx.gpr[18] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[18] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (0u < ctx.gpr[18] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A21048;
      }
      goto L_08A21040;
    }
L_08A21040:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[18]));
      if (branch_taken) {
          goto L_08A21098;
      }
      goto L_08A21048;
    }
L_08A21048:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A21078;
    }
    goto L_08A21064;
L_08A21064:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A21098;
      }
      goto L_08A21078;
    }
L_08A21078:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[18] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21098;
      }
      goto L_08A21094;
    }
L_08A21094:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A21098;
L_08A21098:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A210A0;
    }
L_08A210A0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A210B0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 108u, 0x088809C8u>(ctx, &aot_mem) && ctx.pc == 0x08A210B0u) goto L_08A210B0;
    return;
L_08A210B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A210B8;
    }
L_08A210B8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A210C8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 181u, 0x08880E98u>(ctx, &aot_mem) && ctx.pc == 0x08A210C8u) goto L_08A210C8;
    return;
L_08A210C8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A210D0;
    }
L_08A210D0:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A210E0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 252u, 0x0888135Cu>(ctx, &aot_mem) && ctx.pc == 0x08A210E0u) goto L_08A210E0;
    return;
L_08A210E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A210E8;
    }
L_08A210E8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A210F8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 320u, 0x08881800u>(ctx, &aot_mem) && ctx.pc == 0x08A210F8u) goto L_08A210F8;
    return;
L_08A210F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A21100;
    }
L_08A21100:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A21110u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 388u, 0x08881CC0u>(ctx, &aot_mem) && ctx.pc == 0x08A21110u) goto L_08A21110;
    return;
L_08A21110:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A21118;
    }
L_08A21118:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A21130u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A21130u) goto L_08A21130;
    return;
L_08A21130:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A211C4;
      }
      goto L_08A21144;
    }
L_08A21144:
    ctx.gpr[4] = (ctx.gpr[18] << 3u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4912));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A211B4;
      }
      goto L_08A21168;
    }
L_08A21168:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4912));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08A21188u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A21188u) goto L_08A21188;
    return;
L_08A21188:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21198;
      }
      goto L_08A21190;
    }
L_08A21190:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08A211B4;
      }
      goto L_08A21198;
    }
L_08A21198:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[18] << 3u);
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(4912));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), 0u);
    goto L_08A211B4;
L_08A211B4:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A21144;
      }
      goto L_08A211C4;
    }
L_08A211C4:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A211DCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A211DCu) goto L_08A211DC;
    return;
L_08A211DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A211E4;
    }
L_08A211E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A21200u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A21200u) goto L_08A21200;
    return;
L_08A21200:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A21210u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A21210u) goto L_08A21210;
    return;
L_08A21210:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21248;
      }
      goto L_08A21220;
    }
L_08A21220:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A2126C;
      }
      goto L_08A21248;
    }
L_08A21248:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08A2126C;
L_08A2126C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A21274;
    }
L_08A21274:
    ctx.gpr[31] = (0x08A2127Cu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x08A2127Cu) goto L_08A2127C;
    return;
L_08A2127C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(130)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A21298u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A21298u) goto L_08A21298;
    return;
L_08A21298:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A212A0;
    }
L_08A212A0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A212BCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A212BCu) goto L_08A212BC;
    return;
L_08A212BC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A212CCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A212CCu) goto L_08A212CC;
    return;
L_08A212CC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A212F0;
      }
      goto L_08A212DC;
    }
L_08A212DC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-33));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A212FC;
      }
      goto L_08A212F0;
    }
L_08A212F0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    ctx.gpr[4] = (ctx.gpr[4] | 32u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A212FC;
L_08A212FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A21304;
    }
L_08A21304:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2131Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A2131Cu) goto L_08A2131C;
    return;
L_08A2131C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A2132Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A2132Cu) goto L_08A2132C;
    return;
L_08A2132C:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (0u | 151u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A21374;
      }
      goto L_08A21344;
    }
L_08A21344:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (0u | 166u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A21374;
      }
      goto L_08A21354;
    }
L_08A21354:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (0u | 181u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A21374;
      }
      goto L_08A21364;
    }
L_08A21364:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-967));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A21378;
      }
      goto L_08A21374;
    }
L_08A21374:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A21378;
L_08A21378:
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
          goto L_08A213A4;
      }
      goto L_08A2139C;
    }
L_08A2139C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A213F4;
      }
      goto L_08A213A4;
    }
L_08A213A4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A213D4;
    }
    goto L_08A213C0;
L_08A213C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A213F4;
      }
      goto L_08A213D4;
    }
L_08A213D4:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A213F4;
      }
      goto L_08A213F0;
    }
L_08A213F0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A213F4;
L_08A213F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A213FC;
    }
L_08A213FC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A21414u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A21414u) goto L_08A21414;
    return;
L_08A21414:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21440;
      }
      goto L_08A2142C;
    }
L_08A2142C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x08A21438u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 882u, 0x089C796Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21438u) goto L_08A21438;
    return;
L_08A21438:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2144C;
      }
      goto L_08A21440;
    }
L_08A21440:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x08A2144Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 884u, 0x089C7988u>(ctx, &aot_mem) && ctx.pc == 0x08A2144Cu) goto L_08A2144C;
    return;
L_08A2144C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A21454;
    }
L_08A21454:
    ctx.gpr[31] = (0x08A2145Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 82u, 0x08918540u>(ctx, &aot_mem) && ctx.pc == 0x08A2145Cu) goto L_08A2145C;
    return;
L_08A2145C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A21464;
    }
L_08A21464:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A21480u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A21480u) goto L_08A21480;
    return;
L_08A21480:
    ctx.gpr[31] = (0x08A21488u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0069_entry, 69u, 85u, 0x08918578u>(ctx, &aot_mem) && ctx.pc == 0x08A21488u) goto L_08A21488;
    return;
L_08A21488:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2149Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A2149Cu) goto L_08A2149C;
    return;
L_08A2149C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A214A4;
    }
L_08A214A4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A214BCu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A214BCu) goto L_08A214BC;
    return;
L_08A214BC:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08A214E8;
      }
      goto L_08A214C8;
    }
L_08A214C8:
    ctx.gpr[4] = (0u - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08A214E8;
L_08A214E8:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08A214F4u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x08A214F4u) goto L_08A214F4;
    return;
L_08A214F4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_08A21510;
      }
      goto L_08A21500;
    }
L_08A21500:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2150Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x08A2150Cu) goto L_08A2150C;
    return;
L_08A2150C:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_08A21510;
L_08A21510:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(420), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A21554;
      }
      goto L_08A21544;
    }
L_08A21544:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A21550u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A21550u) goto L_08A21550;
    return;
L_08A21550:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A21554;
L_08A21554:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
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
    ctx.gpr[31] = (0x08A21584u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08A21584u) goto L_08A21584;
    return;
L_08A21584:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (0x08A21598u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08A21598u) goto L_08A21598;
    return;
L_08A21598:
    ctx.gpr[31] = (0x08A215A0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x08A215A0u) goto L_08A215A0;
    return;
L_08A215A0:
    ctx.gpr[31] = (0x08A215A8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08A215A8u) goto L_08A215A8;
    return;
L_08A215A8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x08A215C0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x08A215C0u) goto L_08A215C0;
    return;
L_08A215C0:
    ctx.gpr[31] = (0x08A215C8u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08A215C8u) goto L_08A215C8;
    return;
L_08A215C8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x08A215D8u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 797u, 0x08AFB66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A215D8u) goto L_08A215D8;
    return;
L_08A215D8:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A215F0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A215F0u) goto L_08A215F0;
    return;
L_08A215F0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21614;
      }
      goto L_08A215FC;
    }
L_08A215FC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x08A21614u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x08A21614u) goto L_08A21614;
    return;
L_08A21614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A2161C;
    }
L_08A2161C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A21634u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A21634u) goto L_08A21634;
    return;
L_08A21634:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A21644u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A21644u) goto L_08A21644;
    return;
L_08A21644:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A21650u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x08A21650u) goto L_08A21650;
    return;
L_08A21650:
    ctx.gpr[4] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A21660;
      }
      goto L_08A2165C;
    }
L_08A2165C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A21660;
L_08A21660:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A2168C;
      }
      goto L_08A21684;
    }
L_08A21684:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A216DC;
      }
      goto L_08A2168C;
    }
L_08A2168C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A216BC;
    }
    goto L_08A216A8;
L_08A216A8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A216DC;
      }
      goto L_08A216BC;
    }
L_08A216BC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A216DC;
      }
      goto L_08A216D8;
    }
L_08A216D8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A216DC;
L_08A216DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A216E4;
    }
L_08A216E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A216FCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A216FCu) goto L_08A216FC;
    return;
L_08A216FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A21730u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 101u, 0x0887C80Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21730u) goto L_08A21730;
    return;
L_08A21730:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A2173C;
      }
      goto L_08A21738;
    }
L_08A21738:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A2173C;
L_08A2173C:
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
          goto L_08A21768;
      }
      goto L_08A21760;
    }
L_08A21760:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A217B8;
      }
      goto L_08A21768;
    }
L_08A21768:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A21798;
    }
    goto L_08A21784;
L_08A21784:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A217B8;
      }
      goto L_08A21798;
    }
L_08A21798:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A217B8;
      }
      goto L_08A217B4;
    }
L_08A217B4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A217B8;
L_08A217B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A217C0;
    }
L_08A217C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A217D8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A217D8u) goto L_08A217D8;
    return;
L_08A217D8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A217E8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A217E8u) goto L_08A217E8;
    return;
L_08A217E8:
    ctx.gpr[4] = (0u | 0u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(84), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[31] = (0x08A217F8u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 87u, 0x0887C744u>(ctx, &aot_mem) && ctx.pc == 0x08A217F8u) goto L_08A217F8;
    return;
L_08A217F8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
      if (branch_taken) {
          goto L_08A21804;
      }
      goto L_08A21800;
    }
L_08A21800:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A21804;
L_08A21804:
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
          goto L_08A21830;
      }
      goto L_08A21828;
    }
L_08A21828:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A21880;
      }
      goto L_08A21830;
    }
L_08A21830:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A21860;
    }
    goto L_08A2184C;
L_08A2184C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A21880;
      }
      goto L_08A21860;
    }
L_08A21860:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21880;
      }
      goto L_08A2187C;
    }
L_08A2187C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A21880;
L_08A21880:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A21888;
    }
L_08A21888:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A218A4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A218A4u) goto L_08A218A4;
    return;
L_08A218A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7868)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(528), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A218CC;
      }
      goto L_08A218C4;
    }
L_08A218C4:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(527), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A218CC;
L_08A218CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A218D4;
    }
L_08A218D4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A218ECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A218ECu) goto L_08A218EC;
    return;
L_08A218EC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2190C;
      }
      goto L_08A218F8;
    }
L_08A218F8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08A21904u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 277u, 0x088EDF38u>(ctx, &aot_mem) && ctx.pc == 0x08A21904u) goto L_08A21904;
    return;
L_08A21904:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21924;
      }
      goto L_08A2190C;
    }
L_08A2190C:
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(6860), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x08A21924u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 278u, 0x088EDF4Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21924u) goto L_08A21924;
    return;
L_08A21924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A2192C;
    }
L_08A2192C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A21948u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A21948u) goto L_08A21948;
    return;
L_08A21948:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A21980;
    }
    goto L_08A2196C;
L_08A2196C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A21978u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A21978u) goto L_08A21978;
    return;
L_08A21978:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A21980;
L_08A21980:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A2198Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x08A2198Cu) goto L_08A2198C;
    return;
L_08A2198C:
    ctx.gpr[31] = (0x08A21994u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x08A21994u) goto L_08A21994;
    return;
L_08A21994:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08A219A0;
      }
      goto L_08A219A0;
    }
L_08A219A0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A219C0u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 817u, 0x08967E40u>(ctx, &aot_mem) && ctx.pc == 0x08A219C0u) goto L_08A219C0;
    return;
L_08A219C0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08A219D8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 79u, 0x0896854Cu>(ctx, &aot_mem) && ctx.pc == 0x08A219D8u) goto L_08A219D8;
    return;
L_08A219D8:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A219ECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A219ECu) goto L_08A219EC;
    return;
L_08A219EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A219F4;
    }
L_08A219F4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A21A10u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A21A10u) goto L_08A21A10;
    return;
L_08A21A10:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A21A48;
    }
    goto L_08A21A34;
L_08A21A34:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A21A40u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A21A40u) goto L_08A21A40;
    return;
L_08A21A40:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A21A48;
L_08A21A48:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A21A54u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x08A21A54u) goto L_08A21A54;
    return;
L_08A21A54:
    ctx.gpr[31] = (0x08A21A5Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x08A21A5Cu) goto L_08A21A5C;
    return;
L_08A21A5C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
      if (branch_taken) {
          goto L_08A21A68;
      }
      goto L_08A21A68;
    }
L_08A21A68:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08A21A88u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 817u, 0x08967E40u>(ctx, &aot_mem) && ctx.pc == 0x08A21A88u) goto L_08A21A88;
    return;
L_08A21A88:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08A21AA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 79u, 0x0896854Cu>(ctx, &aot_mem) && ctx.pc == 0x08A21AA0u) goto L_08A21AA0;
    return;
L_08A21AA0:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A21AB4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A21AB4u) goto L_08A21AB4;
    return;
L_08A21AB4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A21ABC;
    }
L_08A21ABC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A21AD8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A21AD8u) goto L_08A21AD8;
    return;
L_08A21AD8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A21AE8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A21AE8u) goto L_08A21AE8;
    return;
L_08A21AE8:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21B0C;
      }
      goto L_08A21AF8;
    }
L_08A21AF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21B20;
      }
      goto L_08A21B0C;
    }
L_08A21B0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21B20;
L_08A21B20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A21B28;
    }
L_08A21B28:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A21B44u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A21B44u) goto L_08A21B44;
    return;
L_08A21B44:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A21B54u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A21B54u) goto L_08A21B54;
    return;
L_08A21B54:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21B78;
      }
      goto L_08A21B64;
    }
L_08A21B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (16384u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21B8C;
      }
      goto L_08A21B78;
    }
L_08A21B78:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (49152u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21B8C;
L_08A21B8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A21B94;
    }
L_08A21B94:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A21BB0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A21BB0u) goto L_08A21BB0;
    return;
L_08A21BB0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A21BC0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A21BC0u) goto L_08A21BC0;
    return;
L_08A21BC0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21BE4;
      }
      goto L_08A21BD0;
    }
L_08A21BD0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21BF8;
      }
      goto L_08A21BE4;
    }
L_08A21BE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (64512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21BF8;
L_08A21BF8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21C20;
      }
      goto L_08A21C0C;
    }
L_08A21C0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21C34;
      }
      goto L_08A21C20;
    }
L_08A21C20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21C34;
L_08A21C34:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21C5C;
      }
      goto L_08A21C48;
    }
L_08A21C48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21C70;
      }
      goto L_08A21C5C;
    }
L_08A21C5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21C70;
L_08A21C70:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21C98;
      }
      goto L_08A21C84;
    }
L_08A21C84:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21CAC;
      }
      goto L_08A21C98;
    }
L_08A21C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21CAC;
L_08A21CAC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21CD4;
      }
      goto L_08A21CC0;
    }
L_08A21CC0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21CE8;
      }
      goto L_08A21CD4;
    }
L_08A21CD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21CE8;
L_08A21CE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A21CF0;
    }
L_08A21CF0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x08A21D0Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A21D0Cu) goto L_08A21D0C;
    return;
L_08A21D0C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A21D1Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A21D1Cu) goto L_08A21D1C;
    return;
L_08A21D1C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21D40;
      }
      goto L_08A21D2C;
    }
L_08A21D2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21D54;
      }
      goto L_08A21D40;
    }
L_08A21D40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (64512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21D54;
L_08A21D54:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21D7C;
      }
      goto L_08A21D68;
    }
L_08A21D68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21D90;
      }
      goto L_08A21D7C;
    }
L_08A21D7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21D90;
L_08A21D90:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21DB8;
      }
      goto L_08A21DA4;
    }
L_08A21DA4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21DCC;
      }
      goto L_08A21DB8;
    }
L_08A21DB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21DCC;
L_08A21DCC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21DF4;
      }
      goto L_08A21DE0;
    }
L_08A21DE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21E08;
      }
      goto L_08A21DF4;
    }
L_08A21DF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21E08;
L_08A21E08:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21E30;
      }
      goto L_08A21E1C;
    }
L_08A21E1C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A21E44;
      }
      goto L_08A21E30;
    }
L_08A21E30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_08A21E44;
L_08A21E44:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A21E4C;
    }
L_08A21E4C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08A21E5Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 46u, 0x08880364u>(ctx, &aot_mem) && ctx.pc == 0x08A21E5Cu) goto L_08A21E5C;
    return;
L_08A21E5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08A21E68;
      }
      goto L_08A21E64;
    }
L_08A21E64:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08A21E68;
L_08A21E68:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21E94:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-464));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(408), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(412), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(416), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(420), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(424), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(428), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(432), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(436), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(440), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(444), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(448), ctx.gpr[31]);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-708));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(97) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 163u, 0x08A24BDCu>(ctx, &aot_mem); return;
      }
      goto L_08A21ED4;
    }
L_08A21ED4:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-708));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(3144)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08A21EF0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A21F08u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A21F08u) goto L_08A21F08;
    return;
L_08A21F08:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A21F18u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A21F18u) goto L_08A21F18;
    return;
L_08A21F18:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u | 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21F3C;
      }
      goto L_08A21F28;
    }
L_08A21F28:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21F3C;
      }
      goto L_08A21F38;
    }
L_08A21F38:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A21F3C;
L_08A21F3C:
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
          goto L_08A21F68;
      }
      goto L_08A21F60;
    }
L_08A21F60:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A21FB8;
      }
      goto L_08A21F68;
    }
L_08A21F68:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A21F98;
    }
    goto L_08A21F84;
L_08A21F84:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A21FB8;
      }
      goto L_08A21F98;
    }
L_08A21F98:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A21FB8;
      }
      goto L_08A21FB4;
    }
L_08A21FB4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A21FB8;
L_08A21FB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A21FC0;
    }
L_08A21FC0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A21FDCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A21FDCu) goto L_08A21FDC;
    return;
L_08A21FDC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A22010;
      }
      goto L_08A22000;
    }
L_08A22000:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A2200Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A2200Cu) goto L_08A2200C;
    return;
L_08A2200C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A22010;
L_08A22010:
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    ctx.gpr[6] = (17480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A22048u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 369u, 0x0897572Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22048u) goto L_08A22048;
    return;
L_08A22048:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[6] = (ctx.gpr[2] << 2u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.set_vfpu_scalar_bits_ct<0u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_vfpu_scalar_bits_ct<32u>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.execute_vfpu_vx2i(1u, 0u, 2u, 3u);
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_ct<1u, 3u>(vfpu_s);
      ctx.apply_vfpu_source_prefix_ct<3u, 0u>(vfpu_s);
      const float vfpu_scale = std::ldexp(1.0f, -static_cast<int>(19u));
      for (std::uint32_t vfpu_i = 0; vfpu_i < 3u; ++vfpu_i) {
        const auto vfpu_integer = static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(vfpu_s[vfpu_i]));
        vfpu_d[vfpu_i] = static_cast<float>(vfpu_integer) * vfpu_scale;
      }
      ctx.write_vfpu_vector_with_destination_prefix_ct<2u, 3u>(vfpu_d); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<2u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A220A8u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A220A8u) goto L_08A220A8;
    return;
L_08A220A8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A220B0;
    }
L_08A220B0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A220CCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A220CCu) goto L_08A220CC;
    return;
L_08A220CC:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A22100;
      }
      goto L_08A220F0;
    }
L_08A220F0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A220FCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A220FCu) goto L_08A220FC;
    return;
L_08A220FC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A22100;
L_08A22100:
    ctx.gpr[17] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(208));
    ctx.gpr[6] = (17480u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A22138u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 369u, 0x0897572Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22138u) goto L_08A22138;
    return;
L_08A22138:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-26612)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    ctx.gpr[31] = (0x08A22148u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 704u, 0x089777A8u>(ctx, &aot_mem) && ctx.pc == 0x08A22148u) goto L_08A22148;
    return;
L_08A22148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(224)));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(228)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(232)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22178u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A22178u) goto L_08A22178;
    return;
L_08A22178:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A22180;
    }
L_08A22180:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A2219Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A2219Cu) goto L_08A2219C;
    return;
L_08A2219C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A221ACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A221ACu) goto L_08A221AC;
    return;
L_08A221AC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[20] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A221E4;
      }
      goto L_08A221D4;
    }
L_08A221D4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A221E0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A221E0u) goto L_08A221E0;
    return;
L_08A221E0:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A221E4;
L_08A221E4:
    ctx.gpr[31] = (0x08A221ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x08A221ECu) goto L_08A221EC;
    return;
L_08A221EC:
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[0];
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(240), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(244), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(248), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(240));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22210u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0122_entry, 122u, 222u, 0x089ED770u>(ctx, &aot_mem) && ctx.pc == 0x08A22210u) goto L_08A22210;
    return;
L_08A22210:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22224;
      }
      goto L_08A22218;
    }
L_08A22218:
    ctx.gpr[4] = (0u | 13u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2222C;
      }
      goto L_08A22224;
    }
L_08A22224:
    ctx.gpr[4] = (0u | 12u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08A2222C;
L_08A2222C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
        goto L_08A22260;
    }
    goto L_08A22260;
L_08A22260:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(398))))));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2227C;
      }
      goto L_08A22270;
    }
L_08A22270:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    goto L_08A2227C;
L_08A2227C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A22284;
    }
L_08A22284:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2229Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A2229Cu) goto L_08A2229C;
    return;
L_08A2229C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A222ACu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A222ACu) goto L_08A222AC;
    return;
L_08A222AC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(304), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(308), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(312), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-464));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08A2236C;
      }
      goto L_08A22364;
    }
L_08A22364:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A2236C;
L_08A2236C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22378;
      }
      goto L_08A22374;
    }
L_08A22374:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A22378;
L_08A22378:
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
          goto L_08A223A4;
      }
      goto L_08A2239C;
    }
L_08A2239C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A223F4;
      }
      goto L_08A223A4;
    }
L_08A223A4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A223D4;
    }
    goto L_08A223C0;
L_08A223C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A223F4;
      }
      goto L_08A223D4;
    }
L_08A223D4:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A223F4;
      }
      goto L_08A223F0;
    }
L_08A223F0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A223F4;
L_08A223F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A223FC;
    }
L_08A223FC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22414u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A22414u) goto L_08A22414;
    return;
L_08A22414:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A22424u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A22424u) goto L_08A22424;
    return;
L_08A22424:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(336), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(344), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(336));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-464));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08A224E4;
      }
      goto L_08A224DC;
    }
L_08A224DC:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A224E4;
L_08A224E4:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A224F0;
      }
      goto L_08A224EC;
    }
L_08A224EC:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A224F0;
L_08A224F0:
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
          goto L_08A2251C;
      }
      goto L_08A22514;
    }
L_08A22514:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2256C;
      }
      goto L_08A2251C;
    }
L_08A2251C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A2254C;
    }
    goto L_08A22538;
L_08A22538:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2256C;
      }
      goto L_08A2254C;
    }
L_08A2254C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2256C;
      }
      goto L_08A22568;
    }
L_08A22568:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A2256C;
L_08A2256C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A22574;
    }
L_08A22574:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2258Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A2258Cu) goto L_08A2258C;
    return;
L_08A2258C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x08A2259Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08A2259Cu) goto L_08A2259C;
    return;
L_08A2259C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[5] = (ctx.gpr[7] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(372), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(368));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[2] + static_cast<std::uint32_t>(48);
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
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (ctx.gpr[7] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<12u, 4u>(vfpu_value); }
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-464));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<36u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<37u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<38u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(48);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<39u, 4u>(vfpu_value); }
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[5]);
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
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(0));
    { const bool branch_taken = ((ctx.vfpu_ctrl[3] >> 5u) & 1u) == 0u;
    // vflush: architectural no-op that retains VFPU prefixes
      if (branch_taken) {
          goto L_08A2265C;
      }
      goto L_08A22654;
    }
L_08A22654:
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    goto L_08A2265C;
L_08A2265C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22668;
      }
      goto L_08A22664;
    }
L_08A22664:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A22668;
L_08A22668:
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
          goto L_08A22694;
      }
      goto L_08A2268C;
    }
L_08A2268C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A226E4;
      }
      goto L_08A22694;
    }
L_08A22694:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A226C4;
    }
    goto L_08A226B0;
L_08A226B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A226E4;
      }
      goto L_08A226C4;
    }
L_08A226C4:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A226E4;
      }
      goto L_08A226E0;
    }
L_08A226E0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A226E4;
L_08A226E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A226EC;
    }
L_08A226EC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22704u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A22704u) goto L_08A22704;
    return;
L_08A22704:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(92));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (ctx.gpr[6] << 2u);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(28), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A22734;
    }
L_08A22734:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A22754u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A22754u) goto L_08A22754;
    return;
L_08A22754:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A22768u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(84));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 453u, 0x088C2EF0u>(ctx, &aot_mem) && ctx.pc == 0x08A22768u) goto L_08A22768;
    return;
L_08A22768:
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A22780u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A22780u) goto L_08A22780;
    return;
L_08A22780:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A22788;
    }
L_08A22788:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A227A4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A227A4u) goto L_08A227A4;
    return;
L_08A227A4:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A227D8;
      }
      goto L_08A227C8;
    }
L_08A227C8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A227D4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A227D4u) goto L_08A227D4;
    return;
L_08A227D4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08A227D8;
L_08A227D8:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24800));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[6] = (16204u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] | 52429u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x08A22808u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 610u, 0x0884E768u>(ctx, &aot_mem) && ctx.pc == 0x08A22808u) goto L_08A22808;
    return;
L_08A22808:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22820u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A22820u) goto L_08A22820;
    return;
L_08A22820:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A22828;
    }
L_08A22828:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22840u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A22840u) goto L_08A22840;
    return;
L_08A22840:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24800));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[31] = (0x08A2285Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 668u, 0x0884ED5Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2285Cu) goto L_08A2285C;
    return;
L_08A2285C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22868;
      }
      goto L_08A22864;
    }
L_08A22864:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A22868;
L_08A22868:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A22894;
      }
      goto L_08A2288C;
    }
L_08A2288C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A228E4;
      }
      goto L_08A22894;
    }
L_08A22894:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A228C4;
    }
    goto L_08A228B0;
L_08A228B0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A228E4;
      }
      goto L_08A228C4;
    }
L_08A228C4:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A228E4;
      }
      goto L_08A228E0;
    }
L_08A228E0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A228E4;
L_08A228E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A228EC;
    }
L_08A228EC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22904u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A22904u) goto L_08A22904;
    return;
L_08A22904:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24800));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[5] << 16u);
    ctx.gpr[31] = (0x08A2291Cu);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 16u));
    if (rt.invoke_chained_direct<&recomp_unit_0018_entry, 18u, 669u, 0x0884ED78u>(ctx, &aot_mem) && ctx.pc == 0x08A2291Cu) goto L_08A2291C;
    return;
L_08A2291C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A22924;
    }
L_08A22924:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A22940u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A22940u) goto L_08A22940;
    return;
L_08A22940:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A22950u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A22950u) goto L_08A22950;
    return;
L_08A22950:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A22990;
      }
      goto L_08A22978;
    }
L_08A22978:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(88));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08A22990u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 287u, 0x0890DDACu>(ctx, &aot_mem) && ctx.pc == 0x08A22990u) goto L_08A22990;
    return;
L_08A22990:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (0u | 14u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(432), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(436), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(440), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    if (ctx.gpr[5] != 0u) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(408))))));
        goto L_08A229DC;
    }
    goto L_08A229DC;
L_08A229DC:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7868)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(384), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A229F4;
    }
L_08A229F4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22A0Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A22A0Cu) goto L_08A22A0C;
    return;
L_08A22A0C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A22A1Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A22A1Cu) goto L_08A22A1C;
    return;
L_08A22A1C:
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A22A50;
    }
L_08A22A50:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A22A68u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A22A68u) goto L_08A22A68;
    return;
L_08A22A68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (64u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22AD4;
      }
      goto L_08A22AA8;
    }
L_08A22AA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x08A22AC8u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A287F8u>(ctx, &aot_mem) && ctx.pc == 0x08A22AC8u) goto L_08A22AC8;
    return;
L_08A22AC8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22AD4;
      }
      goto L_08A22AD0;
    }
L_08A22AD0:
    ctx.gpr[17] = (0u | 1u);
    goto L_08A22AD4;
L_08A22AD4:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A22B00;
      }
      goto L_08A22AF8;
    }
L_08A22AF8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A22B50;
      }
      goto L_08A22B00;
    }
L_08A22B00:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A22B30;
    }
    goto L_08A22B1C;
L_08A22B1C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A22B50;
      }
      goto L_08A22B30;
    }
L_08A22B30:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22B50;
      }
      goto L_08A22B4C;
    }
L_08A22B4C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A22B50;
L_08A22B50:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22B90;
      }
      goto L_08A22B64;
    }
L_08A22B64:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[31] = (0x08A22B90u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 706u, 0x0887BD84u>(ctx, &aot_mem) && ctx.pc == 0x08A22B90u) goto L_08A22B90;
    return;
L_08A22B90:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22BA0;
      }
      goto L_08A22BA0;
    }
L_08A22BA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A22BA8;
    }
L_08A22BA8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A22BC4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A22BC4u) goto L_08A22BC4;
    return;
L_08A22BC4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[7] = (ctx.gpr[6] << 5u);
    ctx.gpr[6] = (ctx.gpr[6] << 2u);
    ctx.gpr[6] = (ctx.gpr[7] - ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A22C1C;
      }
      goto L_08A22C18;
    }
L_08A22C18:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A22C1C;
L_08A22C1C:
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
          goto L_08A22C48;
      }
      goto L_08A22C40;
    }
L_08A22C40:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A22C98;
      }
      goto L_08A22C48;
    }
L_08A22C48:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A22C78;
    }
    goto L_08A22C64;
L_08A22C64:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A22C98;
      }
      goto L_08A22C78;
    }
L_08A22C78:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22C98;
      }
      goto L_08A22C94;
    }
L_08A22C94:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A22C98;
L_08A22C98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A22CA0;
    }
L_08A22CA0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A22CBCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A22CBCu) goto L_08A22CBC;
    return;
L_08A22CBC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A22CCCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A22CCCu) goto L_08A22CCC;
    return;
L_08A22CCC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[6] = (ctx.gpr[5] << 5u);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1428)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A22CF8;
      }
      goto L_08A22CF4;
    }
L_08A22CF4:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A22CF8;
L_08A22CF8:
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
          goto L_08A22D24;
      }
      goto L_08A22D1C;
    }
L_08A22D1C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A22D74;
      }
      goto L_08A22D24;
    }
L_08A22D24:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A22D54;
    }
    goto L_08A22D40;
L_08A22D40:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A22D74;
      }
      goto L_08A22D54;
    }
L_08A22D54:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22D74;
      }
      goto L_08A22D70;
    }
L_08A22D70:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A22D74;
L_08A22D74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A22D7C;
    }
L_08A22D7C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A22D98u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A22D98u) goto L_08A22D98;
    return;
L_08A22D98:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A22DA8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A22DA8u) goto L_08A22DA8;
    return;
L_08A22DA8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A22DC0;
    }
L_08A22DC0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x08A22DDCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A22DDCu) goto L_08A22DDC;
    return;
L_08A22DDC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A22E04u);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(272));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A22E04u) goto L_08A22E04;
    return;
L_08A22E04:
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    goto L_08A22E0C;
L_08A22E0C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A22FF8;
      }
      goto L_08A22E14;
    }
L_08A22E14:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A22FF8;
      }
      goto L_08A22E20;
    }
L_08A22E20:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[18]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A22E48;
      }
      goto L_08A22E40;
    }
L_08A22E40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_08A22E60;
      }
      goto L_08A22E48;
    }
L_08A22E48:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[18])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[19] = (ctx.gpr[19] + ctx.gpr[4]);
    goto L_08A22E60;
L_08A22E60:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22FF0;
      }
      goto L_08A22E68;
    }
L_08A22E68:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A22E78u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A22E78u) goto L_08A22E78;
    return;
L_08A22E78:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6844)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A22FF0;
      }
      goto L_08A22E88;
    }
L_08A22E88:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A22FF0;
      }
      goto L_08A22E98;
    }
L_08A22E98:
    ctx.gpr[31] = (0x08A22EA0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A22EA0u) goto L_08A22EA0;
    return;
L_08A22EA0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22FF0;
      }
      goto L_08A22EA8;
    }
L_08A22EA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A22FF0;
      }
      goto L_08A22EB8;
    }
L_08A22EB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A22FF0;
      }
      goto L_08A22ECC;
    }
L_08A22ECC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A22FF0;
      }
      goto L_08A22ED8;
    }
L_08A22ED8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A22EF8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 28u, 0x088E41C8u>(ctx, &aot_mem) && ctx.pc == 0x08A22EF8u) goto L_08A22EF8;
    return;
L_08A22EF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22FF0;
      }
      goto L_08A22F00;
    }
L_08A22F00:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A22FF0;
      }
      goto L_08A22F10;
    }
L_08A22F10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A22FF0;
      }
      goto L_08A22F1C;
    }
L_08A22F1C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08A22F34u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A287F8u>(ctx, &aot_mem) && ctx.pc == 0x08A22F34u) goto L_08A22F34;
    return;
L_08A22F34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22FF0;
      }
      goto L_08A22F3C;
    }
L_08A22F3C:
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[28] - ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_08A22FF0;
      }
      goto L_08A22F60;
    }
L_08A22F60:
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[28] + ctx.fpr[13];
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A22FF0;
      }
      goto L_08A22F78;
    }
L_08A22F78:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A22F88u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A22F88u) goto L_08A22F88;
    return;
L_08A22F88:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6844), ctx.gpr[17]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A22FF0;
      }
      goto L_08A22FDC;
    }
L_08A22FDC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A22FF0u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x08A22FF0u) goto L_08A22FF0;
    return;
L_08A22FF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
      if (branch_taken) {
          goto L_08A22E0C;
      }
      goto L_08A22FF8;
    }
L_08A22FF8:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A23010u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A23010u) goto L_08A23010;
    return;
L_08A23010:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23018;
    }
L_08A23018:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(52));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23038u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08A23038u) goto L_08A23038;
    return;
L_08A23038:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2304Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 221u, 0x0887171Cu>(ctx, &aot_mem) && ctx.pc == 0x08A2304Cu) goto L_08A2304C;
    return;
L_08A2304C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A23068;
      }
      goto L_08A2305C;
    }
L_08A2305C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_08A23068;
L_08A23068:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x08A23078u);
    ctx.gpr[5] = (ctx.gpr[17] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 380u, 0x088723E8u>(ctx, &aot_mem) && ctx.pc == 0x08A23078u) goto L_08A23078;
    return;
L_08A23078:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A23094u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A23094u) goto L_08A23094;
    return;
L_08A23094:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A230ACu);
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 166u, 0x089D568Cu>(ctx, &aot_mem) && ctx.pc == 0x08A230ACu) goto L_08A230AC;
    return;
L_08A230AC:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_08A230B4;
L_08A230B4:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08A232A4;
      }
      goto L_08A230BC;
    }
L_08A230BC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A232A4;
      }
      goto L_08A230C8;
    }
L_08A230C8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08A230F0;
      }
      goto L_08A230E8;
    }
L_08A230E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (0u | 0u);
      if (branch_taken) {
          goto L_08A23108;
      }
      goto L_08A230F0;
    }
L_08A230F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(3248));
    { const std::int64_t product = static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[17])) * static_cast<std::int64_t>(static_cast<std::int32_t>(ctx.gpr[4])); ctx.lo = static_cast<std::uint32_t>(product); ctx.hi = static_cast<std::uint32_t>(static_cast<std::uint64_t>(product) >> 32u); }
    ctx.gpr[4] = (ctx.lo);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[4]);
    goto L_08A23108;
L_08A23108:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2329C;
      }
      goto L_08A23110;
    }
L_08A23110:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A23120u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A23120u) goto L_08A23120;
    return;
L_08A23120:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6844)));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08A2329C;
      }
      goto L_08A23130;
    }
L_08A23130:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[20] + static_cast<std::uint32_t>(428)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08A2329C;
      }
      goto L_08A23140;
    }
L_08A23140:
    ctx.gpr[31] = (0x08A23148u);
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 340u, 0x0899E1A0u>(ctx, &aot_mem) && ctx.pc == 0x08A23148u) goto L_08A23148;
    return;
L_08A23148:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2329C;
      }
      goto L_08A23150;
    }
L_08A23150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2329C;
      }
      goto L_08A23160;
    }
L_08A23160:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (128u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2329C;
      }
      goto L_08A23174;
    }
L_08A23174:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(864)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2329C;
      }
      goto L_08A23180;
    }
L_08A23180:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(1376)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08A231A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0056_entry, 56u, 28u, 0x088E41C8u>(ctx, &aot_mem) && ctx.pc == 0x08A231A0u) goto L_08A231A0;
    return;
L_08A231A0:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2329C;
      }
      goto L_08A231A8;
    }
L_08A231A8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & 512u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2329C;
      }
      goto L_08A231B8;
    }
L_08A231B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(628)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A2329C;
      }
      goto L_08A231C4;
    }
L_08A231C4:
    ctx.gpr[4] = (ctx.gpr[20] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
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
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x08A231E8u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 212u, 0x08871684u>(ctx, &aot_mem) && ctx.pc == 0x08A231E8u) goto L_08A231E8;
    return;
L_08A231E8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2329C;
      }
      goto L_08A231F0;
    }
L_08A231F0:
    ctx.gpr[4] = (16544u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] - ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[22] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (16544u << 16u);
      if (branch_taken) {
          goto L_08A2329C;
      }
      goto L_08A2320C;
    }
L_08A2320C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[20] + ctx.fpr[12];
    ctx.set_fpu_condition((ctx.fpr[22] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A2329C;
      }
      goto L_08A23224;
    }
L_08A23224:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A23234u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x08A23234u) goto L_08A23234;
    return;
L_08A23234:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6844), ctx.gpr[18]);
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[20] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[20] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2329C;
      }
      goto L_08A23288;
    }
L_08A23288:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2329Cu);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x08A2329Cu) goto L_08A2329C;
    return;
L_08A2329C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08A230B4;
      }
      goto L_08A232A4;
    }
L_08A232A4:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A232BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A232BCu) goto L_08A232BC;
    return;
L_08A232BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A232C4;
    }
L_08A232C4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A232DCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A232DCu) goto L_08A232DC;
    return;
L_08A232DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23370;
      }
      goto L_08A23314;
    }
L_08A23314:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23370;
      }
      goto L_08A23324;
    }
L_08A23324:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (0u | 151u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2336C;
      }
      goto L_08A2333C;
    }
L_08A2333C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (0u | 166u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2336C;
      }
      goto L_08A2334C;
    }
L_08A2334C:
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[7] = (0u | 181u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[7];
    // nop
      if (branch_taken) {
          goto L_08A2336C;
      }
      goto L_08A2335C;
    }
L_08A2335C:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-967));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A23370;
      }
      goto L_08A2336C;
    }
L_08A2336C:
    ctx.gpr[5] = (0u | 1u);
    goto L_08A23370;
L_08A23370:
    ctx.gpr[4] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A2339C;
      }
      goto L_08A23394;
    }
L_08A23394:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[5]));
      if (branch_taken) {
          goto L_08A233EC;
      }
      goto L_08A2339C;
    }
L_08A2339C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A233CC;
    }
    goto L_08A233B8;
L_08A233B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A233EC;
      }
      goto L_08A233CC;
    }
L_08A233CC:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A233EC;
      }
      goto L_08A233E8;
    }
L_08A233E8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A233EC;
L_08A233EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A233F4;
    }
L_08A233F4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2340Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A2340Cu) goto L_08A2340C;
    return;
L_08A2340C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (64u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23450;
      }
      goto L_08A2344C;
    }
L_08A2344C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A23450;
L_08A23450:
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
          goto L_08A2347C;
      }
      goto L_08A23474;
    }
L_08A23474:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A234CC;
      }
      goto L_08A2347C;
    }
L_08A2347C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A234AC;
    }
    goto L_08A23498;
L_08A23498:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A234CC;
      }
      goto L_08A234AC;
    }
L_08A234AC:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A234CC;
      }
      goto L_08A234C8;
    }
L_08A234C8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A234CC;
L_08A234CC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A234D4;
    }
L_08A234D4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A234ECu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A234ECu) goto L_08A234EC;
    return;
L_08A234EC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A234FCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A234FCu) goto L_08A234FC;
    return;
L_08A234FC:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (64u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23518;
      }
      goto L_08A23514;
    }
L_08A23514:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A23518;
L_08A23518:
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
          goto L_08A23544;
      }
      goto L_08A2353C;
    }
L_08A2353C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A23594;
      }
      goto L_08A23544;
    }
L_08A23544:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A23574;
    }
    goto L_08A23560;
L_08A23560:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A23594;
      }
      goto L_08A23574;
    }
L_08A23574:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23594;
      }
      goto L_08A23590;
    }
L_08A23590:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A23594;
L_08A23594:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A2359C;
    }
L_08A2359C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A235B8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A235B8u) goto L_08A235B8;
    return;
L_08A235B8:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A235F8;
    }
    goto L_08A235DC;
L_08A235DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A235E8u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A235E8u) goto L_08A235E8;
    return;
L_08A235E8:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(404), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08A235F8;
L_08A235F8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A23604u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 627u, 0x08957D28u>(ctx, &aot_mem) && ctx.pc == 0x08A23604u) goto L_08A23604;
    return;
L_08A23604:
    ctx.gpr[31] = (0x08A2360Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0159_entry, 159u, 227u, 0x08A822ACu>(ctx, &aot_mem) && ctx.pc == 0x08A2360Cu) goto L_08A2360C;
    return;
L_08A2360C:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(404)));
      if (branch_taken) {
          goto L_08A23618;
      }
      goto L_08A23618;
    }
L_08A23618:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(122)));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (0u | 8u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A23654u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 206u, 0x08A84F08u>(ctx, &aot_mem) && ctx.pc == 0x08A23654u) goto L_08A23654;
    return;
L_08A23654:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A23668u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A23668u) goto L_08A23668;
    return;
L_08A23668:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23670;
    }
L_08A23670:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A2368Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A2368Cu) goto L_08A2368C;
    return;
L_08A2368C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A2369Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A2369Cu) goto L_08A2369C;
    return;
L_08A2369C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16288u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_08A236D8;
    }
    goto L_08A236D8;
L_08A236D8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1722), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A236EC;
    }
L_08A236EC:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23708u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A23708u) goto L_08A23708;
    return;
L_08A23708:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A23718u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A23718u) goto L_08A23718;
    return;
L_08A23718:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
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
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23754u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A23754u) goto L_08A23754;
    return;
L_08A23754:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A2375C;
    }
L_08A2375C:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A2377Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08A2377Cu) goto L_08A2377C;
    return;
L_08A2377C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[31] = (0x08A23790u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 397u, 0x0898641Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23790u) goto L_08A23790;
    return;
L_08A23790:
    ctx.gpr[31] = (0x08A23798u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 39u, 0x088245A4u>(ctx, &aot_mem) && ctx.pc == 0x08A23798u) goto L_08A23798;
    return;
L_08A23798:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A237A0;
    }
L_08A237A0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A237BCu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A237BCu) goto L_08A237BC;
    return;
L_08A237BC:
    ctx.gpr[31] = (0x08A237C4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 516u, 0x08AE71D4u>(ctx, &aot_mem) && ctx.pc == 0x08A237C4u) goto L_08A237C4;
    return;
L_08A237C4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x08A237D4u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 797u, 0x08AFB66Cu>(ctx, &aot_mem) && ctx.pc == 0x08A237D4u) goto L_08A237D4;
    return;
L_08A237D4:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A237E8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A237E8u) goto L_08A237E8;
    return;
L_08A237E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A237F0;
    }
L_08A237F0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A23808u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A23808u) goto L_08A23808;
    return;
L_08A23808:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x08A23818u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x08A23818u) goto L_08A23818;
    return;
L_08A23818:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A2383Cu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08A2383Cu) goto L_08A2383C;
    return;
L_08A2383C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08A23854u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 534u, 0x08AE7344u>(ctx, &aot_mem) && ctx.pc == 0x08A23854u) goto L_08A23854;
    return;
L_08A23854:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A2385C;
    }
L_08A2385C:
    ctx.gpr[31] = (0x08A23864u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 544u, 0x08AE7428u>(ctx, &aot_mem) && ctx.pc == 0x08A23864u) goto L_08A23864;
    return;
L_08A23864:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A2386C;
    }
L_08A2386C:
    ctx.gpr[31] = (0x08A23874u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 577u, 0x08AE7788u>(ctx, &aot_mem) && ctx.pc == 0x08A23874u) goto L_08A23874;
    return;
L_08A23874:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A2388Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A2388Cu) goto L_08A2388C;
    return;
L_08A2388C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23894;
    }
L_08A23894:
    ctx.gpr[31] = (0x08A2389Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0184_entry, 184u, 581u, 0x08AE77D8u>(ctx, &aot_mem) && ctx.pc == 0x08A2389Cu) goto L_08A2389C;
    return;
L_08A2389C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A238BC;
      }
      goto L_08A238A4;
    }
L_08A238A4:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A238B4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2188));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 306u, 0x08A1DFC4u>(ctx, &aot_mem) && ctx.pc == 0x08A238B4u) goto L_08A238B4;
    return;
L_08A238B4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A238C0;
      }
      goto L_08A238BC;
    }
L_08A238BC:
    ctx.gpr[17] = (0u | 0u);
    goto L_08A238C0;
L_08A238C0:
    ctx.gpr[4] = (0u < ctx.gpr[17] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[17] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u < ctx.gpr[17] ? 1u : 0u);
      if (branch_taken) {
          goto L_08A238EC;
      }
      goto L_08A238E4;
    }
L_08A238E4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_08A2393C;
      }
      goto L_08A238EC;
    }
L_08A238EC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A2391C;
    }
    goto L_08A23908;
L_08A23908:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A2393C;
      }
      goto L_08A2391C;
    }
L_08A2391C:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A2393C;
      }
      goto L_08A23938;
    }
L_08A23938:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A2393C;
L_08A2393C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23944;
    }
L_08A23944:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08A23950u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(2216));
    if (rt.invoke_chained_direct<&recomp_unit_0134_entry, 134u, 306u, 0x08A1DFC4u>(ctx, &aot_mem) && ctx.pc == 0x08A23950u) goto L_08A23950;
    return;
L_08A23950:
    ctx.gpr[31] = (0x08A23958u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 41u, 0x088245C0u>(ctx, &aot_mem) && ctx.pc == 0x08A23958u) goto L_08A23958;
    return;
L_08A23958:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23960;
    }
L_08A23960:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[31] = (0x08A23970u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 248u, 0x088EDC30u>(ctx, &aot_mem) && ctx.pc == 0x08A23970u) goto L_08A23970;
    return;
L_08A23970:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23978;
    }
L_08A23978:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08A23994u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A23994u) goto L_08A23994;
    return;
L_08A23994:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A239D0;
      }
      goto L_08A239B8;
    }
L_08A239B8:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x08A239C4u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08A239C4u) goto L_08A239C4;
    return;
L_08A239C4:
    ctx.gpr[4] = (16128u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[0] + ctx.fpr[12];
    goto L_08A239D0;
L_08A239D0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(120)));
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[9] = (0u | 0u);
    ctx.gpr[31] = (0x08A23A04u);
    ctx.gpr[10] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0160_entry, 160u, 206u, 0x08A84F08u>(ctx, &aot_mem) && ctx.pc == 0x08A23A04u) goto L_08A23A04;
    return;
L_08A23A04:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23A0C;
    }
L_08A23A0C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A23A24u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A23A24u) goto L_08A23A24;
    return;
L_08A23A24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(200), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23A5C;
    }
L_08A23A5C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A23A78u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A23A78u) goto L_08A23A78;
    return;
L_08A23A78:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08A23A88u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08A23A88u) goto L_08A23A88;
    return;
L_08A23A88:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08A23AA0;
      }
      goto L_08A23A9C;
    }
L_08A23A9C:
    ctx.gpr[4] = (0u | 1u);
    goto L_08A23AA0;
L_08A23AA0:
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
          goto L_08A23ACC;
      }
      goto L_08A23AC4;
    }
L_08A23AC4:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A23B1C;
      }
      goto L_08A23ACC;
    }
L_08A23ACC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08A23AFC;
    }
    goto L_08A23AE8;
L_08A23AE8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08A23B1C;
      }
      goto L_08A23AFC;
    }
L_08A23AFC:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23B1C;
      }
      goto L_08A23B18;
    }
L_08A23B18:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08A23B1C;
L_08A23B1C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23B24;
    }
L_08A23B24:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08A23B3Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A23B3Cu) goto L_08A23B3C;
    return;
L_08A23B3C:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x08A23B58u);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x08A23B58u) goto L_08A23B58;
    return;
L_08A23B58:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23BB0;
      }
      goto L_08A23B68;
    }
L_08A23B68:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 65 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
      if (branch_taken) {
          goto L_08A23B9C;
      }
      goto L_08A23B7C;
    }
L_08A23B7C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[5]) < 91 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23B9C;
      }
      goto L_08A23B8C;
    }
L_08A23B8C:
    ctx.gpr[5] = (ctx.gpr[29] + ctx.gpr[4]);
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(96))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(32));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(96), static_cast<std::uint8_t>(ctx.gpr[6]));
    goto L_08A23B9C;
L_08A23B9C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 8 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_08A23B68;
      }
      goto L_08A23BB0;
    }
L_08A23BB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23BD8;
      }
      goto L_08A23BBC;
    }
L_08A23BBC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08A23BD0u);
    ctx.gpr[6] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 660u, 0x089C6C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23BD0u) goto L_08A23BD0;
    return;
L_08A23BD0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08A23BEC;
      }
      goto L_08A23BD8;
    }
L_08A23BD8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[31] = (0x08A23BECu);
    ctx.gpr[6] = (0u | 132u);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 660u, 0x089C6C8Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23BECu) goto L_08A23BEC;
    return;
L_08A23BEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23C00;
    }
L_08A23C00:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23C1Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A23C1Cu) goto L_08A23C1C;
    return;
L_08A23C1C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23C70u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A23C70u) goto L_08A23C70;
    return;
L_08A23C70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23C78;
    }
L_08A23C78:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23C94u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A23C94u) goto L_08A23C94;
    return;
L_08A23C94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
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
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23CE8u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A23CE8u) goto L_08A23CE8;
    return;
L_08A23CE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23CF0;
    }
L_08A23CF0:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23D0Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A23D0Cu) goto L_08A23D0C;
    return;
L_08A23D0C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A23D1Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A23D1Cu) goto L_08A23D1C;
    return;
L_08A23D1C:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[14] + ctx.fpr[13];
    ctx.fpr[13] = std::sqrt(ctx.fpr[13]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23D54u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A23D54u) goto L_08A23D54;
    return;
L_08A23D54:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23D5C;
    }
L_08A23D5C:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23D78u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A23D78u) goto L_08A23D78;
    return;
L_08A23D78:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08A23D88u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08A23D88u) goto L_08A23D88;
    return;
L_08A23D88:
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(16));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[14];
    ctx.fpr[12] = std::sqrt(ctx.fpr[12]);
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08A23DC0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08A23DC0u) goto L_08A23DC0;
    return;
L_08A23DC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23DC8;
    }
L_08A23DC8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08A23DE4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A23DE4u) goto L_08A23DE4;
    return;
L_08A23DE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[4]) >> 16u));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[31] = (0x08A23E00u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0077_entry, 77u, 708u, 0x0893B94Cu>(ctx, &aot_mem) && ctx.pc == 0x08A23E00u) goto L_08A23E00;
    return;
L_08A23E00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23E08;
    }
L_08A23E08:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 10u);
    ctx.gpr[31] = (0x08A23E24u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A23E24u) goto L_08A23E24;
    return;
L_08A23E24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(16)));
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(20)));
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08A23E58;
      }
      goto L_08A23E4C;
    }
L_08A23E4C:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    goto L_08A23E58;
L_08A23E58:
    ctx.set_fpu_condition((ctx.fpr[17] < ctx.fpr[15]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
        goto L_08A23E78;
    }
    goto L_08A23E68;
L_08A23E68:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[0] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    goto L_08A23E78;
L_08A23E78:
    ctx.fpr[2] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[19] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[19] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[4] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[19] = ctx.fpr[19] / ctx.fpr[4];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[1]));
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[3]));
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[2]));
    ctx.gpr[31] = (0x08A23EE0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    if (rt.invoke_chained_direct<&recomp_unit_0094_entry, 94u, 9u, 0x0897C1DCu>(ctx, &aot_mem) && ctx.pc == 0x08A23EE0u) goto L_08A23EE0;
    return;
L_08A23EE0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23EE8;
    }
L_08A23EE8:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A23F28;
      }
      goto L_08A23EF8;
    }
L_08A23EF8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A23F04u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A23F04u) goto L_08A23F04;
    return;
L_08A23F04:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A23F20;
      }
      goto L_08A23F10;
    }
L_08A23F10:
    ctx.gpr[31] = (0x08A23F18u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A23F18u) goto L_08A23F18;
    return;
L_08A23F18:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A23F20;
L_08A23F20:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A23F28;
L_08A23F28:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A23F40u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A23F40u) goto L_08A23F40;
    return;
L_08A23F40:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x08A23F6Cu);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x08A23F6Cu) goto L_08A23F6C;
    return;
L_08A23F6C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[9] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[10] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[11] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x08A23F9Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 372u, 0x0887A178u>(ctx, &aot_mem) && ctx.pc == 0x08A23F9Cu) goto L_08A23F9C;
    return;
L_08A23F9C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0136_entry, 136u, 164u, 0x08A24BE0u>(ctx, &aot_mem); return;
      }
      goto L_08A23FA4;
    }
L_08A23FA4:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A23FE4;
      }
      goto L_08A23FB4;
    }
L_08A23FB4:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08A23FC0u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08A23FC0u) goto L_08A23FC0;
    return;
L_08A23FC0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    ctx.gpr[4] = (2227u << 16u);
      if (branch_taken) {
          goto L_08A23FDC;
      }
      goto L_08A23FCC;
    }
L_08A23FCC:
    ctx.gpr[31] = (0x08A23FD4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x08A23FD4u) goto L_08A23FD4;
    return;
L_08A23FD4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A23FDC;
L_08A23FDC:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[4] = (2227u << 16u);
    goto L_08A23FE4;
L_08A23FE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[31] = (0x08A23FFCu);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x08A23FFCu) goto L_08A23FFC;
    return;
L_08A23FFC:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.pc = 0x08A24000u; return;
}

void recomp_unit_0135(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0135_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_135(Runtime &runtime) {
    runtime.register_generated_unit(135u, 0x08A20000u, 16384u, &recomp_unit_0135, &recomp_unit_0135_entry);
    runtime.register_function(0x08A20000u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20004u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2000Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20010u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20028u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20034u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2003Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20040u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20050u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20058u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2005Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20080u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20088u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A200A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A200B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A200D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A200D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A200E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A200F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20104u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20124u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20130u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20138u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20140u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20148u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20150u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20170u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20184u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20198u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A201A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A201B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A201E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A201E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20204u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20224u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20248u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20254u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20264u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A202E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A202E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A202F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A202F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20300u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20308u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20310u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20318u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20320u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20328u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20344u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2036Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20378u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2037Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20394u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A203FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20430u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20434u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20458u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20460u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2047Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20490u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A204E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20518u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20554u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20570u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20588u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20594u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2059Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A205E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20608u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20614u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20618u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20638u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20640u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2065Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2067Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20688u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20698u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A206F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20714u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2071Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20734u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20740u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20748u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20764u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20774u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20784u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2078Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A207A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A207DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A207E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20800u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20810u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20820u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20828u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20844u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20878u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20880u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2089Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A208ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A208BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A208C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A208E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20914u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2091Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20938u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20948u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20958u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20960u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2097Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A209FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20A9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20ABCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AC4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20AF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20B80u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BCCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20BF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20C9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CA4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20CF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20D90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DD8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20DFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E2Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E34u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E7Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20E98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20EB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20EBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20ED0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20ED8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20EF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F7Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20F8Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FB0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FD0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A20FF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21010u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2101Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21040u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21048u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21064u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21078u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21094u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21098u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A210F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21100u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21110u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21118u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21130u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21144u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21168u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21188u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21190u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21198u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A211E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21200u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21210u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21220u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21248u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2126Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21274u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2127Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21298u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A212FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21304u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2131Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2132Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21344u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21354u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21364u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21374u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21378u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2139Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A213A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A213C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A213D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A213F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A213F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A213FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21414u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2142Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21438u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21440u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2144Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21454u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2145Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21464u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21480u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21488u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2149Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A214F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21500u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2150Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21510u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21544u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21550u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21554u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21584u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21598u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A215FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21614u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2161Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21634u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21644u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21650u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2165Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21660u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21684u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2168Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A216FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21730u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21738u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2173Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21760u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21768u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21784u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21798u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A217F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21800u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21804u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21828u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21830u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2184Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21860u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2187Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21880u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21888u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A218F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21904u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2190Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21924u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2192Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21948u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2196Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21978u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21980u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2198Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21994u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A219F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A34u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21A88u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21AA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21AB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21ABCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21AD8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21AE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21AF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B28u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B8Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21B94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21BB0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21BC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21BD0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21BE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21BF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C34u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21C98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21CF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D2Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D7Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21D90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DA4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DCCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21DF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E44u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21E94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21ED4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21EF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F28u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F38u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F84u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21F98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21FB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21FB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21FC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A21FDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22000u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2200Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22010u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22048u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A220FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22100u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22138u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22148u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22178u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22180u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2219Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A221ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22210u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22218u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22224u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2222Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22260u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22270u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2227Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22284u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2229Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A222ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22364u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2236Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22374u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22378u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2239Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A223A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A223C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A223D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A223F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A223F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A223FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22414u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22424u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A224F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22514u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2251Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22538u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2254Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22568u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2256Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22574u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2258Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2259Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22654u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2265Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22664u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22668u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2268Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22694u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A226B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A226C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A226E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A226E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A226ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22704u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22734u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22754u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22768u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22780u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22788u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A227D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22808u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22820u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22828u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22840u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2285Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22864u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22868u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2288Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22894u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228B0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228E0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A228ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22904u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2291Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22924u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22940u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22950u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22978u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22990u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A229F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22A68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22AA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22AC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22AD0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22AD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22AF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B30u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B50u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22B90u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22BA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22BA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22BC4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C64u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22C98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CCCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CF4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22CF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D74u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D7Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22D98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22DA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22DC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22DDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E14u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E48u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E88u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22E98u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22EA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22EA8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22EB8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22ECCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22ED8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22EF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F34u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F60u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22F88u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A22FF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23010u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23018u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23038u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2304Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2305Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23068u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23078u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23094u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A230ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A230B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A230BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A230C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A230E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A230F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23108u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23110u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23120u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23130u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23140u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23148u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23150u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23160u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23174u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23180u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231A8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A231F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2320Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23224u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23234u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23288u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2329Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A232DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23314u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23324u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2333Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2334Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2335Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2336Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23370u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23394u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2339Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A233B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A233CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A233E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A233ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A233F4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2340Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2344Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23450u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23474u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2347Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23498u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234ACu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234C8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234CCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A234FCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23514u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23518u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2353Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23544u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23560u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23574u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23590u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23594u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2359Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235DCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A235F8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23604u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2360Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23618u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23654u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23668u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23670u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2368Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2369Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A236D8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A236ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23708u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23718u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23754u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2375Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2377Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23790u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23798u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A237A0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A237BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A237C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A237D4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A237E8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A237F0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23808u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23818u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2383Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23854u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2385Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23864u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2386Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23874u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2388Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23894u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2389Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238A4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238B4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238BCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238C0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238E4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A238ECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23908u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2391Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23938u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A2393Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23944u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23950u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23958u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23960u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23970u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23978u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23994u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239B8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239C4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A239D0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A88u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23A9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23AA0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23AC4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23ACCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23AE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23AFCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B3Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B7Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B8Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23B9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BB0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BBCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BD0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BD8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23BECu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C70u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23C94u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23CE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23CF0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D0Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D1Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D54u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D5Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23D88u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DC8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23DE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E00u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E08u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E24u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E4Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E58u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E68u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23E78u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23EE0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23EE8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23EF8u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F04u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F10u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F18u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F20u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F28u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F40u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F6Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23F9Cu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FA4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FB4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FC0u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FCCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FD4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FDCu, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FE4u, &recomp_unit_0135, "recomp_unit_0135");
    runtime.register_function(0x08A23FFCu, &recomp_unit_0135, "recomp_unit_0135");
}
} // namespace psprecomp
