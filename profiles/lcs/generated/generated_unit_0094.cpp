#include "psprecomp/runtime.hpp"
#include "generated_units.hpp"
#include <bit>
#include <cmath>
#include <cstdint>
#include <limits>

namespace psprecomp {
static const std::uint16_t kEntryIds_recomp_unit_0094[4088] = {
    1, 0, 0, 0, 0, 0, 0, 0, 0, 2, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 4, 0, 0, 0, 0, 5, 0, 6, 0, 7, 0, 8, 0, 0, 0, 0, 9, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 10, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 11,
    0, 12, 0, 13, 0, 0, 0, 14, 0, 15, 0, 16, 0, 0, 0, 17, 0, 18, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 19, 0, 0, 0, 20, 0, 21, 0, 0, 0, 22, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 23, 0, 0, 24, 25, 0, 0, 0, 26, 0, 0, 0, 27, 0, 28, 0, 0, 0, 29, 0, 0, 30, 31, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 32, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 33, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 34, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 35, 0, 36, 0, 0, 37, 0, 0, 38, 0, 0, 39, 0, 0, 40, 0, 0, 41,
    0, 0, 42, 0, 0, 43, 0, 0, 0, 0, 0, 44, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 45, 0, 0, 46, 0, 0, 0, 0, 0, 0, 0, 0, 47, 0, 0, 0, 0, 0, 0, 0, 0, 48, 0, 0, 0, 0, 0, 0,
    0, 0, 49, 0, 0, 0, 0, 0, 0, 0, 0, 50, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 51, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 52, 0, 53, 0, 0, 54, 0, 55, 0, 0, 0, 0, 56, 0, 0, 0, 0, 0,
    0, 57, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 58, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 59, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 60, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 61, 0, 0, 0, 0, 0, 0, 62, 0, 0, 0, 0, 0, 63, 0, 64, 0,
    65, 0, 0, 0, 0, 0, 66, 0, 67, 0, 68, 0, 0, 0, 0, 0, 0, 69, 0, 0, 0, 70, 0, 0, 71, 0, 72, 0, 73, 74, 0, 0,
    0, 0, 0, 75, 0, 76, 0, 0, 0, 0, 0, 77, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 78, 0, 79, 0, 0, 0, 0, 0, 80,
    0, 0, 0, 0, 0, 0, 81, 0, 82, 0, 0, 0, 0, 0, 83, 0, 0, 0, 0, 0, 0, 84, 0, 85, 0, 86, 87, 0, 0, 0, 0, 0,
    0, 0, 0, 88, 0, 89, 0, 0, 0, 0, 0, 0, 90, 0, 0, 0, 0, 91, 0, 0, 0, 0, 0, 0, 92, 93, 0, 94, 0, 0, 0, 0,
    0, 95, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 96, 0, 97, 0, 98, 99, 0, 0, 0, 0, 0, 0, 0, 0, 100, 0, 101, 0, 0,
    0, 0, 0, 0, 102, 0, 0, 0, 0, 103, 0, 0, 0, 0, 0, 0, 104, 105, 0, 106, 0, 0, 0, 0, 0, 107, 0, 0, 0, 0, 0, 0,
    108, 0, 109, 0, 0, 0, 0, 0, 0, 110, 0, 0, 0, 111, 0, 0, 0, 0, 0, 0, 0, 0, 112, 0, 0, 0, 0, 0, 113, 0, 0, 0,
    114, 0, 0, 0, 115, 116, 0, 0, 0, 0, 0, 0, 0, 0, 117, 0, 118, 0, 0, 0, 0, 0, 0, 119, 0, 0, 0, 0, 120, 0, 0, 0,
    0, 0, 0, 121, 122, 0, 123, 0, 0, 0, 0, 0, 0, 0, 124, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 125, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 126, 0, 127, 0, 0, 0, 0, 0, 128, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 129, 0, 0, 0, 0,
    130, 0, 131, 0, 132, 133, 0, 0, 0, 0, 0, 0, 0, 134, 0, 135, 0, 0, 0, 0, 0, 0, 136, 0, 0, 0, 137, 0, 138, 0, 0, 0,
    0, 0, 139, 0, 0, 0, 0, 0, 0, 140, 0, 141, 0, 0, 0, 0, 0, 142, 0, 0, 0, 143, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 144, 0, 0, 0, 0, 0, 0, 0, 0, 145, 0, 0, 0, 146, 0, 147, 0, 0, 0,
    0, 148, 0, 0, 0, 0, 0, 0, 149, 0, 150, 0, 0, 0, 0, 0, 0, 151, 0, 0, 0, 152, 0, 153, 0, 0, 0, 0, 154, 0, 0, 0,
    0, 0, 0, 155, 0, 156, 0, 0, 0, 0, 0, 0, 157, 0, 158, 0, 0, 159, 0, 0, 0, 0, 0, 160, 0, 161, 0, 162, 0, 163, 0, 0,
    0, 0, 0, 0, 0, 164, 0, 165, 0, 166, 0, 167, 0, 168, 0, 0, 0, 0, 0, 0, 0, 169, 0, 170, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 171, 0, 172, 0, 0, 0, 0, 0, 173, 0, 0, 0, 0, 0, 174, 0, 0, 0, 0, 0, 0, 175, 0, 0, 0, 0,
    0, 176, 0, 0, 177, 0, 178, 0, 179, 0, 180, 0, 181, 0, 182, 0, 183, 0, 184, 0, 185, 0, 0, 0, 0, 186, 0, 0, 0, 187, 0, 188,
    0, 189, 0, 190, 0, 191, 0, 0, 0, 0, 0, 0, 192, 0, 0, 0, 193, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 194, 0, 0, 0, 0, 0, 0, 195, 0, 0, 0, 196, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 197, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 198, 0, 0, 0, 0, 0, 0, 0, 0, 199, 0, 200, 0, 0, 0, 0, 0, 0, 201, 202, 0, 0, 0, 0, 0,
    0, 0, 0, 203, 0, 204, 0, 0, 0, 0, 0, 0, 205, 0, 0, 0, 0, 206, 0, 0, 0, 0, 0, 0, 207, 208, 0, 209, 0, 0, 0, 0,
    0, 210, 0, 0, 0, 0, 211, 0, 0, 0, 0, 0, 212, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 213, 0, 0, 0, 0, 0,
    214, 0, 0, 0, 0, 0, 215, 0, 0, 0, 0, 0, 0, 216, 0, 0, 0, 0, 0, 217, 0, 0, 0, 0, 0, 218, 0, 0, 0, 0, 0, 219,
    0, 220, 0, 221, 0, 0, 0, 0, 0, 0, 222, 0, 0, 0, 223, 0, 0, 0, 0, 224, 0, 0, 0, 0, 0, 0, 0, 225, 0, 226, 0, 0,
    0, 0, 0, 227, 0, 0, 0, 228, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 229, 0, 0, 0, 230, 0, 0, 0, 0, 231, 0, 0,
    0, 0, 232, 0, 0, 0, 0, 233, 0, 0, 0, 0, 234, 0, 0, 0, 0, 235, 0, 0, 0, 0, 236, 0, 0, 0, 0, 237, 0, 0, 0, 0,
    238, 239, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 240, 0, 0, 0, 0, 0, 241, 0, 0, 0,
    0, 0, 0, 242, 0, 0, 0, 0, 0, 243, 0, 0, 0, 0, 0, 0, 244, 0, 0, 0, 0, 0, 245, 0, 0, 0, 0, 0, 246, 0, 0, 0,
    0, 0, 247, 0, 248, 0, 249, 0, 0, 0, 0, 0, 0, 250, 0, 0, 251, 0, 252, 0, 0, 0, 0, 0, 0, 253, 0, 0, 254, 0, 255, 0,
    0, 0, 0, 0, 256, 0, 257, 0, 258, 0, 0, 0, 0, 0, 259, 0, 260, 0, 261, 0, 0, 0, 0, 0, 262, 0, 263, 0, 264, 0, 0, 0,
    0, 0, 265, 0, 266, 0, 267, 0, 0, 0, 0, 0, 268, 0, 0, 0, 0, 0, 0, 269, 0, 0, 270, 0, 271, 0, 0, 0, 0, 0, 0, 272,
    0, 0, 273, 0, 274, 0, 0, 0, 0, 0, 0, 275, 0, 0, 276, 0, 277, 0, 0, 0, 0, 0, 278, 0, 0, 0, 279, 0, 0, 280, 0, 0,
    0, 0, 0, 281, 0, 0, 0, 0, 282, 0, 0, 0, 0, 0, 283, 0, 284, 0, 285, 0, 0, 0, 0, 0, 286, 0, 287, 0, 0, 288, 0, 0,
    0, 0, 0, 0, 0, 0, 289, 0, 290, 0, 0, 0, 0, 0, 0, 291, 0, 0, 0, 0, 292, 0, 0, 0, 0, 0, 0, 293, 294, 0, 295, 0,
    0, 0, 0, 0, 296, 0, 0, 0, 297, 0, 0, 298, 0, 0, 299, 0, 0, 300, 0, 301, 0, 0, 0, 0, 0, 0, 302, 0, 0, 0, 303, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 304, 0, 0, 0, 0, 0, 0, 305, 0, 0, 0, 306, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 307, 0, 0, 0, 0, 0, 0, 308, 0, 0, 0, 309, 0, 0, 310, 0, 0, 0, 0, 311, 0,
    0, 0, 0, 312, 0, 0, 0, 0, 313, 0, 0, 0, 0, 314, 0, 0, 0, 0, 315, 0, 0, 0, 0, 316, 0, 0, 0, 0, 317, 0, 0, 0,
    0, 318, 0, 0, 0, 0, 319, 0, 0, 0, 0, 320, 0, 0, 0, 0, 321, 0, 0, 0, 0, 322, 0, 0, 0, 0, 323, 0, 0, 0, 0, 324,
    0, 325, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 326, 0, 0, 0, 0, 0, 0, 327, 0, 0, 328, 0, 0, 0, 329, 0, 330,
    0, 0, 0, 0, 0, 331, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 332, 0, 0, 0, 0, 0, 333, 0, 334, 0, 0, 0, 0,
    0, 335, 0, 0, 0, 336, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 337, 0,
    0, 0, 0, 338, 0, 339, 0, 340, 341, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 342, 0, 0, 0, 0, 343, 0, 344, 0,
    345, 346, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 347, 0, 0, 0, 0, 0, 348, 0, 0, 0, 0, 0, 0, 349, 0, 0, 0, 0, 350,
    0, 0, 0, 0, 0, 351, 0, 0, 0, 0, 0, 352, 0, 0, 0, 0, 0, 0, 353, 0, 0, 0, 0, 354, 0, 0, 0, 0, 0, 355, 0, 0,
    0, 0, 0, 356, 0, 0, 0, 0, 0, 0, 357, 0, 0, 0, 0, 358, 359, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 360, 0, 361, 0, 0,
    0, 0, 0, 0, 362, 0, 0, 0, 363, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    364, 0, 0, 0, 0, 365, 0, 366, 0, 0, 0, 367, 0, 0, 0, 368, 369, 0, 0, 0, 0, 0, 0, 0, 0, 370, 0, 371, 0, 0, 0, 0,
    0, 0, 372, 0, 0, 0, 0, 373, 0, 0, 0, 0, 0, 0, 374, 375, 0, 376, 0, 0, 0, 0, 0, 377, 0, 0, 0, 378, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 379, 0, 0, 0, 0, 0, 0, 0, 0, 380, 0, 381, 0, 0, 0, 0, 0, 382, 0, 0, 0, 383, 0, 0, 384,
    0, 0, 385, 0, 0, 0, 0, 0, 0, 0, 386, 0, 0, 0, 387, 0, 388, 0, 0, 0, 389, 0, 390, 0, 0, 0, 0, 0, 391, 0, 0, 392,
    0, 0, 0, 0, 393, 0, 0, 394, 0, 395, 0, 0, 0, 0, 0, 396, 0, 0, 0, 397, 0, 0, 0, 0, 0, 398, 0, 0, 0, 0, 0, 399,
    0, 0, 0, 0, 400, 0, 401, 0, 0, 402, 0, 0, 0, 0, 0, 0, 403, 0, 404, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 405, 0, 406,
    0, 407, 0, 0, 408, 0, 409, 0, 0, 410, 0, 0, 0, 0, 0, 411, 0, 0, 0, 0, 0, 412, 0, 0, 0, 413, 0, 0, 0, 414, 0, 0,
    0, 0, 0, 0, 0, 415, 0, 416, 0, 0, 0, 417, 418, 0, 419, 0, 0, 0, 0, 0, 420, 0, 421, 0, 0, 422, 0, 0, 0, 423, 424, 0,
    0, 0, 0, 0, 0, 0, 0, 425, 0, 426, 0, 0, 0, 0, 0, 0, 427, 0, 0, 0, 0, 428, 0, 0, 0, 0, 0, 0, 429, 430, 0, 431,
    0, 0, 0, 432, 0, 0, 433, 0, 0, 434, 0, 435, 436, 0, 0, 437, 0, 0, 0, 0, 0, 438, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    439, 0, 0, 0, 0, 440, 0, 441, 0, 0, 0, 0, 0, 0, 0, 0, 0, 442, 0, 443, 0, 0, 0, 0, 0, 0, 444, 0, 0, 0, 0, 445,
    0, 0, 0, 0, 0, 0, 446, 447, 0, 448, 0, 0, 0, 449, 0, 0, 0, 0, 0, 0, 450, 0, 451, 0, 0, 452, 0, 0, 0, 0, 0, 453,
    0, 0, 0, 0, 0, 454, 0, 0, 0, 0, 455, 0, 0, 0, 0, 0, 0, 0, 456, 0, 457, 0, 0, 0, 0, 0, 0, 458, 0, 459, 0, 460,
    0, 461, 0, 0, 0, 0, 0, 0, 0, 0, 0, 462, 0, 463, 0, 0, 0, 0, 0, 464, 0, 465, 0, 466, 0, 0, 0, 0, 0, 0, 467, 0,
    0, 468, 0, 0, 0, 0, 469, 0, 0, 0, 0, 0, 0, 0, 470, 0, 471, 0, 0, 0, 0, 0, 472, 0, 473, 0, 0, 0, 0, 0, 0, 474,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 475, 0, 476, 0, 0, 0, 0, 0, 477, 0, 478, 0, 479, 0, 0, 0, 0, 0, 0, 480, 0, 0, 481,
    0, 482, 0, 0, 0, 0, 0, 483, 0, 484, 0, 485, 0, 0, 0, 0, 0, 486, 0, 487, 0, 488, 0, 489, 0, 0, 0, 0, 0, 490, 0, 0,
    0, 0, 0, 0, 491, 0, 492, 0, 0, 0, 0, 0, 0, 493, 0, 0, 0, 0, 494, 0, 0, 0, 0, 0, 0, 495, 496, 0, 497, 0, 0, 0,
    498, 499, 0, 0, 0, 0, 0, 0, 0, 0, 500, 0, 501, 0, 0, 0, 0, 0, 0, 502, 0, 0, 0, 0, 503, 0, 0, 0, 0, 0, 0, 504,
    505, 0, 506, 0, 0, 507, 0, 0, 0, 0, 0, 508, 0, 509, 0, 0, 510, 0, 0, 0, 511, 0, 0, 0, 512, 0, 513, 0, 0, 0, 0, 514,
    515, 0, 0, 0, 0, 0, 0, 0, 0, 516, 0, 517, 0, 0, 0, 0, 0, 0, 518, 0, 0, 0, 0, 519, 0, 0, 0, 0, 0, 0, 520, 521,
    0, 522, 0, 0, 0, 0, 0, 0, 0, 523, 524, 0, 0, 0, 0, 0, 0, 0, 0, 525, 0, 526, 0, 0, 0, 0, 0, 0, 527, 0, 0, 0,
    0, 528, 0, 0, 0, 0, 0, 0, 529, 530, 0, 531, 0, 0, 0, 0, 532, 0, 0, 0, 0, 0, 533, 0, 534, 0, 0, 0, 535, 536, 0, 0,
    0, 0, 0, 0, 0, 0, 537, 0, 538, 0, 0, 0, 0, 0, 0, 539, 0, 0, 0, 0, 540, 0, 0, 0, 0, 0, 0, 541, 542, 0, 543, 0,
    0, 0, 0, 0, 0, 544, 0, 0, 0, 0, 0, 0, 0, 0, 0, 545, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 546, 0, 0, 0, 0,
    0, 0, 547, 0, 0, 0, 0, 0, 0, 0, 0, 0, 548, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 549, 0, 0, 0, 0, 0, 550, 0,
    0, 0, 551, 0, 0, 0, 0, 552, 0, 0, 0, 0, 553, 0, 554, 0, 0, 0, 0, 0, 555, 0, 0, 0, 556, 0, 0, 0, 0, 0, 0, 0,
    0, 557, 0, 0, 0, 0, 0, 0, 558, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 559, 0, 0, 560, 561, 0, 0, 0, 0, 0, 0, 562, 0,
    563, 0, 0, 0, 0, 564, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 565, 0, 0, 0, 0, 0, 566, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 567, 0, 568, 0, 0, 0, 0, 0, 0, 569, 0,
    0, 570, 0, 0, 571, 0, 572, 573, 0, 0, 574, 0, 0, 0, 0, 0, 575, 0, 0, 0, 0, 0, 0, 0, 576, 0, 577, 0, 0, 0, 0, 0,
    0, 578, 0, 0, 579, 0, 0, 580, 0, 581, 582, 0, 0, 583, 0, 0, 0, 0, 0, 584, 0, 0, 0, 0, 0, 0, 0, 585, 0, 586, 0, 0,
    0, 0, 0, 587, 0, 588, 0, 589, 0, 0, 0, 0, 0, 0, 590, 0, 0, 0, 591, 0, 0, 0, 0, 0, 0, 592, 0, 0, 0, 0, 0, 0,
    593, 0, 0, 0, 594, 0, 0, 0, 595, 0, 0, 0, 0, 0, 0, 596, 0, 0, 0, 597, 0, 0, 0, 598, 0, 0, 0, 0, 0, 599, 0, 0,
    0, 600, 0, 0, 601, 0, 0, 602, 0, 0, 0, 603, 0, 604, 0, 0, 0, 0, 0, 605, 0, 0, 0, 0, 606, 0, 0, 0, 0, 0, 607, 0,
    0, 0, 608, 0, 609, 610, 0, 0, 0, 0, 0, 0, 0, 611, 0, 612, 0, 0, 0, 613, 0, 614, 615, 0, 616, 0, 0, 0, 0, 0, 0, 617,
    0, 618, 0, 0, 0, 0, 0, 0, 619, 0, 0, 0, 0, 620, 0, 0, 0, 0, 0, 0, 621, 622, 0, 623, 0, 0, 0, 624, 0, 625, 626, 0,
    627, 0, 0, 0, 0, 0, 0, 628, 0, 629, 0, 0, 0, 0, 0, 0, 630, 0, 0, 0, 0, 631, 0, 0, 0, 0, 0, 0, 632, 633, 0, 634,
    0, 0, 0, 635, 0, 636, 637, 0, 638, 0, 639, 0, 0, 0, 0, 0, 0, 640, 0, 0, 0, 641, 0, 0, 0, 0, 0, 0, 0, 0, 0, 642,
    0, 0, 0, 0, 0, 643, 0, 0, 0, 0, 0, 0, 644, 645, 0, 0, 0, 646, 0, 0, 0, 0, 0, 647, 0, 0, 0, 0, 0, 648, 0, 0,
    649, 650, 0, 0, 0, 651, 0, 0, 0, 0, 0, 652, 0, 0, 0, 0, 0, 653, 0, 0, 654, 655, 0, 0, 0, 656, 0, 0, 0, 0, 0, 657,
    0, 0, 0, 0, 0, 658, 0, 0, 659, 660, 0, 0, 0, 661, 0, 0, 0, 0, 0, 662, 0, 0, 0, 0, 0, 0, 663, 0, 0, 0, 0, 0,
    664, 0, 0, 0, 0, 0, 0, 665, 666, 0, 0, 0, 0, 0, 0, 0, 0, 667, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 668, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 669, 0, 0, 0, 0, 0, 0,
    0, 670, 0, 671, 0, 0, 0, 672, 0, 0, 0, 673, 674, 0, 675, 0, 676, 0, 0, 0, 0, 0, 677, 678, 679, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 680, 0, 681, 682, 0, 683, 0, 0, 0, 0, 684, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 685, 0, 0, 0, 0, 0, 0, 686, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 687, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 688, 0, 0, 689, 0, 0, 690, 0, 0, 691, 0, 0, 692, 0, 0, 693, 0, 0, 0, 0, 0, 0, 0, 0, 694, 0, 695, 0, 0, 0,
    696, 0, 0, 0, 697, 698, 0, 699, 0, 700, 0, 0, 0, 0, 0, 701, 702, 703, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 704, 0, 705,
    0, 706, 0, 0, 707, 0, 0, 708, 0, 709, 0, 0, 0, 0, 0, 710, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 0, 0, 0, 711, 0, 712, 0, 713, 0, 0, 0, 714, 0, 0, 715, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 716, 0, 0, 0, 717, 0, 0, 718, 0, 0, 0, 0, 0, 0, 719, 0, 0, 720, 0, 721, 0, 0, 0, 722, 0, 0, 0,
    723, 0, 724, 0, 725, 0, 726, 0, 727, 728, 0, 729, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 730, 0, 0, 0, 0, 0, 0, 0,
    0, 731, 0, 732, 0, 0, 0, 733, 0, 0, 0, 734, 0, 0, 0, 735, 0, 0, 0, 736, 0, 0, 0, 737, 0, 0, 0, 738, 0, 0, 0, 739,
    0, 0, 0, 740, 0, 0, 0, 0, 0, 741, 0, 0, 0, 0, 0, 742, 0, 0, 0, 743, 0, 0, 0, 0, 0, 744, 0, 745, 0, 0, 0, 746,
    0, 0, 0, 747, 748, 0, 0, 0, 0, 0, 0, 749, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 750, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 0, 0, 0, 0, 751, 0, 0, 0, 752, 0, 0, 753, 754, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
    0, 0, 755, 0, 756, 0, 0, 757, 0, 758, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 759, 0, 0, 0, 760, 0, 0, 761, 0, 762, 0,
    0, 0, 0, 763, 0, 0, 0, 764, 0, 0, 765, 0, 766, 0, 0, 767, 0, 768, 0, 0, 0, 0, 769, 0, 770, 0, 0, 0, 0, 771, 0, 0,
    0, 772, 773, 0, 0, 774, 0, 775, 0, 0, 0, 0, 776, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 777,
};
void recomp_unit_0094_entry(Runtime &rt, AllegrexContext &ctx, std::uint16_t direct_entry_id, GuestMemory::AotFastView &aot_mem) {
    std::uint32_t jump_target = 0u;
    std::uint32_t local_transfers = 0u;
    std::uint32_t local_pc = ctx.pc;
    std::uint32_t entry_id = direct_entry_id;
LOCAL_DISPATCH:
    {
    if (entry_id == 0u) {
        const std::uint32_t entry_delta = local_pc - 0x0897C000u;
        entry_id = (entry_delta < 16352u && (entry_delta & 3u) == 0u) ? kEntryIds_recomp_unit_0094[entry_delta >> 2u] : 0u;
    }
    switch (entry_id) {
    case 1u: goto L_0897C000;
    case 2u: goto L_0897C024;
    case 3u: goto L_0897C040;
    case 4u: goto L_0897C19C;
    case 5u: goto L_0897C1B0;
    case 6u: goto L_0897C1B8;
    case 7u: goto L_0897C1C0;
    case 8u: goto L_0897C1C8;
    case 9u: goto L_0897C1DC;
    case 10u: goto L_0897C22C;
    case 11u: goto L_0897C27C;
    case 12u: goto L_0897C284;
    case 13u: goto L_0897C28C;
    case 14u: goto L_0897C29C;
    case 15u: goto L_0897C2A4;
    case 16u: goto L_0897C2AC;
    case 17u: goto L_0897C2BC;
    case 18u: goto L_0897C2C4;
    case 19u: goto L_0897C318;
    case 20u: goto L_0897C328;
    case 21u: goto L_0897C330;
    case 22u: goto L_0897C340;
    case 23u: goto L_0897C388;
    case 24u: goto L_0897C394;
    case 25u: goto L_0897C398;
    case 26u: goto L_0897C3A8;
    case 27u: goto L_0897C3B8;
    case 28u: goto L_0897C3C0;
    case 29u: goto L_0897C3D0;
    case 30u: goto L_0897C3DC;
    case 31u: goto L_0897C3E0;
    case 32u: goto L_0897C40C;
    case 33u: goto L_0897C438;
    case 34u: goto L_0897C464;
    case 35u: goto L_0897C4B8;
    case 36u: goto L_0897C4C0;
    case 37u: goto L_0897C4CC;
    case 38u: goto L_0897C4D8;
    case 39u: goto L_0897C4E4;
    case 40u: goto L_0897C4F0;
    case 41u: goto L_0897C4FC;
    case 42u: goto L_0897C508;
    case 43u: goto L_0897C514;
    case 44u: goto L_0897C52C;
    case 45u: goto L_0897C590;
    case 46u: goto L_0897C59C;
    case 47u: goto L_0897C5C0;
    case 48u: goto L_0897C5E4;
    case 49u: goto L_0897C608;
    case 50u: goto L_0897C62C;
    case 51u: goto L_0897C6D4;
    case 52u: goto L_0897C738;
    case 53u: goto L_0897C740;
    case 54u: goto L_0897C74C;
    case 55u: goto L_0897C754;
    case 56u: goto L_0897C768;
    case 57u: goto L_0897C784;
    case 58u: goto L_0897C7CC;
    case 59u: goto L_0897C860;
    case 60u: goto L_0897C88C;
    case 61u: goto L_0897C8BC;
    case 62u: goto L_0897C8D8;
    case 63u: goto L_0897C8F0;
    case 64u: goto L_0897C8F8;
    case 65u: goto L_0897C900;
    case 66u: goto L_0897C918;
    case 67u: goto L_0897C920;
    case 68u: goto L_0897C928;
    case 69u: goto L_0897C944;
    case 70u: goto L_0897C954;
    case 71u: goto L_0897C960;
    case 72u: goto L_0897C968;
    case 73u: goto L_0897C970;
    case 74u: goto L_0897C974;
    case 75u: goto L_0897C98C;
    case 76u: goto L_0897C994;
    case 77u: goto L_0897C9AC;
    case 78u: goto L_0897C9DC;
    case 79u: goto L_0897C9E4;
    case 80u: goto L_0897C9FC;
    case 81u: goto L_0897CA18;
    case 82u: goto L_0897CA20;
    case 83u: goto L_0897CA38;
    case 84u: goto L_0897CA54;
    case 85u: goto L_0897CA5C;
    case 86u: goto L_0897CA64;
    case 87u: goto L_0897CA68;
    case 88u: goto L_0897CA8C;
    case 89u: goto L_0897CA94;
    case 90u: goto L_0897CAB0;
    case 91u: goto L_0897CAC4;
    case 92u: goto L_0897CAE0;
    case 93u: goto L_0897CAE4;
    case 94u: goto L_0897CAEC;
    case 95u: goto L_0897CB04;
    case 96u: goto L_0897CB34;
    case 97u: goto L_0897CB3C;
    case 98u: goto L_0897CB44;
    case 99u: goto L_0897CB48;
    case 100u: goto L_0897CB6C;
    case 101u: goto L_0897CB74;
    case 102u: goto L_0897CB90;
    case 103u: goto L_0897CBA4;
    case 104u: goto L_0897CBC0;
    case 105u: goto L_0897CBC4;
    case 106u: goto L_0897CBCC;
    case 107u: goto L_0897CBE4;
    case 108u: goto L_0897CC00;
    case 109u: goto L_0897CC08;
    case 110u: goto L_0897CC24;
    case 111u: goto L_0897CC34;
    case 112u: goto L_0897CC58;
    case 113u: goto L_0897CC70;
    case 114u: goto L_0897CC80;
    case 115u: goto L_0897CC90;
    case 116u: goto L_0897CC94;
    case 117u: goto L_0897CCB8;
    case 118u: goto L_0897CCC0;
    case 119u: goto L_0897CCDC;
    case 120u: goto L_0897CCF0;
    case 121u: goto L_0897CD0C;
    case 122u: goto L_0897CD10;
    case 123u: goto L_0897CD18;
    case 124u: goto L_0897CD38;
    case 125u: goto L_0897CD6C;
    case 126u: goto L_0897CD98;
    case 127u: goto L_0897CDA0;
    case 128u: goto L_0897CDB8;
    case 129u: goto L_0897CDEC;
    case 130u: goto L_0897CE00;
    case 131u: goto L_0897CE08;
    case 132u: goto L_0897CE10;
    case 133u: goto L_0897CE14;
    case 134u: goto L_0897CE34;
    case 135u: goto L_0897CE3C;
    case 136u: goto L_0897CE58;
    case 137u: goto L_0897CE68;
    case 138u: goto L_0897CE70;
    case 139u: goto L_0897CE88;
    case 140u: goto L_0897CEA4;
    case 141u: goto L_0897CEAC;
    case 142u: goto L_0897CEC4;
    case 143u: goto L_0897CED4;
    case 144u: goto L_0897CF34;
    case 145u: goto L_0897CF58;
    case 146u: goto L_0897CF68;
    case 147u: goto L_0897CF70;
    case 148u: goto L_0897CF84;
    case 149u: goto L_0897CFA0;
    case 150u: goto L_0897CFA8;
    case 151u: goto L_0897CFC4;
    case 152u: goto L_0897CFD4;
    case 153u: goto L_0897CFDC;
    case 154u: goto L_0897CFF0;
    case 155u: goto L_0897D00C;
    case 156u: goto L_0897D014;
    case 157u: goto L_0897D030;
    case 158u: goto L_0897D038;
    case 159u: goto L_0897D044;
    case 160u: goto L_0897D05C;
    case 161u: goto L_0897D064;
    case 162u: goto L_0897D06C;
    case 163u: goto L_0897D074;
    case 164u: goto L_0897D094;
    case 165u: goto L_0897D09C;
    case 166u: goto L_0897D0A4;
    case 167u: goto L_0897D0AC;
    case 168u: goto L_0897D0B4;
    case 169u: goto L_0897D0D4;
    case 170u: goto L_0897D0DC;
    case 171u: goto L_0897D118;
    case 172u: goto L_0897D120;
    case 173u: goto L_0897D138;
    case 174u: goto L_0897D150;
    case 175u: goto L_0897D16C;
    case 176u: goto L_0897D184;
    case 177u: goto L_0897D190;
    case 178u: goto L_0897D198;
    case 179u: goto L_0897D1A0;
    case 180u: goto L_0897D1A8;
    case 181u: goto L_0897D1B0;
    case 182u: goto L_0897D1B8;
    case 183u: goto L_0897D1C0;
    case 184u: goto L_0897D1C8;
    case 185u: goto L_0897D1D0;
    case 186u: goto L_0897D1E4;
    case 187u: goto L_0897D1F4;
    case 188u: goto L_0897D1FC;
    case 189u: goto L_0897D204;
    case 190u: goto L_0897D20C;
    case 191u: goto L_0897D214;
    case 192u: goto L_0897D230;
    case 193u: goto L_0897D240;
    case 194u: goto L_0897D284;
    case 195u: goto L_0897D2A0;
    case 196u: goto L_0897D2B0;
    case 197u: goto L_0897D2EC;
    case 198u: goto L_0897D31C;
    case 199u: goto L_0897D340;
    case 200u: goto L_0897D348;
    case 201u: goto L_0897D364;
    case 202u: goto L_0897D368;
    case 203u: goto L_0897D38C;
    case 204u: goto L_0897D394;
    case 205u: goto L_0897D3B0;
    case 206u: goto L_0897D3C4;
    case 207u: goto L_0897D3E0;
    case 208u: goto L_0897D3E4;
    case 209u: goto L_0897D3EC;
    case 210u: goto L_0897D404;
    case 211u: goto L_0897D418;
    case 212u: goto L_0897D430;
    case 213u: goto L_0897D468;
    case 214u: goto L_0897D480;
    case 215u: goto L_0897D498;
    case 216u: goto L_0897D4B4;
    case 217u: goto L_0897D4CC;
    case 218u: goto L_0897D4E4;
    case 219u: goto L_0897D4FC;
    case 220u: goto L_0897D504;
    case 221u: goto L_0897D50C;
    case 222u: goto L_0897D528;
    case 223u: goto L_0897D538;
    case 224u: goto L_0897D54C;
    case 225u: goto L_0897D56C;
    case 226u: goto L_0897D574;
    case 227u: goto L_0897D58C;
    case 228u: goto L_0897D59C;
    case 229u: goto L_0897D5D0;
    case 230u: goto L_0897D5E0;
    case 231u: goto L_0897D5F4;
    case 232u: goto L_0897D608;
    case 233u: goto L_0897D61C;
    case 234u: goto L_0897D630;
    case 235u: goto L_0897D644;
    case 236u: goto L_0897D658;
    case 237u: goto L_0897D66C;
    case 238u: goto L_0897D680;
    case 239u: goto L_0897D684;
    case 240u: goto L_0897D6D8;
    case 241u: goto L_0897D6F0;
    case 242u: goto L_0897D70C;
    case 243u: goto L_0897D724;
    case 244u: goto L_0897D740;
    case 245u: goto L_0897D758;
    case 246u: goto L_0897D770;
    case 247u: goto L_0897D788;
    case 248u: goto L_0897D790;
    case 249u: goto L_0897D798;
    case 250u: goto L_0897D7B4;
    case 251u: goto L_0897D7C0;
    case 252u: goto L_0897D7C8;
    case 253u: goto L_0897D7E4;
    case 254u: goto L_0897D7F0;
    case 255u: goto L_0897D7F8;
    case 256u: goto L_0897D810;
    case 257u: goto L_0897D818;
    case 258u: goto L_0897D820;
    case 259u: goto L_0897D838;
    case 260u: goto L_0897D840;
    case 261u: goto L_0897D848;
    case 262u: goto L_0897D860;
    case 263u: goto L_0897D868;
    case 264u: goto L_0897D870;
    case 265u: goto L_0897D888;
    case 266u: goto L_0897D890;
    case 267u: goto L_0897D898;
    case 268u: goto L_0897D8B0;
    case 269u: goto L_0897D8CC;
    case 270u: goto L_0897D8D8;
    case 271u: goto L_0897D8E0;
    case 272u: goto L_0897D8FC;
    case 273u: goto L_0897D908;
    case 274u: goto L_0897D910;
    case 275u: goto L_0897D92C;
    case 276u: goto L_0897D938;
    case 277u: goto L_0897D940;
    case 278u: goto L_0897D958;
    case 279u: goto L_0897D968;
    case 280u: goto L_0897D974;
    case 281u: goto L_0897D98C;
    case 282u: goto L_0897D9A0;
    case 283u: goto L_0897D9B8;
    case 284u: goto L_0897D9C0;
    case 285u: goto L_0897D9C8;
    case 286u: goto L_0897D9E0;
    case 287u: goto L_0897D9E8;
    case 288u: goto L_0897D9F4;
    case 289u: goto L_0897DA18;
    case 290u: goto L_0897DA20;
    case 291u: goto L_0897DA3C;
    case 292u: goto L_0897DA50;
    case 293u: goto L_0897DA6C;
    case 294u: goto L_0897DA70;
    case 295u: goto L_0897DA78;
    case 296u: goto L_0897DA90;
    case 297u: goto L_0897DAA0;
    case 298u: goto L_0897DAAC;
    case 299u: goto L_0897DAB8;
    case 300u: goto L_0897DAC4;
    case 301u: goto L_0897DACC;
    case 302u: goto L_0897DAE8;
    case 303u: goto L_0897DAF8;
    case 304u: goto L_0897DB3C;
    case 305u: goto L_0897DB58;
    case 306u: goto L_0897DB68;
    case 307u: goto L_0897DBAC;
    case 308u: goto L_0897DBC8;
    case 309u: goto L_0897DBD8;
    case 310u: goto L_0897DBE4;
    case 311u: goto L_0897DBF8;
    case 312u: goto L_0897DC0C;
    case 313u: goto L_0897DC20;
    case 314u: goto L_0897DC34;
    case 315u: goto L_0897DC48;
    case 316u: goto L_0897DC5C;
    case 317u: goto L_0897DC70;
    case 318u: goto L_0897DC84;
    case 319u: goto L_0897DC98;
    case 320u: goto L_0897DCAC;
    case 321u: goto L_0897DCC0;
    case 322u: goto L_0897DCD4;
    case 323u: goto L_0897DCE8;
    case 324u: goto L_0897DCFC;
    case 325u: goto L_0897DD04;
    case 326u: goto L_0897DD3C;
    case 327u: goto L_0897DD58;
    case 328u: goto L_0897DD64;
    case 329u: goto L_0897DD74;
    case 330u: goto L_0897DD7C;
    case 331u: goto L_0897DD94;
    case 332u: goto L_0897DDCC;
    case 333u: goto L_0897DDE4;
    case 334u: goto L_0897DDEC;
    case 335u: goto L_0897DE04;
    case 336u: goto L_0897DE14;
    case 337u: goto L_0897DE78;
    case 338u: goto L_0897DE8C;
    case 339u: goto L_0897DE94;
    case 340u: goto L_0897DE9C;
    case 341u: goto L_0897DEA0;
    case 342u: goto L_0897DEDC;
    case 343u: goto L_0897DEF0;
    case 344u: goto L_0897DEF8;
    case 345u: goto L_0897DF00;
    case 346u: goto L_0897DF04;
    case 347u: goto L_0897DF34;
    case 348u: goto L_0897DF4C;
    case 349u: goto L_0897DF68;
    case 350u: goto L_0897DF7C;
    case 351u: goto L_0897DF94;
    case 352u: goto L_0897DFAC;
    case 353u: goto L_0897DFC8;
    case 354u: goto L_0897DFDC;
    case 355u: goto L_0897DFF4;
    case 356u: goto L_0897E00C;
    case 357u: goto L_0897E028;
    case 358u: goto L_0897E03C;
    case 359u: goto L_0897E040;
    case 360u: goto L_0897E06C;
    case 361u: goto L_0897E074;
    case 362u: goto L_0897E090;
    case 363u: goto L_0897E0A0;
    case 364u: goto L_0897E100;
    case 365u: goto L_0897E114;
    case 366u: goto L_0897E11C;
    case 367u: goto L_0897E12C;
    case 368u: goto L_0897E13C;
    case 369u: goto L_0897E140;
    case 370u: goto L_0897E164;
    case 371u: goto L_0897E16C;
    case 372u: goto L_0897E188;
    case 373u: goto L_0897E19C;
    case 374u: goto L_0897E1B8;
    case 375u: goto L_0897E1BC;
    case 376u: goto L_0897E1C4;
    case 377u: goto L_0897E1DC;
    case 378u: goto L_0897E1EC;
    case 379u: goto L_0897E21C;
    case 380u: goto L_0897E240;
    case 381u: goto L_0897E248;
    case 382u: goto L_0897E260;
    case 383u: goto L_0897E270;
    case 384u: goto L_0897E27C;
    case 385u: goto L_0897E288;
    case 386u: goto L_0897E2A8;
    case 387u: goto L_0897E2B8;
    case 388u: goto L_0897E2C0;
    case 389u: goto L_0897E2D0;
    case 390u: goto L_0897E2D8;
    case 391u: goto L_0897E2F0;
    case 392u: goto L_0897E2FC;
    case 393u: goto L_0897E310;
    case 394u: goto L_0897E31C;
    case 395u: goto L_0897E324;
    case 396u: goto L_0897E33C;
    case 397u: goto L_0897E34C;
    case 398u: goto L_0897E364;
    case 399u: goto L_0897E37C;
    case 400u: goto L_0897E390;
    case 401u: goto L_0897E398;
    case 402u: goto L_0897E3A4;
    case 403u: goto L_0897E3C0;
    case 404u: goto L_0897E3C8;
    case 405u: goto L_0897E3F4;
    case 406u: goto L_0897E3FC;
    case 407u: goto L_0897E404;
    case 408u: goto L_0897E410;
    case 409u: goto L_0897E418;
    case 410u: goto L_0897E424;
    case 411u: goto L_0897E43C;
    case 412u: goto L_0897E454;
    case 413u: goto L_0897E464;
    case 414u: goto L_0897E474;
    case 415u: goto L_0897E494;
    case 416u: goto L_0897E49C;
    case 417u: goto L_0897E4AC;
    case 418u: goto L_0897E4B0;
    case 419u: goto L_0897E4B8;
    case 420u: goto L_0897E4D0;
    case 421u: goto L_0897E4D8;
    case 422u: goto L_0897E4E4;
    case 423u: goto L_0897E4F4;
    case 424u: goto L_0897E4F8;
    case 425u: goto L_0897E51C;
    case 426u: goto L_0897E524;
    case 427u: goto L_0897E540;
    case 428u: goto L_0897E554;
    case 429u: goto L_0897E570;
    case 430u: goto L_0897E574;
    case 431u: goto L_0897E57C;
    case 432u: goto L_0897E58C;
    case 433u: goto L_0897E598;
    case 434u: goto L_0897E5A4;
    case 435u: goto L_0897E5AC;
    case 436u: goto L_0897E5B0;
    case 437u: goto L_0897E5BC;
    case 438u: goto L_0897E5D4;
    case 439u: goto L_0897E600;
    case 440u: goto L_0897E614;
    case 441u: goto L_0897E61C;
    case 442u: goto L_0897E644;
    case 443u: goto L_0897E64C;
    case 444u: goto L_0897E668;
    case 445u: goto L_0897E67C;
    case 446u: goto L_0897E698;
    case 447u: goto L_0897E69C;
    case 448u: goto L_0897E6A4;
    case 449u: goto L_0897E6B4;
    case 450u: goto L_0897E6D0;
    case 451u: goto L_0897E6D8;
    case 452u: goto L_0897E6E4;
    case 453u: goto L_0897E6FC;
    case 454u: goto L_0897E714;
    case 455u: goto L_0897E728;
    case 456u: goto L_0897E748;
    case 457u: goto L_0897E750;
    case 458u: goto L_0897E76C;
    case 459u: goto L_0897E774;
    case 460u: goto L_0897E77C;
    case 461u: goto L_0897E784;
    case 462u: goto L_0897E7AC;
    case 463u: goto L_0897E7B4;
    case 464u: goto L_0897E7CC;
    case 465u: goto L_0897E7D4;
    case 466u: goto L_0897E7DC;
    case 467u: goto L_0897E7F8;
    case 468u: goto L_0897E804;
    case 469u: goto L_0897E818;
    case 470u: goto L_0897E838;
    case 471u: goto L_0897E840;
    case 472u: goto L_0897E858;
    case 473u: goto L_0897E860;
    case 474u: goto L_0897E87C;
    case 475u: goto L_0897E8A4;
    case 476u: goto L_0897E8AC;
    case 477u: goto L_0897E8C4;
    case 478u: goto L_0897E8CC;
    case 479u: goto L_0897E8D4;
    case 480u: goto L_0897E8F0;
    case 481u: goto L_0897E8FC;
    case 482u: goto L_0897E904;
    case 483u: goto L_0897E91C;
    case 484u: goto L_0897E924;
    case 485u: goto L_0897E92C;
    case 486u: goto L_0897E944;
    case 487u: goto L_0897E94C;
    case 488u: goto L_0897E954;
    case 489u: goto L_0897E95C;
    case 490u: goto L_0897E974;
    case 491u: goto L_0897E990;
    case 492u: goto L_0897E998;
    case 493u: goto L_0897E9B4;
    case 494u: goto L_0897E9C8;
    case 495u: goto L_0897E9E4;
    case 496u: goto L_0897E9E8;
    case 497u: goto L_0897E9F0;
    case 498u: goto L_0897EA00;
    case 499u: goto L_0897EA04;
    case 500u: goto L_0897EA28;
    case 501u: goto L_0897EA30;
    case 502u: goto L_0897EA4C;
    case 503u: goto L_0897EA60;
    case 504u: goto L_0897EA7C;
    case 505u: goto L_0897EA80;
    case 506u: goto L_0897EA88;
    case 507u: goto L_0897EA94;
    case 508u: goto L_0897EAAC;
    case 509u: goto L_0897EAB4;
    case 510u: goto L_0897EAC0;
    case 511u: goto L_0897EAD0;
    case 512u: goto L_0897EAE0;
    case 513u: goto L_0897EAE8;
    case 514u: goto L_0897EAFC;
    case 515u: goto L_0897EB00;
    case 516u: goto L_0897EB24;
    case 517u: goto L_0897EB2C;
    case 518u: goto L_0897EB48;
    case 519u: goto L_0897EB5C;
    case 520u: goto L_0897EB78;
    case 521u: goto L_0897EB7C;
    case 522u: goto L_0897EB84;
    case 523u: goto L_0897EBA4;
    case 524u: goto L_0897EBA8;
    case 525u: goto L_0897EBCC;
    case 526u: goto L_0897EBD4;
    case 527u: goto L_0897EBF0;
    case 528u: goto L_0897EC04;
    case 529u: goto L_0897EC20;
    case 530u: goto L_0897EC24;
    case 531u: goto L_0897EC2C;
    case 532u: goto L_0897EC40;
    case 533u: goto L_0897EC58;
    case 534u: goto L_0897EC60;
    case 535u: goto L_0897EC70;
    case 536u: goto L_0897EC74;
    case 537u: goto L_0897EC98;
    case 538u: goto L_0897ECA0;
    case 539u: goto L_0897ECBC;
    case 540u: goto L_0897ECD0;
    case 541u: goto L_0897ECEC;
    case 542u: goto L_0897ECF0;
    case 543u: goto L_0897ECF8;
    case 544u: goto L_0897ED14;
    case 545u: goto L_0897ED3C;
    case 546u: goto L_0897ED6C;
    case 547u: goto L_0897ED88;
    case 548u: goto L_0897EDB0;
    case 549u: goto L_0897EDE0;
    case 550u: goto L_0897EDF8;
    case 551u: goto L_0897EE08;
    case 552u: goto L_0897EE1C;
    case 553u: goto L_0897EE30;
    case 554u: goto L_0897EE38;
    case 555u: goto L_0897EE50;
    case 556u: goto L_0897EE60;
    case 557u: goto L_0897EE84;
    case 558u: goto L_0897EEA0;
    case 559u: goto L_0897EECC;
    case 560u: goto L_0897EED8;
    case 561u: goto L_0897EEDC;
    case 562u: goto L_0897EEF8;
    case 563u: goto L_0897EF00;
    case 564u: goto L_0897EF14;
    case 565u: goto L_0897EF84;
    case 566u: goto L_0897EF9C;
    case 567u: goto L_0897EFD4;
    case 568u: goto L_0897EFDC;
    case 569u: goto L_0897EFF8;
    case 570u: goto L_0897F004;
    case 571u: goto L_0897F010;
    case 572u: goto L_0897F018;
    case 573u: goto L_0897F01C;
    case 574u: goto L_0897F028;
    case 575u: goto L_0897F040;
    case 576u: goto L_0897F060;
    case 577u: goto L_0897F068;
    case 578u: goto L_0897F084;
    case 579u: goto L_0897F090;
    case 580u: goto L_0897F09C;
    case 581u: goto L_0897F0A4;
    case 582u: goto L_0897F0A8;
    case 583u: goto L_0897F0B4;
    case 584u: goto L_0897F0CC;
    case 585u: goto L_0897F0EC;
    case 586u: goto L_0897F0F4;
    case 587u: goto L_0897F10C;
    case 588u: goto L_0897F114;
    case 589u: goto L_0897F11C;
    case 590u: goto L_0897F138;
    case 591u: goto L_0897F148;
    case 592u: goto L_0897F164;
    case 593u: goto L_0897F180;
    case 594u: goto L_0897F190;
    case 595u: goto L_0897F1A0;
    case 596u: goto L_0897F1BC;
    case 597u: goto L_0897F1CC;
    case 598u: goto L_0897F1DC;
    case 599u: goto L_0897F1F4;
    case 600u: goto L_0897F204;
    case 601u: goto L_0897F210;
    case 602u: goto L_0897F21C;
    case 603u: goto L_0897F22C;
    case 604u: goto L_0897F234;
    case 605u: goto L_0897F24C;
    case 606u: goto L_0897F260;
    case 607u: goto L_0897F278;
    case 608u: goto L_0897F288;
    case 609u: goto L_0897F290;
    case 610u: goto L_0897F294;
    case 611u: goto L_0897F2B4;
    case 612u: goto L_0897F2BC;
    case 613u: goto L_0897F2CC;
    case 614u: goto L_0897F2D4;
    case 615u: goto L_0897F2D8;
    case 616u: goto L_0897F2E0;
    case 617u: goto L_0897F2FC;
    case 618u: goto L_0897F304;
    case 619u: goto L_0897F320;
    case 620u: goto L_0897F334;
    case 621u: goto L_0897F350;
    case 622u: goto L_0897F354;
    case 623u: goto L_0897F35C;
    case 624u: goto L_0897F36C;
    case 625u: goto L_0897F374;
    case 626u: goto L_0897F378;
    case 627u: goto L_0897F380;
    case 628u: goto L_0897F39C;
    case 629u: goto L_0897F3A4;
    case 630u: goto L_0897F3C0;
    case 631u: goto L_0897F3D4;
    case 632u: goto L_0897F3F0;
    case 633u: goto L_0897F3F4;
    case 634u: goto L_0897F3FC;
    case 635u: goto L_0897F40C;
    case 636u: goto L_0897F414;
    case 637u: goto L_0897F418;
    case 638u: goto L_0897F420;
    case 639u: goto L_0897F428;
    case 640u: goto L_0897F444;
    case 641u: goto L_0897F454;
    case 642u: goto L_0897F47C;
    case 643u: goto L_0897F494;
    case 644u: goto L_0897F4B0;
    case 645u: goto L_0897F4B4;
    case 646u: goto L_0897F4C4;
    case 647u: goto L_0897F4DC;
    case 648u: goto L_0897F4F4;
    case 649u: goto L_0897F500;
    case 650u: goto L_0897F504;
    case 651u: goto L_0897F514;
    case 652u: goto L_0897F52C;
    case 653u: goto L_0897F544;
    case 654u: goto L_0897F550;
    case 655u: goto L_0897F554;
    case 656u: goto L_0897F564;
    case 657u: goto L_0897F57C;
    case 658u: goto L_0897F594;
    case 659u: goto L_0897F5A0;
    case 660u: goto L_0897F5A4;
    case 661u: goto L_0897F5B4;
    case 662u: goto L_0897F5CC;
    case 663u: goto L_0897F5E8;
    case 664u: goto L_0897F600;
    case 665u: goto L_0897F61C;
    case 666u: goto L_0897F620;
    case 667u: goto L_0897F644;
    case 668u: goto L_0897F738;
    case 669u: goto L_0897F764;
    case 670u: goto L_0897F784;
    case 671u: goto L_0897F78C;
    case 672u: goto L_0897F79C;
    case 673u: goto L_0897F7AC;
    case 674u: goto L_0897F7B0;
    case 675u: goto L_0897F7B8;
    case 676u: goto L_0897F7C0;
    case 677u: goto L_0897F7D8;
    case 678u: goto L_0897F7DC;
    case 679u: goto L_0897F7E0;
    case 680u: goto L_0897F810;
    case 681u: goto L_0897F818;
    case 682u: goto L_0897F81C;
    case 683u: goto L_0897F824;
    case 684u: goto L_0897F838;
    case 685u: goto L_0897F888;
    case 686u: goto L_0897F8A4;
    case 687u: goto L_0897F908;
    case 688u: goto L_0897F988;
    case 689u: goto L_0897F994;
    case 690u: goto L_0897F9A0;
    case 691u: goto L_0897F9AC;
    case 692u: goto L_0897F9B8;
    case 693u: goto L_0897F9C4;
    case 694u: goto L_0897F9E8;
    case 695u: goto L_0897F9F0;
    case 696u: goto L_0897FA00;
    case 697u: goto L_0897FA10;
    case 698u: goto L_0897FA14;
    case 699u: goto L_0897FA1C;
    case 700u: goto L_0897FA24;
    case 701u: goto L_0897FA3C;
    case 702u: goto L_0897FA40;
    case 703u: goto L_0897FA44;
    case 704u: goto L_0897FA74;
    case 705u: goto L_0897FA7C;
    case 706u: goto L_0897FA84;
    case 707u: goto L_0897FA90;
    case 708u: goto L_0897FA9C;
    case 709u: goto L_0897FAA4;
    case 710u: goto L_0897FABC;
    case 711u: goto L_0897FB24;
    case 712u: goto L_0897FB2C;
    case 713u: goto L_0897FB34;
    case 714u: goto L_0897FB44;
    case 715u: goto L_0897FB50;
    case 716u: goto L_0897FB94;
    case 717u: goto L_0897FBA4;
    case 718u: goto L_0897FBB0;
    case 719u: goto L_0897FBCC;
    case 720u: goto L_0897FBD8;
    case 721u: goto L_0897FBE0;
    case 722u: goto L_0897FBF0;
    case 723u: goto L_0897FC00;
    case 724u: goto L_0897FC08;
    case 725u: goto L_0897FC10;
    case 726u: goto L_0897FC18;
    case 727u: goto L_0897FC20;
    case 728u: goto L_0897FC24;
    case 729u: goto L_0897FC2C;
    case 730u: goto L_0897FC60;
    case 731u: goto L_0897FC84;
    case 732u: goto L_0897FC8C;
    case 733u: goto L_0897FC9C;
    case 734u: goto L_0897FCAC;
    case 735u: goto L_0897FCBC;
    case 736u: goto L_0897FCCC;
    case 737u: goto L_0897FCDC;
    case 738u: goto L_0897FCEC;
    case 739u: goto L_0897FCFC;
    case 740u: goto L_0897FD0C;
    case 741u: goto L_0897FD24;
    case 742u: goto L_0897FD3C;
    case 743u: goto L_0897FD4C;
    case 744u: goto L_0897FD64;
    case 745u: goto L_0897FD6C;
    case 746u: goto L_0897FD7C;
    case 747u: goto L_0897FD8C;
    case 748u: goto L_0897FD90;
    case 749u: goto L_0897FDAC;
    case 750u: goto L_0897FDD8;
    case 751u: goto L_0897FE18;
    case 752u: goto L_0897FE28;
    case 753u: goto L_0897FE34;
    case 754u: goto L_0897FE38;
    case 755u: goto L_0897FE88;
    case 756u: goto L_0897FE90;
    case 757u: goto L_0897FE9C;
    case 758u: goto L_0897FEA4;
    case 759u: goto L_0897FED4;
    case 760u: goto L_0897FEE4;
    case 761u: goto L_0897FEF0;
    case 762u: goto L_0897FEF8;
    case 763u: goto L_0897FF0C;
    case 764u: goto L_0897FF1C;
    case 765u: goto L_0897FF28;
    case 766u: goto L_0897FF30;
    case 767u: goto L_0897FF3C;
    case 768u: goto L_0897FF44;
    case 769u: goto L_0897FF58;
    case 770u: goto L_0897FF60;
    case 771u: goto L_0897FF74;
    case 772u: goto L_0897FF84;
    case 773u: goto L_0897FF88;
    case 774u: goto L_0897FF94;
    case 775u: goto L_0897FF9C;
    case 776u: goto L_0897FFB0;
    case 777u: goto L_0897FFDC;
    default:
        if (local_transfers == 0u) rt.unsupported(ctx.pc, 0u, "invalid internal function entry");
        else ctx.pc = local_pc;
        return;
    }
    }
L_0897C000:
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(276)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(280)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(284)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(288)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(292)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(296)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(300)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(304));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C024:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-160));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897C1C8;
      }
      goto L_0897C040;
    }
