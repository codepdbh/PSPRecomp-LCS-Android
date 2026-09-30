#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0087[4095] = {
    1, 0, 2, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 4, 0, 5, 6, 0, 0, 0, 0, 0, 0, 0,
    0, 7, 0, 8, 0, 0, 0, 0, 0, 0, 9, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 11, 12, 0, 13, 0, 0, 0, 0, 0, 14,
    0, 0, 0, 15, 0, 0, 0, 16, 0, 0, 17, 0, 18, 19, 0, 0, 0, 0, 0, 0, 0, 0, 20, 0, 21, 0, 0, 0, 0, 0, 0, 22,
    0, 0, 0, 0, 23, 0, 0, 0, 0, 0, 0, 24, 25, 0, 26, 0, 0, 0, 0, 0, 27, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 28, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 29, 0, 30, 31, 0, 0, 0, 0, 0, 0, 0, 0, 32, 0, 33, 0, 0, 0,
    0, 0, 0, 34, 0, 0, 0, 0, 35, 0, 0, 0, 0, 0, 0, 36, 37, 0, 38, 0, 0, 0, 0, 0, 0, 39, 0, 0, 0, 0, 0, 40,
    0, 41, 0, 42, 43, 0, 0, 0, 0, 0, 0, 0, 0, 44, 0, 45, 0, 0, 0, 0, 0, 0, 46, 0, 0, 0, 0, 47, 0, 0, 0, 0,
    0, 0, 48, 49, 0, 50, 0, 0, 0, 51, 0, 52, 0, 0, 0, 53, 0, 54, 0, 0, 0, 55, 0, 56, 0, 0, 0, 57, 0, 58, 0, 0,
    0, 59, 0, 60, 0, 0, 0, 61, 0, 62, 0, 0, 0, 63, 0, 64, 0, 0, 0, 65, 0, 66, 0, 0, 0, 0, 0, 67, 0, 0, 68, 0,
    0, 0, 0, 0, 0, 0, 69, 0, 0, 70, 0, 0, 71, 0, 0, 72, 73, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 74, 0, 0,
    75, 76, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 0, 0, 0, 79, 0, 80, 0, 81, 0, 0, 0, 0, 0, 82,
    0, 83, 0, 0, 0, 84, 0, 0, 0, 0, 0, 85, 0, 0, 86, 0, 0, 0, 0, 0, 87, 0, 88, 0, 0, 0, 0, 0, 89, 0, 0, 0,
    0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 92, 0, 93, 0, 94, 0, 95, 0, 96, 0, 97, 0, 0, 0, 0, 0, 0, 98, 0, 0, 99, 0,
    0, 0, 0, 0, 100, 0, 101, 0, 0, 0, 0, 0, 0, 102, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 103, 0, 0, 0,
    0, 0, 0, 0, 0, 104, 0, 105, 0, 0, 0, 0, 0, 0, 106, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 107, 0, 108, 109,
    0, 0, 0, 0, 0, 0, 0, 0, 110, 0, 111, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 113, 0, 0, 0, 0, 0, 0, 114, 115, 0,
    116, 0, 0, 0, 0, 0, 0, 117, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 118, 0, 119, 0, 0, 0, 0, 0, 0, 120,
    0, 0, 0, 0, 0, 0, 0, 0, 121, 0, 0, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 125,
    0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 130, 0, 0, 0, 0,
    0, 0, 131, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 132, 0, 133, 0, 0, 0, 0, 0, 0, 134, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 135, 0, 136, 137, 0, 0, 0, 0, 0, 0, 0, 0, 138, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 0, 0, 0,
    141, 0, 0, 0, 0, 0, 0, 142, 143, 0, 144, 0, 0, 0, 0, 0, 145, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 146, 0, 147, 0,
    0, 0, 0, 0, 148, 0, 0, 149, 0, 0, 150, 151, 0, 152, 0, 0, 153, 0, 154, 155, 0, 0, 0, 0, 0, 0, 0, 0, 156, 0, 157, 0,
    0, 0, 0, 0, 0, 158, 0, 0, 0, 0, 159, 0, 0, 0, 0, 0, 0, 160, 161, 0, 162, 0, 0, 0, 0, 0, 0, 163, 0, 0, 0, 164,
    0, 0, 0, 165, 0, 166, 0, 0, 0, 0, 0, 0, 167, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 168, 0, 169, 170, 0, 0, 0, 0,
    0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 176, 0, 177, 0, 0, 0,
    0, 0, 0, 178, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 179, 0, 180, 181, 0, 0, 0, 0, 0, 0, 0, 0, 182, 0, 183, 0, 0,
    0, 0, 0, 0, 184, 0, 0, 0, 0, 185, 0, 0, 0, 0, 0, 0, 186, 187, 0, 188, 0, 0, 0, 0, 0, 189, 0, 0, 0, 190, 0, 0,
    191, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 194, 0, 195, 0, 196, 197, 0, 0, 0, 0, 0, 0, 0, 0, 198, 0, 199, 0, 0, 0,
    0, 0, 0, 200, 0, 0, 0, 0, 201, 0, 0, 0, 0, 0, 0, 202, 203, 0, 204, 0, 0, 0, 0, 0, 205, 0, 0, 0, 206, 0, 0, 207,
    0, 0, 0, 0, 208, 0, 209, 0, 0, 0, 210, 0, 211, 0, 212, 213, 0, 0, 0, 0, 0, 0, 0, 0, 214, 0, 215, 0, 0, 0, 0, 0,
    0, 216, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 0, 218, 219, 0, 220, 0, 0, 0, 0, 0, 0, 221, 0, 0, 0, 222, 0, 0, 0, 0,
    0, 223, 0, 0, 0, 0, 0, 224, 0, 0, 0, 225, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 226, 0, 227, 0, 0, 0, 0, 0, 228, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 0, 230, 0, 0, 0, 231, 0, 0, 232, 0, 0, 0, 233,
    0, 0, 0, 0, 0, 0, 234, 0, 0, 0, 235, 0, 236, 0, 237, 238, 0, 0, 0, 0, 0, 0, 0, 0, 239, 0, 240, 0, 0, 0, 0, 0,
    0, 241, 0, 0, 0, 0, 242, 0, 0, 0, 0, 0, 0, 243, 244, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 247, 0, 0, 248, 0, 249, 0, 250, 0, 251, 0, 252, 253, 0, 0, 0, 0, 0, 0, 0, 0, 254, 0, 255, 0, 0, 0, 0,
    0, 0, 256, 0, 0, 0, 0, 257, 0, 0, 0, 0, 0, 0, 258, 259, 0, 260, 0, 0, 0, 0, 0, 0, 261, 0, 0, 0, 262, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 263, 0, 264, 265, 0, 0, 0, 0, 0, 0, 0, 0, 266, 0, 267, 0, 0, 0, 0, 0, 0, 268,
    0, 0, 0, 0, 269, 0, 0, 0, 0, 0, 0, 270, 271, 0, 272, 0, 0, 0, 0, 0, 273, 0, 0, 0, 274, 0, 0, 0, 0, 275, 0, 276,
    277, 0, 0, 0, 0, 0, 0, 0, 0, 278, 0, 279, 0, 0, 0, 0, 0, 0, 280, 0, 0, 0, 0, 281, 0, 0, 0, 0, 0, 0, 282, 283,
    0, 284, 0, 0, 0, 0, 0, 0, 285, 0, 0, 0, 286, 0, 0, 0, 0, 0, 287, 0, 0, 288, 0, 289, 0, 290, 0, 291, 0, 292, 0, 0,
    0, 0, 0, 293, 0, 0, 294, 0, 295, 0, 0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 298, 0, 0, 0, 0, 0, 299, 0, 0, 0, 300, 0,
    301, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0, 304, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 307, 0, 0, 0, 0, 0, 308, 0,
    0, 0, 309, 0, 0, 0, 0, 0, 310, 0, 0, 311, 0, 0, 312, 0, 0, 0, 0, 313, 314, 0, 315, 0, 0, 0, 0, 0, 316, 0, 0, 0,
    0, 317, 0, 0, 318, 0, 0, 319, 0, 0, 0, 320, 321, 0, 322, 0, 0, 323, 0, 0, 324, 0, 0, 0, 0, 325, 326, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 327, 0, 0, 0, 0, 328, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 329, 0, 0, 0, 0, 330, 0, 0, 0, 331, 0, 0, 332, 0, 0, 333, 0, 0, 334, 335, 0, 336, 337,
    0, 0, 0, 0, 338, 0, 0, 0, 339, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 340, 0, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 342, 0, 0, 0, 343, 0, 0, 344, 0, 0, 0, 0, 0, 0, 0, 345, 0, 0, 0, 0, 0, 346, 0, 0, 347, 0, 0, 0,
    0, 0, 348, 0, 349, 0, 0, 0, 0, 0, 0, 350, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 351, 0, 0,
    352, 353, 0, 0, 0, 354, 0, 0, 0, 355, 0, 0, 0, 0, 0, 356, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 0, 0, 359, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 0, 361, 0, 0, 362, 0, 0, 0, 0, 0, 0, 0, 0, 363, 0, 0, 364,
    0, 0, 365, 0, 0, 366, 367, 0, 368, 369, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 0,
    0, 371, 0, 0, 0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 0, 0, 374, 0, 375, 0, 0, 376, 0, 377, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 378, 0, 0, 0, 0, 0, 379, 0, 380, 381, 0, 0, 0, 0, 0, 0, 0, 0, 0, 382, 0, 0, 0, 0,
    0, 0, 0, 383, 0, 0, 0, 384, 0, 0, 0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 387, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 392, 0, 0, 0, 0, 0, 0, 393, 0, 394, 0, 0, 0,
    0, 0, 0, 395, 0, 396, 0, 0, 0, 0, 397, 0, 398, 0, 0, 0, 0, 0, 0, 399, 0, 400, 0, 0, 0, 0, 0, 401, 0, 402, 403, 0,
    0, 0, 0, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 406, 0, 407, 0, 0, 408, 0, 0, 0, 409, 0, 0, 410, 0, 0, 411, 0, 0, 412, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 413, 0, 0, 0, 0, 0, 414, 0, 0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 0, 417, 0, 0,
    0, 0, 0, 418, 0, 0, 0, 0, 0, 419, 0, 0, 420, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 421, 0, 422, 0, 423, 0, 0, 424, 0, 0, 425, 0, 0, 0, 0, 0, 0, 0, 426, 0, 427, 0, 0, 428, 0, 0, 0, 0, 429, 0, 0,
    0, 0, 430, 0, 0, 0, 0, 431, 0, 0, 432, 0, 433, 434, 0, 0, 435, 0, 0, 0, 436, 0, 0, 0, 0, 437, 0, 0, 0, 0, 438, 0,
    0, 0, 0, 0, 0, 0, 0, 439, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 440, 0, 0, 0, 0, 441, 0, 442, 0, 0, 0, 0, 0, 443,
    0, 0, 0, 444, 0, 0, 0, 0, 445, 0, 446, 0, 447, 0, 0, 0, 0, 0, 448, 0, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 0, 450,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 451, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 452,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 453, 0, 0, 0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 456, 0,
    0, 0, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 459, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 460, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 461, 0, 0, 0, 0, 0, 462, 0, 0, 463, 0, 0, 0, 0, 0, 0, 464,
    0, 465, 0, 0, 0, 0, 466, 0, 0, 467, 0, 0, 468, 0, 469, 470, 0, 0, 0, 0, 471, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 472, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 473, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 474, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 0, 477, 0, 0, 478, 0, 0, 479, 0, 0,
    480, 0, 481, 0, 0, 482, 0, 483, 0, 484, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 485, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 486, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 487, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 488, 0, 0, 0, 0, 0, 0, 0, 0, 489, 0, 0, 0, 0,
    490, 0, 0, 0, 0, 0, 0, 491, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 492, 0, 0, 0, 493, 0, 494, 0, 0, 0, 0, 495, 0, 0,
    0, 0, 0, 0, 0, 0, 496, 0, 0, 497, 0, 0, 498, 499, 0, 500, 501, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    504, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 505, 0, 506, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 507, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 508, 0, 0, 0, 0, 0, 0, 509, 0, 0, 510, 0, 0, 0, 0,
    511, 0, 0, 512, 0, 0, 0, 0, 0, 0, 0, 513, 0, 0, 0, 0, 514, 0, 0, 515, 0, 0, 0, 0, 516, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 517, 0, 0, 0, 518, 0, 0, 519, 0, 0, 0, 0, 0, 520, 0, 0, 521, 0, 0, 0, 0, 0, 0, 522, 0, 0, 0,
    523, 0, 0, 524, 0, 0, 525, 0, 526, 0, 527, 0, 528, 529, 0, 0, 0, 0, 530, 0, 0, 531, 0, 0, 532, 0, 0, 533, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 534, 535, 0, 0, 0, 0, 0, 0, 0, 0, 536, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 537, 0, 0,
    0, 538, 0, 0, 539, 0, 0, 0, 0, 0, 540, 0, 0, 541, 0, 0, 0, 542, 0, 543, 0, 544, 0, 0, 545, 0, 546, 0, 0, 0, 0, 0,
    0, 547, 0, 0, 548, 0, 0, 549, 0, 0, 550, 0, 0, 0, 551, 0, 0, 552, 0, 553, 0, 0, 554, 0, 555, 0, 556, 0, 0, 557, 0, 0,
    558, 0, 0, 0, 0, 559, 0, 0, 560, 0, 0, 561, 0, 562, 563, 0, 0, 0, 0, 564, 0, 0, 565, 0, 0, 566, 0, 0, 567, 0, 0, 0,
    0, 0, 0, 0, 568, 569, 0, 0, 0, 0, 0, 0, 0, 0, 0, 570, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 571, 0, 0, 572, 0, 0,
    573, 0, 0, 0, 0, 0, 574, 0, 0, 575, 0, 0, 576, 0, 577, 0, 578, 0, 0, 579, 0, 580, 0, 0, 0, 0, 0, 0, 581, 0, 0, 582,
    0, 0, 583, 0, 0, 584, 0, 0, 0, 585, 0, 0, 586, 0, 0, 0, 587, 588, 0, 0, 0, 0, 0, 0, 589, 0, 0, 0, 590, 0, 0, 0,
    0, 0, 0, 591, 0, 0, 592, 0, 0, 0, 593, 0, 594, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 595, 0, 0, 0, 0, 0,
    0, 0, 0, 596, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0, 600, 0, 0, 0, 0, 601, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 602, 0, 0, 0, 0, 0, 603, 0, 0, 0, 0, 0, 0, 0, 0, 604, 0, 0, 605, 0, 0, 0, 606, 0, 0, 0, 0,
    0, 607, 0, 0, 608, 0, 0, 609, 0, 0, 0, 0, 0, 610, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 611, 0, 0, 612, 0, 0, 613,
    0, 0, 0, 0, 0, 614, 0, 0, 0, 0, 0, 0, 0, 615, 0, 0, 616, 0, 0, 0, 617, 0, 0, 0, 0, 0, 618, 0, 0, 619, 0, 0,
    0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 0, 0, 622, 0, 0, 0, 623, 0, 0, 0, 0, 0, 0, 624, 0, 0, 0, 0, 625, 0, 0, 0,
    0, 0, 0, 0, 626, 0, 0, 627, 0, 0, 0, 628, 0, 0, 0, 0, 0, 629, 0, 0, 630, 0, 631, 0, 0, 0, 0, 0, 0, 632, 633, 0,
    0, 0, 0, 0, 634, 0, 0, 0, 0, 0, 635, 0, 0, 636, 0, 0, 0, 0, 637, 0, 0, 0, 0, 0, 0, 0, 638, 0, 639, 0, 0, 640,
    0, 0, 0, 0, 0, 641, 0, 0, 0, 0, 642, 643, 0, 0, 0, 0, 644, 0, 0, 0, 0, 0, 0, 645, 0, 646, 0, 647, 0, 0, 0, 648,
    0, 0, 649, 0, 650, 0, 651, 0, 0, 652, 0, 0, 0, 653, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 654, 0, 0, 0, 655, 0, 656, 0, 0, 0, 657, 0, 0, 658, 0, 659, 660, 0, 661, 0, 0, 0, 662, 0, 0, 663, 0, 0,
    0, 664, 0, 0, 0, 665, 0, 0, 0, 0, 0, 0, 666, 0, 0, 0, 667, 0, 0, 668, 0, 0, 669, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 670, 0, 0, 0, 0, 671, 0, 0, 0, 0, 672, 0, 0, 673, 0, 0, 0, 0, 674, 0, 0, 675, 0, 0, 0, 676, 0, 0, 0, 677,
    0, 0, 0, 678, 0, 0, 0, 679, 0, 0, 0, 680, 0, 0, 0, 681, 0, 0, 0, 682, 0, 0, 0, 683, 0, 0, 0, 684, 0, 0, 0, 685,
    0, 0, 0, 686, 0, 0, 687, 0, 0, 0, 688, 0, 0, 0, 689, 0, 0, 0, 690, 0, 0, 691, 0, 0, 0, 692, 0, 0, 0, 693, 0, 0,
    694, 0, 0, 0, 695, 0, 0, 0, 696, 0, 0, 0, 697, 0, 0, 698, 0, 0, 0, 699, 0, 0, 0, 700, 0, 0, 0, 701, 0, 0, 0, 702,
    0, 0, 703, 0, 0, 0, 704, 0, 0, 0, 705, 0, 0, 706, 0, 0, 0, 707, 0, 0, 0, 708, 0, 0, 0, 709, 0, 0, 0, 710, 0, 0,
    711, 0, 0, 0, 712, 0, 0, 0, 713, 0, 0, 714, 0, 0, 0, 0, 715, 0, 0, 0, 0, 716, 0, 0, 0, 717, 718, 0, 0, 0, 0, 0,
    0, 719, 0, 0, 0, 720, 721, 0, 0, 0, 0, 722, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 723, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 724, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 725, 0, 0, 0, 0, 0, 0, 0, 0, 0, 726, 0, 0, 0, 0, 0, 0, 0, 727, 0, 0, 728, 0, 0, 0, 729, 0, 0, 0, 730,
    0, 0, 731, 0, 732, 0, 0, 733, 0, 0, 0, 0, 0, 0, 734, 0, 735, 0, 0, 736, 0, 0, 0, 0, 737, 0, 0, 0, 0, 738, 0, 0,
    0, 0, 739, 0, 0, 740, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 742, 0, 0, 0, 0, 0,
    0, 0, 743, 0, 0, 0, 0, 0, 0, 744, 0, 0, 0, 745, 0, 746, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    747, 0, 0, 0, 0, 0, 0, 748, 0, 749, 0, 0, 0, 0, 0, 750, 0, 751, 752, 0, 0, 0, 0, 753, 0, 0, 0, 0, 0, 0, 0, 754,
    0, 0, 755, 0, 0, 756, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 757, 0, 0, 0, 0, 0, 758, 0, 0, 0, 0, 759,
    0, 0, 0, 0, 0, 0, 760, 0, 0, 0, 761, 0, 762, 0, 763, 0, 0, 764, 0, 0, 765, 766, 0, 0, 0, 0, 0, 767, 0, 0, 0, 0,
    0, 0, 0, 768, 0, 0, 769, 0, 0, 770, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 771, 0, 0, 0, 0, 772, 0,
    0, 0, 0, 0, 0, 773, 0, 0, 0, 774, 0, 775, 0, 0, 776, 777, 0, 0, 0, 0, 0, 778, 0, 0, 0, 0, 0, 0, 0, 779, 0, 0,
    780, 0, 0, 781, 0, 0, 0, 782, 0, 0, 783, 0, 0, 0, 0, 0, 0, 784, 785, 0, 0, 786, 0, 787, 788, 0, 0, 0, 0, 0, 789, 0,
    0, 0, 0, 0, 0, 0, 790, 0, 0, 791, 0, 0, 792, 0, 0, 0, 793, 0, 0, 794, 0, 0, 0, 795, 796, 0, 0, 797, 0, 798, 799, 0,
    0, 0, 0, 0, 800, 0, 0, 0, 0, 0, 801, 0, 0, 802, 0, 0, 0, 0, 0, 0, 803, 0, 804, 805, 0, 0, 0, 806, 0, 0, 0, 0,
    0, 0, 0, 807, 0, 0, 808, 0, 0, 809, 0, 0, 0, 810, 0, 0, 811, 0, 0, 812, 0, 0, 0, 813, 0, 0, 814, 0, 0, 0, 0, 815,
    816, 0, 0, 817, 0, 818, 0, 0, 0, 819, 820, 0, 0, 0, 0, 0, 821, 0, 0, 0, 0, 0, 0, 0, 822, 0, 0, 0, 823, 0, 824,
};
void recomp_unit_0087_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x08960000u;
        entry_id = (entry_delta < 16380u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0087[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_08960000;
    case 2u: goto L_08960008;
    case 3u: goto L_0896004C;
    case 4u: goto L_08960054;
    case 5u: goto L_0896005C;
    case 6u: goto L_08960060;
    case 7u: goto L_08960084;
    case 8u: goto L_0896008C;
    case 9u: goto L_089600A8;
    case 10u: goto L_089600BC;
    case 11u: goto L_089600D8;
    case 12u: goto L_089600DC;
    case 13u: goto L_089600E4;
    case 14u: goto L_089600FC;
    case 15u: goto L_0896010C;
    case 16u: goto L_0896011C;
    case 17u: goto L_08960128;
    case 18u: goto L_08960130;
    case 19u: goto L_08960134;
    case 20u: goto L_08960158;
    case 21u: goto L_08960160;
    case 22u: goto L_0896017C;
    case 23u: goto L_08960190;
    case 24u: goto L_089601AC;
    case 25u: goto L_089601B0;
    case 26u: goto L_089601B8;
    case 27u: goto L_089601D0;
    case 28u: goto L_08960204;
    case 29u: goto L_08960238;
    case 30u: goto L_08960240;
    case 31u: goto L_08960244;
    case 32u: goto L_08960268;
    case 33u: goto L_08960270;
    case 34u: goto L_0896028C;
    case 35u: goto L_089602A0;
    case 36u: goto L_089602BC;
    case 37u: goto L_089602C0;
    case 38u: goto L_089602C8;
    case 39u: goto L_089602E4;
    case 40u: goto L_089602FC;
    case 41u: goto L_08960304;
    case 42u: goto L_0896030C;
    case 43u: goto L_08960310;
    case 44u: goto L_08960334;
    case 45u: goto L_0896033C;
    case 46u: goto L_08960358;
    case 47u: goto L_0896036C;
    case 48u: goto L_08960388;
    case 49u: goto L_0896038C;
    case 50u: goto L_08960394;
    case 51u: goto L_089603A4;
    case 52u: goto L_089603AC;
    case 53u: goto L_089603BC;
    case 54u: goto L_089603C4;
    case 55u: goto L_089603D4;
    case 56u: goto L_089603DC;
    case 57u: goto L_089603EC;
    case 58u: goto L_089603F4;
    case 59u: goto L_08960404;
    case 60u: goto L_0896040C;
    case 61u: goto L_0896041C;
    case 62u: goto L_08960424;
    case 63u: goto L_08960434;
    case 64u: goto L_0896043C;
    case 65u: goto L_0896044C;
    case 66u: goto L_08960454;
    case 67u: goto L_0896046C;
    case 68u: goto L_08960478;
    case 69u: goto L_08960498;
    case 70u: goto L_089604A4;
    case 71u: goto L_089604B0;
    case 72u: goto L_089604BC;
    case 73u: goto L_089604C0;
    case 74u: goto L_089604F4;
    case 75u: goto L_08960500;
    case 76u: goto L_08960504;
    case 77u: goto L_0896050C;
    case 78u: goto L_08960540;
    case 79u: goto L_08960554;
    case 80u: goto L_0896055C;
    case 81u: goto L_08960564;
    case 82u: goto L_0896057C;
    case 83u: goto L_08960584;
    case 84u: goto L_08960594;
    case 85u: goto L_089605AC;
    case 86u: goto L_089605B8;
    case 87u: goto L_089605D0;
    case 88u: goto L_089605D8;
    case 89u: goto L_089605F0;
    case 90u: goto L_08960608;
    case 91u: goto L_0896061C;
    case 92u: goto L_08960628;
    case 93u: goto L_08960630;
    case 94u: goto L_08960638;
    case 95u: goto L_08960640;
    case 96u: goto L_08960648;
    case 97u: goto L_08960650;
    case 98u: goto L_0896066C;
    case 99u: goto L_08960678;
    case 100u: goto L_08960690;
    case 101u: goto L_08960698;
    case 102u: goto L_089606B4;
    case 103u: goto L_089606F0;
    case 104u: goto L_08960714;
    case 105u: goto L_0896071C;
    case 106u: goto L_08960738;
    case 107u: goto L_08960770;
    case 108u: goto L_08960778;
    case 109u: goto L_0896077C;
    case 110u: goto L_089607A0;
    case 111u: goto L_089607A8;
    case 112u: goto L_089607C4;
    case 113u: goto L_089607D8;
    case 114u: goto L_089607F4;
    case 115u: goto L_089607F8;
    case 116u: goto L_08960800;
    case 117u: goto L_0896081C;
    case 118u: goto L_08960858;
    case 119u: goto L_08960860;
    case 120u: goto L_0896087C;
    case 121u: goto L_089608A0;
    case 122u: goto L_089608AC;
    case 123u: goto L_089608B4;
    case 124u: goto L_089608EC;
    case 125u: goto L_089608FC;
    case 126u: goto L_08960910;
    case 127u: goto L_08960918;
    case 128u: goto L_08960934;
    case 129u: goto L_08960964;
    case 130u: goto L_0896096C;
    case 131u: goto L_08960988;
    case 132u: goto L_089609B8;
    case 133u: goto L_089609C0;
    case 134u: goto L_089609DC;
    case 135u: goto L_08960A18;
    case 136u: goto L_08960A20;
    case 137u: goto L_08960A24;
    case 138u: goto L_08960A48;
    case 139u: goto L_08960A50;
    case 140u: goto L_08960A6C;
    case 141u: goto L_08960A80;
    case 142u: goto L_08960A9C;
    case 143u: goto L_08960AA0;
    case 144u: goto L_08960AA8;
    case 145u: goto L_08960AC0;
    case 146u: goto L_08960AF0;
    case 147u: goto L_08960AF8;
    case 148u: goto L_08960B10;
    case 149u: goto L_08960B1C;
    case 150u: goto L_08960B28;
    case 151u: goto L_08960B2C;
    case 152u: goto L_08960B34;
    case 153u: goto L_08960B40;
    case 154u: goto L_08960B48;
    case 155u: goto L_08960B4C;
    case 156u: goto L_08960B70;
    case 157u: goto L_08960B78;
    case 158u: goto L_08960B94;
    case 159u: goto L_08960BA8;
    case 160u: goto L_08960BC4;
    case 161u: goto L_08960BC8;
    case 162u: goto L_08960BD0;
    case 163u: goto L_08960BEC;
    case 164u: goto L_08960BFC;
    case 165u: goto L_08960C0C;
    case 166u: goto L_08960C14;
    case 167u: goto L_08960C30;
    case 168u: goto L_08960C60;
    case 169u: goto L_08960C68;
    case 170u: goto L_08960C6C;
    case 171u: goto L_08960C90;
    case 172u: goto L_08960C98;
    case 173u: goto L_08960CB4;
    case 174u: goto L_08960CC8;
    case 175u: goto L_08960CE4;
    case 176u: goto L_08960CE8;
    case 177u: goto L_08960CF0;
    case 178u: goto L_08960D0C;
    case 179u: goto L_08960D3C;
    case 180u: goto L_08960D44;
    case 181u: goto L_08960D48;
    case 182u: goto L_08960D6C;
    case 183u: goto L_08960D74;
    case 184u: goto L_08960D90;
    case 185u: goto L_08960DA4;
    case 186u: goto L_08960DC0;
    case 187u: goto L_08960DC4;
    case 188u: goto L_08960DCC;
    case 189u: goto L_08960DE4;
    case 190u: goto L_08960DF4;
    case 191u: goto L_08960E00;
    case 192u: goto L_08960E10;
    case 193u: goto L_08960E20;
    case 194u: goto L_08960E30;
    case 195u: goto L_08960E38;
    case 196u: goto L_08960E40;
    case 197u: goto L_08960E44;
    case 198u: goto L_08960E68;
    case 199u: goto L_08960E70;
    case 200u: goto L_08960E8C;
    case 201u: goto L_08960EA0;
    case 202u: goto L_08960EBC;
    case 203u: goto L_08960EC0;
    case 204u: goto L_08960EC8;
    case 205u: goto L_08960EE0;
    case 206u: goto L_08960EF0;
    case 207u: goto L_08960EFC;
    case 208u: goto L_08960F10;
    case 209u: goto L_08960F18;
    case 210u: goto L_08960F28;
    case 211u: goto L_08960F30;
    case 212u: goto L_08960F38;
    case 213u: goto L_08960F3C;
    case 214u: goto L_08960F60;
    case 215u: goto L_08960F68;
    case 216u: goto L_08960F84;
    case 217u: goto L_08960F98;
    case 218u: goto L_08960FB4;
    case 219u: goto L_08960FB8;
    case 220u: goto L_08960FC0;
    case 221u: goto L_08960FDC;
    case 222u: goto L_08960FEC;
    case 223u: goto L_08961004;
    case 224u: goto L_0896101C;
    case 225u: goto L_0896102C;
    case 226u: goto L_08961058;
    case 227u: goto L_08961060;
    case 228u: goto L_08961078;
    case 229u: goto L_089610BC;
    case 230u: goto L_089610D0;
    case 231u: goto L_089610E0;
    case 232u: goto L_089610EC;
    case 233u: goto L_089610FC;
    case 234u: goto L_08961118;
    case 235u: goto L_08961128;
    case 236u: goto L_08961130;
    case 237u: goto L_08961138;
    case 238u: goto L_0896113C;
    case 239u: goto L_08961160;
    case 240u: goto L_08961168;
    case 241u: goto L_08961184;
    case 242u: goto L_08961198;
    case 243u: goto L_089611B4;
    case 244u: goto L_089611B8;
    case 245u: goto L_089611C0;
    case 246u: goto L_089611D8;
    case 247u: goto L_08961210;
    case 248u: goto L_0896121C;
    case 249u: goto L_08961224;
    case 250u: goto L_0896122C;
    case 251u: goto L_08961234;
    case 252u: goto L_0896123C;
    case 253u: goto L_08961240;
    case 254u: goto L_08961264;
    case 255u: goto L_0896126C;
    case 256u: goto L_08961288;
    case 257u: goto L_0896129C;
    case 258u: goto L_089612B8;
    case 259u: goto L_089612BC;
    case 260u: goto L_089612C4;
    case 261u: goto L_089612E0;
    case 262u: goto L_089612F0;
    case 263u: goto L_08961328;
    case 264u: goto L_08961330;
    case 265u: goto L_08961334;
    case 266u: goto L_08961358;
    case 267u: goto L_08961360;
    case 268u: goto L_0896137C;
    case 269u: goto L_08961390;
    case 270u: goto L_089613AC;
    case 271u: goto L_089613B0;
    case 272u: goto L_089613B8;
    case 273u: goto L_089613D0;
    case 274u: goto L_089613E0;
    case 275u: goto L_089613F4;
    case 276u: goto L_089613FC;
    case 277u: goto L_08961400;
    case 278u: goto L_08961424;
    case 279u: goto L_0896142C;
    case 280u: goto L_08961448;
    case 281u: goto L_0896145C;
    case 282u: goto L_08961478;
    case 283u: goto L_0896147C;
    case 284u: goto L_08961484;
    case 285u: goto L_089614A0;
    case 286u: goto L_089614B0;
    case 287u: goto L_089614C8;
    case 288u: goto L_089614D4;
    case 289u: goto L_089614DC;
    case 290u: goto L_089614E4;
    case 291u: goto L_089614EC;
    case 292u: goto L_089614F4;
    case 293u: goto L_0896150C;
    case 294u: goto L_08961518;
    case 295u: goto L_08961520;
    case 296u: goto L_08961538;
    case 297u: goto L_08961548;
    case 298u: goto L_08961550;
    case 299u: goto L_08961568;
    case 300u: goto L_08961578;
    case 301u: goto L_08961580;
    case 302u: goto L_08961598;
    case 303u: goto L_089615A8;
    case 304u: goto L_089615B0;
    case 305u: goto L_089615C8;
    case 306u: goto L_089615D8;
    case 307u: goto L_089615E0;
    case 308u: goto L_089615F8;
    case 309u: goto L_08961608;
    case 310u: goto L_08961620;
    case 311u: goto L_0896162C;
    case 312u: goto L_08961638;
    case 313u: goto L_0896164C;
    case 314u: goto L_08961650;
    case 315u: goto L_08961658;
    case 316u: goto L_08961670;
    case 317u: goto L_08961684;
    case 318u: goto L_08961690;
    case 319u: goto L_0896169C;
    case 320u: goto L_089616AC;
    case 321u: goto L_089616B0;
    case 322u: goto L_089616B8;
    case 323u: goto L_089616C4;
    case 324u: goto L_089616D0;
    case 325u: goto L_089616E4;
    case 326u: goto L_089616E8;
    case 327u: goto L_08961744;
    case 328u: goto L_08961758;
    case 329u: goto L_089617A4;
    case 330u: goto L_089617B8;
    case 331u: goto L_089617C8;
    case 332u: goto L_089617D4;
    case 333u: goto L_089617E0;
    case 334u: goto L_089617EC;
    case 335u: goto L_089617F0;
    case 336u: goto L_089617F8;
    case 337u: goto L_089617FC;
    case 338u: goto L_08961810;
    case 339u: goto L_08961820;
    case 340u: goto L_0896184C;
    case 341u: goto L_08961854;
    case 342u: goto L_08961890;
    case 343u: goto L_089618A0;
    case 344u: goto L_089618AC;
    case 345u: goto L_089618CC;
    case 346u: goto L_089618E4;
    case 347u: goto L_089618F0;
    case 348u: goto L_08961908;
    case 349u: goto L_08961910;
    case 350u: goto L_0896192C;
    case 351u: goto L_08961974;
    case 352u: goto L_08961980;
    case 353u: goto L_08961984;
    case 354u: goto L_08961994;
    case 355u: goto L_089619A4;
    case 356u: goto L_089619BC;
    case 357u: goto L_089619D0;
    case 358u: goto L_089619E4;
    case 359u: goto L_089619F0;
    case 360u: goto L_08961A34;
    case 361u: goto L_08961A40;
    case 362u: goto L_08961A4C;
    case 363u: goto L_08961A70;
    case 364u: goto L_08961A7C;
    case 365u: goto L_08961A88;
    case 366u: goto L_08961A94;
    case 367u: goto L_08961A98;
    case 368u: goto L_08961AA0;
    case 369u: goto L_08961AA4;
    case 370u: goto L_08961AF4;
    case 371u: goto L_08961B04;
    case 372u: goto L_08961B18;
    case 373u: goto L_08961B2C;
    case 374u: goto L_08961B50;
    case 375u: goto L_08961B58;
    case 376u: goto L_08961B64;
    case 377u: goto L_08961B6C;
    case 378u: goto L_08961BA0;
    case 379u: goto L_08961BB8;
    case 380u: goto L_08961BC0;
    case 381u: goto L_08961BC4;
    case 382u: goto L_08961BEC;
    case 383u: goto L_08961C0C;
    case 384u: goto L_08961C1C;
    case 385u: goto L_08961C30;
    case 386u: goto L_08961C5C;
    case 387u: goto L_08961C8C;
    case 388u: goto L_08961C94;
    case 389u: goto L_08961CA4;
    case 390u: goto L_08961CAC;
    case 391u: goto L_08961CC4;
    case 392u: goto L_08961CCC;
    case 393u: goto L_08961CE8;
    case 394u: goto L_08961CF0;
    case 395u: goto L_08961D0C;
    case 396u: goto L_08961D14;
    case 397u: goto L_08961D28;
    case 398u: goto L_08961D30;
    case 399u: goto L_08961D4C;
    case 400u: goto L_08961D54;
    case 401u: goto L_08961D6C;
    case 402u: goto L_08961D74;
    case 403u: goto L_08961D78;
    case 404u: goto L_08961D90;
    case 405u: goto L_08961DE4;
    case 406u: goto L_08961E2C;
    case 407u: goto L_08961E34;
    case 408u: goto L_08961E40;
    case 409u: goto L_08961E50;
    case 410u: goto L_08961E5C;
    case 411u: goto L_08961E68;
    case 412u: goto L_08961E74;
    case 413u: goto L_08961EA4;
    case 414u: goto L_08961EBC;
    case 415u: goto L_08961ED8;
    case 416u: goto L_08961EE0;
    case 417u: goto L_08961EF4;
    case 418u: goto L_08961F0C;
    case 419u: goto L_08961F24;
    case 420u: goto L_08961F30;
    case 421u: goto L_08961F84;
    case 422u: goto L_08961F8C;
    case 423u: goto L_08961F94;
    case 424u: goto L_08961FA0;
    case 425u: goto L_08961FAC;
    case 426u: goto L_08961FCC;
    case 427u: goto L_08961FD4;
    case 428u: goto L_08961FE0;
    case 429u: goto L_08961FF4;
    case 430u: goto L_08962008;
    case 431u: goto L_0896201C;
    case 432u: goto L_08962028;
    case 433u: goto L_08962030;
    case 434u: goto L_08962034;
    case 435u: goto L_08962040;
    case 436u: goto L_08962050;
    case 437u: goto L_08962064;
    case 438u: goto L_08962078;
    case 439u: goto L_0896209C;
    case 440u: goto L_089620C8;
    case 441u: goto L_089620DC;
    case 442u: goto L_089620E4;
    case 443u: goto L_089620FC;
    case 444u: goto L_0896210C;
    case 445u: goto L_08962120;
    case 446u: goto L_08962128;
    case 447u: goto L_08962130;
    case 448u: goto L_08962148;
    case 449u: goto L_0896215C;
    case 450u: goto L_0896217C;
    case 451u: goto L_089621D0;
    case 452u: goto L_089621FC;
    case 453u: goto L_08962244;
    case 454u: goto L_08962264;
    case 455u: goto L_089622B8;
    case 456u: goto L_089622F8;
    case 457u: goto L_0896230C;
    case 458u: goto L_08962328;
    case 459u: goto L_08962354;
    case 460u: goto L_08962388;
    case 461u: goto L_089623BC;
    case 462u: goto L_089623D4;
    case 463u: goto L_089623E0;
    case 464u: goto L_089623FC;
    case 465u: goto L_08962404;
    case 466u: goto L_08962418;
    case 467u: goto L_08962424;
    case 468u: goto L_08962430;
    case 469u: goto L_08962438;
    case 470u: goto L_0896243C;
    case 471u: goto L_08962450;
    case 472u: goto L_08962494;
    case 473u: goto L_089624E4;
    case 474u: goto L_08962524;
    case 475u: goto L_08962538;
    case 476u: goto L_08962540;
    case 477u: goto L_0896255C;
    case 478u: goto L_08962568;
    case 479u: goto L_08962574;
    case 480u: goto L_08962580;
    case 481u: goto L_08962588;
    case 482u: goto L_08962594;
    case 483u: goto L_0896259C;
    case 484u: goto L_089625A4;
    case 485u: goto L_089625F0;
    case 486u: goto L_08962630;
    case 487u: goto L_08962688;
    case 488u: goto L_089626C8;
    case 489u: goto L_089626EC;
    case 490u: goto L_08962700;
    case 491u: goto L_0896271C;
    case 492u: goto L_08962748;
    case 493u: goto L_08962758;
    case 494u: goto L_08962760;
    case 495u: goto L_08962774;
    case 496u: goto L_08962798;
    case 497u: goto L_089627A4;
    case 498u: goto L_089627B0;
    case 499u: goto L_089627B4;
    case 500u: goto L_089627BC;
    case 501u: goto L_089627C0;
    case 502u: goto L_08962808;
    case 503u: goto L_0896281C;
    case 504u: goto L_08962880;
    case 505u: goto L_089628BC;
    case 506u: goto L_089628C4;
    case 507u: goto L_08962908;
    case 508u: goto L_089629C4;
    case 509u: goto L_089629E0;
    case 510u: goto L_089629EC;
    case 511u: goto L_08962A00;
    case 512u: goto L_08962A0C;
    case 513u: goto L_08962A2C;
    case 514u: goto L_08962A40;
    case 515u: goto L_08962A4C;
    case 516u: goto L_08962A60;
    case 517u: goto L_08962A94;
    case 518u: goto L_08962AA4;
    case 519u: goto L_08962AB0;
    case 520u: goto L_08962AC8;
    case 521u: goto L_08962AD4;
    case 522u: goto L_08962AF0;
    case 523u: goto L_08962B00;
    case 524u: goto L_08962B0C;
    case 525u: goto L_08962B18;
    case 526u: goto L_08962B20;
    case 527u: goto L_08962B28;
    case 528u: goto L_08962B30;
    case 529u: goto L_08962B34;
    case 530u: goto L_08962B48;
    case 531u: goto L_08962B54;
    case 532u: goto L_08962B60;
    case 533u: goto L_08962B6C;
    case 534u: goto L_08962B94;
    case 535u: goto L_08962B98;
    case 536u: goto L_08962BBC;
    case 537u: goto L_08962BF4;
    case 538u: goto L_08962C04;
    case 539u: goto L_08962C10;
    case 540u: goto L_08962C28;
    case 541u: goto L_08962C34;
    case 542u: goto L_08962C44;
    case 543u: goto L_08962C4C;
    case 544u: goto L_08962C54;
    case 545u: goto L_08962C60;
    case 546u: goto L_08962C68;
    case 547u: goto L_08962C84;
    case 548u: goto L_08962C90;
    case 549u: goto L_08962C9C;
    case 550u: goto L_08962CA8;
    case 551u: goto L_08962CB8;
    case 552u: goto L_08962CC4;
    case 553u: goto L_08962CCC;
    case 554u: goto L_08962CD8;
    case 555u: goto L_08962CE0;
    case 556u: goto L_08962CE8;
    case 557u: goto L_08962CF4;
    case 558u: goto L_08962D00;
    case 559u: goto L_08962D14;
    case 560u: goto L_08962D20;
    case 561u: goto L_08962D2C;
    case 562u: goto L_08962D34;
    case 563u: goto L_08962D38;
    case 564u: goto L_08962D4C;
    case 565u: goto L_08962D58;
    case 566u: goto L_08962D64;
    case 567u: goto L_08962D70;
    case 568u: goto L_08962D90;
    case 569u: goto L_08962D94;
    case 570u: goto L_08962DBC;
    case 571u: goto L_08962DE8;
    case 572u: goto L_08962DF4;
    case 573u: goto L_08962E00;
    case 574u: goto L_08962E18;
    case 575u: goto L_08962E24;
    case 576u: goto L_08962E30;
    case 577u: goto L_08962E38;
    case 578u: goto L_08962E40;
    case 579u: goto L_08962E4C;
    case 580u: goto L_08962E54;
    case 581u: goto L_08962E70;
    case 582u: goto L_08962E7C;
    case 583u: goto L_08962E88;
    case 584u: goto L_08962E94;
    case 585u: goto L_08962EA4;
    case 586u: goto L_08962EB0;
    case 587u: goto L_08962EC0;
    case 588u: goto L_08962EC4;
    case 589u: goto L_08962EE0;
    case 590u: goto L_08962EF0;
    case 591u: goto L_08962F0C;
    case 592u: goto L_08962F18;
    case 593u: goto L_08962F28;
    case 594u: goto L_08962F30;
    case 595u: goto L_08962F68;
    case 596u: goto L_08962F8C;
    case 597u: goto L_08962F98;
    case 598u: goto L_08962FA8;
    case 599u: goto L_08962FC0;
    case 600u: goto L_08962FCC;
    case 601u: goto L_08962FE0;
    case 602u: goto L_08963014;
    case 603u: goto L_0896302C;
    case 604u: goto L_08963050;
    case 605u: goto L_0896305C;
    case 606u: goto L_0896306C;
    case 607u: goto L_08963084;
    case 608u: goto L_08963090;
    case 609u: goto L_0896309C;
    case 610u: goto L_089630B4;
    case 611u: goto L_089630E4;
    case 612u: goto L_089630F0;
    case 613u: goto L_089630FC;
    case 614u: goto L_08963114;
    case 615u: goto L_08963134;
    case 616u: goto L_08963140;
    case 617u: goto L_08963150;
    case 618u: goto L_08963168;
    case 619u: goto L_08963174;
    case 620u: goto L_08963188;
    case 621u: goto L_089631A4;
    case 622u: goto L_089631B0;
    case 623u: goto L_089631C0;
    case 624u: goto L_089631DC;
    case 625u: goto L_089631F0;
    case 626u: goto L_08963210;
    case 627u: goto L_0896321C;
    case 628u: goto L_0896322C;
    case 629u: goto L_08963244;
    case 630u: goto L_08963250;
    case 631u: goto L_08963258;
    case 632u: goto L_08963274;
    case 633u: goto L_08963278;
    case 634u: goto L_08963290;
    case 635u: goto L_089632A8;
    case 636u: goto L_089632B4;
    case 637u: goto L_089632C8;
    case 638u: goto L_089632E8;
    case 639u: goto L_089632F0;
    case 640u: goto L_089632FC;
    case 641u: goto L_08963314;
    case 642u: goto L_08963328;
    case 643u: goto L_0896332C;
    case 644u: goto L_08963340;
    case 645u: goto L_0896335C;
    case 646u: goto L_08963364;
    case 647u: goto L_0896336C;
    case 648u: goto L_0896337C;
    case 649u: goto L_08963388;
    case 650u: goto L_08963390;
    case 651u: goto L_08963398;
    case 652u: goto L_089633A4;
    case 653u: goto L_089633B4;
    case 654u: goto L_08963410;
    case 655u: goto L_08963420;
    case 656u: goto L_08963428;
    case 657u: goto L_08963438;
    case 658u: goto L_08963444;
    case 659u: goto L_0896344C;
    case 660u: goto L_08963450;
    case 661u: goto L_08963458;
    case 662u: goto L_08963468;
    case 663u: goto L_08963474;
    case 664u: goto L_08963484;
    case 665u: goto L_08963494;
    case 666u: goto L_089634B0;
    case 667u: goto L_089634C0;
    case 668u: goto L_089634CC;
    case 669u: goto L_089634D8;
    case 670u: goto L_08963508;
    case 671u: goto L_0896351C;
    case 672u: goto L_08963530;
    case 673u: goto L_0896353C;
    case 674u: goto L_08963550;
    case 675u: goto L_0896355C;
    case 676u: goto L_0896356C;
    case 677u: goto L_0896357C;
    case 678u: goto L_0896358C;
    case 679u: goto L_0896359C;
    case 680u: goto L_089635AC;
    case 681u: goto L_089635BC;
    case 682u: goto L_089635CC;
    case 683u: goto L_089635DC;
    case 684u: goto L_089635EC;
    case 685u: goto L_089635FC;
    case 686u: goto L_0896360C;
    case 687u: goto L_08963618;
    case 688u: goto L_08963628;
    case 689u: goto L_08963638;
    case 690u: goto L_08963648;
    case 691u: goto L_08963654;
    case 692u: goto L_08963664;
    case 693u: goto L_08963674;
    case 694u: goto L_08963680;
    case 695u: goto L_08963690;
    case 696u: goto L_089636A0;
    case 697u: goto L_089636B0;
    case 698u: goto L_089636BC;
    case 699u: goto L_089636CC;
    case 700u: goto L_089636DC;
    case 701u: goto L_089636EC;
    case 702u: goto L_089636FC;
    case 703u: goto L_08963708;
    case 704u: goto L_08963718;
    case 705u: goto L_08963728;
    case 706u: goto L_08963734;
    case 707u: goto L_08963744;
    case 708u: goto L_08963754;
    case 709u: goto L_08963764;
    case 710u: goto L_08963774;
    case 711u: goto L_08963780;
    case 712u: goto L_08963790;
    case 713u: goto L_089637A0;
    case 714u: goto L_089637AC;
    case 715u: goto L_089637C0;
    case 716u: goto L_089637D4;
    case 717u: goto L_089637E4;
    case 718u: goto L_089637E8;
    case 719u: goto L_08963804;
    case 720u: goto L_08963814;
    case 721u: goto L_08963818;
    case 722u: goto L_0896382C;
    case 723u: goto L_08963864;
    case 724u: goto L_089638DC;
    case 725u: goto L_08963908;
    case 726u: goto L_08963930;
    case 727u: goto L_08963950;
    case 728u: goto L_0896395C;
    case 729u: goto L_0896396C;
    case 730u: goto L_0896397C;
    case 731u: goto L_08963988;
    case 732u: goto L_08963990;
    case 733u: goto L_0896399C;
    case 734u: goto L_089639B8;
    case 735u: goto L_089639C0;
    case 736u: goto L_089639CC;
    case 737u: goto L_089639E0;
    case 738u: goto L_089639F4;
    case 739u: goto L_08963A08;
    case 740u: goto L_08963A14;
    case 741u: goto L_08963A28;
    case 742u: goto L_08963A68;
    case 743u: goto L_08963A88;
    case 744u: goto L_08963AA4;
    case 745u: goto L_08963AB4;
    case 746u: goto L_08963ABC;
    case 747u: goto L_08963B00;
    case 748u: goto L_08963B1C;
    case 749u: goto L_08963B24;
    case 750u: goto L_08963B3C;
    case 751u: goto L_08963B44;
    case 752u: goto L_08963B48;
    case 753u: goto L_08963B5C;
    case 754u: goto L_08963B7C;
    case 755u: goto L_08963B88;
    case 756u: goto L_08963B94;
    case 757u: goto L_08963BD0;
    case 758u: goto L_08963BE8;
    case 759u: goto L_08963BFC;
    case 760u: goto L_08963C18;
    case 761u: goto L_08963C28;
    case 762u: goto L_08963C30;
    case 763u: goto L_08963C38;
    case 764u: goto L_08963C44;
    case 765u: goto L_08963C50;
    case 766u: goto L_08963C54;
    case 767u: goto L_08963C6C;
    case 768u: goto L_08963C8C;
    case 769u: goto L_08963C98;
    case 770u: goto L_08963CA4;
    case 771u: goto L_08963CE4;
    case 772u: goto L_08963CF8;
    case 773u: goto L_08963D14;
    case 774u: goto L_08963D24;
    case 775u: goto L_08963D2C;
    case 776u: goto L_08963D38;
    case 777u: goto L_08963D3C;
    case 778u: goto L_08963D54;
    case 779u: goto L_08963D74;
    case 780u: goto L_08963D80;
    case 781u: goto L_08963D8C;
    case 782u: goto L_08963D9C;
    case 783u: goto L_08963DA8;
    case 784u: goto L_08963DC4;
    case 785u: goto L_08963DC8;
    case 786u: goto L_08963DD4;
    case 787u: goto L_08963DDC;
    case 788u: goto L_08963DE0;
    case 789u: goto L_08963DF8;
    case 790u: goto L_08963E18;
    case 791u: goto L_08963E24;
    case 792u: goto L_08963E30;
    case 793u: goto L_08963E40;
    case 794u: goto L_08963E4C;
    case 795u: goto L_08963E5C;
    case 796u: goto L_08963E60;
    case 797u: goto L_08963E6C;
    case 798u: goto L_08963E74;
    case 799u: goto L_08963E78;
    case 800u: goto L_08963E90;
    case 801u: goto L_08963EA8;
    case 802u: goto L_08963EB4;
    case 803u: goto L_08963ED0;
    case 804u: goto L_08963ED8;
    case 805u: goto L_08963EDC;
    case 806u: goto L_08963EEC;
    case 807u: goto L_08963F0C;
    case 808u: goto L_08963F18;
    case 809u: goto L_08963F24;
    case 810u: goto L_08963F34;
    case 811u: goto L_08963F40;
    case 812u: goto L_08963F4C;
    case 813u: goto L_08963F5C;
    case 814u: goto L_08963F68;
    case 815u: goto L_08963F7C;
    case 816u: goto L_08963F80;
    case 817u: goto L_08963F8C;
    case 818u: goto L_08963F94;
    case 819u: goto L_08963FA4;
    case 820u: goto L_08963FA8;
    case 821u: goto L_08963FC0;
    case 822u: goto L_08963FE0;
    case 823u: goto L_08963FF0;
    case 824u: goto L_08963FF8;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_08960000:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896005C;
      }
      goto L_08960008;
    }
L_08960008:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (ctx.gpr[5] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[5] = (ctx.gpr[6] - ctx.gpr[5]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08960054;
      }
      goto L_0896004C;
    }
L_0896004C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960060;
      }
      goto L_08960054;
    }
L_08960054:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08960060;
      }
      goto L_0896005C;
    }
L_0896005C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08960060;
L_08960060:
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
          goto L_0896008C;
      }
      goto L_08960084;
    }
L_08960084:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089600DC;
      }
      goto L_0896008C;
    }
L_0896008C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089600BC;
    }
    goto L_089600A8;
L_089600A8:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089600DC;
      }
      goto L_089600BC;
    }
L_089600BC:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089600DC;
      }
      goto L_089600D8;
    }
L_089600D8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089600DC;
L_089600DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_089600E4;
    }
L_089600E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089600FCu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961BEC;
L_089600FC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0896010Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0896010Cu) goto L_0896010C;
    return;
L_0896010C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960130;
      }
      goto L_0896011C;
    }
L_0896011C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960130;
      }
      goto L_08960128;
    }
L_08960128:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960134;
      }
      goto L_08960130;
    }
L_08960130:
    ctx.gpr[4] = (0u | 0u);
    goto L_08960134;
L_08960134:
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
          goto L_08960160;
      }
      goto L_08960158;
    }