L_0897C040:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(96)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(76)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(88)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(80)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (16800u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
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
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    { const std::uint32_t vfpu_address = ctx.gpr[5] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<1u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
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
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
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
    { const std::uint32_t vfpu_address = ctx.gpr[6] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<2u, 4u>(vfpu_value); }
    ctx.execute_vfpu_cross_quat(0u, 1u, 2u, 3u);
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
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[4] = (49097u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897C19Cu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0897C19Cu) goto L_0897C19C;
    return;
L_0897C19C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.gpr[31] = (0x0897C1B0u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x0897C1B0u) goto L_0897C1B0;
    return;
L_0897C1B0:
    ctx.gpr[31] = (0x0897C1B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 505u, 0x08A064E8u>(ctx, &aot_mem) && ctx.pc == 0x0897C1B8u) goto L_0897C1B8;
    return;
L_0897C1B8:
    ctx.gpr[31] = (0x0897C1C0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0138_entry, 138u, 755u, 0x08A2F788u>(ctx, &aot_mem) && ctx.pc == 0x0897C1C0u) goto L_0897C1C0;
    return;
L_0897C1C0:
    ctx.gpr[31] = (0x0897C1C8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0131_entry, 131u, 21u, 0x08A10124u>(ctx, &aot_mem) && ctx.pc == 0x0897C1C8u) goto L_0897C1C8;
    return;
L_0897C1C8:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C1DC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[20] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.fpr[22] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[17]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    ctx.gpr[6] = (2229u << 16u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[6] = (aot_mem.aot_load8(ctx.gpr[6] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.fpr[24] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] != 0u;
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
      if (branch_taken) {
          goto L_0897C284;
      }
      goto L_0897C22C;
    }
L_0897C22C:
    ctx.gpr[6] = (16128u << 16u);
    ctx.fpr[26] = ctx.fpr[13] + ctx.fpr[12];
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (2228u << 16u);
    ctx.gpr[6] = (50716u << 16u);
    ctx.fpr[28] = ctx.fpr[15] + ctx.fpr[14];
    ctx.gpr[6] = (ctx.gpr[6] | 16384u);
    ctx.fpr[0] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[16] = (2277u << 16u);
    ctx.gpr[6] = (18371u << 16u);
    { const float fs = ctx.fpr[26]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[26] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[26] = fs * ft; }
    ctx.gpr[6] = (ctx.gpr[6] | 20467u);
    { const float fs = ctx.fpr[28]; const float ft = ctx.fpr[2]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[28] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[28] = fs * ft; }
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26540)));
    ctx.set_fpu_condition((ctx.fpr[16] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14944));
      if (branch_taken) {
          goto L_0897C28C;
      }
      goto L_0897C27C;
    }
L_0897C27C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C2A4;
      }
      goto L_0897C284;
    }
L_0897C284:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C438;
      }
      goto L_0897C28C;
    }
L_0897C28C:
    ctx.set_fpu_condition((ctx.fpr[17] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897C2A4;
      }
      goto L_0897C29C;
    }
L_0897C29C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C2AC;
      }
      goto L_0897C2A4;
    }
L_0897C2A4:
    ctx.fpr[16] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.fpr[17] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0897C2AC;
L_0897C2AC:
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[8] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[8] == 0u;
    ctx.gpr[9] = (17096u << 16u);
      if (branch_taken) {
          goto L_0897C340;
      }
      goto L_0897C2BC;
    }
L_0897C2BC:
    ctx.gpr[8] = (ctx.gpr[16] | 0u);
    ctx.fpr[2] = std::bit_cast<float>(ctx.gpr[9]);
    goto L_0897C2C4;
L_0897C2C4:
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[8] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.fpr[0] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[10] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.gpr[11] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.fpr[0] = ctx.fpr[16] - ctx.fpr[0];
    ctx.fpr[1] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[10] + static_cast<std::uint32_t>(0)));
    ctx.gpr[9] = (ctx.gpr[9] + static_cast<std::uint32_t>(48));
    ctx.fpr[3] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[11] + static_cast<std::uint32_t>(4)));
    ctx.fpr[1] = ctx.fpr[16] - ctx.fpr[1];
    ctx.fpr[4] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[9] + static_cast<std::uint32_t>(4)));
    ctx.fpr[3] = ctx.fpr[17] - ctx.fpr[3];
    ctx.fpr[4] = ctx.fpr[17] - ctx.fpr[4];
    { const float fs = ctx.fpr[0]; const float ft = ctx.fpr[1]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[0] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[0] = fs * ft; }
    { const float fs = ctx.fpr[3]; const float ft = ctx.fpr[4]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[3] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[3] = fs * ft; }
    ctx.fpr[0] = ctx.fpr[0] + ctx.fpr[3];
    ctx.fpr[0] = std::sqrt(ctx.fpr[0]);
    ctx.set_fpu_condition((ctx.fpr[18] <= ctx.fpr[0]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897C330;
      }
      goto L_0897C318;
    }
L_0897C318:
    ctx.set_fpu_condition((ctx.fpr[0] < ctx.fpr[2]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897C330;
      }
      goto L_0897C328;
    }
L_0897C328:
    ctx.fpr[18] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    ctx.gpr[17] = (ctx.gpr[6] | 0u);
    goto L_0897C330;
L_0897C330:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(1));
    ctx.gpr[9] = (static_cast<std::int32_t>(ctx.gpr[6]) < static_cast<std::int32_t>(ctx.gpr[7]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[9] != 0u;
    ctx.gpr[8] = (ctx.gpr[8] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0897C2C4;
      }
      goto L_0897C340;
    }
L_0897C340:
    ctx.gpr[17] = (ctx.gpr[17] << 7u);
    ctx.gpr[18] = (ctx.gpr[17] + ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(12), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(16), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(20), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(24), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(28), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[6] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(116), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(108), 0u);
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(118), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[19]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(119), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(120), static_cast<std::uint8_t>(ctx.gpr[5]));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0897C394;
      }
      goto L_0897C388;
    }
L_0897C388:
    ctx.gpr[7] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(121)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C398;
      }
      goto L_0897C394;
    }
L_0897C394:
    ctx.gpr[6] = (0u | 1u);
    goto L_0897C398;
L_0897C398:
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(121), static_cast<std::uint8_t>(ctx.gpr[6]));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(112), 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[18] + static_cast<std::uint32_t>(117), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0897C3B8;
      }
      goto L_0897C3A8;
    }
L_0897C3A8:
    ctx.gpr[4] = (49011u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 29884u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897C3E0;
      }
      goto L_0897C3B8;
    }
L_0897C3B8:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C3D0;
      }
      goto L_0897C3C0;
    }
L_0897C3C0:
    ctx.gpr[4] = (16684u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 37958u);
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897C3E0;
      }
      goto L_0897C3D0;
    }
L_0897C3D0:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[31] = (0x0897C3DCu);
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x0897C3DCu) goto L_0897C3DC;
    return;
L_0897C3DC:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0897C3E0;
L_0897C3E0:
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(40));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(56));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[7]);
    ctx.gpr[31] = (0x0897C40Cu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 344u, 0x0897A528u>(ctx, &aot_mem) && ctx.pc == 0x0897C40Cu) goto L_0897C40C;
    return;
L_0897C40C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(44));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[6] = (ctx.gpr[16] + static_cast<std::uint32_t>(52));
    ctx.fpr[13] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(60));
    ctx.fpr[14] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    ctx.gpr[5] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.gpr[6] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[17] + ctx.gpr[7]);
    ctx.gpr[31] = (0x0897C438u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0093_entry, 93u, 344u, 0x0897A528u>(ctx, &aot_mem) && ctx.pc == 0x0897C438u) goto L_0897C438;
    return;
L_0897C438:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C464:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-192));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(27772)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(140), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(156), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(172), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(176), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(180), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(184), ctx.gpr[30]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(188), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C4C0;
      }
      goto L_0897C4B8;
    }
L_0897C4B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C784;
      }
      goto L_0897C4C0;
    }
L_0897C4C0:
    ctx.gpr[4] = (0u | 8u);
    ctx.gpr[31] = (0x0897C4CCu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0897C4CCu) goto L_0897C4CC;
    return;
L_0897C4CC:
    ctx.gpr[4] = (0u | 6u);
    ctx.gpr[31] = (0x0897C4D8u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0897C4D8u) goto L_0897C4D8;
    return;
L_0897C4D8:
    ctx.gpr[4] = (0u | 12u);
    ctx.gpr[31] = (0x0897C4E4u);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0897C4E4u) goto L_0897C4E4;
    return;
L_0897C4E4:
    ctx.gpr[4] = (0u | 10u);
    ctx.gpr[31] = (0x0897C4F0u);
    ctx.gpr[5] = (0u | 5u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0897C4F0u) goto L_0897C4F0;
    return;
L_0897C4F0:
    ctx.gpr[4] = (0u | 11u);
    ctx.gpr[31] = (0x0897C4FCu);
    ctx.gpr[5] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0897C4FCu) goto L_0897C4FC;
    return;
L_0897C4FC:
    ctx.gpr[4] = (0u | 9u);
    ctx.gpr[31] = (0x0897C508u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0897C508u) goto L_0897C508;
    return;
L_0897C508:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[31] = (0x0897C514u);
    ctx.gpr[5] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0044_entry, 44u, 591u, 0x088B7A70u>(ctx, &aot_mem) && ctx.pc == 0x0897C514u) goto L_0897C514;
    return;
L_0897C514:
    ctx.gpr[23] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-26540)));
    ctx.gpr[19] = (0u | 0u);
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[22] = (2232u << 16u);
      if (branch_taken) {
          goto L_0897C784;
      }
      goto L_0897C52C;
    }
L_0897C52C:
    ctx.gpr[22] = (ctx.gpr[22] + static_cast<std::uint32_t>(20400));
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(8));
    ctx.gpr[5] = (ctx.gpr[22] + static_cast<std::uint32_t>(40));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(124), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(120), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[22] + static_cast<std::uint32_t>(20));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(76)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(80)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2232u << 16u);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(84)));
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(88)));
    ctx.gpr[16] = (2277u << 16u);
    ctx.gpr[4] = (17302u << 16u);
    ctx.gpr[21] = (0u | 255u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[18] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    ctx.gpr[30] = (ctx.gpr[22] + static_cast<std::uint32_t>(52));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(92)));
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(48));
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-14944));
    goto L_0897C590;
L_0897C590:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C754;
      }
      goto L_0897C59C;
    }
L_0897C59C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897C754;
      }
      goto L_0897C5C0;
    }
L_0897C5C0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897C754;
      }
      goto L_0897C5E4;
    }
L_0897C5E4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897C754;
      }
      goto L_0897C608;
    }
L_0897C608:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[20];
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897C754;
      }
      goto L_0897C62C;
    }
L_0897C62C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(48));
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
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(65), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(66), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(124)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(67), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(68), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(69), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(120)));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(70), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(71), static_cast<std::uint8_t>(ctx.gpr[21]));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[4] = (16830u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 42992u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (16646u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 65012u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<4u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(16);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<5u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(32);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<6u, 4u>(vfpu_value); }
    { const std::uint32_t vfpu_address = ctx.gpr[18] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(48));
    ctx.gpr[31] = (0x0897C6D4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 565u, 0x089274ACu>(ctx, &aot_mem) && ctx.pc == 0x0897C6D4u) goto L_0897C6D4;
    return;
L_0897C6D4:
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(116)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(112), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    ctx.gpr[6] = (std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(0), ctx.gpr[5]);
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[30] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[22] | 0u);
    ctx.gpr[5] = (0u | 2u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0897C738u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 50u, 0x08868560u>(ctx, &aot_mem) && ctx.pc == 0x0897C738u) goto L_0897C738;
    return;
L_0897C738:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C754;
      }
      goto L_0897C740;
    }
L_0897C740:
    ctx.gpr[4] = (0u | 0u);
    ctx.gpr[31] = (0x0897C74Cu);
    ctx.gpr[5] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 62u, 0x08868718u>(ctx, &aot_mem) && ctx.pc == 0x0897C74Cu) goto L_0897C74C;
    return;
L_0897C74C:
    ctx.gpr[31] = (0x0897C754u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0025_entry, 25u, 70u, 0x08868844u>(ctx, &aot_mem) && ctx.pc == 0x0897C754u) goto L_0897C754;
    return;
L_0897C754:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[23] + static_cast<std::uint32_t>(-26540)));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(1));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[19]) < static_cast<std::int32_t>(ctx.gpr[4]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(128));
      if (branch_taken) {
          goto L_0897C590;
      }
      goto L_0897C768;
    }