L_08960158:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089601B0;
      }
      goto L_08960160;
    }
L_08960160:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08960190;
    }
    goto L_0896017C;
L_0896017C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089601B0;
      }
      goto L_08960190;
    }
L_08960190:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089601B0;
      }
      goto L_089601AC;
    }
L_089601AC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089601B0;
L_089601B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_089601B8;
    }
L_089601B8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089601D0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961BEC;
L_089601D0:
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
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_08960240;
      }
      goto L_08960204;
    }
L_08960204:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
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
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960240;
      }
      goto L_08960238;
    }
L_08960238:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960244;
      }
      goto L_08960240;
    }
L_08960240:
    ctx.gpr[4] = (0u | 0u);
    goto L_08960244;
L_08960244:
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
          goto L_08960270;
      }
      goto L_08960268;
    }
L_08960268:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089602C0;
      }
      goto L_08960270;
    }
L_08960270:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089602A0;
    }
    goto L_0896028C;
L_0896028C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089602C0;
      }
      goto L_089602A0;
    }
L_089602A0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089602C0;
      }
      goto L_089602BC;
    }
L_089602BC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089602C0;
L_089602C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_089602C8;
    }
L_089602C8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089602E4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961BEC;
L_089602E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    ctx.gpr[31] = (0x089602FCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 642u, 0x0887BA88u>(ctx, &aot_mem) && ctx.pc == 0x089602FCu) goto L_089602FC;
    return;
L_089602FC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896030C;
      }
      goto L_08960304;
    }
L_08960304:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960310;
      }
      goto L_0896030C;
    }
L_0896030C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08960310;
L_08960310:
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
          goto L_0896033C;
      }
      goto L_08960334;
    }
L_08960334:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896038C;
      }
      goto L_0896033C;
    }
L_0896033C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0896036C;
    }
    goto L_08960358;
L_08960358:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896038C;
      }
      goto L_0896036C;
    }
L_0896036C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896038C;
      }
      goto L_08960388;
    }
L_08960388:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0896038C;
L_0896038C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960394;
    }
L_08960394:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089603A4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 219u, 0x0887D1ACu>(ctx, &aot_mem) && ctx.pc == 0x089603A4u) goto L_089603A4;
    return;
L_089603A4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_089603AC;
    }
L_089603AC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089603BCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 264u, 0x0887D528u>(ctx, &aot_mem) && ctx.pc == 0x089603BCu) goto L_089603BC;
    return;
L_089603BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_089603C4;
    }
L_089603C4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089603D4u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 377u, 0x0887DD6Cu>(ctx, &aot_mem) && ctx.pc == 0x089603D4u) goto L_089603D4;
    return;
L_089603D4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_089603DC;
    }
L_089603DC:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x089603ECu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 440u, 0x0887E16Cu>(ctx, &aot_mem) && ctx.pc == 0x089603ECu) goto L_089603EC;
    return;
L_089603EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_089603F4;
    }
L_089603F4:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08960404u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 219u, 0x0887D1ACu>(ctx, &aot_mem) && ctx.pc == 0x08960404u) goto L_08960404;
    return;
L_08960404:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_0896040C;
    }
L_0896040C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x0896041Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 264u, 0x0887D528u>(ctx, &aot_mem) && ctx.pc == 0x0896041Cu) goto L_0896041C;
    return;
L_0896041C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960424;
    }
L_08960424:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x08960434u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 377u, 0x0887DD6Cu>(ctx, &aot_mem) && ctx.pc == 0x08960434u) goto L_08960434;
    return;
L_08960434:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_0896043C;
    }
L_0896043C:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[31] = (0x0896044Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 440u, 0x0887E16Cu>(ctx, &aot_mem) && ctx.pc == 0x0896044Cu) goto L_0896044C;
    return;
L_0896044C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960454;
    }
L_08960454:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896046Cu);
    ctx.gpr[6] = (0u | 4u);
    goto L_08961BEC;
L_0896046C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[17]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08960498;
      }
      goto L_08960478;
    }