L_0897C768:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(112)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(76), std::bit_cast<std::uint32_t>(ctx.fpr[30]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(80), std::bit_cast<std::uint32_t>(ctx.fpr[28]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(84), std::bit_cast<std::uint32_t>(ctx.fpr[26]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(88), std::bit_cast<std::uint32_t>(ctx.fpr[24]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(92), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    goto L_0897C784;
L_0897C784:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(128)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(132)));
    ctx.fpr[24] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(136)));
    ctx.fpr[26] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(140)));
    ctx.fpr[28] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(144)));
    ctx.fpr[30] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(148)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(152)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(156)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(160)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(164)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(168)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(172)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.gpr[30] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(188)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(192));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C7CC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26572)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[5] = (2228u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26576)));
    ctx.gpr[6] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[9] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26548)));
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    ctx.gpr[11] = (2228u << 16u);
    ctx.gpr[10] = (2228u << 16u);
    ctx.gpr[7] = (16672u << 16u);
    ctx.gpr[8] = (15744u << 16u);
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[3] = (2228u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[18] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[18] = fs * ft; }
    ctx.fpr[17] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[18];
    aot_mem.aot_store32(ctx.gpr[9] + static_cast<std::uint32_t>(-26568), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[12] = (2228u << 16u);
    ctx.fpr[14] = ctx.fpr[17] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[11] + static_cast<std::uint32_t>(-26560), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[19] / ctx.fpr[12];
    aot_mem.aot_store32(ctx.gpr[10] + static_cast<std::uint32_t>(-26564), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[8]);
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[18]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[16] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[16] = fs * ft; }
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26556), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    aot_mem.aot_store32(ctx.gpr[3] + static_cast<std::uint32_t>(-26552), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    jump_target = ctx.gpr[31];
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-26544), std::bit_cast<std::uint32_t>(ctx.fpr[16]));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C860:
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
L_0897C88C:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-224));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1497));
    ctx.gpr[6] = (ctx.gpr[6] < static_cast<std::uint32_t>(103) ? 1u : 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(192), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(196), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(200), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(204), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(208), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(212), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(216), ctx.gpr[31]);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897F61C;
      }
      goto L_0897C8BC;
    }
L_0897C8BC:
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1497));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[1] = (2226u << 16u);
    ctx.gpr[1] = (ctx.gpr[1] + ctx.gpr[4]);
    ctx.gpr[1] = (aot_mem.aot_load32(ctx.gpr[1] + static_cast<std::uint32_t>(-24376)));
    jump_target = ctx.gpr[1];
    // nop
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897C8D8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897C8F0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897C8F0u) goto L_0897C8F0;
    return;
L_0897C8F0:
    ctx.gpr[31] = (0x0897C8F8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 685u, 0x0896F59Cu>(ctx, &aot_mem) && ctx.pc == 0x0897C8F8u) goto L_0897C8F8;
    return;
L_0897C8F8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897C900;
    }
L_0897C900:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897C918u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897C918u) goto L_0897C918;
    return;
L_0897C918:
    ctx.gpr[31] = (0x0897C920u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 686u, 0x0896F5A4u>(ctx, &aot_mem) && ctx.pc == 0x0897C920u) goto L_0897C920;
    return;
L_0897C920:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897C928;
    }
L_0897C928:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897C944u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897C944u) goto L_0897C944;
    return;
L_0897C944:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[17] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[31] = (0x0897C954u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 704u, 0x0896F728u>(ctx, &aot_mem) && ctx.pc == 0x0897C954u) goto L_0897C954;
    return;
L_0897C954:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C974;
      }
      goto L_0897C960;
    }
L_0897C960:
    ctx.gpr[31] = (0x0897C968u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 729u, 0x0896F914u>(ctx, &aot_mem) && ctx.pc == 0x0897C968u) goto L_0897C968;
    return;
L_0897C968:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897C974;
      }
      goto L_0897C970;
    }
L_0897C970:
    ctx.gpr[17] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[18] + static_cast<std::uint32_t>(848))))));
    goto L_0897C974;
L_0897C974:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897C98Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0897C98Cu) goto L_0897C98C;
    return;
L_0897C98C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897C994;
    }
L_0897C994:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897C9ACu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897C9ACu) goto L_0897C9AC;
    return;
L_0897C9AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(336));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0897C9DCu);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897C9DCu) goto L_0897C9DC;
    return;
L_0897C9DC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897C9E4;
    }
L_0897C9E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897C9FCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897C9FCu) goto L_0897C9FC;
    return;
L_0897C9FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0897CA18u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 740u, 0x0896FA88u>(ctx, &aot_mem) && ctx.pc == 0x0897CA18u) goto L_0897CA18;
    return;
L_0897CA18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897CA20;
    }
L_0897CA20:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897CA38u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897CA38u) goto L_0897CA38;
    return;
L_0897CA38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0897CA54u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 743u, 0x0896FAF8u>(ctx, &aot_mem) && ctx.pc == 0x0897CA54u) goto L_0897CA54;
    return;
L_0897CA54:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CA64;
      }
      goto L_0897CA5C;
    }
L_0897CA5C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0897CA68;
      }
      goto L_0897CA64;
    }
L_0897CA64:
    ctx.gpr[4] = (0u | 0u);
    goto L_0897CA68;
L_0897CA68:
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
          goto L_0897CA94;
      }
      goto L_0897CA8C;
    }
L_0897CA8C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897CAE4;
      }
      goto L_0897CA94;
    }
L_0897CA94:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897CAC4;
    }
    goto L_0897CAB0;
L_0897CAB0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897CAE4;
      }
      goto L_0897CAC4;
    }
L_0897CAC4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CAE4;
      }
      goto L_0897CAE0;
    }
L_0897CAE0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897CAE4;
L_0897CAE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897CAEC;
    }
L_0897CAEC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897CB04u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897CB04u) goto L_0897CB04;
    return;
L_0897CB04:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(344));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[5];
    ctx.gpr[31] = (0x0897CB34u);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897CB34u) goto L_0897CB34;
    return;
L_0897CB34:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CB44;
      }
      goto L_0897CB3C;
    }
L_0897CB3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0897CB48;
      }
      goto L_0897CB44;
    }
L_0897CB44:
    ctx.gpr[4] = (0u | 0u);
    goto L_0897CB48;
L_0897CB48:
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
          goto L_0897CB74;
      }
      goto L_0897CB6C;
    }
L_0897CB6C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897CBC4;
      }
      goto L_0897CB74;
    }
L_0897CB74:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897CBA4;
    }
    goto L_0897CB90;
L_0897CB90:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897CBC4;
      }
      goto L_0897CBA4;
    }
L_0897CBA4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CBC4;
      }
      goto L_0897CBC0;
    }
L_0897CBC0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897CBC4;
L_0897CBC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897CBCC;
    }
L_0897CBCC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897CBE4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897CBE4u) goto L_0897CBE4;
    return;
L_0897CBE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0897CC00u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 703u, 0x0896F71Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CC00u) goto L_0897CC00;
    return;
L_0897CC00:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897CC08;
    }
L_0897CC08:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897CC24u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897CC24u) goto L_0897CC24;
    return;
L_0897CC24:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897CC34u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0897CC34u) goto L_0897CC34;
    return;
L_0897CC34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-2));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[6] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897CC58;
    }
L_0897CC58:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897CC70u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897CC70u) goto L_0897CC70;
    return;
L_0897CC70:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897CC80u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0897CC80u) goto L_0897CC80;
    return;
L_0897CC80:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(408)));
    ctx.gpr[5] = (ctx.gpr[5] & 16u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0897CC94;
      }
      goto L_0897CC90;
    }
L_0897CC90:
    ctx.gpr[4] = (0u | 1u);
    goto L_0897CC94;
L_0897CC94:
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
          goto L_0897CCC0;
      }
      goto L_0897CCB8;
    }
L_0897CCB8:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897CD10;
      }
      goto L_0897CCC0;
    }
L_0897CCC0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897CCF0;
    }
    goto L_0897CCDC;
L_0897CCDC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897CD10;
      }
      goto L_0897CCF0;
    }
L_0897CCF0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CD10;
      }
      goto L_0897CD0C;
    }
L_0897CD0C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897CD10;
L_0897CD10:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897CD18;
    }
L_0897CD18:
    ctx.gpr[17] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897CD38u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897CD38u) goto L_0897CD38;
    return;
L_0897CD38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[20] = (ctx.gpr[29] + static_cast<std::uint32_t>(96));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(12)));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[31] = (0x0897CD6Cu);
    ctx.gpr[5] = (ctx.gpr[20] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0091_entry, 91u, 227u, 0x089718E4u>(ctx, &aot_mem) && ctx.pc == 0x0897CD6Cu) goto L_0897CD6C;
    return;
L_0897CD6C:
    { const std::uint32_t vfpu_address = ctx.gpr[20] + static_cast<std::uint32_t>(0);
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
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897CD98u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0897CD98u) goto L_0897CD98;
    return;
L_0897CD98:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897CDA0;
    }
L_0897CDA0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897CDB8u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897CDB8u) goto L_0897CDB8;
    return;
L_0897CDB8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27100)));
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[14])) && ctx.fpr[12] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0897CE08;
      }
      goto L_0897CDEC;
    }
L_0897CDEC:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897CE08;
      }
      goto L_0897CE00;
    }
L_0897CE00:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0897CE14;
      }
      goto L_0897CE08;
    }
L_0897CE08:
    ctx.gpr[31] = (0x0897CE10u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CE10u) goto L_0897CE10;
    return;
L_0897CE10:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0897CE14;
L_0897CE14:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897CE34u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0897CE34u) goto L_0897CE34;
    return;
L_0897CE34:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897CE3C;
    }
L_0897CE3C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[17] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897CE58u);
    ctx.gpr[7] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897CE58u) goto L_0897CE58;
    return;
L_0897CE58:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[31] = (0x0897CE68u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0191_entry, 191u, 633u, 0x08B02E34u>(ctx, &aot_mem) && ctx.pc == 0x0897CE68u) goto L_0897CE68;
    return;
L_0897CE68:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897CE70;
    }
L_0897CE70:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897CE88u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897CE88u) goto L_0897CE88;
    return;
L_0897CE88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-27100)));
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0897CEA4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 787u, 0x0896FD78u>(ctx, &aot_mem) && ctx.pc == 0x0897CEA4u) goto L_0897CEA4;
    return;
L_0897CEA4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897CEAC;
    }
L_0897CEAC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897CEC4u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897CEC4u) goto L_0897CEC4;
    return;
L_0897CEC4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897CED4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0897CED4u) goto L_0897CED4;
    return;
L_0897CED4:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 192u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2227u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(16182), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[18] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (2233u << 16u);
    ctx.gpr[19] = (ctx.gpr[4] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    ctx.gpr[4] = (ctx.gpr[19] + static_cast<std::uint32_t>(4));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[31] = (0x0897CF34u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0013_entry, 13u, 689u, 0x0883B8A4u>(ctx, &aot_mem) && ctx.pc == 0x0897CF34u) goto L_0897CF34;
    return;
L_0897CF34:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[18] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (ctx.gpr[4] << 7u);
    ctx.gpr[6] = (ctx.gpr[5] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[19]);
    ctx.gpr[31] = (0x0897CF58u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0897CF58u) goto L_0897CF58;
    return;
L_0897CF58:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (0u | 5u);
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (0u | 3u);
      if (branch_taken) {
          goto L_0897CF70;
      }
      goto L_0897CF68;
    }
L_0897CF68:
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897CFDC;
      }
      goto L_0897CF70;
    }
L_0897CF70:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CFA8;
      }
      goto L_0897CF84;
    }
L_0897CF84:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0897CFA0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 345u, 0x088EE3F4u>(ctx, &aot_mem) && ctx.pc == 0x0897CFA0u) goto L_0897CFA0;
    return;
L_0897CFA0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897CFC4;
      }
      goto L_0897CFA8;
    }
L_0897CFA8:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 18u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0897CFC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 345u, 0x088EE3F4u>(ctx, &aot_mem) && ctx.pc == 0x0897CFC4u) goto L_0897CFC4;
    return;
L_0897CFC4:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[31] = (0x0897CFD4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 479u, 0x088EEF8Cu>(ctx, &aot_mem) && ctx.pc == 0x0897CFD4u) goto L_0897CFD4;
    return;
L_0897CFD4:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D038;
      }
      goto L_0897CFDC;
    }
L_0897CFDC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D014;
      }
      goto L_0897CFF0;
    }
L_0897CFF0:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[7] = (0u | 1u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0897D00Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 345u, 0x088EE3F4u>(ctx, &aot_mem) && ctx.pc == 0x0897D00Cu) goto L_0897D00C;
    return;
L_0897D00C:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D030;
      }
      goto L_0897D014;
    }
L_0897D014:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[5] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 16u);
    ctx.gpr[7] = (0u | 2u);
    ctx.gpr[8] = (0u | 1u);
    ctx.gpr[31] = (0x0897D030u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 345u, 0x088EE3F4u>(ctx, &aot_mem) && ctx.pc == 0x0897D030u) goto L_0897D030;
    return;
L_0897D030:
    ctx.gpr[4] = (0u | 1u);
    aot_mem.aot_store8(ctx.gpr[17] + static_cast<std::uint32_t>(852), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897D038;
L_0897D038:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(526)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D05C;
      }
      goto L_0897D044;
    }
L_0897D044:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D05Cu);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(16512));
    if (rt.invoke_chained_direct<&recomp_unit_0085_entry, 85u, 191u, 0x08958B00u>(ctx, &aot_mem) && ctx.pc == 0x0897D05Cu) goto L_0897D05C;
    return;
L_0897D05C:
    ctx.gpr[31] = (0x0897D064u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0897D064u) goto L_0897D064;
    return;
L_0897D064:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D094;
      }
      goto L_0897D06C;
    }
L_0897D06C:
    ctx.gpr[31] = (0x0897D074u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0897D074u) goto L_0897D074;
    return;
L_0897D074:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897D094;
L_0897D094:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D09C;
    }
L_0897D09C:
    ctx.gpr[31] = (0x0897D0A4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0897D0A4u) goto L_0897D0A4;
    return;
L_0897D0A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D0D4;
      }
      goto L_0897D0AC;
    }
L_0897D0AC:
    ctx.gpr[31] = (0x0897D0B4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0116_entry, 116u, 176u, 0x089D57B4u>(ctx, &aot_mem) && ctx.pc == 0x0897D0B4u) goto L_0897D0B4;
    return;
L_0897D0B4:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(599))))));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 6u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[2] + static_cast<std::uint32_t>(599), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897D0D4;
L_0897D0D4:
    ctx.gpr[31] = (0x0897D0DCu);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0015_entry, 15u, 174u, 0x088414FCu>(ctx, &aot_mem) && ctx.pc == 0x0897D0DCu) goto L_0897D0DC;
    return;
L_0897D0DC:
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
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(242), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), 0u);
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0897D118u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    if (rt.invoke_chained_direct<&recomp_unit_0058_entry, 58u, 369u, 0x088EE5C0u>(ctx, &aot_mem) && ctx.pc == 0x0897D118u) goto L_0897D118;
    return;
L_0897D118:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D120;
    }
L_0897D120:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7236)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7236), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D138;
    }
L_0897D138:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D150u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D150u) goto L_0897D150;
    return;
L_0897D150:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7232)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7232), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D16C;
    }
L_0897D16C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D184u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D184u) goto L_0897D184;
    return;
L_0897D184:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) > 0;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 2 ? 1u : 0u);
      if (branch_taken) {
          goto L_0897D1A8;
      }
      goto L_0897D190;
    }
L_0897D190:
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[16]) < 0;
    // nop
      if (branch_taken) {
          goto L_0897D20C;
      }
      goto L_0897D198;
    }
L_0897D198:
    ctx.gpr[31] = (0x0897D1A0u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 338u, 0x089655E4u>(ctx, &aot_mem) && ctx.pc == 0x0897D1A0u) goto L_0897D1A0;
    return;
L_0897D1A0:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D20C;
      }
      goto L_0897D1A8;
    }
L_0897D1A8:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[16]) < 3 ? 1u : 0u);
      if (branch_taken) {
          goto L_0897D1C0;
      }
      goto L_0897D1B0;
    }
L_0897D1B0:
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897D1D0;
      }
      goto L_0897D1B8;
    }
L_0897D1B8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D20C;
      }
      goto L_0897D1C0;
    }
L_0897D1C0:
    ctx.gpr[31] = (0x0897D1C8u);
    ctx.gpr[4] = (0u | 6u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 338u, 0x089655E4u>(ctx, &aot_mem) && ctx.pc == 0x0897D1C8u) goto L_0897D1C8;
    return;
L_0897D1C8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D20C;
      }
      goto L_0897D1D0;
    }
L_0897D1D0:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6500)));
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[5] == ctx.gpr[4];
    ctx.gpr[5] = (2230u << 16u);
      if (branch_taken) {
          goto L_0897D1F4;
      }
      goto L_0897D1E4;
    }
L_0897D1E4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-6500)));
    ctx.gpr[4] = (0u | 6u);
    { const bool branch_taken = ctx.gpr[5] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897D204;
      }
      goto L_0897D1F4;
    }
L_0897D1F4:
    ctx.gpr[31] = (0x0897D1FCu);
    ctx.gpr[4] = (0u | 4u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 338u, 0x089655E4u>(ctx, &aot_mem) && ctx.pc == 0x0897D1FCu) goto L_0897D1FC;
    return;
L_0897D1FC:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D20C;
      }
      goto L_0897D204;
    }
L_0897D204:
    ctx.gpr[31] = (0x0897D20Cu);
    ctx.gpr[4] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0088_entry, 88u, 338u, 0x089655E4u>(ctx, &aot_mem) && ctx.pc == 0x0897D20Cu) goto L_0897D20C;
    return;
L_0897D20C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D214;
    }
L_0897D214:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897D230u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D230u) goto L_0897D230;
    return;
L_0897D230:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[31] = (0x0897D240u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0897D240u) goto L_0897D240;
    return;
L_0897D240:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(128), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(132), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(136), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(128));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D284;
    }
L_0897D284:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897D2A0u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D2A0u) goto L_0897D2A0;
    return;
L_0897D2A0:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897D2B0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0897D2B0u) goto L_0897D2B0;
    return;
L_0897D2B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(208)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (18371u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 20224u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[13] < ctx.fpr[12]));
    // nop
    if (!ctx.fpu_condition()) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
        goto L_0897D31C;
    }
    goto L_0897D2EC;
L_0897D2EC:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-9));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] | 2u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897D340;
      }
      goto L_0897D31C;
    }
L_0897D31C:
    ctx.gpr[4] = (ctx.gpr[4] | 4u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-3));
    ctx.gpr[4] = (ctx.gpr[4] | 8u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(322))))));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(322), static_cast<std::uint8_t>(ctx.gpr[4]));
    goto L_0897D340;
L_0897D340:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D348;
    }
L_0897D348:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(940)));
    ctx.gpr[5] = (ctx.gpr[5] ^ 2u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0897D368;
      }
      goto L_0897D364;
    }
L_0897D364:
    ctx.gpr[4] = (0u | 1u);
    goto L_0897D368;
L_0897D368:
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
          goto L_0897D394;
      }
      goto L_0897D38C;
    }
L_0897D38C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897D3E4;
      }
      goto L_0897D394;
    }
L_0897D394:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897D3C4;
    }
    goto L_0897D3B0;
L_0897D3B0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897D3E4;
      }
      goto L_0897D3C4;
    }
L_0897D3C4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D3E4;
      }
      goto L_0897D3E0;
    }
L_0897D3E0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897D3E4;
L_0897D3E4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D3EC;
    }
L_0897D3EC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D404u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D404u) goto L_0897D404;
    return;
L_0897D404:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7500), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D418;
    }
L_0897D418:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D430u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D430u) goto L_0897D430;
    return;
L_0897D430:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(-7828)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (ctx.gpr[4] << 7u);
    ctx.gpr[7] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[7]);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[4] = (ctx.gpr[6] - ctx.gpr[4]);
    ctx.gpr[6] = (2233u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-25840));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(196), ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D468;
    }
L_0897D468:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7228)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7228), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D480;
    }
L_0897D480:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D498u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D498u) goto L_0897D498;
    return;
L_0897D498:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7224)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7224), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D4B4;
    }
L_0897D4B4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7200)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7200), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D4CC;
    }
L_0897D4CC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7196)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7196), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D4E4;
    }
L_0897D4E4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D4FCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D4FCu) goto L_0897D4FC;
    return;
L_0897D4FC:
    ctx.gpr[31] = (0x0897D504u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 188u, 0x08844FB0u>(ctx, &aot_mem) && ctx.pc == 0x0897D504u) goto L_0897D504;
    return;
L_0897D504:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D50C;
    }
L_0897D50C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D528u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D528u) goto L_0897D528;
    return;
L_0897D528:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897D538u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0897D538u) goto L_0897D538;
    return;
L_0897D538:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897D54Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0897D54Cu) goto L_0897D54C;
    return;
L_0897D54C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (2u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(404), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897D56Cu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0107_entry, 107u, 60u, 0x089B02E4u>(ctx, &aot_mem) && ctx.pc == 0x0897D56Cu) goto L_0897D56C;
    return;
L_0897D56C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D574;
    }
L_0897D574:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D58Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D58Cu) goto L_0897D58C;
    return;
L_0897D58C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897D59Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0897D59Cu) goto L_0897D59C;
    return;
L_0897D59C:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-497));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] | 80u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[31] = (0x0897D5D0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(848));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 251u, 0x08A294B4u>(ctx, &aot_mem) && ctx.pc == 0x0897D5D0u) goto L_0897D5D0;
    return;
L_0897D5D0:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (0u | 169u);
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
        goto L_0897D684;
    }
    goto L_0897D5E0;
L_0897D5E0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 7u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0897D5F4u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 412u, 0x0880B468u>(ctx, &aot_mem) && ctx.pc == 0x0897D5F4u) goto L_0897D5F4;
    return;
L_0897D5F4:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 8u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0897D608u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 412u, 0x0880B468u>(ctx, &aot_mem) && ctx.pc == 0x0897D608u) goto L_0897D608;
    return;
L_0897D608:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 17u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0897D61Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D61Cu) goto L_0897D61C;
    return;
L_0897D61C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D630u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D630u) goto L_0897D630;
    return;
L_0897D630:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 15u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D644u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D644u) goto L_0897D644;
    return;
L_0897D644:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 11u);
    ctx.gpr[6] = (0u | 3u);
    ctx.gpr[31] = (0x0897D658u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D658u) goto L_0897D658;
    return;
L_0897D658:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897D66Cu);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D66Cu) goto L_0897D66C;
    return;
L_0897D66C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 12u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0897D680u);
    ctx.gpr[7] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D680u) goto L_0897D680;
    return;
L_0897D680:
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    goto L_0897D684;
L_0897D684:
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-8));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(616), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-17));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(646), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(597))))));
    ctx.gpr[5] = (0u + static_cast<std::uint32_t>(-65));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(1509))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(597), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-9));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(685), static_cast<std::uint8_t>(0u));
    ctx.gpr[4] = (ctx.gpr[5] & ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(1509), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D6D8;
    }
L_0897D6D8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D6F0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D6F0u) goto L_0897D6F0;
    return;
L_0897D6F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7188)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7188), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D70C;
    }
L_0897D70C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D724u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D724u) goto L_0897D724;
    return;
L_0897D724:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7184)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7184), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D740;
    }
L_0897D740:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7180)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7180), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D758;
    }
L_0897D758:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7172)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7172), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D770;
    }
L_0897D770:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D788u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D788u) goto L_0897D788;
    return;
L_0897D788:
    ctx.gpr[31] = (0x0897D790u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 193u, 0x08844FE4u>(ctx, &aot_mem) && ctx.pc == 0x0897D790u) goto L_0897D790;
    return;
L_0897D790:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D798;
    }
L_0897D798:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D7B4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D7B4u) goto L_0897D7B4;
    return;
L_0897D7B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x0897D7C0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 214u, 0x088450D4u>(ctx, &aot_mem) && ctx.pc == 0x0897D7C0u) goto L_0897D7C0;
    return;
L_0897D7C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D7C8;
    }
L_0897D7C8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D7E4u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D7E4u) goto L_0897D7E4;
    return;
L_0897D7E4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x0897D7F0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 219u, 0x08845118u>(ctx, &aot_mem) && ctx.pc == 0x0897D7F0u) goto L_0897D7F0;
    return;
L_0897D7F0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D7F8;
    }
L_0897D7F8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D810u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D810u) goto L_0897D810;
    return;
L_0897D810:
    ctx.gpr[31] = (0x0897D818u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 194u, 0x08844FF8u>(ctx, &aot_mem) && ctx.pc == 0x0897D818u) goto L_0897D818;
    return;
L_0897D818:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D820;
    }
L_0897D820:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D838u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D838u) goto L_0897D838;
    return;
L_0897D838:
    ctx.gpr[31] = (0x0897D840u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 199u, 0x0884502Cu>(ctx, &aot_mem) && ctx.pc == 0x0897D840u) goto L_0897D840;
    return;
L_0897D840:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D848;
    }
L_0897D848:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D860u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D860u) goto L_0897D860;
    return;
L_0897D860:
    ctx.gpr[31] = (0x0897D868u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 207u, 0x08845080u>(ctx, &aot_mem) && ctx.pc == 0x0897D868u) goto L_0897D868;
    return;
L_0897D868:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D870;
    }
L_0897D870:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897D888u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D888u) goto L_0897D888;
    return;
L_0897D888:
    ctx.gpr[31] = (0x0897D890u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 212u, 0x088450B4u>(ctx, &aot_mem) && ctx.pc == 0x0897D890u) goto L_0897D890;
    return;
L_0897D890:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D898;
    }
L_0897D898:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7132)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7132), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D8B0;
    }
L_0897D8B0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D8CCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D8CCu) goto L_0897D8CC;
    return;
L_0897D8CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x0897D8D8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 228u, 0x088451ACu>(ctx, &aot_mem) && ctx.pc == 0x0897D8D8u) goto L_0897D8D8;
    return;
L_0897D8D8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D8E0;
    }
L_0897D8E0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D8FCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D8FCu) goto L_0897D8FC;
    return;
L_0897D8FC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x0897D908u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 223u, 0x08845168u>(ctx, &aot_mem) && ctx.pc == 0x0897D908u) goto L_0897D908;
    return;
L_0897D908:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D910;
    }
L_0897D910:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D92Cu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D92Cu) goto L_0897D92C;
    return;
L_0897D92C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[31] = (0x0897D938u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    if (rt.invoke_chained_direct<&recomp_unit_0016_entry, 16u, 221u, 0x08845140u>(ctx, &aot_mem) && ctx.pc == 0x0897D938u) goto L_0897D938;
    return;
L_0897D938:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897D940;
    }
L_0897D940:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897D958u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897D958u) goto L_0897D958;
    return;
L_0897D958:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897D968u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0897D968u) goto L_0897D968;
    return;
L_0897D968:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0897D9E8;
      }
      goto L_0897D974;
    }
L_0897D974:
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 46u);
    { const bool branch_taken = ctx.gpr[6] == ctx.gpr[5];
    ctx.gpr[6] = (2269u << 16u);
      if (branch_taken) {
          goto L_0897D9A0;
      }
      goto L_0897D98C;
    }
L_0897D98C:
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (0u | 47u);
    { const bool branch_taken = ctx.gpr[6] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897D9C8;
      }
      goto L_0897D9A0;
    }
L_0897D9A0:
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(424))))));
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[31] = (0x0897D9B8u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 673u, 0x0887BBB8u>(ctx, &aot_mem) && ctx.pc == 0x0897D9B8u) goto L_0897D9B8;
    return;
L_0897D9B8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897D9F4;
      }
      goto L_0897D9C0;
    }
L_0897D9C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0897D9F4;
      }
      goto L_0897D9C8;
    }
L_0897D9C8:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(424))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897D9F4;
      }
      goto L_0897D9E0;
    }
L_0897D9E0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 1u);
      if (branch_taken) {
          goto L_0897D9F4;
      }
      goto L_0897D9E8;
    }
L_0897D9E8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0897D9F4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24528));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x0897D9F4u) goto L_0897D9F4;
    return;
L_0897D9F4:
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
          goto L_0897DA20;
      }
      goto L_0897DA18;
    }
L_0897DA18:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0897DA70;
      }
      goto L_0897DA20;
    }
L_0897DA20:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897DA50;
    }
    goto L_0897DA3C;
L_0897DA3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897DA70;
      }
      goto L_0897DA50;
    }
L_0897DA50:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DA70;
      }
      goto L_0897DA6C;
    }
L_0897DA6C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897DA70;
L_0897DA70:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897DA78;
    }
L_0897DA78:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897DA90u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897DA90u) goto L_0897DA90;
    return;
L_0897DA90:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897DAA0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0897DAA0u) goto L_0897DAA0;
    return;
L_0897DAA0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DAB8;
      }
      goto L_0897DAAC;
    }
L_0897DAAC:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(424), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897DAC4;
      }
      goto L_0897DAB8;
    }
L_0897DAB8:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0897DAC4u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24468));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 375u, 0x08AF99BCu>(ctx, &aot_mem) && ctx.pc == 0x0897DAC4u) goto L_0897DAC4;
    return;
L_0897DAC4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897DACC;
    }
L_0897DACC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897DAE8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897DAE8u) goto L_0897DAE8;
    return;
L_0897DAE8:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0897DAF8u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0897DAF8u) goto L_0897DAF8;
    return;
L_0897DAF8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(144), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(148), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(152), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(144));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(128));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897DB3C;
    }
L_0897DB3C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897DB58u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897DB58u) goto L_0897DB58;
    return;
L_0897DB58:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0897DB68u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0897DB68u) goto L_0897DB68;
    return;
L_0897DB68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (16968u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(160), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(164), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = ctx.fpr[14] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(168), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(160));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[2] + static_cast<std::uint32_t>(112));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897DBAC;
    }
L_0897DBAC:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0897DBC8u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897DBC8u) goto L_0897DBC8;
    return;
L_0897DBC8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897DBD8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0897DBD8u) goto L_0897DBD8;
    return;
L_0897DBD8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897DBF8;
      }
      goto L_0897DBE4;
    }
L_0897DBE4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (1024u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897DC0C;
      }
      goto L_0897DBF8;
    }
L_0897DBF8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (64512u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0897DC0C;
L_0897DC0C:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DC34;
      }
      goto L_0897DC20;
    }
L_0897DC20:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (2048u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897DC48;
      }
      goto L_0897DC34;
    }
L_0897DC34:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (63488u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0897DC48;
L_0897DC48:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DC70;
      }
      goto L_0897DC5C;
    }
L_0897DC5C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897DC84;
      }
      goto L_0897DC70;
    }
L_0897DC70:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (65532u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0897DC84;
L_0897DC84:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DCAC;
      }
      goto L_0897DC98;
    }
L_0897DC98:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897DCC0;
      }
      goto L_0897DCAC;
    }
L_0897DCAC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (61440u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0897DCC0;
L_0897DCC0:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897DCE8;
      }
      goto L_0897DCD4;
    }
L_0897DCD4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (8192u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897DCFC;
      }
      goto L_0897DCE8;
    }
L_0897DCE8:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (57344u << 16u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    goto L_0897DCFC;
L_0897DCFC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897DD04;
    }
L_0897DD04:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2232u << 16u);
      if (branch_taken) {
          goto L_0897DD58;
      }
      goto L_0897DD3C;
    }
L_0897DD3C:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(340)));
    ctx.gpr[4] = (2269u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[5] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897DD64;
      }
      goto L_0897DD58;
    }
L_0897DD58:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[5] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    goto L_0897DD64;
L_0897DD64:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897DD74u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0897DD74u) goto L_0897DD74;
    return;
L_0897DD74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897DD7C;
    }
L_0897DD7C:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897DD94u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897DD94u) goto L_0897DD94;
    return;
L_0897DD94:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(127)));
    ctx.gpr[5] = (ctx.gpr[5] << 4u);
    ctx.gpr[6] = (0u + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 3u);
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[5] = (ctx.gpr[6] + ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(428))))));
    ctx.gpr[5] = (0u | 4u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0897DDE4;
      }
      goto L_0897DDCC;
    }
L_0897DDCC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2232u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(340), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897DDE4;
L_0897DDE4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897DDEC;
    }
L_0897DDEC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897DE04u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897DE04u) goto L_0897DE04;
    return;
L_0897DE04:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0897DE14u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0897DE14u) goto L_0897DE14;
    return;
L_0897DE14:
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.set_vfpu_scalar_bits_ct<0u>(ctx.gpr[4]);
    { const float vfpu_constant = std::bit_cast<float>(0x3FC90FDBu);
      const float vfpu_value[4]{vfpu_constant, vfpu_constant, vfpu_constant, vfpu_constant};
      ctx.write_vfpu_vector_with_destination_prefix_ct<32u, 1u>(vfpu_value); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] < -1.0f ? -1.0f : (vfpu_s[i] > 1.0f ? 1.0f : vfpu_s[i]);
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<0u, 1u, 0u>(vfpu_s);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = std::asin(vfpu_s[i]) * 0.63661977236758134308f;
      ctx.write_vfpu_vector_with_destination_prefix_ct<64u, 1u>(vfpu_d); }
    { float vfpu_s[4]{}, vfpu_t[4]{}, vfpu_d[4]{};
      ctx.read_vfpu_vector_with_source_prefix_ct<64u, 1u, 0u>(vfpu_s);
      ctx.read_vfpu_vector_with_source_prefix_ct<32u, 1u, 1u>(vfpu_t);
      for (std::uint32_t i = 0; i < 1u; ++i) vfpu_d[i] = vfpu_s[i] * vfpu_t[i];
      ctx.write_vfpu_vector_with_destination_prefix_ct<0u, 1u>(vfpu_d); }
    ctx.gpr[4] = (ctx.vfpu_scalar_bits_ct<0u>());
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(16)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.fpr[15] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[15])) && ctx.fpr[12] == ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(20)));
      if (branch_taken) {
          goto L_0897DE94;
      }
      goto L_0897DE78;
    }
L_0897DE78:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897DE94;
      }
      goto L_0897DE8C;
    }
L_0897DE8C:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0897DEA0;
      }
      goto L_0897DE94;
    }
L_0897DE94:
    ctx.gpr[31] = (0x0897DE9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DE9Cu) goto L_0897DE9C;
    return;
L_0897DE9C:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0897DEA0;
L_0897DEA0:
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (16457u << 16u);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[14];
    ctx.fpr[15] = std::bit_cast<float>(0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(8)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[12]) ^ 0x80000000u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[15])) && ctx.fpr[12] == ctx.fpr[15]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_0897DEF8;
      }
      goto L_0897DEDC;
    }
L_0897DEDC:
    ctx.fpr[14] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[13]) || std::isnan(ctx.fpr[14])) && ctx.fpr[13] == ctx.fpr[14]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897DEF8;
      }
      goto L_0897DEF0;
    }
L_0897DEF0:
    { const bool branch_taken = 0u == 0u;
    ctx.fpr[12] = std::bit_cast<float>(0u);
      if (branch_taken) {
          goto L_0897DF04;
      }
      goto L_0897DEF8;
    }
L_0897DEF8:
    ctx.gpr[31] = (0x0897DF00u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0117_entry, 117u, 282u, 0x089D962Cu>(ctx, &aot_mem) && ctx.pc == 0x0897DF00u) goto L_0897DF00;
    return;
L_0897DF00:
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0897DF04;
L_0897DF04:
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
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897DF4C;
      }
      goto L_0897DF34;
    }
L_0897DF34:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897DF7C;
      }
      goto L_0897DF4C;
    }
L_0897DF4C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897DF7C;
      }
      goto L_0897DF68;
    }
L_0897DF68:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897DF7C;
L_0897DF7C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897DFAC;
      }
      goto L_0897DF94;
    }
L_0897DF94:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897DFDC;
      }
      goto L_0897DFAC;
    }
L_0897DFAC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897DFDC;
      }
      goto L_0897DFC8;
    }
L_0897DFC8:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897DFDC;
L_0897DFDC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897E00C;
      }
      goto L_0897DFF4;
    }
L_0897DFF4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] + ctx.fpr[13];
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897E03C;
      }
      goto L_0897E00C;
    }
L_0897E00C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    if (ctx.fpu_condition()) {
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
        goto L_0897E040;
    }
    goto L_0897E028;
L_0897E028:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    ctx.gpr[4] = (17332u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] - ctx.fpr[13];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897E03C;
L_0897E03C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    goto L_0897E040;
L_0897E040:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(4), ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(8), ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897E06Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0897E06Cu) goto L_0897E06C;
    return;
L_0897E06C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E074;
    }
L_0897E074:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897E090u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897E090u) goto L_0897E090;
    return;
L_0897E090:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0897E0A0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0897E0A0u) goto L_0897E0A0;
    return;
L_0897E0A0:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (16457u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 4059u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (17204u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = ctx.fpr[12] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    { const float fs = ctx.fpr[16]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.fpr[14] = ctx.fpr[14] / ctx.fpr[15];
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(48));
    { const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(176));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    ctx.gpr[31] = (0x0897E100u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 492u, 0x08A05FFCu>(ctx, &aot_mem) && ctx.pc == 0x0897E100u) goto L_0897E100;
    return;
L_0897E100:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(176)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(180)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(184)));
    ctx.gpr[31] = (0x0897E114u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 515u, 0x08A06668u>(ctx, &aot_mem) && ctx.pc == 0x0897E114u) goto L_0897E114;
    return;
L_0897E114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E11C;
    }
L_0897E11C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25529)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0897E140;
      }
      goto L_0897E12C;
    }
L_0897E12C:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(-25530)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E140;
      }
      goto L_0897E13C;
    }
L_0897E13C:
    ctx.gpr[4] = (0u | 1u);
    goto L_0897E140;
L_0897E140:
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
          goto L_0897E16C;
      }
      goto L_0897E164;
    }
L_0897E164:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897E1BC;
      }
      goto L_0897E16C;
    }
L_0897E16C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897E19C;
    }
    goto L_0897E188;
L_0897E188:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897E1BC;
      }
      goto L_0897E19C;
    }
L_0897E19C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E1BC;
      }
      goto L_0897E1B8;
    }
L_0897E1B8:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897E1BC;
L_0897E1BC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E1C4;
    }
L_0897E1C4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897E1DCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897E1DCu) goto L_0897E1DC;
    return;
L_0897E1DC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897E1ECu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0897E1ECu) goto L_0897E1EC;
    return;
L_0897E1EC:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.gpr[6] = (0u | 174u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(224));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[5]);
    ctx.gpr[5] = (16256u << 16u);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[5] = (0u | 12u);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0897E21Cu);
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E21Cu) goto L_0897E21C;
    return;
L_0897E21C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(92)));
    ctx.fpr[12] = std::bit_cast<float>(std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    ctx.gpr[5] = (0u | 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(224));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] + ctx.gpr[6]);
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0897E240u);
    ctx.gpr[6] = (0u | 170u);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E240u) goto L_0897E240;
    return;
L_0897E240:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E248;
    }
L_0897E248:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897E260u);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897E260u) goto L_0897E260;
    return;
L_0897E260:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897E270u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0897E270u) goto L_0897E270;
    return;
L_0897E270:
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736), 0u);
      if (branch_taken) {
          goto L_0897E2C0;
      }
      goto L_0897E27C;
    }
L_0897E27C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(640)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E2C0;
      }
      goto L_0897E288;
    }
L_0897E288:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(640)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (ctx.gpr[5] & 14u);
    ctx.gpr[5] = (ctx.gpr[5] ^ 6u);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E2C0;
      }
      goto L_0897E2A8;
    }
L_0897E2A8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(640)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897E2B8u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 472u, 0x08AFDFC8u>(ctx, &aot_mem) && ctx.pc == 0x0897E2B8u) goto L_0897E2B8;
    return;
L_0897E2B8:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    goto L_0897E2C0;
L_0897E2C0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897E2D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0897E2D0u) goto L_0897E2D0;
    return;
L_0897E2D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E2D8;
    }
L_0897E2D8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897E2F0u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897E2F0u) goto L_0897E2F0;
    return;
L_0897E2F0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E310;
      }
      goto L_0897E2FC;
    }
L_0897E2FC:
    ctx.gpr[5] = (2232u << 16u);
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(13216));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897E31C;
      }
      goto L_0897E310;
    }
L_0897E310:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(13216));
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(123), static_cast<std::uint8_t>(0u));
    goto L_0897E31C;
L_0897E31C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E324;
    }
L_0897E324:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897E33Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897E33Cu) goto L_0897E33C;
    return;
L_0897E33C:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897E34Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 825u, 0x08AFB8DCu>(ctx, &aot_mem) && ctx.pc == 0x0897E34Cu) goto L_0897E34C;
    return;
L_0897E34C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(68)));
    ctx.gpr[5] = (512u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(68), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E364;
    }
L_0897E364:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 5u);
    ctx.gpr[31] = (0x0897E37Cu);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897E37Cu) goto L_0897E37C;
    return;
L_0897E37C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[18] = (0u + static_cast<std::uint32_t>(-1));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0897E390;
L_0897E390:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897E4B8;
      }
      goto L_0897E398;
    }
L_0897E398:
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[18] != ctx.gpr[4];
    ctx.gpr[4] = (2229u << 16u);
      if (branch_taken) {
          goto L_0897E4B8;
      }
      goto L_0897E3A4;
    }
L_0897E3A4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[17] << 5u);
      if (branch_taken) {
          goto L_0897E3C8;
      }
      goto L_0897E3C0;
    }
L_0897E3C0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[19] = (0u | 0u);
      if (branch_taken) {
          goto L_0897E3F4;
      }
      goto L_0897E3C8;
    }
L_0897E3C8:
    ctx.gpr[5] = (0u - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 3u);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] << 1u);
    ctx.gpr[5] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[19] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[19] = (ctx.gpr[4] + ctx.gpr[19]);
    goto L_0897E3F4;
L_0897E3F4:
    { const bool branch_taken = ctx.gpr[19] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E4B0;
      }
      goto L_0897E3FC;
    }
L_0897E3FC:
    ctx.gpr[31] = (0x0897E404u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0897E404u) goto L_0897E404;
    return;
L_0897E404:
    ctx.gpr[4] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[2] == ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897E424;
      }
      goto L_0897E410;
    }
L_0897E410:
    ctx.gpr[31] = (0x0897E418u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0897E418u) goto L_0897E418;
    return;
L_0897E418:
    ctx.gpr[4] = (0u | 2u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897E4B0;
      }
      goto L_0897E424;
    }
L_0897E424:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(616)));
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897E4B0;
      }
      goto L_0897E43C;
    }
L_0897E43C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(88))))));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0897E464;
      }
      goto L_0897E454;
    }
L_0897E454:
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) >= 0;
    // nop
      if (branch_taken) {
          goto L_0897E4B0;
      }
      goto L_0897E464;
    }
L_0897E464:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[19] + static_cast<std::uint32_t>(596)));
    ctx.gpr[5] = (0u | 1u);
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897E4B0;
      }
      goto L_0897E474;
    }
L_0897E474:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(12)));
    ctx.gpr[31] = (0x0897E494u);
    ctx.gpr[4] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 46u, 0x08A287F8u>(ctx, &aot_mem) && ctx.pc == 0x0897E494u) goto L_0897E494;
    return;
L_0897E494:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E4B0;
      }
      goto L_0897E49C;
    }
L_0897E49C:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    ctx.gpr[31] = (0x0897E4ACu);
    ctx.gpr[5] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 509u, 0x08AFE25Cu>(ctx, &aot_mem) && ctx.pc == 0x0897E4ACu) goto L_0897E4AC;
    return;
L_0897E4AC:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    goto L_0897E4B0;
L_0897E4B0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
      if (branch_taken) {
          goto L_0897E390;
      }
      goto L_0897E4B8;
    }
L_0897E4B8:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[18]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897E4D0u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0897E4D0u) goto L_0897E4D0;
    return;
L_0897E4D0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E4D8;
    }
L_0897E4D8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0897E4E4u);
    ctx.gpr[4] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0164_entry, 164u, 513u, 0x08A96408u>(ctx, &aot_mem) && ctx.pc == 0x0897E4E4u) goto L_0897E4E4;
    return;
L_0897E4E4:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(134)));
    ctx.gpr[4] = (ctx.gpr[4] & 32u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E4F8;
      }
      goto L_0897E4F4;
    }
L_0897E4F4:
    ctx.gpr[17] = (0u | 1u);
    goto L_0897E4F8;
L_0897E4F8:
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
          goto L_0897E524;
      }
      goto L_0897E51C;
    }
L_0897E51C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0897E574;
      }
      goto L_0897E524;
    }
L_0897E524:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897E554;
    }
    goto L_0897E540;
L_0897E540:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897E574;
      }
      goto L_0897E554;
    }
L_0897E554:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E574;
      }
      goto L_0897E570;
    }
L_0897E570:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897E574;
L_0897E574:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E57C;
    }
L_0897E57C:
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897E5BC;
    }
    goto L_0897E58C;
L_0897E58C:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0897E598u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0897E598u) goto L_0897E598;
    return;
L_0897E598:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E5B0;
      }
      goto L_0897E5A4;
    }
L_0897E5A4:
    ctx.gpr[31] = (0x0897E5ACu);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0897E5ACu) goto L_0897E5AC;
    return;
L_0897E5AC:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0897E5B0;
L_0897E5B0:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0897E5BC;
L_0897E5BC:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0897E5D4u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0897E5D4u) goto L_0897E5D4;
    return;