L_08960478:
    ctx.gpr[4] = (0u - ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5168));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    goto L_08960498;
L_08960498:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x089604A4u);
    ctx.gpr[4] = (0u | 496u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 238u, 0x0883D3ACu>(ctx, &aot_mem) && ctx.pc == 0x089604A4u) goto L_089604A4;
    return;
L_089604A4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
      if (branch_taken) {
          goto L_089604C0;
      }
      goto L_089604B0;
    }
L_089604B0:
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089604BCu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 194u, 0x0883D0B8u>(ctx, &aot_mem) && ctx.pc == 0x089604BCu) goto L_089604BC;
    return;
L_089604BC:
    ctx.gpr[18] = (ctx.gpr[19] | 0u);
    goto L_089604C0;
L_089604C0:
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
          goto L_08960504;
      }
      goto L_089604F4;
    }
L_089604F4:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[31] = (0x08960500u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08960500u) goto L_08960500;
    return;
L_08960500:
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08960504;
L_08960504:
    ctx.gpr[31] = (0x0896050Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x0896050Cu) goto L_0896050C;
    return;
L_0896050C:
    ctx.fpr[20] = ctx.fpr[20] + ctx.fpr[0];
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08960540u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x08960540u) goto L_08960540;
    return;
L_08960540:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08960554u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x08960554u) goto L_08960554;
    return;
L_08960554:
    ctx.gpr[31] = (0x0896055Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0896055Cu) goto L_0896055C;
    return;
L_0896055C:
    ctx.gpr[31] = (0x08960564u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x08960564u) goto L_08960564;
    return;
L_08960564:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    ctx.gpr[31] = (0x0896057Cu);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x0896057Cu) goto L_0896057C;
    return;
L_0896057C:
    ctx.gpr[31] = (0x08960584u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x08960584u) goto L_08960584;
    return;
L_08960584:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x08960594u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 797u, 0x08AFB66Cu>(ctx, &aot_mem) && ctx.pc == 0x08960594u) goto L_08960594;
    return;
L_08960594:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089605ACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089605ACu) goto L_089605AC;
    return;
L_089605AC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089605D0;
      }
      goto L_089605B8;
    }
L_089605B8:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x089605D0u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x089605D0u) goto L_089605D0;
    return;
L_089605D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_089605D8;
    }
L_089605D8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089605F0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961BEC;
L_089605F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-8960));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960630;
      }
      goto L_08960608;
    }
L_08960608:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[31] = (0x0896061Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0896061Cu) goto L_0896061C;
    return;
L_0896061C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    // nop
      if (branch_taken) {
          goto L_08960638;
      }
      goto L_08960628;
    }
L_08960628:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0896066C;
      }
      goto L_08960630;
    }
L_08960630:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960638;
    }
L_08960638:
    ctx.gpr[31] = (0x08960640u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x08960640u) goto L_08960640;
    return;
L_08960640:
    ctx.gpr[31] = (0x08960648u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 476u, 0x088C309Cu>(ctx, &aot_mem) && ctx.pc == 0x08960648u) goto L_08960648;
    return;
L_08960648:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896066C;
      }
      goto L_08960650;
    }
L_08960650:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0896066Cu);
    ctx.gpr[5] = (0u | 3u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0896066Cu) goto L_0896066C;
    return;
L_0896066C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960690;
      }
      goto L_08960678;
    }
L_08960678:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x08960690u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 191u, 0x08958B00u>(ctx, &aot_mem) && ctx.pc == 0x08960690u) goto L_08960690;
    return;
L_08960690:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960698;
    }
L_08960698:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089606B4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961BEC;
L_089606B4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), ctx.gpr[5]);
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[5]) >= 0;
    // nop
      if (branch_taken) {
          goto L_08960714;
      }
      goto L_089606F0;
    }
L_089606F0:
    ctx.gpr[4] = (ctx.gpr[16] << 7u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(188), 0u);
    goto L_08960714;
L_08960714:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_0896071C;
    }
L_0896071C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08960738u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961BEC;
L_08960738:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960778;
      }
      goto L_08960770;
    }
L_08960770:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0896077C;
      }
      goto L_08960778;
    }
L_08960778:
    ctx.gpr[4] = (0u | 0u);
    goto L_0896077C;
L_0896077C:
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
          goto L_089607A8;
      }
      goto L_089607A0;
    }
L_089607A0:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089607F8;
      }
      goto L_089607A8;
    }
L_089607A8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_089607D8;
    }
    goto L_089607C4;
L_089607C4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089607F8;
      }
      goto L_089607D8;
    }
L_089607D8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089607F8;
      }
      goto L_089607F4;
    }
L_089607F4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089607F8;
L_089607F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960800;
    }
L_08960800:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0896081Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961BEC;
L_0896081C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(188)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08960858u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08960858u) goto L_08960858;
    return;
L_08960858:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960860;
    }
L_08960860:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0896087Cu);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    goto L_08961BEC;
L_0896087C:
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
        goto L_089608B4;
    }
    goto L_089608A0;
L_089608A0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[31] = (0x089608ACu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x089608ACu) goto L_089608AC;
    return;
L_089608AC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_089608B4;
L_089608B4:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[15] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[15] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[15] / ctx.fpr[12];
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x089608ECu);
    ctx.gpr[4] = (0u | 169u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 152u, 0x088412BCu>(ctx, &aot_mem) && ctx.pc == 0x089608ECu) goto L_089608EC;
    return;
L_089608EC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x089608FCu);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x089608FCu) goto L_089608FC;
    return;
L_089608FC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960910u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x08960910u) goto L_08960910;
    return;
L_08960910:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960918;
    }
L_08960918:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08960934u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961BEC;
L_08960934:
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
    ctx.gpr[31] = (0x08960964u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 204u, 0x08944DF4u>(ctx, &aot_mem) && ctx.pc == 0x08960964u) goto L_08960964;
    return;
L_08960964:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_0896096C;
    }
L_0896096C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08960988u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961BEC;
L_08960988:
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
    ctx.gpr[31] = (0x089609B8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 206u, 0x08944E10u>(ctx, &aot_mem) && ctx.pc == 0x089609B8u) goto L_089609B8;
    return;
L_089609B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_089609C0;
    }
L_089609C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089609DCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961BEC;
L_089609DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(2096)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960A20;
      }
      goto L_08960A18;
    }
L_08960A18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960A24;
      }
      goto L_08960A20;
    }
L_08960A20:
    ctx.gpr[4] = (0u | 0u);
    goto L_08960A24;
L_08960A24:
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
          goto L_08960A50;
      }
      goto L_08960A48;
    }
L_08960A48:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960AA0;
      }
      goto L_08960A50;
    }
L_08960A50:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08960A80;
    }
    goto L_08960A6C;
L_08960A6C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960AA0;
      }
      goto L_08960A80;
    }
L_08960A80:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960AA0;
      }
      goto L_08960A9C;
    }
L_08960A9C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08960AA0;
L_08960AA0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960AA8;
    }
L_08960AA8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960AC0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961BEC;
L_08960AC0:
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
    ctx.gpr[31] = (0x08960AF0u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0080_entry, 80u, 204u, 0x08944DF4u>(ctx, &aot_mem) && ctx.pc == 0x08960AF0u) goto L_08960AF0;
    return;
L_08960AF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960AF8;
    }
L_08960AF8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960B10u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961BEC;
L_08960B10:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960B28;
      }
      goto L_08960B1C;
    }
L_08960B1C:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960B2C;
      }
      goto L_08960B28;
    }
L_08960B28:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(535), static_cast<std::uint8_t>(0u));
    goto L_08960B2C;
L_08960B2C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960B34;
    }
L_08960B34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(536)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960B48;
      }
      goto L_08960B40;
    }
L_08960B40:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960B4C;
      }
      goto L_08960B48;
    }
L_08960B48:
    ctx.gpr[4] = (0u | 0u);
    goto L_08960B4C;
L_08960B4C:
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
          goto L_08960B78;
      }
      goto L_08960B70;
    }
L_08960B70:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960BC8;
      }
      goto L_08960B78;
    }
L_08960B78:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08960BA8;
    }
    goto L_08960B94;
L_08960B94:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960BC8;
      }
      goto L_08960BA8;
    }
L_08960BA8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960BC8;
      }
      goto L_08960BC4;
    }
L_08960BC4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08960BC8;
L_08960BC8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960BD0;
    }
L_08960BD0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x08960BECu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961BEC;
L_08960BEC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08960BFCu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08960BFCu) goto L_08960BFC;
    return;
L_08960BFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08960C0Cu);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 654u, 0x0899F668u>(ctx, &aot_mem) && ctx.pc == 0x08960C0Cu) goto L_08960C0C;
    return;
L_08960C0C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960C14;
    }
L_08960C14:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960C30u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961BEC;
L_08960C30:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08960C68;
      }
      goto L_08960C60;
    }
L_08960C60:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08960C6C;
      }
      goto L_08960C68;
    }
L_08960C68:
    ctx.gpr[4] = (0u | 1u);
    goto L_08960C6C;
L_08960C6C:
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
          goto L_08960C98;
      }
      goto L_08960C90;
    }
L_08960C90:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960CE8;
      }
      goto L_08960C98;
    }
L_08960C98:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08960CC8;
    }
    goto L_08960CB4;
L_08960CB4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960CE8;
      }
      goto L_08960CC8;
    }
L_08960CC8:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960CE8;
      }
      goto L_08960CE4;
    }
L_08960CE4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08960CE8;
L_08960CE8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960CF0;
    }
L_08960CF0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960D0Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961BEC;
L_08960D0C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[5] = (2233u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(232)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08960D44;
      }
      goto L_08960D3C;
    }
L_08960D3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960D48;
      }
      goto L_08960D44;
    }
L_08960D44:
    ctx.gpr[4] = (0u | 0u);
    goto L_08960D48;
L_08960D48:
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
          goto L_08960D74;
      }
      goto L_08960D6C;
    }
L_08960D6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960DC4;
      }
      goto L_08960D74;
    }
L_08960D74:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08960DA4;
    }
    goto L_08960D90;
L_08960D90:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960DC4;
      }
      goto L_08960DA4;
    }
L_08960DA4:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960DC4;
      }
      goto L_08960DC0;
    }
L_08960DC0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08960DC4;
L_08960DC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960DCC;
    }
L_08960DCC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960DE4u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961BEC;
L_08960DE4:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08960DF4u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08960DF4u) goto L_08960DF4;
    return;
L_08960DF4:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960E40;
      }
      goto L_08960E00;
    }
L_08960E00:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 55u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08960E30;
      }
      goto L_08960E10;
    }
L_08960E10:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[6] = (0u | 54u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08960E30;
      }
      goto L_08960E20;
    }
L_08960E20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(592)));
    ctx.gpr[5] = (0u | 38u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08960E38;
      }
      goto L_08960E30;
    }
L_08960E30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960E44;
      }
      goto L_08960E38;
    }
L_08960E38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08960E44;
      }
      goto L_08960E40;
    }
L_08960E40:
    ctx.gpr[4] = (0u | 1u);
    goto L_08960E44;
L_08960E44:
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
          goto L_08960E70;
      }
      goto L_08960E68;
    }
L_08960E68:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960EC0;
      }
      goto L_08960E70;
    }
L_08960E70:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08960EA0;
    }
    goto L_08960E8C;
L_08960E8C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960EC0;
      }
      goto L_08960EA0;
    }
L_08960EA0:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960EC0;
      }
      goto L_08960EBC;
    }
L_08960EBC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08960EC0;
L_08960EC0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960EC8;
    }
L_08960EC8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08960EE0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961BEC;
L_08960EE0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x08960EF0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x08960EF0u) goto L_08960EF0;
    return;
L_08960EF0:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960F38;
      }
      goto L_08960EFC;
    }
L_08960EFC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 496u);
    ctx.gpr[6] = (0u | 80u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08960F18;
      }
      goto L_08960F10;
    }
L_08960F10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960F3C;
      }
      goto L_08960F18;
    }
L_08960F18:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(603))))));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960F30;
      }
      goto L_08960F28;
    }
L_08960F28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08960F3C;
      }
      goto L_08960F30;
    }
L_08960F30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08960F3C;
      }
      goto L_08960F38;
    }
L_08960F38:
    ctx.gpr[4] = (0u | 1u);
    goto L_08960F3C;
L_08960F3C:
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
          goto L_08960F68;
      }
      goto L_08960F60;
    }
L_08960F60:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960FB8;
      }
      goto L_08960F68;
    }
L_08960F68:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08960F98;
    }
    goto L_08960F84;
L_08960F84:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08960FB8;
      }
      goto L_08960F98;
    }
L_08960F98:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08960FB8;
      }
      goto L_08960FB4;
    }
L_08960FB4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_08960FB8;
L_08960FB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08960FC0;
    }
L_08960FC0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08960FDCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961BEC;
L_08960FDC:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x08960FECu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x08960FECu) goto L_08960FEC;
    return;
L_08960FEC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(636)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(636), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08961004;
    }
L_08961004:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896101Cu);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961BEC;
L_0896101C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x0896102Cu);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0896102Cu) goto L_0896102C;
    return;
L_0896102C:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (32768u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 31u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[31] = (0x08961058u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 471u, 0x088868D0u>(ctx, &aot_mem) && ctx.pc == 0x08961058u) goto L_08961058;
    return;
L_08961058:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08961060;
    }
L_08961060:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961078u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961BEC;
L_08961078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[18] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[18] = (ctx.gpr[18] + ctx.gpr[4]);
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089610BCu);
    ctx.gpr[6] = (0u | 8u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 548u, 0x08AEDF40u>(ctx, &aot_mem) && ctx.pc == 0x089610BCu) goto L_089610BC;
    return;
L_089610BC:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x089610D0u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 221u, 0x0887171Cu>(ctx, &aot_mem) && ctx.pc == 0x089610D0u) goto L_089610D0;
    return;
L_089610D0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089610EC;
      }
      goto L_089610E0;
    }
L_089610E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    goto L_089610EC;
L_089610EC:
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x089610FCu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 295u, 0x089D61ECu>(ctx, &aot_mem) && ctx.pc == 0x089610FCu) goto L_089610FC;
    return;
L_089610FC:
    { const std::uint32_t vfpu_address = ctx.gpr[19] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[19] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x08961118u);
    ctx.gpr[5] = (ctx.gpr[17] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 380u, 0x088723E8u>(ctx, &aot_mem) && ctx.pc == 0x08961118u) goto L_08961118;
    return;
L_08961118:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08961128u);
    ctx.gpr[6] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 212u, 0x08871684u>(ctx, &aot_mem) && ctx.pc == 0x08961128u) goto L_08961128;
    return;
L_08961128:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961138;
      }
      goto L_08961130;
    }
L_08961130:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0896113C;
      }
      goto L_08961138;
    }
L_08961138:
    ctx.gpr[4] = (0u | 0u);
    goto L_0896113C;
L_0896113C:
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
          goto L_08961168;
      }
      goto L_08961160;
    }
L_08961160:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089611B8;
      }
      goto L_08961168;
    }
L_08961168:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08961198;
    }
    goto L_08961184;
L_08961184:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089611B8;
      }
      goto L_08961198;
    }
L_08961198:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089611B8;
      }
      goto L_089611B4;
    }
L_089611B4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089611B8;
L_089611B8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_089611C0;
    }
L_089611C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089611D8u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961BEC;
L_089611D8:
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 50u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896123C;
      }
      goto L_08961210;
    }
L_08961210:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x0896121Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0896121Cu) goto L_0896121C;
    return;
L_0896121C:
    ctx.gpr[31] = (0x08961224u);
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 1016u, 0x08A97C88u>(ctx, &aot_mem) && ctx.pc == 0x08961224u) goto L_08961224;
    return;
L_08961224:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961234;
      }
      goto L_0896122C;
    }
L_0896122C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08961240;
      }
      goto L_08961234;
    }
L_08961234:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08961240;
      }
      goto L_0896123C;
    }
L_0896123C:
    ctx.gpr[4] = (0u | 0u);
    goto L_08961240;
L_08961240:
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
          goto L_0896126C;
      }
      goto L_08961264;
    }
L_08961264:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089612BC;
      }
      goto L_0896126C;
    }
L_0896126C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0896129C;
    }
    goto L_08961288;
L_08961288:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089612BC;
      }
      goto L_0896129C;
    }
L_0896129C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089612BC;
      }
      goto L_089612B8;
    }
L_089612B8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089612BC;
L_089612BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_089612C4;
    }
L_089612C4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x089612E0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961BEC;
L_089612E0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x089612F0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089612F0u) goto L_089612F0;
    return;
L_089612F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
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
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08961328u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 299u, 0x0899DD38u>(ctx, &aot_mem) && ctx.pc == 0x08961328u) goto L_08961328;
    return;
L_08961328:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961334;
      }
      goto L_08961330;
    }
L_08961330:
    ctx.gpr[17] = (0u | 1u);
    goto L_08961334;
L_08961334:
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
          goto L_08961360;
      }
      goto L_08961358;
    }
L_08961358:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_089613B0;
      }
      goto L_08961360;
    }
L_08961360:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_08961390;
    }
    goto L_0896137C;
L_0896137C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089613B0;
      }
      goto L_08961390;
    }
L_08961390:
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089613B0;
      }
      goto L_089613AC;
    }
L_089613AC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_089613B0;
L_089613B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_089613B8;
    }
L_089613B8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089613D0u);
    ctx.gpr[6] = (0u | 1u);
    goto L_08961BEC;
L_089613D0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x089613E0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x089613E0u) goto L_089613E0;
    return;
L_089613E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32768u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089613FC;
      }
      goto L_089613F4;
    }
L_089613F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08961400;
      }
      goto L_089613FC;
    }
L_089613FC:
    ctx.gpr[4] = (0u | 0u);
    goto L_08961400;
L_08961400:
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
          goto L_0896142C;
      }
      goto L_08961424;
    }
L_08961424:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896147C;
      }
      goto L_0896142C;
    }
L_0896142C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0896145C;
    }
    goto L_08961448;
L_08961448:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0896147C;
      }
      goto L_0896145C;
    }
L_0896145C:
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896147C;
      }
      goto L_08961478;
    }
L_08961478:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0896147C;
L_0896147C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08961484;
    }
L_08961484:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x089614A0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    goto L_08961BEC;
L_089614A0:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x089614B0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x089614B0u) goto L_089614B0;
    return;
L_089614B0:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(6) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_08961608;
      }
      goto L_089614C8;
    }
L_089614C8:
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_08961520;
      }
      goto L_089614D4;
    }
L_089614D4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(3));
      if (branch_taken) {
          goto L_08961550;
      }
      goto L_089614DC;
    }
L_089614DC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08961580;
      }
      goto L_089614E4;
    }
L_089614E4:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    ctx.gpr[1] = (0u + static_cast<std::uint32_t>(5));
      if (branch_taken) {
          goto L_089615B0;
      }
      goto L_089614EC;
    }
L_089614EC:
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[1];
    // nop
      if (branch_taken) {
          goto L_089615E0;
      }
      goto L_089614F4;
    }
L_089614F4:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08961518;
      }
      goto L_0896150C;
    }
L_0896150C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), 0u);
    goto L_08961518;
L_08961518:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961608;
      }
      goto L_08961520;
    }
L_08961520:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08961548;
      }
      goto L_08961538;
    }