L_0897E5D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[4]);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897E600u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897E600u) goto L_0897E600;
    return;
L_0897E600:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897E614u);
    ctx.gpr[6] = (ctx.gpr[6] & 65535u);
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 250u, 0x08879568u>(ctx, &aot_mem) && ctx.pc == 0x0897E614u) goto L_0897E614;
    return;
L_0897E614:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E61C;
    }
L_0897E61C:
    ctx.gpr[4] = (0u | 0u);
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
          goto L_0897E64C;
      }
      goto L_0897E644;
    }
L_0897E644:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897E69C;
      }
      goto L_0897E64C;
    }
L_0897E64C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897E67C;
    }
    goto L_0897E668;
L_0897E668:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897E69C;
      }
      goto L_0897E67C;
    }
L_0897E67C:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E69C;
      }
      goto L_0897E698;
    }
L_0897E698:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897E69C;
L_0897E69C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E6A4;
    }
L_0897E6A4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897E6B4u);
    ctx.gpr[6] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0897E6B4u) goto L_0897E6B4;
    return;
L_0897E6B4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[2] - ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6548), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E6D0;
    }
L_0897E6D0:
    ctx.gpr[31] = (0x0897E6D8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0029_entry, 29u, 281u, 0x088799D8u>(ctx, &aot_mem) && ctx.pc == 0x0897E6D8u) goto L_0897E6D8;
    return;
L_0897E6D8:
    ctx.gpr[4] = (0u | 2u);
    ctx.gpr[31] = (0x0897E6E4u);
    ctx.gpr[5] = (0u | 2u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 485u, 0x08986E30u>(ctx, &aot_mem) && ctx.pc == 0x0897E6E4u) goto L_0897E6E4;
    return;
L_0897E6E4:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-6616)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-6612), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E6FC;
    }
L_0897E6FC:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 6u);
    ctx.gpr[31] = (0x0897E714u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897E714u) goto L_0897E714;
    return;
L_0897E714:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897E804;
      }
      goto L_0897E728;
    }
L_0897E728:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_0897E750;
      }
      goto L_0897E748;
    }
L_0897E748:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0897E76C;
      }
      goto L_0897E750;
    }
L_0897E750:
    ctx.gpr[5] = (0u + ctx.gpr[4]);
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] << 4u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15028)));
    ctx.gpr[17] = (ctx.gpr[5] + ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_0897E76C;
L_0897E76C:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E7F8;
      }
      goto L_0897E774;
    }
L_0897E774:
    ctx.gpr[31] = (0x0897E77Cu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0014_entry, 14u, 244u, 0x0883D410u>(ctx, &aot_mem) && ctx.pc == 0x0897E77Cu) goto L_0897E77C;
    return;
L_0897E77C:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E7F8;
      }
      goto L_0897E784;
    }
L_0897E784:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897E7ACu);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28888u>(ctx, &aot_mem) && ctx.pc == 0x0897E7ACu) goto L_0897E7AC;
    return;
L_0897E7AC:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E7F8;
      }
      goto L_0897E7B4;
    }
L_0897E7B4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0897E7CCu);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E7CCu) goto L_0897E7CC;
    return;
L_0897E7CC:
    ctx.gpr[31] = (0x0897E7D4u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x0897E7D4u) goto L_0897E7D4;
    return;
L_0897E7D4:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E7F8;
      }
      goto L_0897E7DC;
    }
L_0897E7DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0897E7F8u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E7F8u) goto L_0897E7F8;
    return;
L_0897E7F8:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897E728;
      }
      goto L_0897E804;
    }
L_0897E804:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15024)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[16] = (ctx.gpr[4] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897E8FC;
      }
      goto L_0897E818;
    }
L_0897E818:
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15024)));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + ctx.gpr[16]);
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[4] = (ctx.gpr[4] & 128u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (ctx.gpr[16] << 5u);
      if (branch_taken) {
          goto L_0897E840;
      }
      goto L_0897E838;
    }
L_0897E838:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0897E858;
      }
      goto L_0897E840;
    }
L_0897E840:
    ctx.gpr[6] = (2229u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[4]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-15024)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[17] = (ctx.gpr[4] + ctx.gpr[17]);
    goto L_0897E858;
L_0897E858:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E8F0;
      }
      goto L_0897E860;
    }
L_0897E860:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(68)));
    ctx.gpr[4] = (ctx.gpr[4] & 14u);
    ctx.gpr[4] = (ctx.gpr[4] ^ 8u);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E8F0;
      }
      goto L_0897E87C;
    }
L_0897E87C:
    ctx.gpr[5] = (2269u << 16u);
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(4)));
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(8)));
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(12)));
    ctx.fpr[16] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[31] = (0x0897E8A4u);
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 57u, 0x08A28888u>(ctx, &aot_mem) && ctx.pc == 0x0897E8A4u) goto L_0897E8A4;
    return;
L_0897E8A4:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E8F0;
      }
      goto L_0897E8AC;
    }
L_0897E8AC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(64));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[6];
    ctx.gpr[31] = (0x0897E8C4u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[5]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E8C4u) goto L_0897E8C4;
    return;
L_0897E8C4:
    ctx.gpr[31] = (0x0897E8CCu);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 67u, 0x088C0528u>(ctx, &aot_mem) && ctx.pc == 0x0897E8CCu) goto L_0897E8CC;
    return;
L_0897E8CC:
    { const bool branch_taken = ctx.gpr[17] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E8F0;
      }
      goto L_0897E8D4;
    }
L_0897E8D4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(92)));
    ctx.gpr[5] = (0u | 3u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(24));
    ctx.gpr[6] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0))))));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    jump_target = ctx.gpr[7];
    ctx.gpr[31] = (0x0897E8F0u);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[6]);
    ctx.pc = jump_target;
    if (rt.invoke_chained_call(ctx, &aot_mem) && ctx.pc == 0x0897E8F0u) goto L_0897E8F0;
    return;
L_0897E8F0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[16] = (ctx.gpr[16] + static_cast<std::uint32_t>(-1));
      if (branch_taken) {
          goto L_0897E818;
      }
      goto L_0897E8FC;
    }
L_0897E8FC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E904;
    }
L_0897E904:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897E91Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897E91Cu) goto L_0897E91C;
    return;
L_0897E91C:
    ctx.gpr[31] = (0x0897E924u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0104_entry, 104u, 267u, 0x089A52CCu>(ctx, &aot_mem) && ctx.pc == 0x0897E924u) goto L_0897E924;
    return;
L_0897E924:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E92C;
    }
L_0897E92C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897E944u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897E944u) goto L_0897E944;
    return;
L_0897E944:
    ctx.gpr[31] = (0x0897E94Cu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0110_entry, 110u, 429u, 0x089BE244u>(ctx, &aot_mem) && ctx.pc == 0x0897E94Cu) goto L_0897E94C;
    return;
L_0897E94C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E954;
    }
L_0897E954:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E95C;
    }
L_0897E95C:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897E974u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897E974u) goto L_0897E974;
    return;
L_0897E974:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897E998;
      }
      goto L_0897E990;
    }
L_0897E990:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897E9E8;
      }
      goto L_0897E998;
    }
L_0897E998:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897E9C8;
    }
    goto L_0897E9B4;
L_0897E9B4:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897E9E8;
      }
      goto L_0897E9C8;
    }
L_0897E9C8:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897E9E8;
      }
      goto L_0897E9E4;
    }
L_0897E9E4:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897E9E8;
L_0897E9E8:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897E9F0;
    }
L_0897E9F0:
    ctx.gpr[5] = (2229u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[5] + static_cast<std::uint32_t>(27772)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0897EA04;
      }
      goto L_0897EA00;
    }
L_0897EA00:
    ctx.gpr[4] = (0u | 1u);
    goto L_0897EA04;
L_0897EA04:
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
          goto L_0897EA30;
      }
      goto L_0897EA28;
    }
L_0897EA28:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897EA80;
      }
      goto L_0897EA30;
    }
L_0897EA30:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897EA60;
    }
    goto L_0897EA4C;
L_0897EA4C:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897EA80;
      }
      goto L_0897EA60;
    }
L_0897EA60:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EA80;
      }
      goto L_0897EA7C;
    }
L_0897EA7C:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897EA80;
L_0897EA80:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897EA88;
    }
L_0897EA88:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[31] = (0x0897EA94u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 83u, 0x088A848Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EA94u) goto L_0897EA94;
    return;
L_0897EA94:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897EAACu);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0897EAACu) goto L_0897EAAC;
    return;
L_0897EAAC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897EAB4;
    }
L_0897EAB4:
    ctx.gpr[4] = (2226u << 16u);
    ctx.gpr[31] = (0x0897EAC0u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-24412));
    goto L_0897C860;
L_0897EAC0:
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(-29364), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897EAD0;
    }
L_0897EAD0:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (0u | 0u);
      if (branch_taken) {
          goto L_0897EAE8;
      }
      goto L_0897EAE0;
    }
L_0897EAE0:
    ctx.gpr[31] = (0x0897EAE8u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 519u, 0x08AFA45Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EAE8u) goto L_0897EAE8;
    return;
L_0897EAE8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20652)));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EB00;
      }
      goto L_0897EAFC;
    }
L_0897EAFC:
    ctx.gpr[17] = (0u | 1u);
    goto L_0897EB00;
L_0897EB00:
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
          goto L_0897EB2C;
      }
      goto L_0897EB24;
    }
L_0897EB24:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[17]));
      if (branch_taken) {
          goto L_0897EB7C;
      }
      goto L_0897EB2C;
    }
L_0897EB2C:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    ctx.gpr[6] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[4] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[6]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 9 ? 1u : 0u);
    if (ctx.gpr[4] == 0u) {
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897EB5C;
    }
    goto L_0897EB48;
L_0897EB48:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] & ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897EB7C;
      }
      goto L_0897EB5C;
    }
L_0897EB5C:
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[17] | ctx.gpr[4]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[5]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EB7C;
      }
      goto L_0897EB78;
    }
L_0897EB78:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897EB7C;
L_0897EB7C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897EB84;
    }
L_0897EB84:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(48)));
    ctx.gpr[5] = (ctx.gpr[5] & 2u);
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0897EBA8;
      }
      goto L_0897EBA4;
    }
L_0897EBA4:
    ctx.gpr[4] = (0u | 1u);
    goto L_0897EBA8;
L_0897EBA8:
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
          goto L_0897EBD4;
      }
      goto L_0897EBCC;
    }
L_0897EBCC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897EC24;
      }
      goto L_0897EBD4;
    }
L_0897EBD4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897EC04;
    }
    goto L_0897EBF0;
L_0897EBF0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897EC24;
      }
      goto L_0897EC04;
    }
L_0897EC04:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EC24;
      }
      goto L_0897EC20;
    }
L_0897EC20:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897EC24;
L_0897EC24:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897EC2C;
    }
L_0897EC2C:
    ctx.gpr[4] = (2232u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(5992));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(100)));
    ctx.gpr[31] = (0x0897EC40u);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(52)));
    if (rt.invoke_chained_direct<&recomp_unit_0041_entry, 41u, 46u, 0x088A8288u>(ctx, &aot_mem) && ctx.pc == 0x0897EC40u) goto L_0897EC40;
    return;
L_0897EC40:
    ctx.gpr[4] = (2269u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736), ctx.gpr[2]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897EC58u);
    ctx.gpr[6] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0897EC58u) goto L_0897EC58;
    return;
L_0897EC58:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897EC60;
    }
L_0897EC60:
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7624)));
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (0u | 0u);
      if (branch_taken) {
          goto L_0897EC74;
      }
      goto L_0897EC70;
    }
L_0897EC70:
    ctx.gpr[4] = (0u | 1u);
    goto L_0897EC74;
L_0897EC74:
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
          goto L_0897ECA0;
      }
      goto L_0897EC98;
    }
L_0897EC98:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897ECF0;
      }
      goto L_0897ECA0;
    }
L_0897ECA0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897ECD0;
    }
    goto L_0897ECBC;
L_0897ECBC:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897ECF0;
      }
      goto L_0897ECD0;
    }
L_0897ECD0:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897ECF0;
      }
      goto L_0897ECEC;
    }
L_0897ECEC:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897ECF0;
L_0897ECF0:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897ECF8;
    }
L_0897ECF8:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897ED14u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897ED14u) goto L_0897ED14;
    return;
L_0897ED14:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x0897ED3Cu);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0897ED3Cu) goto L_0897ED3C;
    return;
L_0897ED3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6916), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6916));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897ED6C;
    }
L_0897ED6C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 4u);
    ctx.gpr[31] = (0x0897ED88u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897ED88u) goto L_0897ED88;
    return;
L_0897ED88:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(8)));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (ctx.gpr[29] + static_cast<std::uint32_t>(112));
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[31] = (0x0897EDB0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (rt.invoke_chained_direct<&recomp_unit_0023_entry, 23u, 438u, 0x088629CCu>(ctx, &aot_mem) && ctx.pc == 0x0897EDB0u) goto L_0897EDB0;
    return;
L_0897EDB0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(0)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6912), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(1)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-6912));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(1), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(2)));
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(2), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[2] + static_cast<std::uint32_t>(3)));
    ctx.gpr[2] = (0u | 0u);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(3), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897EDE0;
    }
L_0897EDE0:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897EDF8u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897EDF8u) goto L_0897EDF8;
    return;
L_0897EDF8:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897EE08u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0897EE08u) goto L_0897EE08;
    return;
L_0897EE08:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(848));
    ctx.gpr[5] = (0u | 1u);
    ctx.gpr[31] = (0x0897EE1Cu);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0137_entry, 137u, 210u, 0x08A2928Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EE1Cu) goto L_0897EE1C;
    return;
L_0897EE1C:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (0u | 18u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897EE30u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0001_entry, 1u, 443u, 0x0880B64Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EE30u) goto L_0897EE30;
    return;
L_0897EE30:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897EE38;
    }
L_0897EE38:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(116));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(116), ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897EE50u);
    ctx.gpr[6] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 532u, 0x08957868u>(ctx, &aot_mem) && ctx.pc == 0x0897EE50u) goto L_0897EE50;
    return;
L_0897EE50:
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(31984)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[17] = (ctx.gpr[2] | 0u);
      if (branch_taken) {
          goto L_0897EE84;
      }
      goto L_0897EE60;
    }
L_0897EE60:
    ctx.gpr[4] = (0u | 1u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    ctx.gpr[5] = (2231u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(31984), ctx.gpr[4]);
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(32000));
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(32000), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(4), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(8), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897EE84;
L_0897EE84:
    ctx.gpr[18] = (2269u << 16u);
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 7u);
    ctx.gpr[31] = (0x0897EEA0u);
    ctx.gpr[7] = (ctx.gpr[19] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897EEA0u) goto L_0897EEA0;
    return;
L_0897EEA0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-2736)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[4] = (49864u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
      if (branch_taken) {
          goto L_0897EEDC;
      }
      goto L_0897EECC;
    }
L_0897EECC:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[31] = (0x0897EED8u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    if (rt.invoke_chained_direct<&recomp_unit_0047_entry, 47u, 448u, 0x088C2E78u>(ctx, &aot_mem) && ctx.pc == 0x0897EED8u) goto L_0897EED8;
    return;
L_0897EED8:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), std::bit_cast<std::uint32_t>(ctx.fpr[0]));
    goto L_0897EEDC;
L_0897EEDC:
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(12)));
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[5] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[31] = (0x0897EEF8u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32000));
    if (rt.invoke_chained_direct<&recomp_unit_0072_entry, 72u, 563u, 0x0892748Cu>(ctx, &aot_mem) && ctx.pc == 0x0897EEF8u) goto L_0897EEF8;
    return;
L_0897EEF8:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897EF14;
      }
      goto L_0897EF00;
    }
L_0897EF00:
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(-1));
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897EF14u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0008_entry, 8u, 299u, 0x08825D78u>(ctx, &aot_mem) && ctx.pc == 0x0897EF14u) goto L_0897EF14;
    return;
L_0897EF14:
    ctx.gpr[16] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    ctx.gpr[4] = (16179u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 13107u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    { const float fs = ctx.fpr[20]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.gpr[4] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    ctx.gpr[9] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24)));
    ctx.gpr[9] = (ctx.gpr[9] & 255u);
    ctx.fpr[13] = std::bit_cast<float>(0u);
    ctx.gpr[2] = (0u | 1u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[3] = (0u | 1u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    ctx.gpr[5] = (0u | 5u);
    ctx.gpr[6] = (ctx.gpr[16] | 0u);
    ctx.gpr[10] = (0u | 255u);
    ctx.gpr[11] = (0u | 128u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[2]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[3]);
    ctx.gpr[31] = (0x0897EF84u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 118u, 0x088299B8u>(ctx, &aot_mem) && ctx.pc == 0x0897EF84u) goto L_0897EF84;
    return;
L_0897EF84:
    { const std::uint32_t vfpu_address = ctx.gpr[16] + static_cast<std::uint32_t>(0);
      float vfpu_value[4]{
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 0u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 4u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 8u)),
        std::bit_cast<float>(aot_mem.aot_load32(vfpu_address + 12u))};
      ctx.write_vfpu_vector_ct<0u, 4u>(vfpu_value); }
    ctx.gpr[4] = (2231u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(32000));
    { float vfpu_value[4]{}; ctx.read_vfpu_vector_ct<0u, 4u>(vfpu_value);
      const std::uint32_t vfpu_address = ctx.gpr[4] + static_cast<std::uint32_t>(0);
      aot_mem.aot_store32(vfpu_address + 0u, std::bit_cast<std::uint32_t>(vfpu_value[0]));
      aot_mem.aot_store32(vfpu_address + 4u, std::bit_cast<std::uint32_t>(vfpu_value[1]));
      aot_mem.aot_store32(vfpu_address + 8u, std::bit_cast<std::uint32_t>(vfpu_value[2]));
      aot_mem.aot_store32(vfpu_address + 12u, std::bit_cast<std::uint32_t>(vfpu_value[3])); }
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897EF9C;
    }
L_0897EF9C:
    ctx.gpr[4] = (2276u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-27616)));
    ctx.gpr[6] = (2269u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-27616));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(-2736), ctx.gpr[5]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(4), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[6] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[31] = (0x0897EFD4u);
    ctx.gpr[6] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0084_entry, 84u, 640u, 0x08957EB8u>(ctx, &aot_mem) && ctx.pc == 0x0897EFD4u) goto L_0897EFD4;
    return;
L_0897EFD4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897EFDC;
    }
L_0897EFDC:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7096), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897F028;
    }
    goto L_0897EFF8;
L_0897EFF8:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0897F004u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0897F004u) goto L_0897F004;
    return;
L_0897F004:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F01C;
      }
      goto L_0897F010;
    }
L_0897F010:
    ctx.gpr[31] = (0x0897F018u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0897F018u) goto L_0897F018;
    return;
L_0897F018:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0897F01C;
L_0897F01C:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0897F028;
L_0897F028:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0897F040u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0897F040u) goto L_0897F040;
    return;
L_0897F040:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 0u);
    ctx.gpr[31] = (0x0897F060u);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x0897F060u) goto L_0897F060;
    return;
L_0897F060:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F068;
    }
L_0897F068:
    ctx.gpr[4] = (0u | 1u);
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-7096), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (2227u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(24700)));
    if (ctx.gpr[4] != 0u) {
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
        goto L_0897F0B4;
    }
    goto L_0897F084;
L_0897F084:
    ctx.gpr[17] = (0u | 0u);
    ctx.gpr[31] = (0x0897F090u);
    ctx.gpr[4] = (0u | 2452u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0897F090u) goto L_0897F090;
    return;
L_0897F090:
    ctx.gpr[18] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[18] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F0A8;
      }
      goto L_0897F09C;
    }
L_0897F09C:
    ctx.gpr[31] = (0x0897F0A4u);
    ctx.gpr[4] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 389u, 0x08913920u>(ctx, &aot_mem) && ctx.pc == 0x0897F0A4u) goto L_0897F0A4;
    return;
L_0897F0A4:
    ctx.gpr[17] = (ctx.gpr[18] | 0u);
    goto L_0897F0A8;
L_0897F0A8:
    ctx.gpr[4] = (2227u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(24700), ctx.gpr[17]);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    goto L_0897F0B4;
L_0897F0B4:
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-29316)));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[5] = (ctx.gpr[4] + ctx.gpr[5]);
    ctx.gpr[31] = (0x0897F0CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(24700)));
    if (rt.invoke_chained_direct<&recomp_unit_0067_entry, 67u, 409u, 0x08913AD4u>(ctx, &aot_mem) && ctx.pc == 0x0897F0CCu) goto L_0897F0CC;
    return;
L_0897F0CC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(24)));
    ctx.gpr[4] = (ctx.gpr[2] | 0u);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    ctx.gpr[5] = (0u | 0u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F0ECu);
    ctx.gpr[7] = (0u | 1u);
    if (rt.invoke_chained_direct<&recomp_unit_0096_entry, 96u, 440u, 0x08986AE0u>(ctx, &aot_mem) && ctx.pc == 0x0897F0ECu) goto L_0897F0EC;
    return;
L_0897F0EC:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F0F4;
    }
L_0897F0F4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F10Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897F10Cu) goto L_0897F10C;
    return;
L_0897F10C:
    ctx.gpr[31] = (0x0897F114u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    if (rt.invoke_chained_direct<&recomp_unit_0090_entry, 90u, 675u, 0x0896F4F8u>(ctx, &aot_mem) && ctx.pc == 0x0897F114u) goto L_0897F114;
    return;
L_0897F114:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F11C;
    }
L_0897F11C:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897F138u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897F138u) goto L_0897F138;
    return;
L_0897F138:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897F148u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0897F148u) goto L_0897F148;
    return;
L_0897F148:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[12] = static_cast<float>(static_cast<std::int32_t>(std::bit_cast<std::uint32_t>(ctx.fpr[12])));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(2044), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F164;
    }
L_0897F164:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897F180u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897F180u) goto L_0897F180;
    return;
L_0897F180:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897F190u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0897F190u) goto L_0897F190;
    return;
L_0897F190:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1220), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F1A0;
    }
L_0897F1A0:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897F1BCu);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897F1BCu) goto L_0897F1BC;
    return;
L_0897F1BC:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897F1CCu);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0897F1CCu) goto L_0897F1CC;
    return;
L_0897F1CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(1224), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F1DC;
    }
L_0897F1DC:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F1F4u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897F1F4u) goto L_0897F1F4;
    return;
L_0897F1F4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897F204u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15040)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 829u, 0x08AFB924u>(ctx, &aot_mem) && ctx.pc == 0x0897F204u) goto L_0897F204;
    return;
L_0897F204:
    ctx.gpr[16] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897F210u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0039_entry, 39u, 124u, 0x088A08C4u>(ctx, &aot_mem) && ctx.pc == 0x0897F210u) goto L_0897F210;
    return;
L_0897F210:
    ctx.gpr[4] = (0u | 3u);
    { const bool branch_taken = ctx.gpr[2] != ctx.gpr[4];
    // nop
      if (branch_taken) {
          goto L_0897F22C;
      }
      goto L_0897F21C;
    }
L_0897F21C:
    ctx.gpr[4] = (15969u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] | 18350u);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(1496), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    goto L_0897F22C;
L_0897F22C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F234;
    }
L_0897F234:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F24Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897F24Cu) goto L_0897F24C;
    return;
L_0897F24C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store8(ctx.gpr[5] + static_cast<std::uint32_t>(-6564), static_cast<std::uint8_t>(ctx.gpr[4]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F260;
    }
L_0897F260:
    ctx.gpr[7] = (2269u << 16u);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897F278u);
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897F278u) goto L_0897F278;
    return;
L_0897F278:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0897F294;
      }
      goto L_0897F288;
    }
L_0897F288:
    ctx.gpr[31] = (0x0897F290u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x0897F290u) goto L_0897F290;
    return;
L_0897F290:
    ctx.gpr[4] = (2269u << 16u);
    goto L_0897F294;
L_0897F294:
    ctx.gpr[5] = (ctx.gpr[4] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-20156)));
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0897F2B4u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 41u, 0x089502F0u>(ctx, &aot_mem) && ctx.pc == 0x0897F2B4u) goto L_0897F2B4;
    return;
L_0897F2B4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F2BC;
    }
L_0897F2BC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0897F2D8;
      }
      goto L_0897F2CC;
    }
L_0897F2CC:
    ctx.gpr[31] = (0x0897F2D4u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x0897F2D4u) goto L_0897F2D4;
    return;
L_0897F2D4:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0897F2D8;
L_0897F2D8:
    ctx.gpr[31] = (0x0897F2E0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 46u, 0x08950364u>(ctx, &aot_mem) && ctx.pc == 0x0897F2E0u) goto L_0897F2E0;
    return;
L_0897F2E0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897F304;
      }
      goto L_0897F2FC;
    }
L_0897F2FC:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897F354;
      }
      goto L_0897F304;
    }
L_0897F304:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897F334;
    }
    goto L_0897F320;
L_0897F320:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897F354;
      }
      goto L_0897F334;
    }
L_0897F334:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F354;
      }
      goto L_0897F350;
    }
L_0897F350:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897F354;
L_0897F354:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F35C;
    }
L_0897F35C:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0897F378;
      }
      goto L_0897F36C;
    }
L_0897F36C:
    ctx.gpr[31] = (0x0897F374u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x0897F374u) goto L_0897F374;
    return;
L_0897F374:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0897F378;
L_0897F378:
    ctx.gpr[31] = (0x0897F380u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 62u, 0x08950440u>(ctx, &aot_mem) && ctx.pc == 0x0897F380u) goto L_0897F380;
    return;
L_0897F380:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(534)));
    ctx.gpr[5] = (ctx.gpr[2] & 255u);
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (0u < ctx.gpr[4] ? 1u : 0u);
      if (branch_taken) {
          goto L_0897F3A4;
      }
      goto L_0897F39C;
    }
L_0897F39C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897F3F4;
      }
      goto L_0897F3A4;
    }
L_0897F3A4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(532));
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[7] = (ctx.gpr[6] + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store16(ctx.gpr[5] + static_cast<std::uint32_t>(0), static_cast<std::uint16_t>(ctx.gpr[7]));
    ctx.gpr[5] = (static_cast<std::int32_t>(ctx.gpr[6]) < 9 ? 1u : 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
        goto L_0897F3D4;
    }
    goto L_0897F3C0;
L_0897F3C0:
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(525)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897F3F4;
      }
      goto L_0897F3D4;
    }
L_0897F3D4:
    ctx.gpr[6] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(532)));
    ctx.gpr[5] = (0u < ctx.gpr[5] ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(525), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[6]) < 21 ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F3F4;
      }
      goto L_0897F3F0;
    }
L_0897F3F0:
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(532), static_cast<std::uint16_t>(0u));
    goto L_0897F3F4;
L_0897F3F4:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F3FC;
    }
L_0897F3FC:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0897F418;
      }
      goto L_0897F40C;
    }
L_0897F40C:
    ctx.gpr[31] = (0x0897F414u);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0190_entry, 190u, 444u, 0x08AFDDC0u>(ctx, &aot_mem) && ctx.pc == 0x0897F414u) goto L_0897F414;
    return;
L_0897F414:
    ctx.gpr[4] = (2230u << 16u);
    goto L_0897F418;
L_0897F418:
    ctx.gpr[31] = (0x0897F420u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-20156)));
    if (rt.invoke_chained_direct<&recomp_unit_0083_entry, 83u, 560u, 0x0895304Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F420u) goto L_0897F420;
    return;
L_0897F420:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F428;
    }
L_0897F428:
    ctx.gpr[17] = (2269u << 16u);
    ctx.gpr[18] = (ctx.gpr[17] + static_cast<std::uint32_t>(-2736));
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[6] = (0u | 2u);
    ctx.gpr[31] = (0x0897F444u);
    ctx.gpr[7] = (ctx.gpr[18] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897F444u) goto L_0897F444;
    return;
L_0897F444:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2229u << 16u);
    ctx.gpr[31] = (0x0897F454u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-15044)));
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 833u, 0x08AFB978u>(ctx, &aot_mem) && ctx.pc == 0x0897F454u) goto L_0897F454;
    return;
L_0897F454:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[2] + static_cast<std::uint32_t>(420)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(4)));
    ctx.gpr[6] = (0u + static_cast<std::uint32_t>(-5));
    ctx.gpr[5] = (ctx.gpr[5] & 1u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[6]);
    ctx.gpr[5] = (ctx.gpr[5] << 2u);
    ctx.gpr[4] = (ctx.gpr[4] | ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(420), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F47C;
    }
L_0897F47C:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F494u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897F494u) goto L_0897F494;
    return;
L_0897F494:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[4] = (2230u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7296)));
    ctx.set_fpu_condition((ctx.fpr[13] <= ctx.fpr[12]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    ctx.gpr[4] = (2230u << 16u);
      if (branch_taken) {
          goto L_0897F4B4;
      }
      goto L_0897F4B0;
    }
L_0897F4B0:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7296)));
    goto L_0897F4B4;
L_0897F4B4:
    ctx.gpr[4] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-7296), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F4C4;
    }
L_0897F4C4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F4DCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897F4DCu) goto L_0897F4DC;
    return;
L_0897F4DC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7424)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0897F500;
      }
      goto L_0897F4F4;
    }
L_0897F4F4:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7424)));
      if (branch_taken) {
          goto L_0897F504;
      }
      goto L_0897F500;
    }
L_0897F500:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    goto L_0897F504;
L_0897F504:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7424), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F514;
    }
L_0897F514:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F52Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897F52Cu) goto L_0897F52C;
    return;
L_0897F52C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7420)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0897F550;
      }
      goto L_0897F544;
    }
L_0897F544:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7420)));
      if (branch_taken) {
          goto L_0897F554;
      }
      goto L_0897F550;
    }
L_0897F550:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    goto L_0897F554;
L_0897F554:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7420), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F564;
    }
L_0897F564:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F57Cu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897F57Cu) goto L_0897F57C;
    return;
L_0897F57C:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7212)));
    ctx.gpr[4] = (static_cast<std::int32_t>(ctx.gpr[4]) < static_cast<std::int32_t>(ctx.gpr[5]) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    ctx.gpr[4] = (2269u << 16u);
      if (branch_taken) {
          goto L_0897F5A0;
      }
      goto L_0897F594;
    }
L_0897F594:
    ctx.gpr[4] = (2230u << 16u);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-7212)));
      if (branch_taken) {
          goto L_0897F5A4;
      }
      goto L_0897F5A0;
    }
L_0897F5A0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-2736)));
    goto L_0897F5A4;
L_0897F5A4:
    ctx.gpr[5] = (2230u << 16u);
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7212), ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F5B4;
    }
L_0897F5B4:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F5CCu);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897F5CCu) goto L_0897F5CC;
    return;
L_0897F5CC:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7208)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7208), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F5E8;
    }
L_0897F5E8:
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(24));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (2269u << 16u);
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[31] = (0x0897F600u);
    ctx.gpr[7] = (ctx.gpr[16] + static_cast<std::uint32_t>(-2736));
    if (rt.invoke_chained_direct<&recomp_unit_0087_entry, 87u, 382u, 0x08961BECu>(ctx, &aot_mem) && ctx.pc == 0x0897F600u) goto L_0897F600;
    return;
L_0897F600:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(-2736)));
    ctx.gpr[5] = (2230u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-7204)));
    ctx.gpr[2] = (0u | 0u);
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[4]);
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(-7204), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897F620;
      }
      goto L_0897F61C;
    }
L_0897F61C:
    ctx.gpr[2] = (0u + static_cast<std::uint32_t>(-1));
    goto L_0897F620;
L_0897F620:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(192)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(196)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(200)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(204)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(208)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(212)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(216)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(224));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F644:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-16));
    ctx.gpr[4] = (2228u << 16u);
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26524)));
    ctx.gpr[4] = (16256u << 16u);
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[14] = ctx.fpr[13] / ctx.fpr[12];
    { const float fs = ctx.fpr[12]; const float ft = ctx.fpr[12]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[17] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[17] = fs * ft; }
    ctx.fpr[13] = ctx.fpr[13] / ctx.fpr[17];
    ctx.gpr[5] = (2228u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(-26528)));
    ctx.gpr[2] = (2228u << 16u);
    ctx.gpr[6] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26520), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[7] = (2228u << 16u);
    ctx.fpr[14] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(-26500)));
    ctx.gpr[3] = (2228u << 16u);
    ctx.fpr[16] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.fpr[15] = ctx.fpr[16] / ctx.fpr[15];
    ctx.fpr[17] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(-26488)));
    ctx.fpr[18] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[3] + static_cast<std::uint32_t>(-26492)));
    ctx.gpr[24] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(0), ctx.gpr[16]);
    ctx.gpr[5] = (16014u << 16u);
    ctx.gpr[16] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[24] + static_cast<std::uint32_t>(-26484), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.gpr[5] = (ctx.gpr[5] | 14571u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(-26476), std::bit_cast<std::uint32_t>(ctx.fpr[18]));
    ctx.fpr[18] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[12] = ctx.fpr[18] / ctx.fpr[12];
    ctx.gpr[13] = (2228u << 16u);
    ctx.gpr[12] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[13] + static_cast<std::uint32_t>(-26512), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[10] = (16672u << 16u);
    aot_mem.aot_store32(ctx.gpr[12] + static_cast<std::uint32_t>(-26516), std::bit_cast<std::uint32_t>(ctx.fpr[15]));
    ctx.gpr[11] = (15744u << 16u);
    ctx.fpr[15] = std::bit_cast<float>(ctx.gpr[10]);
    { const float fs = ctx.fpr[13]; const float ft = ctx.fpr[15]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[13] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[13] = fs * ft; }
    ctx.fpr[19] = std::bit_cast<float>(ctx.gpr[11]);
    { const float fs = ctx.fpr[14]; const float ft = ctx.fpr[19]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[14] = (2228u << 16u);
    ctx.gpr[8] = (16281u << 16u);
    ctx.gpr[4] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[14] + static_cast<std::uint32_t>(-26508), std::bit_cast<std::uint32_t>(ctx.fpr[13]));
    ctx.gpr[9] = (16268u << 16u);
    ctx.gpr[15] = (2228u << 16u);
    ctx.gpr[6] = (ctx.gpr[8] | 39322u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26504), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[9] | 52429u);
    aot_mem.aot_store32(ctx.gpr[15] + static_cast<std::uint32_t>(-26496), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[13]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[12] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[12] = fs * ft; }
    ctx.fpr[14] = std::bit_cast<float>(ctx.gpr[7]);
    { const float fs = ctx.fpr[17]; const float ft = ctx.fpr[14]; if ((std::isinf(fs) && ft == 0.0f) || (std::isinf(ft) && fs == 0.0f)) ctx.fpr[14] = std::bit_cast<float>(0x7FC00000u); else ctx.fpr[14] = fs * ft; }
    ctx.gpr[25] = (2228u << 16u);
    ctx.gpr[2] = (2228u << 16u);
    aot_mem.aot_store32(ctx.gpr[25] + static_cast<std::uint32_t>(-26480), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[2] + static_cast<std::uint32_t>(-26472), std::bit_cast<std::uint32_t>(ctx.fpr[14]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(0)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(16));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F738:
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
L_0897F764:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    ctx.gpr[7] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(104)));
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F7B8;
      }
      goto L_0897F784;
    }
L_0897F784:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(16), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
    goto L_0897F78C;
L_0897F78C:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[6] = (ctx.gpr[6] + static_cast<std::uint32_t>(12));
        goto L_0897F7AC;
    }
    goto L_0897F79C;
L_0897F79C:
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    ctx.gpr[6] = (ctx.gpr[4] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897F7B0;
      }
      goto L_0897F7AC;
    }
L_0897F7AC:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    goto L_0897F7B0;
L_0897F7B0:
    if (ctx.gpr[6] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(16)));
        goto L_0897F78C;
    }
    goto L_0897F7B8;
L_0897F7B8:
    if (ctx.gpr[4] == ctx.gpr[5]) {
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
        goto L_0897F7DC;
    }
    goto L_0897F7C0;
L_0897F7C0:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(17), static_cast<std::uint8_t>(0u));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
    ctx.gpr[6] = (ctx.gpr[7] < ctx.gpr[6] ? 1u : 0u);
    ctx.gpr[6] = (ctx.gpr[6] & 255u);
    if (ctx.gpr[6] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
        goto L_0897F7E0;
    }
    goto L_0897F7D8;
L_0897F7D8:
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    goto L_0897F7DC;
L_0897F7DC:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(12), ctx.gpr[4]);
    goto L_0897F7E0;
L_0897F7E0:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(12)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(28)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(8)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[5] ^ ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897F818;
      }
      goto L_0897F810;
    }
L_0897F810:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[2] = (0u | 0u);
      if (branch_taken) {
          goto L_0897F81C;
      }
      goto L_0897F818;
    }
L_0897F818:
    ctx.gpr[2] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(20)));
    goto L_0897F81C;
L_0897F81C:
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(48));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F824:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897F838u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 391u, 0x0882B6D8u>(ctx, &aot_mem) && ctx.pc == 0x0897F838u) goto L_0897F838;
    return;
L_0897F838:
    ctx.gpr[4] = (0u | 65535u);
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[4]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(0u));
    ctx.gpr[4] = (0u + static_cast<std::uint32_t>(-1));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(ctx.gpr[4]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(344), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(345), static_cast<std::uint8_t>(0u));
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(32));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897F888:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-64));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[5] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897F8A4u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 393u, 0x0882B754u>(ctx, &aot_mem) && ctx.pc == 0x0897F8A4u) goto L_0897F8A4;
    return;
L_0897F8A4:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1208)));
    ctx.fpr[12] = std::bit_cast<float>(ctx.fpu_float_to_word_ct<1u>(ctx.fpr[12]));
    ctx.gpr[4] = (std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(178), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(844)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(180), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(592)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(181), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1376)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(182), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(0)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(183), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1248)));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(184), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(784));
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(192));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1252)));
    ctx.gpr[31] = (0x0897F908u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(188), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    if (rt.invoke_chained_direct<&recomp_unit_0074_entry, 74u, 430u, 0x0892EA94u>(ctx, &aot_mem) && ctx.pc == 0x0897F908u) goto L_0897F908;
    return;
L_0897F908:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (32u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 21u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(336), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(404)));
    ctx.gpr[5] = (4096u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] & ctx.gpr[5]);
    ctx.gpr[4] = (ctx.gpr[4] >> 28u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(337), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(1914)));
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(338), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(324)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(340), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(664))))));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(341), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(325)));
    ctx.gpr[4] = (ctx.gpr[4] & 255u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(342), static_cast<std::uint16_t>(ctx.gpr[4]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(852)));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(344), static_cast<std::uint8_t>(ctx.gpr[4]));
    ctx.gpr[4] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int8_t>(aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1720))))));
    ctx.gpr[5] = (ctx.gpr[4] << 5u);
    ctx.gpr[4] = (ctx.gpr[4] << 2u);
    ctx.gpr[4] = (ctx.gpr[5] - ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[17] + ctx.gpr[4]);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(1428));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(345), static_cast<std::uint8_t>(ctx.gpr[5]));
    ctx.gpr[31] = (0x0897F988u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    goto L_0897FABC;
L_0897F988:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(214)));
    { const bool branch_taken = ctx.gpr[4] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897F9A0;
      }
      goto L_0897F994;
    }
L_0897F994:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(80)));
    ctx.gpr[31] = (0x0897F9A0u);
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    goto L_0897FABC;
L_0897F9A0:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1084)));
    { const bool branch_taken = static_cast<std::int32_t>(ctx.gpr[4]) <= 0;
    // nop
      if (branch_taken) {
          goto L_0897F9B8;
      }
      goto L_0897F9AC;
    }
L_0897F9AC:
    ctx.gpr[4] = (ctx.gpr[16] + static_cast<std::uint32_t>(16));
    ctx.gpr[31] = (0x0897F9B8u);
    ctx.gpr[5] = (ctx.gpr[17] + static_cast<std::uint32_t>(1088));
    if (rt.invoke_chained_direct<&recomp_unit_0128_entry, 128u, 519u, 0x08A0695Cu>(ctx, &aot_mem) && ctx.pc == 0x0897F9B8u) goto L_0897F9B8;
    return;
L_0897F9B8:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(1336)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FA9C;
      }
      goto L_0897F9C4;
    }
L_0897F9C4:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(1332)));
    ctx.gpr[17] = (2232u << 16u);
    ctx.gpr[17] = (ctx.gpr[17] + static_cast<std::uint32_t>(5992));
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(104)));
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(4));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[7] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FA1C;
      }
      goto L_0897F9E8;
    }
L_0897F9E8:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(28), static_cast<std::uint8_t>(0u));
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
    goto L_0897F9F0;
L_0897F9F0:
    ctx.gpr[8] = (ctx.gpr[8] < ctx.gpr[4] ? 1u : 0u);
    ctx.gpr[8] = (ctx.gpr[8] & 255u);
    if (ctx.gpr[8] != 0u) {
    ctx.gpr[7] = (ctx.gpr[7] + static_cast<std::uint32_t>(12));
        goto L_0897FA10;
    }
    goto L_0897FA00;
L_0897FA00:
    ctx.gpr[5] = (ctx.gpr[7] | 0u);
    ctx.gpr[7] = (ctx.gpr[5] + static_cast<std::uint32_t>(8));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897FA14;
      }
      goto L_0897FA10;
    }
L_0897FA10:
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(0)));
    goto L_0897FA14;
L_0897FA14:
    if (ctx.gpr[7] != 0u) {
    ctx.gpr[8] = (aot_mem.aot_load32(ctx.gpr[7] + static_cast<std::uint32_t>(16)));
        goto L_0897F9F0;
    }
    goto L_0897FA1C;
L_0897FA1C:
    if (ctx.gpr[5] == ctx.gpr[6]) {
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
        goto L_0897FA40;
    }
    goto L_0897FA24;
L_0897FA24:
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(29), static_cast<std::uint8_t>(0u));
    ctx.gpr[7] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(16)));
    ctx.gpr[7] = (ctx.gpr[4] < ctx.gpr[7] ? 1u : 0u);
    ctx.gpr[7] = (ctx.gpr[7] & 255u);
    if (ctx.gpr[7] == 0u) {
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
        goto L_0897FA44;
    }
    goto L_0897FA3C;
L_0897FA3C:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    goto L_0897FA40;
L_0897FA40:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[5]);
    goto L_0897FA44;
L_0897FA44:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[5]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[6]);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(20)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(16)));
    ctx.gpr[5] = (ctx.gpr[6] ^ ctx.gpr[5]);
    ctx.gpr[5] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    ctx.gpr[5] = (ctx.gpr[5] & 255u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(20)));
        goto L_0897FA7C;
    }
    goto L_0897FA74;
L_0897FA74:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[6] = (0u | 0u);
      if (branch_taken) {
          goto L_0897FA7C;
      }
      goto L_0897FA7C;
    }
L_0897FA7C:
    { const bool branch_taken = ctx.gpr[6] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FA9C;
      }
      goto L_0897FA84;
    }
L_0897FA84:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[31] = (0x0897FA90u);
    ctx.gpr[4] = (ctx.gpr[17] | 0u);
    goto L_0897F764;
L_0897FA90:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[2] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[4]));
      if (branch_taken) {
          goto L_0897FAA4;
      }
      goto L_0897FA9C;
    }
L_0897FA9C:
    ctx.gpr[4] = (0u | 65535u);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(176), static_cast<std::uint16_t>(ctx.gpr[4]));
    goto L_0897FAA4;
L_0897FAA4:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(64));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FABC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    ctx.gpr[6] = (2227u << 16u);
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(27768)));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[16]);
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[6]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[19]);
    ctx.gpr[19] = (ctx.gpr[4] | 0u);
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[5] + static_cast<std::uint32_t>(0)));
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[20]);
    ctx.gpr[5] = (49864u << 16u);
    ctx.gpr[4] = (17096u << 16u);
    ctx.gpr[20] = (2226u << 16u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), std::bit_cast<std::uint32_t>(ctx.fpr[20]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), std::bit_cast<std::uint32_t>(ctx.fpr[22]));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[21]);
    ctx.fpr[20] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.fpr[22] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    ctx.gpr[18] = (0u | 0u);
    ctx.gpr[20] = (ctx.gpr[20] + static_cast<std::uint32_t>(-23952));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[23]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    goto L_0897FB24;
L_0897FB24:
    { const bool branch_taken = ctx.gpr[21] == 0u;
    ctx.gpr[4] = (ctx.gpr[18] < static_cast<std::uint32_t>(5) ? 1u : 0u);
      if (branch_taken) {
          goto L_0897FBE0;
      }
      goto L_0897FB2C;
    }
L_0897FB2C:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FBE0;
      }
      goto L_0897FB34;
    }
L_0897FB34:
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(64)));
    if (ctx.gpr[5] == 0u) {
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(16)));
        goto L_0897FB50;
    }
    goto L_0897FB44;
L_0897FB44:
    aot_mem.aot_store8(ctx.gpr[4] + static_cast<std::uint32_t>(64), static_cast<std::uint8_t>(0u));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897FBD8;
      }
      goto L_0897FB50;
    }
L_0897FB50:
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(36)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(40)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(224), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(44)));
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(228), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(50))))));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(232), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(48))))));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(224)));
    aot_mem.aot_store16(ctx.gpr[19] + static_cast<std::uint32_t>(234), static_cast<std::uint16_t>(ctx.gpr[5]));
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[4] + static_cast<std::uint32_t>(8)));
    ctx.set_fpu_condition((ctx.fpr[12] < ctx.fpr[20]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(236), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897FBA4;
      }
      goto L_0897FB94;
    }