L_08961538:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08961548;
L_08961548:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961608;
      }
      goto L_08961550;
    }
L_08961550:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08961578;
      }
      goto L_08961568;
    }
L_08961568:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08961578;
L_08961578:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961608;
      }
      goto L_08961580;
    }
L_08961580:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089615A8;
      }
      goto L_08961598;
    }
L_08961598:
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089615A8;
L_089615A8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961608;
      }
      goto L_089615B0;
    }
L_089615B0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089615D8;
      }
      goto L_089615C8;
    }
L_089615C8:
    ctx.gpr[4] = (0u | 16u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_089615D8;
L_089615D8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961608;
      }
      goto L_089615E0;
    }
L_089615E0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08961608;
      }
      goto L_089615F8;
    }
L_089615F8:
    ctx.gpr[4] = (0u | 17u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_08961608;
L_08961608:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08961658;
      }
      goto L_08961620;
    }
L_08961620:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0896162Cu);
    ctx.gpr[4] = (0u | 2128u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x0896162Cu) goto L_0896162C;
    return;
L_0896162C:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_08961650;
      }
      goto L_08961638;
    }
L_08961638:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896164Cu);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0162_entry, 162u, 726u, 0x08A8F734u>(ctx, &aot_mem) && ctx.pc == 0x0896164Cu) goto L_0896164C;
    return;
L_0896164C:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_08961650;
L_08961650:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089616E8;
      }
      goto L_08961658;
    }
L_08961658:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 16u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_08961684;
      }
      goto L_08961670;
    }
L_08961670:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 17u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089616B8;
      }
      goto L_08961684;
    }
L_08961684:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x08961690u);
    ctx.gpr[4] = (0u | 2096u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x08961690u) goto L_08961690;
    return;
L_08961690:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089616B0;
      }
      goto L_0896169C;
    }
L_0896169C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089616ACu);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 435u, 0x0894E808u>(ctx, &aot_mem) && ctx.pc == 0x089616ACu) goto L_089616AC;
    return;
L_089616AC:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_089616B0;
L_089616B0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089616E8;
      }
      goto L_089616B8;
    }
L_089616B8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x089616C4u);
    ctx.gpr[4] = (0u | 2160u);
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 240u, 0x0899D998u>(ctx, &aot_mem) && ctx.pc == 0x089616C4u) goto L_089616C4;
    return;
L_089616C4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[19] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_089616E8;
      }
      goto L_089616D0;
    }
L_089616D0:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x089616E4u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0126_entry, 126u, 143u, 0x089FD478u>(ctx, &aot_mem) && ctx.pc == 0x089616E4u) goto L_089616E4;
    return;
L_089616E4:
    ctx.gpr[17] = (ctx.gpr[19] | 0u);
    goto L_089616E8;
L_089616E8:
    ctx.gpr[4] = (0u | 2u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(428), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (65534u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 17u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(408)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(408), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(412)));
    ctx.gpr[5] = (65504u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(412), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961758;
      }
      goto L_08961744;
    }
L_08961744:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    goto L_08961758;
L_08961758:
    ctx.gpr[4] = (ctx.gpr[18] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089617A4u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x089617A4u) goto L_089617A4;
    return;
L_089617A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[31] = (0x089617B8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x089617B8u) goto L_089617B8;
    return;
L_089617B8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 50u);
      if (branch_taken) {
          goto L_089617FC;
      }
      goto L_089617C8;
    }
L_089617C8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089617F0;
      }
      goto L_089617D4;
    }
L_089617D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_089617F0;
    }
    goto L_089617E0;
L_089617E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x089617ECu);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x089617ECu) goto L_089617EC;
    return;
L_089617EC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_089617F0;
L_089617F0:
    ctx.gpr[31] = (0x089617F8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x089617F8u) goto L_089617F8;
    return;
L_089617F8:
    ctx.gpr[4] = (0u | 50u);
    goto L_089617FC;
L_089617FC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(504), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[18] + static_cast<std::uint32_t>(504));
    ctx.gpr[31] = (0x08961810u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08961810u) goto L_08961810;
    return;
L_08961810:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(1332), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1332));
    ctx.gpr[31] = (0x08961820u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x08961820u) goto L_08961820;
    return;
L_08961820:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 48u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(836)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08961854;
      }
      goto L_0896184C;
    }
L_0896184C:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(398), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08961854;
L_08961854:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[4] = (ctx.gpr[4] | 16u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[5] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08961890u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 725u, 0x08887A68u>(ctx, &aot_mem) && ctx.pc == 0x08961890u) goto L_08961890;
    return;
L_08961890:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(13820)));
    ctx.gpr[31] = (0x089618A0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    if (rt.invoke_chained_direct<&recomp_unit_0027_entry, 27u, 281u, 0x08871AF4u>(ctx, &aot_mem) && ctx.pc == 0x089618A0u) goto L_089618A0;
    return;
L_089618A0:
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(326), static_cast<std::uint8_t>(ctx.gpr[2]));
    ctx.gpr[31] = (0x089618ACu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 47u, 0x088C03D4u>(ctx, &aot_mem) && ctx.pc == 0x089618ACu) goto L_089618AC;
    return;
L_089618AC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7020), ctx.gpr[5]);
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    ctx.gpr[31] = (0x089618CCu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x089618CCu) goto L_089618CC;
    return;
L_089618CC:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089618E4u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x089618E4u) goto L_089618E4;
    return;
L_089618E4:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961908;
      }
      goto L_089618F0;
    }
L_089618F0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x08961908u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 447u, 0x08957150u>(ctx, &aot_mem) && ctx.pc == 0x08961908u) goto L_08961908;
    return;
L_08961908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08961910;
    }
L_08961910:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0896192Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    goto L_08961BEC;
L_0896192C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[16] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[16] = (ctx.gpr[16] + ctx.gpr[4]);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[24] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08961984;
      }
      goto L_08961974;
    }
L_08961974:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[31] = (0x08961980u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x08961980u) goto L_08961980;
    return;
L_08961980:
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_08961984;
L_08961984:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961A40;
      }
      goto L_08961994;
    }
L_08961994:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961A40;
      }
      goto L_089619A4;
    }
L_089619A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(598))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089619D0;
      }
      goto L_089619BC;
    }
L_089619BC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(404)));
    ctx.gpr[6] = (4u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(404), ctx.gpr[5]);
    goto L_089619D0;
L_089619D0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(504)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08961A34;
      }
      goto L_089619E4;
    }
L_089619E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x089619F0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 734u, 0x0889F854u>(ctx, &aot_mem) && ctx.pc == 0x089619F0u) goto L_089619F0;
    return;
L_089619F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(68)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] | 64u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(68), ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-17));
    ctx.gpr[5] = (ctx.gpr[5] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(1332)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(408), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_08961A40;
      }
      goto L_08961A34;
    }
L_08961A34:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08961A40u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(1332)));
    if (rt.invoke_chained_direct<&recomp_unit_0038_entry, 38u, 667u, 0x0889F3D8u>(ctx, &aot_mem) && ctx.pc == 0x08961A40u) goto L_08961A40;
    return;
L_08961A40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08961A4Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0032_entry, 32u, 765u, 0x08887C88u>(ctx, &aot_mem) && ctx.pc == 0x08961A4Cu) goto L_08961A4C;
    return;
L_08961A4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(1336), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(1332), 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    ctx.gpr[5] = (0u | 11u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_08961AA4;
      }
      goto L_08961A70;
    }
L_08961A70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961A98;
      }
      goto L_08961A7C;
    }
L_08961A7C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    if (ctx.gpr[4] == 0u) {
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
        goto L_08961A98;
    }
    goto L_08961A88;
L_08961A88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(912)));
    ctx.gpr[31] = (0x08961A94u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(912));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 700u, 0x0883B934u>(ctx, &aot_mem) && ctx.pc == 0x08961A94u) goto L_08961A94;
    return;
L_08961A94:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(912), 0u);
    goto L_08961A98;
L_08961A98:
    ctx.gpr[31] = (0x08961AA0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 404u, 0x089A1C4Cu>(ctx, &aot_mem) && ctx.pc == 0x08961AA0u) goto L_08961AA0;
    return;
L_08961AA0:
    ctx.gpr[4] = (0u | 1u);
    goto L_08961AA4;
L_08961AA4:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(844), ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 1u);
    ctx.gpr[7] = (0u + static_cast<std::uint32_t>(-513));
    ctx.gpr[6] = (ctx.gpr[6] & ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 9u);
    ctx.gpr[4] = (ctx.gpr[6] | ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08961AF4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0102_entry, 102u, 706u, 0x0899F9BCu>(ctx, &aot_mem) && ctx.pc == 0x08961AF4u) goto L_08961AF4;
    return;
L_08961AF4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961B18;
      }
      goto L_08961B04;
    }
L_08961B04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(748)));
    ctx.gpr[5] = (50298u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08961B18;
L_08961B18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(748), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08961B2Cu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 538u, 0x089A246Cu>(ctx, &aot_mem) && ctx.pc == 0x08961B2Cu) goto L_08961B2C;
    return;
L_08961B2C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(744)));
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[31] = (0x08961B50u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0161_entry, 161u, 493u, 0x08A8AF88u>(ctx, &aot_mem) && ctx.pc == 0x08961B50u) goto L_08961B50;
    return;
L_08961B50:
    ctx.gpr[31] = (0x08961B58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0103_entry, 103u, 546u, 0x089A24D8u>(ctx, &aot_mem) && ctx.pc == 0x08961B58u) goto L_08961B58;
    return;
L_08961B58:
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[31] = (0x08961B64u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(10640));
    if (rt.invoke_chained_direct<&recomp_unit_0150_entry, 150u, 503u, 0x08A5EC5Cu>(ctx, &aot_mem) && ctx.pc == 0x08961B64u) goto L_08961B64;
    return;
L_08961B64:
    ctx.gpr[31] = (0x08961B6Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 847u, 0x08A2FC04u>(ctx, &aot_mem) && ctx.pc == 0x08961B6Cu) goto L_08961B6C;
    return;
L_08961B6C:
    ctx.fpr[24] = ctx.fpr[24] + ctx.fpr[0];
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(104));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08961BA0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08961BA0u) goto L_08961BA0;
    return;
L_08961BA0:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[31] = (0x08961BB8u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0031_entry, 31u, 507u, 0x08882600u>(ctx, &aot_mem) && ctx.pc == 0x08961BB8u) goto L_08961BB8;
    return;
L_08961BB8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08961BC4;
      }
      goto L_08961BC0;
    }
L_08961BC0:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_08961BC4;
L_08961BC4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961BEC:
    ctx.set_vfpu_scalar_bits_ct<28u>(ctx.gpr[4]);
    ctx.set_vfpu_scalar_bits_ct<29u>(ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[12] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29356));
    goto L_08961C0C;
L_08961C0C:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[11] = (ctx.gpr[10] < static_cast<std::uint32_t>(10) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[11] == 0u;
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08961C30;
      }
      goto L_08961C1C;
    }
L_08961C1C:
    ctx.gpr[10] = (ctx.gpr[10] << 2u);
    ctx.gpr[10] = (ctx.gpr[10] + ctx.gpr[12]);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[10];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961C30:
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.set_vfpu_scalar_bits_ct<93u>(ctx.gpr[31]);
    ctx.set_vfpu_scalar_bits_ct<92u>(ctx.gpr[6]);
    ctx.set_vfpu_scalar_bits_ct<124u>(ctx.gpr[7]);
    ctx.set_vfpu_scalar_bits_ct<30u>(ctx.gpr[9]);
    ctx.set_vfpu_scalar_bits_ct<62u>(ctx.gpr[12]);
    ctx.gpr[8] = (ctx.gpr[5] - ctx.gpr[9]);
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<29u>());
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(0));
    ctx.gpr[31] = (0x08961C5Cu);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[8]);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 421u, 0x08956F38u>(ctx, &aot_mem) && ctx.pc == 0x08961C5Cu) goto L_08961C5C;
    return;
L_08961C5C:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.vfpu_scalar_bits_ct<29u>());
    ctx.gpr[6] = (ctx.vfpu_scalar_bits_ct<92u>());
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.vfpu_scalar_bits_ct<124u>());
    ctx.gpr[9] = (ctx.vfpu_scalar_bits_ct<30u>());
    ctx.gpr[12] = (ctx.vfpu_scalar_bits_ct<62u>());
    ctx.gpr[31] = (ctx.vfpu_scalar_bits_ct<93u>());
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[9]);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[2]);
      if (branch_taken) {
          goto L_08961C0C;
      }
      goto L_08961C8C;
    }
L_08961C8C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961D78;
      }
      goto L_08961C94;
    }
L_08961C94:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), 0u);
      if (branch_taken) {
          goto L_08961C0C;
      }
      goto L_08961CA4;
    }
L_08961CA4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961D78;
      }
      goto L_08961CAC;
    }
L_08961CAC:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[10] = (ctx.gpr[10] << 24u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08961C0C;
      }
      goto L_08961CC4;
    }
L_08961CC4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961D78;
      }
      goto L_08961CCC;
    }
L_08961CCC:
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(1), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    ctx.gpr[10] = (ctx.gpr[10] << 16u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08961C0C;
      }
      goto L_08961CE8;
    }
L_08961CE8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961D78;
      }
      goto L_08961CF0;
    }
L_08961CF0:
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(1), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[10] = (ctx.gpr[10] << 8u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08961C0C;
      }
      goto L_08961D0C;
    }
L_08961D0C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961D78;
      }
      goto L_08961D14;
    }
L_08961D14:
    ctx.gpr[10] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1))))));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08961C0C;
      }
      goto L_08961D28;
    }
L_08961D28:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961D78;
      }
      goto L_08961D30;
    }
L_08961D30:
    ctx.gpr[10] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(1)));
    ctx.gpr[11] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(2))))));
    ctx.gpr[10] = ((ctx.gpr[10] & ~0xFFFFFF00u) | ((ctx.gpr[11] & 0x00FFFFFFu) << 8u));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(3));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08961C0C;
      }
      goto L_08961D4C;
    }
L_08961D4C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961D78;
      }
      goto L_08961D54;
    }
L_08961D54:
    ctx.gpr[10] = (rt.memory().aot_load_word_right(ctx.gpr[5] + static_cast<std::uint32_t>(1), ctx.gpr[10]));
    ctx.gpr[10] = (rt.memory().aot_load_word_left(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[10]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5));
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-4), ctx.gpr[10]);
      if (branch_taken) {
          goto L_08961C0C;
      }
      goto L_08961D6C;
    }
L_08961D6C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961D78;
      }
      goto L_08961D74;
    }
L_08961D74:
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    goto L_08961D78;
L_08961D78:
    ctx.gpr[8] = (ctx.vfpu_scalar_bits_ct<29u>());
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[9]);
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[2] = (ctx.gpr[6] | 0u);
    jump_target = ctx.gpr[31];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08961D90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(100), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), ctx.gpr[4]);
    ctx.gpr[31] = (0x08961DE4u);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31832));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 420u, 0x08956F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08961DE4u) goto L_08961DE4;
    return;
L_08961DE4:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(88), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-6852), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6992), 0u);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27600));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(-6852));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[22] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[30] = (0u | 1u);
    ctx.gpr[20] = (2269u << 16u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(4912));
    ctx.gpr[19] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(5168));
    goto L_08961E2C;
L_08961E2C:
    ctx.gpr[31] = (0x08961E34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 534u, 0x08957884u>(ctx, &aot_mem) && ctx.pc == 0x08961E34u) goto L_08961E34;
    return;
L_08961E34:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08961E40u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 624u, 0x08957D04u>(ctx, &aot_mem) && ctx.pc == 0x08961E40u) goto L_08961E40;
    return;
L_08961E40:
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[17]) < 128 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(540));
      if (branch_taken) {
          goto L_08961E2C;
      }
      goto L_08961E50;
    }
L_08961E50:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x08961E5Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 444u, 0x0895711Cu>(ctx, &aot_mem) && ctx.pc == 0x08961E5Cu) goto L_08961E5C;
    return;
L_08961E5C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x08961E68u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24016));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 458u, 0x08957274u>(ctx, &aot_mem) && ctx.pc == 0x08961E68u) goto L_08961E68;
    return;
L_08961E68:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x08961E74u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23968));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 494u, 0x089574B4u>(ctx, &aot_mem) && ctx.pc == 0x08961E74u) goto L_08961E74;
    return;
L_08961E74:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6540), ctx.gpr[22]);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6542), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7028), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6548), 0u);
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6988), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 0u);
    goto L_08961EA4;
L_08961EA4:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(0), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 32 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(8));
      if (branch_taken) {
          goto L_08961EA4;
      }
      goto L_08961EBC;
    }
L_08961EBC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7024), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6844), ctx.gpr[22]);
    ctx.gpr[8] = (0u | 0u);
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    goto L_08961ED8;
L_08961ED8:
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_08961EE0;
L_08961EE0:
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[7]) < 24 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
      if (branch_taken) {
          goto L_08961EE0;
      }
      goto L_08961EF4;
    }
L_08961EF4:
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(24), 0u);
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(28));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[8]) < 305 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(28));
      if (branch_taken) {
          goto L_08961ED8;
      }
      goto L_08961F0C;
    }
L_08961F0C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7012), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_08961F30;
      }
      goto L_08961F24;
    }
L_08961F24:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-29364)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08961F8C;
      }
      goto L_08961F30;
    }
L_08961F30:
    ctx.gpr[16] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[17] = (2230u << 16u);
    ctx.gpr[19] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(-26512));
    ctx.gpr[20] = (2231u << 16u);
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13712));
    ctx.gpr[21] = (2277u << 16u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(-23200));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[23] = (2274u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + static_cast<std::uint32_t>(23488));
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-22432));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(15272));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), ctx.gpr[5]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), ctx.gpr[6]);
      if (branch_taken) {
          goto L_08961FCC;
      }
      goto L_08961F84;
    }
L_08961F84:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08961FD4;
      }
      goto L_08961F8C;
    }
L_08961F8C:
    ctx.gpr[31] = (0x08961F94u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0092_entry, 92u, 145u, 0x08974A08u>(ctx, &aot_mem) && ctx.pc == 0x08961F94u) goto L_08961F94;
    return;
L_08961F94:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x08961FA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0063_entry, 63u, 207u, 0x08900C78u>(ctx, &aot_mem) && ctx.pc == 0x08961FA0u) goto L_08961FA0;
    return;
L_08961FA0:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x08961FACu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 57u, 0x0883C3B4u>(ctx, &aot_mem) && ctx.pc == 0x08961FACu) goto L_08961FAC;
    return;
L_08961FAC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6516), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6512), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6508), 0u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[30] | 0u);
      if (branch_taken) {
          goto L_08962450;
      }
      goto L_08961FCC;
    }
L_08961FCC:
    ctx.gpr[31] = (0x08961FD4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 7u, 0x08958070u>(ctx, &aot_mem) && ctx.pc == 0x08961FD4u) goto L_08961FD4;
    return;
L_08961FD4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08961FE0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31812));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 183u, 0x088B8FBCu>(ctx, &aot_mem) && ctx.pc == 0x08961FE0u) goto L_08961FE0;
    return;
L_08961FE0:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31804));
    ctx.gpr[5] = (2226u << 16u);
    ctx.gpr[31] = (0x08961FF4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-31792));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 203u, 0x088B9118u>(ctx, &aot_mem) && ctx.pc == 0x08961FF4u) goto L_08961FF4;
    return;