L_0897FB94:
    ctx.set_fpu_condition((ctx.fpr[12] <= ctx.fpr[22]));
    // nop
    { const bool branch_taken = ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897FBCC;
      }
      goto L_0897FBA4;
    }
L_0897FBA4:
    ctx.gpr[22] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(232))))));
    ctx.gpr[31] = (0x0897FBB0u);
    ctx.gpr[23] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(static_cast<std::int16_t>(aot_mem.aot_load16(ctx.gpr[19] + static_cast<std::uint32_t>(234))))));
    if (rt.invoke_chained_direct<&recomp_unit_0188_entry, 188u, 377u, 0x08AF5D84u>(ctx, &aot_mem) && ctx.pc == 0x0897FBB0u) goto L_0897FBB0;
    return;
L_0897FBB0:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[5] = (ctx.gpr[18] | 0u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    ctx.gpr[9] = (ctx.gpr[3] | 0u);
    ctx.gpr[8] = (ctx.gpr[2] | 0u);
    ctx.gpr[31] = (0x0897FBCCu);
    ctx.gpr[7] = (ctx.gpr[23] | 0u);
    goto L_0897F738;
L_0897FBCC:
    ctx.gpr[18] = (ctx.gpr[18] + static_cast<std::uint32_t>(1));
    ctx.gpr[19] = (ctx.gpr[19] + static_cast<std::uint32_t>(24));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[21] + static_cast<std::uint32_t>(0)));
    goto L_0897FBD8;
L_0897FBD8:
    { const bool branch_taken = 0u == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FB24;
      }
      goto L_0897FBE0;
    }
L_0897FBE0:
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(ctx.gpr[18]));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = ctx.gpr[16] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC2C;
      }
      goto L_0897FBF0;
    }
L_0897FBF0:
    ctx.gpr[4] = (ctx.gpr[16] | 0u);
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[4] + static_cast<std::uint32_t>(20)));
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[4] = (0u | 0u);
        goto L_0897FC10;
    }
    goto L_0897FC00;
L_0897FC00:
    ctx.gpr[31] = (0x0897FC08u);
    ctx.gpr[5] = (0u | 3u);
    if (rt.invoke_chained_direct<&recomp_unit_0043_entry, 43u, 863u, 0x088B3EA4u>(ctx, &aot_mem) && ctx.pc == 0x0897FC08u) goto L_0897FC08;
    return;
L_0897FC08:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (0u | 1u);
      if (branch_taken) {
          goto L_0897FC10;
      }
      goto L_0897FC10;
    }
L_0897FC10:
    { const bool branch_taken = ctx.gpr[4] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FC20;
      }
      goto L_0897FC18;
    }
L_0897FC18:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(0)));
      if (branch_taken) {
          goto L_0897FC24;
      }
      goto L_0897FC20;
    }
L_0897FC20:
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(0)));
    goto L_0897FC24;
L_0897FC24:
    { const bool branch_taken = ctx.gpr[16] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FBF0;
      }
      goto L_0897FC2C;
    }
L_0897FC2C:
    ctx.fpr[20] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(32)));
    ctx.fpr[22] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[23] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FC60:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-32));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(16), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(20), ctx.gpr[17]);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897FC84u);
    ctx.gpr[18] = (0u | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0009_entry, 9u, 395u, 0x0882B7D8u>(ctx, &aot_mem) && ctx.pc == 0x0897FC84u) goto L_0897FC84;
    return;
L_0897FC84:
    { const bool branch_taken = ctx.gpr[2] == 0u;
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FC8C;
    }
L_0897FC8C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(176)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(176)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FC9C;
    }
L_0897FC9C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(340)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(340)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FCAC;
    }
L_0897FCAC:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(178)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(178)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FCBC;
    }
L_0897FCBC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(180)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(180)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FCCC;
    }
L_0897FCCC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(181)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(181)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FCDC;
    }
L_0897FCDC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(182)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(182)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FCEC;
    }
L_0897FCEC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(183)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(183)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FCFC;
    }
L_0897FCFC:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(345)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(345)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FD0C;
    }
L_0897FD0C:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(184)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(184)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FD24;
    }
L_0897FD24:
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[17] + static_cast<std::uint32_t>(188)));
    ctx.fpr[13] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(188)));
    ctx.set_fpu_condition((!(std::isnan(ctx.fpr[12]) || std::isnan(ctx.fpr[13])) && ctx.fpr[12] == ctx.fpr[13]));
    // nop
    { const bool branch_taken = !ctx.fpu_condition();
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FD3C;
    }
L_0897FD3C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(214)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(214)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    ctx.gpr[6] = (ctx.gpr[4] << 3u);
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FD4C;
    }
L_0897FD4C:
    ctx.gpr[4] = (ctx.gpr[6] + ctx.gpr[6]);
    ctx.gpr[7] = (ctx.gpr[17] + static_cast<std::uint32_t>(216));
    ctx.gpr[6] = (ctx.gpr[6] + ctx.gpr[4]);
    ctx.gpr[5] = (ctx.gpr[16] + static_cast<std::uint32_t>(216));
    ctx.gpr[31] = (0x0897FD64u);
    ctx.gpr[4] = (ctx.gpr[7] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0186_entry, 186u, 371u, 0x08AED4A0u>(ctx, &aot_mem) && ctx.pc == 0x0897FD64u) goto L_0897FD64;
    return;
L_0897FD64:
    { const bool branch_taken = ctx.gpr[2] != 0u;
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FD6C;
    }
L_0897FD6C:
    ctx.gpr[4] = (aot_mem.aot_load16(ctx.gpr[17] + static_cast<std::uint32_t>(342)));
    ctx.gpr[5] = (aot_mem.aot_load16(ctx.gpr[16] + static_cast<std::uint32_t>(342)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FD7C;
    }
L_0897FD7C:
    ctx.gpr[4] = (aot_mem.aot_load8(ctx.gpr[17] + static_cast<std::uint32_t>(344)));
    ctx.gpr[5] = (aot_mem.aot_load8(ctx.gpr[16] + static_cast<std::uint32_t>(344)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[5];
    // nop
      if (branch_taken) {
          goto L_0897FD90;
      }
      goto L_0897FD8C;
    }
L_0897FD8C:
    ctx.gpr[18] = (0u | 1u);
    goto L_0897FD90;
L_0897FD90:
    ctx.gpr[2] = (ctx.gpr[18] & 255u);
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
L_0897FDAC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-80));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(44), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(48), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(52), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(56), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(60), ctx.gpr[20]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(64), ctx.gpr[21]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(68), ctx.gpr[22]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(72), ctx.gpr[31]);
    ctx.gpr[31] = (0x0897FDD8u);
    ctx.gpr[16] = (ctx.gpr[4] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 188u, 0x08A4999Cu>(ctx, &aot_mem) && ctx.pc == 0x0897FDD8u) goto L_0897FDD8;
    return;
L_0897FDD8:
    ctx.gpr[4] = (2230u << 16u);
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(-16956));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(108), ctx.gpr[4]);
    aot_mem.aot_store16(ctx.gpr[16] + static_cast<std::uint32_t>(120), static_cast<std::uint16_t>(0u));
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(214), static_cast<std::uint8_t>(0u));
    ctx.fpr[12] = std::bit_cast<float>(0u);
    aot_mem.aot_store8(ctx.gpr[16] + static_cast<std::uint32_t>(215), static_cast<std::uint8_t>(0u));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(216), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (2228u << 16u);
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(-26404)));
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(1));
    ctx.gpr[17] = (0u | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(-26404), ctx.gpr[5]);
    ctx.gpr[31] = (0x0897FE18u);
    ctx.gpr[4] = (0u | 416u);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 652u, 0x08AA30E0u>(ctx, &aot_mem) && ctx.pc == 0x0897FE18u) goto L_0897FE18;
    return;
L_0897FE18:
    ctx.gpr[18] = (2276u << 16u);
    ctx.gpr[20] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[19] = (ctx.gpr[18] + static_cast<std::uint32_t>(-27960));
      if (branch_taken) {
          goto L_0897FE38;
      }
      goto L_0897FE28;
    }
L_0897FE28:
    ctx.gpr[4] = (ctx.gpr[20] | 0u);
    ctx.gpr[31] = (0x0897FE34u);
    ctx.gpr[5] = (ctx.gpr[16] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0095_entry, 95u, 287u, 0x089818F8u>(ctx, &aot_mem) && ctx.pc == 0x0897FE34u) goto L_0897FE34;
    return;
L_0897FE34:
    ctx.gpr[17] = (ctx.gpr[20] | 0u);
    goto L_0897FE38;
L_0897FE38:
    ctx.gpr[4] = (17036u << 16u);
    aot_mem.aot_store32(ctx.gpr[16] + static_cast<std::uint32_t>(112), ctx.gpr[17]);
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[4] = (17096u << 16u);
    aot_mem.aot_store32(ctx.gpr[17] + static_cast<std::uint32_t>(208), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[12] = std::bit_cast<float>(ctx.gpr[4]);
    ctx.gpr[5] = (16076u << 16u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.gpr[5] = (ctx.gpr[5] | 52429u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(212), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.fpr[13] = std::bit_cast<float>(ctx.gpr[5]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[16] + static_cast<std::uint32_t>(112)));
    ctx.fpr[12] = std::bit_cast<float>(aot_mem.aot_load32(ctx.gpr[4] + static_cast<std::uint32_t>(208)));
    ctx.fpr[12] = ctx.fpr[13] / ctx.fpr[12];
    ctx.gpr[17] = (ctx.gpr[16] | 0u);
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(220), std::bit_cast<std::uint32_t>(ctx.fpr[12]));
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(8)));
    { const bool branch_taken = ctx.gpr[4] == ctx.gpr[5];
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
      if (branch_taken) {
          goto L_0897FEA4;
      }
      goto L_0897FE88;
    }
L_0897FE88:
    { const bool branch_taken = ctx.gpr[5] == 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0897FE9C;
      }
      goto L_0897FE90;
    }
L_0897FE90:
    aot_mem.aot_store32(ctx.gpr[5] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[19] + static_cast<std::uint32_t>(4)));
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
    goto L_0897FE9C;
L_0897FE9C:
    { const bool branch_taken = 0u == 0u;
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[4]);
      if (branch_taken) {
          goto L_0897FFB0;
      }
      goto L_0897FEA4;
    }
L_0897FEA4:
    ctx.gpr[5] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-27960)));
    ctx.gpr[6] = (0u | 1u);
    ctx.gpr[5] = (ctx.gpr[4] - ctx.gpr[5]);
    ctx.gpr[7] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[7] = (ctx.gpr[7] >> 30u);
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(20), static_cast<std::uint8_t>(0u));
    ctx.gpr[5] = (ctx.gpr[5] + ctx.gpr[7]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[6]);
    ctx.gpr[5] = (static_cast<std::uint32_t>(static_cast<std::int32_t>(ctx.gpr[5]) >> 2u));
    ctx.gpr[6] = (ctx.gpr[5] < static_cast<std::uint32_t>(1) ? 1u : 0u);
    { const bool branch_taken = ctx.gpr[6] == 0u;
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[5]);
      if (branch_taken) {
          goto L_0897FEE4;
      }
      goto L_0897FED4;
    }
L_0897FED4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(24));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[20]);
      if (branch_taken) {
          goto L_0897FEF0;
      }
      goto L_0897FEE4;
    }
L_0897FEE4:
    ctx.gpr[6] = (ctx.gpr[29] + static_cast<std::uint32_t>(28));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[6] + static_cast<std::uint32_t>(0)));
    ctx.gpr[20] = (ctx.gpr[5] + ctx.gpr[20]);
    goto L_0897FEF0;
L_0897FEF0:
    { const bool branch_taken = ctx.gpr[20] == 0u;
    ctx.gpr[5] = (0u | 0u);
      if (branch_taken) {
          goto L_0897FF30;
      }
      goto L_0897FEF8;
    }
L_0897FEF8:
    ctx.gpr[5] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[5]);
    ctx.gpr[31] = (0x0897FF0Cu);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[4]);
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 660u, 0x08AA3170u>(ctx, &aot_mem) && ctx.pc == 0x0897FF0Cu) goto L_0897FF0C;
    return;
L_0897FF0C:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(36)));
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
      if (branch_taken) {
          goto L_0897FF30;
      }
      goto L_0897FF1C;
    }
L_0897FF1C:
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[4]);
    ctx.gpr[31] = (0x0897FF28u);
    ctx.gpr[4] = (ctx.gpr[6] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0189_entry, 189u, 362u, 0x08AF9910u>(ctx, &aot_mem) && ctx.pc == 0x0897FF28u) goto L_0897FF28;
    return;
L_0897FF28:
    ctx.gpr[5] = (ctx.gpr[2] | 0u);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(40)));
    goto L_0897FF30;
L_0897FF30:
    ctx.gpr[6] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-27960)));
    { const bool branch_taken = ctx.gpr[4] != ctx.gpr[6];
    ctx.gpr[21] = (ctx.gpr[5] | 0u);
      if (branch_taken) {
          goto L_0897FF44;
      }
      goto L_0897FF3C;
    }
L_0897FF3C:
    { const bool branch_taken = 0u == 0u;
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
      if (branch_taken) {
          goto L_0897FF60;
      }
      goto L_0897FF44;
    }
L_0897FF44:
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    ctx.gpr[22] = (ctx.gpr[4] - ctx.gpr[6]);
    ctx.gpr[4] = (ctx.gpr[21] | 0u);
    ctx.gpr[31] = (0x0897FF58u);
    ctx.gpr[6] = (ctx.gpr[22] | 0u);
    if (rt.invoke_chained_direct<&recomp_unit_0075_entry, 75u, 539u, 0x08932C08u>(ctx, &aot_mem) && ctx.pc == 0x0897FF58u) goto L_0897FF58;
    return;
L_0897FF58:
    ctx.gpr[5] = (ctx.gpr[2] + ctx.gpr[22]);
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(24)));
    goto L_0897FF60;
L_0897FF60:
    ctx.gpr[6] = (ctx.gpr[4] | 0u);
    ctx.gpr[4] = (ctx.gpr[5] | 0u);
    ctx.gpr[5] = (ctx.gpr[6] | 0u);
    if (ctx.gpr[5] == 0u) {
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
        goto L_0897FF88;
    }
    goto L_0897FF74;
L_0897FF74:
    aot_mem.aot_store32(ctx.gpr[4] + static_cast<std::uint32_t>(0), ctx.gpr[17]);
    ctx.gpr[5] = (ctx.gpr[5] + static_cast<std::uint32_t>(-1));
    { const bool branch_taken = ctx.gpr[5] != 0u;
    ctx.gpr[4] = (ctx.gpr[4] + static_cast<std::uint32_t>(4));
      if (branch_taken) {
          goto L_0897FF74;
      }
      goto L_0897FF84;
    }
L_0897FF84:
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    goto L_0897FF88;
L_0897FF88:
    ctx.gpr[4] = (aot_mem.aot_load32(ctx.gpr[18] + static_cast<std::uint32_t>(-27960)));
    { const bool branch_taken = ctx.gpr[4] == 0u;
    aot_mem.aot_store8(ctx.gpr[29] + static_cast<std::uint32_t>(32), static_cast<std::uint8_t>(0u));
      if (branch_taken) {
          goto L_0897FF9C;
      }
      goto L_0897FF94;
    }
L_0897FF94:
    ctx.gpr[31] = (0x0897FF9Cu);
    // nop
    if (rt.invoke_chained_direct<&recomp_unit_0167_entry, 167u, 668u, 0x08AA3200u>(ctx, &aot_mem) && ctx.pc == 0x0897FF9Cu) goto L_0897FF9C;
    return;
L_0897FF9C:
    ctx.gpr[4] = (ctx.gpr[20] << 2u);
    aot_mem.aot_store32(ctx.gpr[18] + static_cast<std::uint32_t>(-27960), ctx.gpr[21]);
    ctx.gpr[4] = (ctx.gpr[21] + ctx.gpr[4]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(4), ctx.gpr[17]);
    aot_mem.aot_store32(ctx.gpr[19] + static_cast<std::uint32_t>(8), ctx.gpr[4]);
    goto L_0897FFB0;
L_0897FFB0:
    ctx.gpr[2] = (ctx.gpr[16] | 0u);
    ctx.gpr[16] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(44)));
    ctx.gpr[17] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(48)));
    ctx.gpr[18] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(52)));
    ctx.gpr[19] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(56)));
    ctx.gpr[20] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(60)));
    ctx.gpr[21] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(64)));
    ctx.gpr[22] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(68)));
    ctx.gpr[31] = (aot_mem.aot_load32(ctx.gpr[29] + static_cast<std::uint32_t>(72)));
    jump_target = ctx.gpr[31];
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(80));
    local_pc = jump_target;
    if (++local_transfers < 2048u) { entry_id = 0u; goto LOCAL_DISPATCH; }
    ctx.pc = jump_target;
    return;
L_0897FFDC:
    ctx.gpr[29] = (ctx.gpr[29] + static_cast<std::uint32_t>(-48));
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(28), ctx.gpr[17]);
    ctx.gpr[17] = (ctx.gpr[4] | 0u);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(24), ctx.gpr[16]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(32), ctx.gpr[18]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(36), ctx.gpr[19]);
    aot_mem.aot_store32(ctx.gpr[29] + static_cast<std::uint32_t>(40), ctx.gpr[31]);
    ctx.gpr[31] = (0x08980000u);
    ctx.gpr[16] = (ctx.gpr[5] | 0u);
    (void)rt.invoke_chained_direct<&recomp_unit_0145_entry, 145u, 188u, 0x08A4999Cu>(ctx, &aot_mem);
    return;
}

void recomp_unit_0094(Runtime &rt, AllegrexContext &ctx) {
    auto aot_mem = rt.memory().aot_fast_view();
    recomp_unit_0094_entry(rt, ctx, 0u, aot_mem);
}

void register_generated_unit_94(Runtime &runtime) {
    runtime.register_generated_unit(94u, 0x0897C000u, 16384u, &recomp_unit_0094, &recomp_unit_0094_entry);
    runtime.register_function(0x0897C000u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C024u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C040u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C19Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C1B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C1B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C1C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C1C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C1DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C22Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C27Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C284u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C28Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C29Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C2A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C2ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C2BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C2C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C318u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C328u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C330u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C340u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C388u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C394u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C398u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C3A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C3B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C3C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C3D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C3DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C3E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C40Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C438u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C464u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C4FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C508u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C514u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C52Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C590u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C59Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C5E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C608u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C62Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C6D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C738u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C740u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C74Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C754u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C768u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C784u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C7CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C860u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C88Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C8F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C900u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C918u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C920u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C928u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C944u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C954u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C960u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C968u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C970u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C974u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C98Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C994u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897C9FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA54u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA8Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CA94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAE4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CAECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB48u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CB90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CBE4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CC94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CCF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CD98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CDECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CE88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CEC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CED4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CF84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897CFF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D00Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D014u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D030u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D038u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D044u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D05Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D064u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D06Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D074u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D094u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D09Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D0DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D118u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D120u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D138u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D150u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D16Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D184u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D190u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D198u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D1FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D204u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D20Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D214u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D230u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D240u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D284u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D2ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D31Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D340u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D348u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D364u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D368u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D38Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D394u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D3ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D404u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D418u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D430u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D468u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D480u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D498u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D4FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D504u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D50Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D528u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D538u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D54Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D56Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D574u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D58Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D59Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D5F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D608u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D61Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D630u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D644u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D658u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D66Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D680u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D684u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D6F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D70Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D724u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D740u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D758u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D770u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D788u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D790u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D798u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D7F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D810u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D818u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D820u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D838u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D840u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D848u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D860u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D868u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D870u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D888u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D890u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D898u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D8FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D908u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D910u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D92Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D938u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D940u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D958u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D968u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D974u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D98Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897D9F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DA90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAB8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAC4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DACCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DAF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DB68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBD8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBE4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DBF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC48u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DC98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DCFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DD94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDE4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DDECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE8Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DE9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DEF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF4Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF68u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DF94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFC8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897DFF4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E00Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E028u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E03Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E040u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E06Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E074u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E090u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E0A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E100u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E114u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E11Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E12Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E13Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E140u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E164u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E16Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E188u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E19Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E1ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E21Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E240u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E248u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E260u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E270u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E27Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E288u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E2FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E310u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E31Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E324u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E33Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E34Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E364u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E37Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E390u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E398u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E3FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E404u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E410u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E418u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E424u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E43Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E454u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E464u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E474u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E494u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E49Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E4F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E51Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E524u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E540u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E554u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E570u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E574u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E57Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E58Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E598u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E5D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E600u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E614u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E61Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E644u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E64Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E668u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E67Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E698u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E69Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6D0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E6FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E714u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E728u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E748u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E750u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E76Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E774u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E77Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E784u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E7F8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E804u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E818u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E838u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E840u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E858u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E860u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E87Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E8FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E904u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E91Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E924u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E92Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E944u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E94Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E954u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E95Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E974u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E990u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E998u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9C8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9E4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897E9F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA4Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA80u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EA94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAB4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAC0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAD0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAE8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EAFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB48u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB5Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB78u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EB84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBA8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EBF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC04u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC40u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC70u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EC98u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECBCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECD0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ECF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897ED88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EDF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EE84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEA0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EECCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EED8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EEF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EF9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFD4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897EFF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F004u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F010u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F018u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F01Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F028u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F040u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F060u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F068u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F084u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F090u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F09Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0A8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0ECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F0F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F10Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F114u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F11Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F138u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F148u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F164u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F180u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F190u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F1F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F204u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F210u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F21Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F22Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F234u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F24Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F260u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F278u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F288u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F290u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F294u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2BCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F2FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F304u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F320u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F334u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F350u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F354u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F35Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F36Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F374u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F378u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F380u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F39Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3D4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F3FCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F40Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F414u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F418u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F420u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F428u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F444u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F454u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F47Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F494u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F4F4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F500u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F504u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F514u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F52Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F544u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F550u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F554u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F564u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F57Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F594u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5B4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5CCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F5E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F600u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F61Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F620u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F644u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F738u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F764u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F784u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F78Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F79Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7B0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7C0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7D8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7DCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F7E0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F810u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F818u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F81Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F824u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F838u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F888u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F8A4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F908u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F988u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F994u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9A0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9ACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9B8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9C4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9E8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897F9F0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA14u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA40u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FA9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FAA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FABCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB50u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FB94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBD8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBE0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FBF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC00u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC08u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC10u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC20u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC2Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC8Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FC9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCBCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCCCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCDCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCECu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FCFCu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD24u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD4Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD64u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD6Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD7Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD8Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FD90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FDACu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FDD8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE18u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE34u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE38u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE90u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FE9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEA4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FED4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEE4u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEF0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FEF8u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF0Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF1Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF28u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF30u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF3Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF44u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF58u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF60u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF74u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF84u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF88u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF94u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FF9Cu, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFB0u, &recomp_unit_0094, "recomp_unit_0094");
    runtime.register_function(0x0897FFDCu, &recomp_unit_0094, "recomp_unit_0094");
}
} // namespace psprecomp