L_08961FF4:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-6980));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08962008u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 206u, 0x088B9158u>(ctx, &aot_mem) && ctx.pc == 0x08962008u) goto L_08962008;
    return;
L_08962008:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x0896201Cu);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 206u, 0x088B9158u>(ctx, &aot_mem) && ctx.pc == 0x0896201Cu) goto L_0896201C;
    return;
L_0896201C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(296)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_08962034;
      }
      goto L_08962028;
    }
L_08962028:
    ctx.gpr[31] = (0x08962030u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 766u, 0x08A0B794u>(ctx, &aot_mem) && ctx.pc == 0x08962030u) goto L_08962030;
    return;
L_08962030:
    ctx.gpr[4] = (2229u << 16u);
    goto L_08962034;
L_08962034:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896209C;
      }
      goto L_08962040;
    }
L_08962040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[31] = (0x08962050u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0112_entry, 112u, 738u, 0x089C70F0u>(ctx, &aot_mem) && ctx.pc == 0x08962050u) goto L_08962050;
    return;
L_08962050:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x08962064u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 687u, 0x08AA33C4u>(ctx, &aot_mem) && ctx.pc == 0x08962064u) goto L_08962064;
    return;
L_08962064:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29316), ctx.gpr[2]);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(-29316));
    ctx.gpr[5] = (0u | 4u);
    ctx.gpr[31] = (0x08962078u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0113_entry, 113u, 123u, 0x089C8A24u>(ctx, &aot_mem) && ctx.pc == 0x08962078u) goto L_08962078;
    return;
L_08962078:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(8));
    ctx.gpr[4] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (4096u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-9136), 0u);
      if (branch_taken) {
          goto L_089620E4;
      }
      goto L_0896209C;
    }
L_0896209C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[7] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31788));
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x089620C8u);
    ctx.gpr[9] = (0u | 0u);
    ctx.pc = 0x08B0BBECu;
    return;
L_089620C8:
    aot_mem.aot_store32(ctx.gpr[20] + static_cast<std::uint32_t>(-9136), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(72));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x089620DCu);
    ctx.gpr[6] = (0u | 0u);
    ctx.pc = 0x08B0BADCu;
    return;
L_089620DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-29316), ctx.gpr[4]);
    goto L_089620E4;
L_089620E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[31] = (0x089620FCu);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x089620FCu) goto L_089620FC;
    return;
L_089620FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-6980)));
    ctx.gpr[31] = (0x0896210Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 206u, 0x088B9158u>(ctx, &aot_mem) && ctx.pc == 0x0896210Cu) goto L_0896210C;
    return;
L_0896210C:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29360), ctx.gpr[18]);
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08962120u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31776));
    if (rt.invoke_chained_direct<&recomp_unit_0045_entry, 45u, 183u, 0x088B8FBCu>(ctx, &aot_mem) && ctx.pc == 0x08962120u) goto L_08962120;
    return;
L_08962120:
    ctx.gpr[31] = (0x08962128u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 204u, 0x0887CE30u>(ctx, &aot_mem) && ctx.pc == 0x08962128u) goto L_08962128;
    return;
L_08962128:
    ctx.gpr[31] = (0x08962130u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 210u, 0x0887CF94u>(ctx, &aot_mem) && ctx.pc == 0x08962130u) goto L_08962130;
    return;
L_08962130:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6854), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6984), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.gpr[4] = (0u | 0u);
    goto L_08962148;
L_08962148:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 150 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08962148;
      }
      goto L_0896215C;
    }
L_0896215C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7004), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-7000), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6998), static_cast<std::uint16_t>(0u));
    ctx.gpr[31] = (0x0896217Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0030_entry, 30u, 215u, 0x0887D028u>(ctx, &aot_mem) && ctx.pc == 0x0896217Cu) goto L_0896217C;
    return;
L_0896217C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6846), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6532), 0u);
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6983), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6868), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6536), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[7] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(16));
    ctx.gpr[21] = (ctx.gpr[7] + ctx.gpr[21]);
    goto L_089621D0;
L_089621D0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[30]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
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
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.gpr[7] = (static_cast<std::int32_t>(ctx.gpr[6]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[7] != 0u;
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(48));
      if (branch_taken) {
          goto L_089621D0;
      }
      goto L_089621FC;
    }
L_089621FC:
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[4] = (16117u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (17206u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17440u << 16u);
    ctx.fpr[28] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[16] = (ctx.gpr[23] | 0u);
    ctx.gpr[19] = (ctx.gpr[23] + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (ctx.gpr[17] + ctx.gpr[19]);
    ctx.gpr[18] = (ctx.gpr[23] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[18]);
    goto L_08962244;
L_08962244:
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 225u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 225u);
    ctx.gpr[31] = (0x08962264u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08962264u) goto L_08962264;
    return;
L_08962264:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[19] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[31] = (0x089622B8u);
    ctx.gpr[8] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x089622B8u) goto L_089622B8;
    return;
L_089622B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(32), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[23]);
    goto L_089622F8;
L_089622F8:
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(2));
      if (branch_taken) {
          goto L_089622F8;
      }
      goto L_0896230C;
    }
L_0896230C:
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(244));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(244));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(244));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[20]) < 48 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(244));
      if (branch_taken) {
          goto L_08962244;
      }
      goto L_08962328;
    }
L_08962328:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6848), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6855), static_cast<std::uint8_t>(0u));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(68));
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(20));
    ctx.gpr[17] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[20] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    goto L_08962354;
L_08962354:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(2), static_cast<std::uint16_t>(ctx.gpr[22]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 255u);
    ctx.gpr[6] = (0u | 255u);
    ctx.gpr[7] = (0u | 255u);
    ctx.gpr[31] = (0x08962388u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08962388u) goto L_08962388;
    return;
L_08962388:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
      if (branch_taken) {
          goto L_08962354;
      }
      goto L_089623BC;
    }
L_089623BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (2229u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6544), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_089623FC;
      }
      goto L_089623D4;
    }
L_089623D4:
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(14312));
    goto L_089623E0;
L_089623E0:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[22]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[5]) < 80 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(12));
      if (branch_taken) {
          goto L_089623E0;
      }
      goto L_089623FC;
    }
L_089623FC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (0u | 0u);
    goto L_08962404;
L_08962404:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[6] = (static_cast<std::int32_t>(ctx.gpr[4]) < 52 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_08962404;
      }
      goto L_08962418;
    }
L_08962418:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0896243C;
      }
      goto L_08962424;
    }
L_08962424:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08962430u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-31772));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 420u, 0x08956F0Cu>(ctx, &aot_mem) && ctx.pc == 0x08962430u) goto L_08962430;
    return;
L_08962430:
    ctx.gpr[31] = (0x08962438u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 129u, 0x088B0CBCu>(ctx, &aot_mem) && ctx.pc == 0x08962438u) goto L_08962438;
    return;
L_08962438:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    goto L_0896243C;
L_0896243C:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7104), 0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-7104));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    goto L_08962450;
L_08962450:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(100)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962494:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[31]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962538;
      }
      goto L_089624E4;
    }
L_089624E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7864)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (17530u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[15]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[17] = (2230u << 16u);
    ctx.set_fpu_condition((ctx.fpr[16] < ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[30] = (0u | 1u);
      if (branch_taken) {
          goto L_08962540;
      }
      goto L_08962524;
    }
L_08962524:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0896255C;
      }
      goto L_08962538;
    }
L_08962538:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_089628C4;
      }
      goto L_08962540;
    }
L_08962540:
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[15];
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[23] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (32768u << 16u);
    ctx.gpr[23] = (ctx.gpr[23] + ctx.gpr[4]);
    goto L_0896255C;
L_0896255C:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x08962568u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24016));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 461u, 0x089572A8u>(ctx, &aot_mem) && ctx.pc == 0x08962568u) goto L_08962568;
    return;
L_08962568:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[31] = (0x08962574u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-23968));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 497u, 0x08957528u>(ctx, &aot_mem) && ctx.pc == 0x08962574u) goto L_08962574;
    return;
L_08962574:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x08962580u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 92u, 0x0895862Cu>(ctx, &aot_mem) && ctx.pc == 0x08962580u) goto L_08962580;
    return;
L_08962580:
    ctx.gpr[31] = (0x08962588u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0119_entry, 119u, 222u, 0x089E14C4u>(ctx, &aot_mem) && ctx.pc == 0x08962588u) goto L_08962588;
    return;
L_08962588:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-6846)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(-6855)));
      if (branch_taken) {
          goto L_0896259C;
      }
      goto L_08962594;
    }
L_08962594:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-6846), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0896259C;
L_0896259C:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_08962760;
      }
      goto L_089625A4;
    }
L_089625A4:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[17] = (2274u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(23488));
    ctx.gpr[4] = (16117u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 49807u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16271u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 23593u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (ctx.gpr[17] + static_cast<std::uint32_t>(8));
    ctx.gpr[19] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (17206u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17440u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[20] = (ctx.gpr[17] + static_cast<std::uint32_t>(24));
    ctx.gpr[22] = (0u | 1u);
    ctx.fpr[28] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
    goto L_089625F0;
L_089625F0:
    ctx.gpr[16] = (ctx.gpr[18] << 8u);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[18]);
    ctx.gpr[4] = (ctx.gpr[18] + ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(112), static_cast<std::uint16_t>(ctx.gpr[18]));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[16] = (ctx.gpr[16] - ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[16] + ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 225u);
    ctx.gpr[6] = (0u | 225u);
    ctx.gpr[7] = (0u | 225u);
    ctx.gpr[31] = (0x08962630u);
    ctx.gpr[8] = (0u | 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08962630u) goto L_08962630;
    return;
L_08962630:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(12), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(30), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(13), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(14), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(15), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[21] = (ctx.gpr[16] + ctx.gpr[20]);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 128u);
    ctx.gpr[6] = (0u | 128u);
    ctx.gpr[7] = (0u | 128u);
    ctx.gpr[31] = (0x08962688u);
    ctx.gpr[8] = (0u | 128u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x08962688u) goto L_08962688;
    return;
L_08962688:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    aot_mem.aot_store8(ctx.gpr[21] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(ctx.gpr[30]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[18] = (aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    goto L_089626C8;
L_089626C8:
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[17]);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (ctx.gpr[4] & 65535u);
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[4]) < 100 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089626C8;
      }
      goto L_089626EC;
    }
L_089626EC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[18] = (ctx.gpr[18] & 65535u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[18]) < 48 ? 1u : 0u);
    if (ctx.gpr[4] != 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[21]);
        goto L_089625F0;
    }
    goto L_08962700;
L_08962700:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(-6848), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[7] = (2230u << 16u);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-22432));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[7] + static_cast<std::uint32_t>(-6855)));
    goto L_0896271C;
L_0896271C:
    ctx.gpr[8] = (ctx.gpr[5] << 3u);
    ctx.gpr[9] = (ctx.gpr[8] + ctx.gpr[8]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[9]);
    ctx.gpr[8] = (ctx.gpr[8] + ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(0), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[8] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[5] = (ctx.gpr[5] & 65535u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[5]) < 16 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896271C;
      }
      goto L_08962748;
    }
L_08962748:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(-6544), static_cast<std::uint16_t>(0u));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[22];
    ctx.gpr[4] = (2228u << 16u);
      if (branch_taken) {
          goto L_08962760;
      }
      goto L_08962758;
    }
L_08962758:
    aot_mem.aot_store8(ctx.gpr[7] + static_cast<std::uint32_t>(-6855), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2228u << 16u);
    goto L_08962760;
L_08962760:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29308), static_cast<std::uint8_t>(ctx.gpr[30]));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6992)));
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (2228u << 16u);
        goto L_089627C0;
    }
    goto L_08962774;
L_08962774:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(512)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(512), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(516)));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(516), ctx.gpr[5]);
    ctx.gpr[31] = (0x08962798u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 540u, 0x08957940u>(ctx, &aot_mem) && ctx.pc == 0x08962798u) goto L_08962798;
    return;
L_08962798:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089627B4;
      }
      goto L_089627A4;
    }
L_089627A4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(524)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_089627B4;
      }
      goto L_089627B0;
    }
L_089627B0:
    ctx.gpr[4] = (0u | 0u);
    goto L_089627B4;
L_089627B4:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962774;
      }
      goto L_089627BC;
    }
L_089627BC:
    ctx.gpr[4] = (2228u << 16u);
    goto L_089627C0;
L_089627C0:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29308), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6524)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(96), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
      if (branch_taken) {
          goto L_089628BC;
      }
      goto L_08962808;
    }
L_08962808:
    ctx.gpr[5] = (17377u << 16u);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[20] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (16320u << 16u);
    ctx.fpr[24] = std::bit_cast<float>(ctx.gpr[5]);
    goto L_0896281C;
L_0896281C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(25)));
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(26)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.gpr[10] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(28)));
    ctx.gpr[10] = (ctx.gpr[10] & 255u);
    ctx.gpr[11] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(32)));
    ctx.gpr[11] = (ctx.gpr[11] & 255u);
    ctx.gpr[8] = (0u | 255u);
    ctx.gpr[9] = (ctx.gpr[16] | 0u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), 0u);
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    ctx.gpr[31] = (0x08962880u);
    ctx.fpr[15] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    if (rt.invoke_chained_direct<&recomp_unit_0125_entry, 125u, 325u, 0x089FA098u>(ctx, &aot_mem) && ctx.pc == 0x08962880u) goto L_08962880;
    return;
L_08962880:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[4] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    // nop
      if (branch_taken) {
          goto L_0896281C;
      }
      goto L_089628BC;
    }
L_089628BC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-6996), static_cast<std::uint8_t>(0u));
    goto L_089628C4;
L_089628C4:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
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
L_08962908:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29396)));
    ctx.fpr[14] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29392), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29400)));
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29388), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29384), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16672u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[16]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29380), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16014u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 14571u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[13];
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29376), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29372)));
    ctx.gpr[4] = (15744u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-29368), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (2276u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-27616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27616));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[31] = (0x089629C4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 442u, 0x089570F4u>(ctx, &aot_mem) && ctx.pc == 0x089629C4u) goto L_089629C4;
    return;
L_089629C4:
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-22048));
    ctx.gpr[7] = (2221u << 16u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(13928));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[31] = (0x089629E0u);
    ctx.gpr[6] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 341u, 0x08AF5A1Cu>(ctx, &aot_mem) && ctx.pc == 0x089629E0u) goto L_089629E0;
    return;
L_089629E0:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x089629ECu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29288));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x089629ECu) goto L_089629EC;
    return;
L_089629EC:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-6524), 0u);
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[31] = (0x08962A00u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29276));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 251u, 0x08AF5420u>(ctx, &aot_mem) && ctx.pc == 0x08962A00u) goto L_08962A00;
    return;
L_08962A00:
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962A0C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08962A2Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 92u, 0x0890C78Cu>(ctx, &aot_mem) && ctx.pc == 0x08962A2Cu) goto L_08962A2C;
    return;
L_08962A2C:
    ctx.gpr[5] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08962A40u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30236));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 395u, 0x08A4B388u>(ctx, &aot_mem) && ctx.pc == 0x08962A40u) goto L_08962A40;
    return;
L_08962A40:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08962A4Cu);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    if (rt.invoke_chained_direct<&recomp_unit_0066_entry, 66u, 29u, 0x0890C2B8u>(ctx, &aot_mem) && ctx.pc == 0x08962A4Cu) goto L_08962A4C;
    return;
L_08962A4C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962A60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[21] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x08962A94u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 562u, 0x08ACE7B4u>(ctx, &aot_mem) && ctx.pc == 0x08962A94u) goto L_08962A94;
    return;
L_08962A94:
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962AA4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08962AA4u) goto L_08962AA4;
    return;
L_08962AA4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08962B20;
      }
      goto L_08962AB0;
    }
L_08962AB0:
    ctx.gpr[17] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08962AC8u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08962AC8u) goto L_08962AC8;
    return;
L_08962AC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962AD4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08962AD4u) goto L_08962AD4;
    return;
L_08962AD4:
    { const std::uint32_t vfpu_address = ctx.gpr[17] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 5u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x08962AF0u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 817u, 0x08967E40u>(ctx, &aot_mem) && ctx.pc == 0x08962AF0u) goto L_08962AF0;
    return;
L_08962AF0:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08962B00u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 49u, 0x08968360u>(ctx, &aot_mem) && ctx.pc == 0x08962B00u) goto L_08962B00;
    return;
L_08962B00:
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[31] = (0x08962B0Cu);
    ctx.gpr[4] = (0u | 116u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08962B0Cu) goto L_08962B0C;
    return;
L_08962B0C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] != 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08962B28;
      }
      goto L_08962B18;
    }
L_08962B18:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962B34;
      }
      goto L_08962B20;
    }
L_08962B20:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08962B98;
      }
      goto L_08962B28;
    }
L_08962B28:
    ctx.gpr[31] = (0x08962B30u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 810u, 0x08A0BB64u>(ctx, &aot_mem) && ctx.pc == 0x08962B30u) goto L_08962B30;
    return;
L_08962B30:
    ctx.gpr[18] = (ctx.gpr[17] | 0u);
    goto L_08962B34;
L_08962B34:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08962B48u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 57u, 0x089C0478u>(ctx, &aot_mem) && ctx.pc == 0x08962B48u) goto L_08962B48;
    return;
L_08962B48:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08962B54u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 426u, 0x08A5A2CCu>(ctx, &aot_mem) && ctx.pc == 0x08962B54u) goto L_08962B54;
    return;
L_08962B54:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08962B60u);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 642u, 0x088A7D80u>(ctx, &aot_mem) && ctx.pc == 0x08962B60u) goto L_08962B60;
    return;
L_08962B60:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08962B6Cu);
    ctx.gpr[17] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x08962B6Cu) goto L_08962B6C;
    return;
L_08962B6C:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[17]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08962B94u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08962A0C;
L_08962B94:
    ctx.gpr[2] = (ctx.gpr[21] | 0u);
    goto L_08962B98;
L_08962B98:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962BBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[20]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[20] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), ctx.gpr[31]);
    ctx.gpr[31] = (0x08962BF4u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 562u, 0x08ACE7B4u>(ctx, &aot_mem) && ctx.pc == 0x08962BF4u) goto L_08962BF4;
    return;
L_08962BF4:
    ctx.gpr[19] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962C04u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08962C04u) goto L_08962C04;
    return;
L_08962C04:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08962C4C;
      }
      goto L_08962C10;
    }
L_08962C10:
    ctx.gpr[21] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08962C28u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08962C28u) goto L_08962C28;
    return;
L_08962C28:
    ctx.gpr[18] = (0u | 5u);
    ctx.gpr[31] = (0x08962C34u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08962C34u) goto L_08962C34;
    return;
L_08962C34:
    ctx.gpr[17] = (2277u << 16u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-21984));
      if (branch_taken) {
          goto L_08962C54;
      }
      goto L_08962C44;
    }
L_08962C44:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962C68;
      }
      goto L_08962C4C;
    }
L_08962C4C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08962D94;
      }
      goto L_08962C54;
    }
L_08962C54:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962C60u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08962C60u) goto L_08962C60;
    return;
L_08962C60:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[18] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08962C68;
L_08962C68:
    { const std::uint32_t vfpu_address = ctx.gpr[21] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08962C84u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 817u, 0x08967E40u>(ctx, &aot_mem) && ctx.pc == 0x08962C84u) goto L_08962C84;
    return;
L_08962C84:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08962C90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08962C90u) goto L_08962C90;
    return;
L_08962C90:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962CC4;
      }
      goto L_08962C9C;
    }
L_08962C9C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962CA8u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08962CA8u) goto L_08962CA8;
    return;
L_08962CA8:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08962CB8u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 79u, 0x0896854Cu>(ctx, &aot_mem) && ctx.pc == 0x08962CB8u) goto L_08962CB8;
    return;
L_08962CB8:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08962CC4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 49u, 0x08968360u>(ctx, &aot_mem) && ctx.pc == 0x08962CC4u) goto L_08962CC4;
    return;
L_08962CC4:
    ctx.gpr[31] = (0x08962CCCu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08962CCCu) goto L_08962CCC;
    return;
L_08962CCC:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 4 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
      if (branch_taken) {
          goto L_08962D14;
      }
      goto L_08962CD8;
    }
L_08962CD8:
    ctx.gpr[31] = (0x08962CE0u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08962CE0u) goto L_08962CE0;
    return;
L_08962CE0:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[20];
    // nop
      if (branch_taken) {
          goto L_08962D14;
      }
      goto L_08962CE8;
    }
L_08962CE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962CF4u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x08962CF4u) goto L_08962CF4;
    return;
L_08962CF4:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08962D00u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x08962D00u) goto L_08962D00;
    return;
L_08962D00:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(52), static_cast<std::uint8_t>(ctx.gpr[21]));
    goto L_08962D14;
L_08962D14:
    ctx.gpr[22] = (0u | 0u);
    ctx.gpr[31] = (0x08962D20u);
    ctx.gpr[4] = (0u | 116u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x08962D20u) goto L_08962D20;
    return;
L_08962D20:
    ctx.gpr[21] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
      if (branch_taken) {
          goto L_08962D38;
      }
      goto L_08962D2C;
    }
L_08962D2C:
    ctx.gpr[31] = (0x08962D34u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0129_entry, 129u, 810u, 0x08A0BB64u>(ctx, &aot_mem) && ctx.pc == 0x08962D34u) goto L_08962D34;
    return;
L_08962D34:
    ctx.gpr[22] = (ctx.gpr[21] | 0u);
    goto L_08962D38;
L_08962D38:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[21] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (ctx.gpr[21] + static_cast<std::uint32_t>(116));
    ctx.gpr[31] = (0x08962D4Cu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0111_entry, 111u, 57u, 0x089C0478u>(ctx, &aot_mem) && ctx.pc == 0x08962D4Cu) goto L_08962D4C;
    return;
L_08962D4C:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08962D58u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0149_entry, 149u, 426u, 0x08A5A2CCu>(ctx, &aot_mem) && ctx.pc == 0x08962D58u) goto L_08962D58;
    return;
L_08962D58:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x08962D64u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0040_entry, 40u, 642u, 0x088A7D80u>(ctx, &aot_mem) && ctx.pc == 0x08962D64u) goto L_08962D64;
    return;
L_08962D64:
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08962D70u);
    ctx.gpr[18] = (ctx.gpr[2] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x08962D70u) goto L_08962D70;
    return;
L_08962D70:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[22] + static_cast<std::uint32_t>(8)));
    ctx.gpr[31] = (0x08962D90u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_08962A0C;
L_08962D90:
    ctx.gpr[2] = (ctx.gpr[20] | 0u);
    goto L_08962D94;
L_08962D94:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962DBC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[19]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[19] = (0u | 1u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08962DE8u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0178_entry, 178u, 562u, 0x08ACE7B4u>(ctx, &aot_mem) && ctx.pc == 0x08962DE8u) goto L_08962DE8;
    return;
L_08962DE8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962DF4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x08962DF4u) goto L_08962DF4;
    return;
L_08962DF4:
    ctx.gpr[4] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08962E38;
      }
      goto L_08962E00;
    }
L_08962E00:
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x08962E18u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08962E18u) goto L_08962E18;
    return;
L_08962E18:
    ctx.gpr[17] = (0u | 5u);
    ctx.gpr[31] = (0x08962E24u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08962E24u) goto L_08962E24;
    return;
L_08962E24:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08962E40;
      }
      goto L_08962E30;
    }
L_08962E30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08962E54;
      }
      goto L_08962E38;
    }
L_08962E38:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08962EC4;
      }
      goto L_08962E40;
    }
L_08962E40:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962E4Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08962E4Cu) goto L_08962E4C;
    return;
L_08962E4C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08962E54;
L_08962E54:
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08962E70u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 817u, 0x08967E40u>(ctx, &aot_mem) && ctx.pc == 0x08962E70u) goto L_08962E70;
    return;
L_08962E70:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x08962E7Cu);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 552u, 0x0890B3DCu>(ctx, &aot_mem) && ctx.pc == 0x08962E7Cu) goto L_08962E7C;
    return;
L_08962E7C:
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[2]) < 2 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08962EB0;
      }
      goto L_08962E88;
    }
L_08962E88:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962E94u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08962E94u) goto L_08962E94;
    return;
L_08962E94:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08962EA4u);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 79u, 0x0896854Cu>(ctx, &aot_mem) && ctx.pc == 0x08962EA4u) goto L_08962EA4;
    return;
L_08962EA4:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08962EB0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 49u, 0x08968360u>(ctx, &aot_mem) && ctx.pc == 0x08962EB0u) goto L_08962EB0;
    return;
L_08962EB0:
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08962EC0u);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08962EC0u) goto L_08962EC0;
    return;
L_08962EC0:
    ctx.gpr[2] = (ctx.gpr[19] | 0u);
    goto L_08962EC4;
L_08962EC4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962EE0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[31]);
    ctx.gpr[31] = (0x08962EF0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08962EF0u) goto L_08962EF0;
    return;
L_08962EF0:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_08962F18;
    }
    goto L_08962F0C;
L_08962F0C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_08962F28;
      }
      goto L_08962F18;
    }
L_08962F18:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_08962F28;
L_08962F28:
    ctx.gpr[31] = (0x08962F30u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 687u, 0x08967108u>(ctx, &aot_mem) && ctx.pc == 0x08962F30u) goto L_08962F30;
    return;
L_08962F30:
    ctx.gpr[4] = (ctx.gpr[2] << 6u);
    ctx.gpr[5] = (ctx.gpr[2] << 4u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(51), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(62), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint16_t>(0u));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08962F68:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08962F8Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30236));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 398u, 0x08A4B3B8u>(ctx, &aot_mem) && ctx.pc == 0x08962F8Cu) goto L_08962F8C;
    return;
L_08962F8C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963014;
      }
      goto L_08962F98;
    }
L_08962F98:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08963014;
      }
      goto L_08962FA8;
    }
L_08962FA8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08962FC0u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08962FC0u) goto L_08962FC0;
    return;
L_08962FC0:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963014;
      }
      goto L_08962FCC;
    }
L_08962FCC:
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x08962FE0u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08962FE0u) goto L_08962FE0;
    return;
L_08962FE0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[5] = (2277u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_08963014;
L_08963014:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0896302C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963050u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30236));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 398u, 0x08A4B3B8u>(ctx, &aot_mem) && ctx.pc == 0x08963050u) goto L_08963050;
    return;
L_08963050:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089630FC;
      }
      goto L_0896305C;
    }
L_0896305C:
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[17] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089630FC;
      }
      goto L_0896306C;
    }
L_0896306C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[6] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08963084u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08963084u) goto L_08963084;
    return;
L_08963084:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_089630FC;
      }
      goto L_08963090;
    }
L_08963090:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0896309Cu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x0896309Cu) goto L_0896309C;
    return;
L_0896309C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x089630B4u);
    ctx.gpr[16] = (ctx.gpr[6] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x089630B4u) goto L_089630B4;
    return;
L_089630B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(112)));
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (2277u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[6] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(53)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[7] << (ctx.gpr[16] & 31u));
      if (branch_taken) {
          goto L_089630F0;
      }
      goto L_089630E4;
    }
L_089630E4:
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_089630FC;
      }
      goto L_089630F0;
    }
L_089630F0:
    ctx.gpr[6] = (~(ctx.gpr[16] | 0u));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(53), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_089630FC;
L_089630FC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963114:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963134u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30236));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 398u, 0x08A4B3B8u>(ctx, &aot_mem) && ctx.pc == 0x08963134u) goto L_08963134;
    return;
L_08963134:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089631DC;
      }
      goto L_08963140;
    }
L_08963140:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089631DC;
      }
      goto L_08963150;
    }
L_08963150:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08963168u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08963168u) goto L_08963168;
    return;
L_08963168:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_089631DC;
      }
      goto L_08963174;
    }
L_08963174:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[31] = (0x08963188u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08963188u) goto L_08963188;
    return;
L_08963188:
    ctx.gpr[4] = (20224u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.fpr[12] = ctx.fpr[13] - ctx.fpr[12];
        goto L_089631B0;
    }
    goto L_089631A4;
L_089631A4:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[13]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_089631C0;
      }
      goto L_089631B0;
    }
L_089631B0:
    ctx.gpr[4] = (32768u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    goto L_089631C0;
L_089631C0:
    ctx.gpr[5] = (ctx.gpr[16] << 6u);
    ctx.gpr[6] = (ctx.gpr[16] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[6] = (2277u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-21984));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[4]);
    goto L_089631DC;
L_089631DC:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089631F0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[5] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963210u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30236));
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 398u, 0x08A4B3B8u>(ctx, &aot_mem) && ctx.pc == 0x08963210u) goto L_08963210;
    return;
L_08963210:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963278;
      }
      goto L_0896321C;
    }
L_0896321C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[16];
    // nop
      if (branch_taken) {
          goto L_08963278;
      }
      goto L_0896322C;
    }
L_0896322C:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x08963244u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 138u, 0x088A87D4u>(ctx, &aot_mem) && ctx.pc == 0x08963244u) goto L_08963244;
    return;
L_08963244:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963274;
      }
      goto L_08963250;
    }
L_08963250:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963274;
      }
      goto L_08963258;
    }
L_08963258:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(108)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(24));
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[6] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x08963274u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[7]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x08963274u) goto L_08963274;
    return;
L_08963274:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08963278;
L_08963278:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963290:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x089632A8u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089632A8u) goto L_089632A8;
    return;
L_089632A8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089632B4u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x089632B4u) goto L_089632B4;
    return;
L_089632B4:
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089632C8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[31]);
    ctx.gpr[31] = (0x089632E8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 574u, 0x0890B630u>(ctx, &aot_mem) && ctx.pc == 0x089632E8u) goto L_089632E8;
    return;
L_089632E8:
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[17];
    // nop
      if (branch_taken) {
          goto L_08963314;
      }
      goto L_089632F0;
    }
L_089632F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089632FCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 618u, 0x0890B88Cu>(ctx, &aot_mem) && ctx.pc == 0x089632FCu) goto L_089632FC;
    return;
L_089632FC:
    ctx.gpr[4] = (0u < ctx.gpr[2] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6803), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0896332C;
      }
      goto L_08963314;
    }
L_08963314:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-6803)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963328u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08963328u) goto L_08963328;
    return;
L_08963328:
    ctx.gpr[2] = (0u | 1u);
    goto L_0896332C;
L_0896332C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963340:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    ctx.gpr[16] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_0896336C;
      }
      goto L_0896335C;
    }
L_0896335C:
    ctx.gpr[31] = (0x08963364u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08963364u) goto L_08963364;
    return;
L_08963364:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2228u << 16u);
    goto L_0896336C;
L_0896336C:
    ctx.gpr[6] = (2226u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29236));
    ctx.gpr[31] = (0x0896337Cu);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-30236));
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 5u, 0x0883C058u>(ctx, &aot_mem) && ctx.pc == 0x0896337Cu) goto L_0896337C;
    return;
L_0896337C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[5] = (2228u << 16u);
      if (branch_taken) {
          goto L_08963398;
      }
      goto L_08963388;
    }
L_08963388:
    ctx.gpr[31] = (0x08963390u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 315u, 0x08AF96A0u>(ctx, &aot_mem) && ctx.pc == 0x08963390u) goto L_08963390;
    return;
L_08963390:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-21000)));
    ctx.gpr[5] = (2228u << 16u);
    goto L_08963398;
L_08963398:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x089633A4u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-29212));
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 787u, 0x0883BFF4u>(ctx, &aot_mem) && ctx.pc == 0x089633A4u) goto L_089633A4;
    return;
L_089633A4:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089633B4:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), ctx.gpr[16]);
    ctx.gpr[5] = (2275u << 16u);
    ctx.gpr[16] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), ctx.gpr[20]);
    ctx.gpr[20] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-30336));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(-29116)));
    ctx.gpr[17] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), ctx.gpr[21]);
    ctx.gpr[21] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + ctx.gpr[5]);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-9132));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(108), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(104), ctx.gpr[4]);
      if (branch_taken) {
          goto L_08963428;
      }
      goto L_08963410;
    }
L_08963410:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08963420u);
    ctx.gpr[6] = (0u | 1344u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 376u, 0x08AED4ECu>(ctx, &aot_mem) && ctx.pc == 0x08963420u) goto L_08963420;
    return;
L_08963420:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(-29116), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08963428;
L_08963428:
    ctx.gpr[30] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[23] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[22] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[18] = (2228u << 16u);
    goto L_08963438;
L_08963438:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963450;
      }
      goto L_08963444;
    }
L_08963444:
    ctx.gpr[31] = (0x0896344Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 27u, 0x089681E0u>(ctx, &aot_mem) && ctx.pc == 0x0896344Cu) goto L_0896344C;
    return;
L_0896344C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), 0u);
    goto L_08963450;
L_08963450:
    ctx.gpr[31] = (0x08963458u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 194u, 0x089D58B0u>(ctx, &aot_mem) && ctx.pc == 0x08963458u) goto L_08963458;
    return;
L_08963458:
    ctx.gpr[16] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(51)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_08963818;
      }
      goto L_08963468;
    }
L_08963468:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963818;
      }
      goto L_08963474;
    }
L_08963474:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[6] = (0u | 19u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_08963494;
      }
      goto L_08963484;
    }
L_08963484:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(50)));
    ctx.gpr[6] = (0u | 20u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[6];
    // nop
      if (branch_taken) {
          goto L_089634D8;
      }
      goto L_08963494;
    }
L_08963494:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[30] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x089634B0u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 817u, 0x08967E40u>(ctx, &aot_mem) && ctx.pc == 0x089634B0u) goto L_089634B0;
    return;
L_089634B0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089634C0u);
    ctx.gpr[5] = (0u | 45u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 79u, 0x0896854Cu>(ctx, &aot_mem) && ctx.pc == 0x089634C0u) goto L_089634C0;
    return;
L_089634C0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x089634CCu);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 49u, 0x08968360u>(ctx, &aot_mem) && ctx.pc == 0x089634CCu) goto L_089634CC;
    return;
L_089634CC:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963818;
      }
      goto L_089634D8;
    }
L_089634D8:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<28u>());
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(104)));
    ctx.gpr[31] = (0x08963508u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08963508u) goto L_08963508;
    return;
L_08963508:
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[0]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.set_fpu_condition((ctx.fpr[20] < ctx.fpr[12]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_08963818;
      }
      goto L_0896351C;
    }
L_0896351C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(288)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    ctx.gpr[19] = (0u | 2u);
      if (branch_taken) {
          goto L_0896353C;
      }
      goto L_08963530;
    }
L_08963530:
    ctx.gpr[4] = (65504u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-8193));
      if (branch_taken) {
          goto L_089637E8;
      }
      goto L_0896353C;
    }
L_0896353C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(284)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0896355C;
      }
      goto L_08963550;
    }
L_08963550:
    ctx.gpr[4] = (49152u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16385));
      if (branch_taken) {
          goto L_089637E8;
      }
      goto L_0896355C;
    }
L_0896355C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 259u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896360C;
      }
      goto L_0896356C;
    }
L_0896356C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 260u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896360C;
      }
      goto L_0896357C;
    }
L_0896357C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 261u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896360C;
      }
      goto L_0896358C;
    }
L_0896358C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 262u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896360C;
      }
      goto L_0896359C;
    }
L_0896359C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 263u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896360C;
      }
      goto L_089635AC;
    }
L_089635AC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 264u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896360C;
      }
      goto L_089635BC;
    }
L_089635BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 265u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896360C;
      }
      goto L_089635CC;
    }
L_089635CC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 266u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896360C;
      }
      goto L_089635DC;
    }
L_089635DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 267u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896360C;
      }
      goto L_089635EC;
    }
L_089635EC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 268u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0896360C;
      }
      goto L_089635FC;
    }
L_089635FC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 269u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963618;
      }
      goto L_0896360C;
    }
L_0896360C:
    ctx.gpr[4] = (53200u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089637E8;
      }
      goto L_08963618;
    }
L_08963618:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 270u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963648;
      }
      goto L_08963628;
    }
L_08963628:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 271u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963648;
      }
      goto L_08963638;
    }
L_08963638:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 272u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963654;
      }
      goto L_08963648;
    }
L_08963648:
    ctx.gpr[4] = (40864u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089637E8;
      }
      goto L_08963654;
    }
L_08963654:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 274u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963674;
      }
      goto L_08963664;
    }
L_08963664:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 275u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963680;
      }
      goto L_08963674;
    }
L_08963674:
    ctx.gpr[4] = (53247u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_089637E8;
      }
      goto L_08963680;
    }
L_08963680:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 277u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089636B0;
      }
      goto L_08963690;
    }
L_08963690:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 278u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089636B0;
      }
      goto L_089636A0;
    }
L_089636A0:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 279u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089636BC;
      }
      goto L_089636B0;
    }
L_089636B0:
    ctx.gpr[4] = (32767u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_089637E8;
      }
      goto L_089636BC;
    }
L_089636BC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 281u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089636FC;
      }
      goto L_089636CC;
    }
L_089636CC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 282u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089636FC;
      }
      goto L_089636DC;
    }
L_089636DC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 283u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089636FC;
      }
      goto L_089636EC;
    }
L_089636EC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 284u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963708;
      }
      goto L_089636FC;
    }
L_089636FC:
    ctx.gpr[4] = (65535u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_089637E8;
      }
      goto L_08963708;
    }
L_08963708:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 280u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963728;
      }
      goto L_08963718;
    }
L_08963718:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 276u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963734;
      }
      goto L_08963728;
    }
L_08963728:
    ctx.gpr[4] = (65487u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32767));
      if (branch_taken) {
          goto L_089637E8;
      }
      goto L_08963734;
    }
L_08963734:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 287u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963774;
      }
      goto L_08963744;
    }
L_08963744:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 288u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963774;
      }
      goto L_08963754;
    }
L_08963754:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 289u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963774;
      }
      goto L_08963764;
    }
L_08963764:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 290u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963780;
      }
      goto L_08963774;
    }
L_08963774:
    ctx.gpr[4] = (65440u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_089637E8;
      }
      goto L_08963780;
    }
L_08963780:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 285u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089637A0;
      }
      goto L_08963790;
    }
L_08963790:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[5] = (0u | 286u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_089637AC;
      }
      goto L_089637A0;
    }
L_089637A0:
    ctx.gpr[4] = (65408u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-12289));
      if (branch_taken) {
          goto L_089637E8;
      }
      goto L_089637AC;
    }
L_089637AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(278)));
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089637D4;
      }
      goto L_089637C0;
    }
L_089637C0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-30860)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(38)));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(280)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_089637E4;
      }
      goto L_089637D4;
    }
L_089637D4:
    ctx.gpr[4] = (46588u << 16u);
    ctx.gpr[19] = (0u | 3u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(255));
      if (branch_taken) {
          goto L_089637E8;
      }
      goto L_089637E4;
    }
L_089637E4:
    ctx.gpr[4] = (0u | 1u);
    goto L_089637E8;
L_089637E8:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (0u | 4u);
    ctx.gpr[5] = (ctx.gpr[22] | 0u);
    ctx.gpr[31] = (0x08963804u);
    ctx.gpr[7] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 817u, 0x08967E40u>(ctx, &aot_mem) && ctx.pc == 0x08963804u) goto L_08963804;
    return;
L_08963804:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963814u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0089_entry, 89u, 49u, 0x08968360u>(ctx, &aot_mem) && ctx.pc == 0x08963814u) goto L_08963814;
    return;
L_08963814:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    goto L_08963818;
L_08963818:
    ctx.gpr[21] = (ctx.gpr[21] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(4));
    ctx.gpr[4] = (ctx.gpr[21] < static_cast<std::uint32_t>(336) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(96));
      if (branch_taken) {
          goto L_08963438;
      }
      goto L_0896382C;
    }
L_0896382C:
    ctx.gpr[2] = (0u | 1u);
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(108)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963864:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29260)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-29264)));
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.gpr[8] = (2228u << 16u);
    ctx.gpr[6] = (16672u << 16u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[11] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    aot_mem.aot_store32(ctx.gpr[7] + static_cast<std::uint32_t>(-29256), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = ctx.fpr[16] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-29248), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[8] + static_cast<std::uint32_t>(-29252), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[6]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-29244), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-29240), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_089638DC:
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
L_08963908:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[18] = (0u | 1u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963930u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x08963930u) goto L_08963930;
    return;
L_08963930:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[17] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x08963950u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 702u, 0x089BF670u>(ctx, &aot_mem) && ctx.pc == 0x08963950u) goto L_08963950;
    return;
L_08963950:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896395Cu);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 440u, 0x08A4B658u>(ctx, &aot_mem) && ctx.pc == 0x0896395Cu) goto L_0896395C;
    return;
L_0896395C:
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[31] = (0x0896396Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0172_entry, 172u, 545u, 0x08AB7574u>(ctx, &aot_mem) && ctx.pc == 0x0896396Cu) goto L_0896396C;
    return;
L_0896396C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896397Cu);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 121u, 0x08A4C7C0u>(ctx, &aot_mem) && ctx.pc == 0x0896397Cu) goto L_0896397C;
    return;
L_0896397C:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x08963988u);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x08963988u) goto L_08963988;
    return;
L_08963988:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_089639E0;
      }
      goto L_08963990;
    }
L_08963990:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x0896399Cu);
    ctx.gpr[5] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x0896399Cu) goto L_0896399C;
    return;
L_0896399C:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[31] = (0x089639B8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[6]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 587u, 0x0890B6D8u>(ctx, &aot_mem) && ctx.pc == 0x089639B8u) goto L_089639B8;
    return;
L_089639B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963A68;
      }
      goto L_089639C0;
    }
L_089639C0:
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    ctx.gpr[31] = (0x089639CCu);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x089639CCu) goto L_089639CC;
    return;
L_089639CC:
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[0]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_08963A68;
      }
      goto L_089639E0;
    }
L_089639E0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7872)));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[17]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_08963A08;
      }
      goto L_089639F4;
    }
L_089639F4:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-11332)));
    ctx.gpr[4] = (ctx.gpr[17] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    goto L_08963A08;
L_08963A08:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x08963A14u);
    ctx.gpr[19] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(384)));
    if (rt.invoke_chained_direct<&recomp_unit_0082_entry, 82u, 295u, 0x0894DA78u>(ctx, &aot_mem) && ctx.pc == 0x08963A14u) goto L_08963A14;
    return;
L_08963A14:
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[19]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x08963A28u);
    ctx.gpr[6] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 360u, 0x08AF5BFCu>(ctx, &aot_mem) && ctx.pc == 0x08963A28u) goto L_08963A28;
    return;
L_08963A28:
    ctx.gpr[1] = (ctx.gpr[3] << 1u);
    ctx.gpr[4] = (ctx.gpr[2] >> 31u);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[3]) >> 31u));
    ctx.gpr[4] = (ctx.gpr[1] | ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[5] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(368));
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    ctx.gpr[6] = (ctx.gpr[17] + static_cast<std::uint32_t>(376));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(128), static_cast<std::uint8_t>(ctx.gpr[5]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(129), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08963A68;
L_08963A68:
    ctx.gpr[2] = (ctx.gpr[18] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963A88:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963AA4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08963AA4u) goto L_08963AA4;
    return;
L_08963AA4:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08963AB4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08963AB4u) goto L_08963AB4;
    return;
L_08963AB4:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08963B44;
      }
      goto L_08963ABC;
    }
L_08963ABC:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6958)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (2232u << 16u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(5992));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963B24;
      }
      goto L_08963B00;
    }
L_08963B00:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[31] = (0x08963B1Cu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 847u, 0x088ABB70u>(ctx, &aot_mem) && ctx.pc == 0x08963B1Cu) goto L_08963B1C;
    return;
L_08963B1C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963B3C;
      }
      goto L_08963B24;
    }
L_08963B24:
    ctx.gpr[6] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[6]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[6] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[6]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08963B3Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08963B3Cu) goto L_08963B3C;
    return;
L_08963B3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_08963B48;
      }
      goto L_08963B44;
    }
L_08963B44:
    ctx.gpr[2] = (0u | 0u);
    goto L_08963B48;
L_08963B48:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963B5C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963B7Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08963B7Cu) goto L_08963B7C;
    return;
L_08963B7C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963C38;
      }
      goto L_08963B88;
    }
L_08963B88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08963C30;
      }
      goto L_08963B94;
    }
L_08963B94:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6928)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[6]);
    ctx.gpr[4] = (2226u << 16u);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[6]);
    ctx.gpr[31] = (0x08963BD0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29584));
    goto L_089638DC;
L_08963BD0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[18] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[31] = (0x08963BE8u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08963BE8u) goto L_08963BE8;
    return;
L_08963BE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08963C18;
      }
      goto L_08963BFC;
    }
L_08963BFC:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[31] = (0x08963C18u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 49u, 0x08A0CC94u>(ctx, &aot_mem) && ctx.pc == 0x08963C18u) goto L_08963C18;
    return;
L_08963C18:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963C28u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08963C28u) goto L_08963C28;
    return;
L_08963C28:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08963C54;
      }
      goto L_08963C30;
    }
L_08963C30:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_08963C44;
      }
      goto L_08963C38;
    }
L_08963C38:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x08963C44u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-29556));
    goto L_089638DC;
L_08963C44:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963C50u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08963C50u) goto L_08963C50;
    return;
L_08963C50:
    ctx.gpr[2] = (0u | 1u);
    goto L_08963C54;
L_08963C54:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963C6C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963C8Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08963C8Cu) goto L_08963C8C;
    return;
L_08963C8C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963D2C;
      }
      goto L_08963C98;
    }
L_08963C98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_08963D2C;
      }
      goto L_08963CA4;
    }
L_08963CA4:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-6927)));
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(34), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[6] = (2232u << 16u);
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.gpr[18] = (ctx.gpr[6] + static_cast<std::uint32_t>(5992));
    rt.memory().aot_store_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(39), ctx.gpr[4]);
    rt.memory().aot_store_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(42), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    ctx.gpr[31] = (0x08963CE4u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-1));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 135u, 0x088A879Cu>(ctx, &aot_mem) && ctx.pc == 0x08963CE4u) goto L_08963CE4;
    return;
L_08963CE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(100)));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(3))))));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(52)));
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_08963D14;
      }
      goto L_08963CF8;
    }
L_08963CF8:
    aot_mem.aot_store16(ctx.gpr[29] + static_cast<std::uint32_t>(44), static_cast<std::uint16_t>(0u));
    ctx.gpr[5] = (rt.memory().aot_load_word_right(ctx.gpr[29] + static_cast<std::uint32_t>(35), ctx.gpr[5]));
    ctx.gpr[5] = (rt.memory().aot_load_word_left(ctx.gpr[29] + static_cast<std::uint32_t>(38), ctx.gpr[5]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[29] + static_cast<std::uint32_t>(44))))));
    ctx.gpr[31] = (0x08963D14u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0130_entry, 130u, 51u, 0x08A0CCC8u>(ctx, &aot_mem) && ctx.pc == 0x08963D14u) goto L_08963D14;
    return;
L_08963D14:
    ctx.gpr[17] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963D24u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08963D24u) goto L_08963D24;
    return;
L_08963D24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_08963D3C;
      }
      goto L_08963D2C;
    }
L_08963D2C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963D38u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08963D38u) goto L_08963D38;
    return;
L_08963D38:
    ctx.gpr[2] = (0u | 1u);
    goto L_08963D3C;
L_08963D3C:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963D54:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963D74u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08963D74u) goto L_08963D74;
    return;
L_08963D74:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963DDC;
      }
      goto L_08963D80;
    }
L_08963D80:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08963DA8;
      }
      goto L_08963D8C;
    }
L_08963D8C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08963D9Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08963D9Cu) goto L_08963D9C;
    return;
L_08963D9C:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08963DA8;
L_08963DA8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(204))))));
    ctx.gpr[4] = (ctx.gpr[4] & 2u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963DC8;
      }
      goto L_08963DC4;
    }
L_08963DC4:
    ctx.gpr[17] = (0u | 1u);
    goto L_08963DC8;
L_08963DC8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963DD4u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08963DD4u) goto L_08963DD4;
    return;
L_08963DD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08963DE0;
      }
      goto L_08963DDC;
    }
L_08963DDC:
    ctx.gpr[2] = (0u | 0u);
    goto L_08963DE0;
L_08963DE0:
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
L_08963DF8:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963E18u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08963E18u) goto L_08963E18;
    return;
L_08963E18:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963E74;
      }
      goto L_08963E24;
    }
L_08963E24:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_08963E4C;
      }
      goto L_08963E30;
    }
L_08963E30:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08963E40u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08963E40u) goto L_08963E40;
    return;
L_08963E40:
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08963E4C;
L_08963E4C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(96)));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(206))))));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) < 0;
    // nop
      if (branch_taken) {
          goto L_08963E60;
      }
      goto L_08963E5C;
    }
L_08963E5C:
    ctx.gpr[17] = (0u | 1u);
    goto L_08963E60;
L_08963E60:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963E6Cu);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 701u, 0x0890BE40u>(ctx, &aot_mem) && ctx.pc == 0x08963E6Cu) goto L_08963E6C;
    return;
L_08963E6C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08963E78;
      }
      goto L_08963E74;
    }
L_08963E74:
    ctx.gpr[2] = (0u | 0u);
    goto L_08963E78;
L_08963E78:
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
L_08963E90:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963EA8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08963EA8u) goto L_08963EA8;
    return;
L_08963EA8:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963ED8;
      }
      goto L_08963EB4;
    }
L_08963EB4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(112)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x08963ED0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 700u, 0x089BF64Cu>(ctx, &aot_mem) && ctx.pc == 0x08963ED0u) goto L_08963ED0;
    return;
L_08963ED0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08963EDC;
      }
      goto L_08963ED8;
    }
L_08963ED8:
    ctx.gpr[2] = (0u | 0u);
    goto L_08963EDC;
L_08963EDC:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963EEC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963F0Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08963F0Cu) goto L_08963F0C;
    return;
L_08963F0C:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_08963F94;
      }
      goto L_08963F18;
    }
L_08963F18:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_08963F40;
      }
      goto L_08963F24;
    }
L_08963F24:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x08963F34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08963F34u) goto L_08963F34;
    return;
L_08963F34:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08963F40;
L_08963F40:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(456)));
      if (branch_taken) {
          goto L_08963F68;
      }
      goto L_08963F4C;
    }
L_08963F4C:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(10))))));
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(17));
    ctx.gpr[31] = (0x08963F5Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0176_entry, 176u, 206u, 0x08AC5834u>(ctx, &aot_mem) && ctx.pc == 0x08963F5Cu) goto L_08963F5C;
    return;
L_08963F5C:
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(96), ctx.gpr[2]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[29] + static_cast<std::uint32_t>(17)));
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(4), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_08963F68;
L_08963F68:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(96)));
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(194)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_08963F80;
      }
      goto L_08963F7C;
    }
L_08963F7C:
    ctx.fpr[20] = std::bit_cast<float>(0u);
    goto L_08963F80;
L_08963F80:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963F8Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08963F8Cu) goto L_08963F8C;
    return;
L_08963F8C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 1u);
      if (branch_taken) {
          goto L_08963FA8;
      }
      goto L_08963F94;
    }
L_08963F94:
    ctx.gpr[5] = (49024u << 16u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x08963FA4u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[5]);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 675u, 0x0890BB6Cu>(ctx, &aot_mem) && ctx.pc == 0x08963FA4u) goto L_08963FA4;
    return;
L_08963FA4:
    ctx.gpr[2] = (0u | 1u);
    goto L_08963FA8;
L_08963FA8:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_08963FC0:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    ctx.gpr[31] = (0x08963FE0u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0146_entry, 146u, 96u, 0x08A4C65Cu>(ctx, &aot_mem) && ctx.pc == 0x08963FE0u) goto L_08963FE0;
    return;
L_08963FE0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x08963FF0u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0065_entry, 65u, 610u, 0x0890B834u>(ctx, &aot_mem) && ctx.pc == 0x08963FF0u) goto L_08963FF0;
    return;
L_08963FF0:
    { const bool branch_taken = ctx.gpr[16] == 0u;
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
      if (branch_taken) {
          (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 11u, 0x089640E0u>(ctx, &aot_mem); return;
      }
      goto L_08963FF8;
    }
L_08963FF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
        (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 3u, 0x08964024u>(ctx, &aot_mem); return;
    }
    (void)rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 1u, 0x08964004u>(ctx, &aot_mem); return;
}

void recomp_unit_0087(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0087_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_87(Runtime &runtime) {
    runtime.register_generated_unit(87u, 0x08960000u, 16384u, &recomp_unit_0087, &recomp_unit_0087_entry);
    runtime.register_function(0x08960000u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960008u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896004Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960054u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896005Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960060u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960084u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896008Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089600FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896010Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896011Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960128u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960130u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960134u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960158u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960160u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896017Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960190u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089601D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960204u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960238u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960240u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960244u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960268u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960270u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896028Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089602FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960304u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896030Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960310u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960334u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896033Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960358u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896036Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960388u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896038Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960394u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089603F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960404u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896040Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896041Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960424u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960434u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896043Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896044Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960454u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896046Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960478u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960498u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089604F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960500u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960504u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896050Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960540u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960554u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896055Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960564u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896057Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960584u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960594u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089605ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089605B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089605D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089605D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089605F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960608u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896061Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960628u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960630u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960638u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960640u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960648u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960650u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896066Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960678u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960690u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960698u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089606F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960714u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896071Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960738u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960770u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960778u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896077Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089607F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960800u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896081Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960858u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960860u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896087Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089608FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960910u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960918u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960934u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960964u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896096Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960988u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089609DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960A9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960AF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960B94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BD0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960BFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C68u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960C98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CE8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960CF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D44u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960D90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960DF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E44u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E68u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960E8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960EFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F68u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960F98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08960FECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961004u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896101Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896102Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961058u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961060u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961078u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089610BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089610D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089610E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089610ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089610FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961118u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961128u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961130u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961138u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896113Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961160u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961168u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961184u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961198u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089611D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961210u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896121Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961224u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896122Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961234u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896123Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961240u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961264u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896126Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961288u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896129Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089612F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961328u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961330u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961334u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961358u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961360u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896137Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961390u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089613ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089613B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089613B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089613D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089613E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089613F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089613FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961400u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961424u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896142Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961448u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896145Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961478u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896147Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961484u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089614F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896150Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961518u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961520u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961538u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961548u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961550u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961568u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961578u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961580u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961598u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089615F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961608u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961620u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896162Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961638u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896164Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961650u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961658u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961670u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961684u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961690u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896169Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089616E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961744u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961758u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089617FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961810u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961820u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896184Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961854u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961890u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089618F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961908u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961910u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896192Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961974u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961980u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961984u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961994u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089619A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089619BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089619D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089619E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089619F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961A98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961AA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961AA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961AF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B64u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961B6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961BECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961C94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CE8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961CF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961D90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961DE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E68u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961E74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961ED8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961EF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961F94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FA0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08961FF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962008u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896201Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962028u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962030u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962034u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962040u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962050u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962064u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962078u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896209Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089620FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896210Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962120u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962128u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962130u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962148u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896215Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896217Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089621D0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089621FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962244u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962264u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089622F8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896230Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962328u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962354u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962388u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089623FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962404u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962418u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962424u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962430u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962438u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896243Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962450u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962494u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089624E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962524u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962538u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962540u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896255Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962568u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962574u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962580u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962588u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962594u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896259Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089625A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089625F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962630u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962688u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089626C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089626ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962700u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896271Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962748u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962758u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962760u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962774u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962798u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089627C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962808u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896281Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962880u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089628BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089628C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962908u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089629C4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089629E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089629ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962A94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962AA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962AB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962AC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962AD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962AF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962B98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962BF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C04u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C10u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C44u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C68u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C84u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962C9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CB8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CD8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CE8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962CF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D20u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D58u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D64u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962D94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DBCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DE8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962DF4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E70u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962E94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EB0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962EF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F68u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962F98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FCCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08962FE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963014u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896302Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963050u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896305Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896306Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963084u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963090u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896309Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089630FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963114u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963134u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963140u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963150u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963168u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963174u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963188u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089631F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963210u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896321Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896322Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963244u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963250u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963258u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963274u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963278u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963290u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632A8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632C8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632F0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089632FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963314u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963328u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896332Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963340u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896335Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963364u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896336Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896337Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963388u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963390u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963398u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633A4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089633B4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963410u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963420u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963428u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963438u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963444u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896344Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963450u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963458u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963468u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963474u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963484u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963494u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089634D8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963508u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896351Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963530u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896353Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963550u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896355Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896356Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896357Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896358Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896359Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089635FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896360Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963618u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963628u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963638u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963648u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963654u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963664u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963674u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963680u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963690u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636B0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636BCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636ECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089636FCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963708u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963718u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963728u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963734u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963744u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963754u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963764u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963774u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963780u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963790u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637A0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637ACu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637D4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637E4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089637E8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963804u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963814u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963818u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896382Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963864u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089638DCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963908u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963930u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963950u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896395Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896396Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896397Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963988u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963990u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x0896399Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639B8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639C0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639CCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639E0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x089639F4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A08u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A68u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963A88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963AA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963AB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963ABCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B00u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B1Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B44u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B48u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B88u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963B94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963BD0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963BE8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963BFCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C28u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C44u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C50u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963C98u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CE4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963CF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D14u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D2Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D38u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D3Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D54u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963D9Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DC4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DC8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DD4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963DF8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E30u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E60u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E6Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E74u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E78u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963E90u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EB4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963ED0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963ED8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EDCu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963EECu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F0Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F18u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F24u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F34u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F40u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F4Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F5Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F68u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F7Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F80u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F8Cu, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963F94u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FA4u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FA8u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FC0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FE0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FF0u, &recomp_unit_0087, "recomp_unit_0087");
    runtime.register_function(0x08963FF8u, &recomp_unit_0087, "recomp_unit_0087");
}
} // namespace psprecomp
